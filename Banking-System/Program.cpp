//#include "Login.h"
#include "MyForm.h"
#include "Register.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]



void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    while (true)
    {
        BankingSystem::MyForm form;
        form.ShowDialog();
        
        if (form.switchForm)
        {
            BankingSystem::Register formRes;
            formRes.ShowDialog();
        }
        else {
            break;
        }
    }
}