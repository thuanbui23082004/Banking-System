//tôi muốn MyForm chạy trước

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BankingSystem::MyForm form;
    Application::Run(% form);
}