// ---------------------------------------------------------------------------

#pragma hdrstop
#include "Calculator.h"
#include "Stack.h"

int Calculator::Priority(char c) {
	if (c == '*' || c == '/') {
		return 3;
	}
	if (c == '+' || c == '-') {
		return 2;
	}
	if (c == '(') {
		return 1;
	}
	return 0;
}

bool Calculator::IsOperation(char c) {
	return (c == '*' || c == '/' || c == '+' || c == '-' || c == '(' ||
		c == ')');
}

std::string Calculator::TransformIntoRPE(std::string input) {
	std::string output = "";
	Stack<char>OperationsStack;
	for (int i = 0; i < input.length(); i++) {
		if (isalpha(input[i])) {
			output += input[i];
		}
		else if (IsOperation(input[i])) {
			if (input[i] == ')') {
				while (OperationsStack.top() != '(') {
					output += OperationsStack.top();
					OperationsStack.pop();
				}
				OperationsStack.pop();
			}
			else if (OperationsStack.empty() ||
				(Priority(OperationsStack.top()) < Priority(input[i])) ||
				input[i] == '(') {
				OperationsStack.push(input[i]);
			}
			else {
				while (!OperationsStack.empty() &&
					(Priority(OperationsStack.top()) >= Priority(input[i]))) {
					output += OperationsStack.top();
					OperationsStack.pop();
				}
				OperationsStack.push(input[i]);
			}
		}
	}
	while (!OperationsStack.empty()) {
		output += OperationsStack.top();
		OperationsStack.pop();
	}
	return output;
}

float Calculator::�alculateRPE(std::string RPE, TEdit *E[10], int numOfVars) {
	Stack<float>NumsStack;
	for (int i = 0; i < RPE.length(); i++) {
		if (isalpha(RPE[i])) {
			for (int j = 0; j < numOfVars; j++) {
				if ((E[j]->Name)[6] == RPE[i]) {
					NumsStack.push(StrToFloat(E[j]->Text));
                    break;
				}
			}
		}
		else if(IsOperation(RPE[i])){
			float num2 = NumsStack.top();
			NumsStack.pop();
			float num1 = NumsStack.top();
			NumsStack.pop();
			NumsStack.push(Operation(num1,num2,RPE[i]));
		}
	}
	return NumsStack.top();
}

float Calculator::Operation(float num1, float num2, char op) {
	if (op == '+') {
		return num1 + num2;
	}
	if (op == '-') {
		return num1 - num2;
	}
	if (op == '*') {
		return num1*num2;
	}
	if (op == '/') {
		if (num2 <= 0.000001) {
			ShowMessage(
				"������ ������� �� ����. ��������� ���������� ����� ��������.");
			return 0;
		}
		return num1 / num2;
	}
	return 0;
}
// ---------------------------------------------------------------------------
#pragma package(smart_init)
