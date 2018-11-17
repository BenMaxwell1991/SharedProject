#pragma once
#include "MouseEventHandling.h"

namespace SolarSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for fm_Main
	/// </summary>
	public ref class fm_Main : public System::Windows::Forms::Form
	{
	public:
		fm_Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fm_Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  TC_Main;
	private: System::Windows::Forms::TabPage^  TS_Settings;
	private: System::Windows::Forms::TabPage^  TS_Display;
	private: System::Windows::Forms::TabPage^  TS_Test;
	private: System::Windows::Forms::PictureBox^  PB_Display;

	private: System::Windows::Forms::MenuStrip^  MS_Main;



	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  SS_MainDisplay;
	private: System::Windows::Forms::ToolStripStatusLabel^  SL_CursorPosition;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Input_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Input_Mass;

















	protected:

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(fm_Main::typeid));
			this->TC_Main = (gcnew System::Windows::Forms::TabControl());
			this->TS_Settings = (gcnew System::Windows::Forms::TabPage());
			this->TS_Display = (gcnew System::Windows::Forms::TabPage());
			this->SS_MainDisplay = (gcnew System::Windows::Forms::StatusStrip());
			this->SL_CursorPosition = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->PB_Display = (gcnew System::Windows::Forms::PictureBox());
			this->TS_Test = (gcnew System::Windows::Forms::TabPage());
			this->MS_Main = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Input_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Input_Mass = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TC_Main->SuspendLayout();
			this->TS_Settings->SuspendLayout();
			this->TS_Display->SuspendLayout();
			this->SS_MainDisplay->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Display))->BeginInit();
			this->MS_Main->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// TC_Main
			// 
			this->TC_Main->Controls->Add(this->TS_Settings);
			this->TC_Main->Controls->Add(this->TS_Display);
			this->TC_Main->Controls->Add(this->TS_Test);
			this->TC_Main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TC_Main->Location = System::Drawing::Point(0, 24);
			this->TC_Main->Name = L"TC_Main";
			this->TC_Main->SelectedIndex = 0;
			this->TC_Main->Size = System::Drawing::Size(784, 537);
			this->TC_Main->TabIndex = 0;
			// 
			// TS_Settings
			// 
			this->TS_Settings->BackColor = System::Drawing::SystemColors::Control;
			this->TS_Settings->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TS_Settings->Controls->Add(this->dataGridView1);
			this->TS_Settings->Location = System::Drawing::Point(4, 22);
			this->TS_Settings->Name = L"TS_Settings";
			this->TS_Settings->Padding = System::Windows::Forms::Padding(3);
			this->TS_Settings->Size = System::Drawing::Size(776, 511);
			this->TS_Settings->TabIndex = 0;
			this->TS_Settings->Text = L"Settings";
			// 
			// TS_Display
			// 
			this->TS_Display->BackColor = System::Drawing::SystemColors::Control;
			this->TS_Display->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TS_Display->Controls->Add(this->SS_MainDisplay);
			this->TS_Display->Controls->Add(this->PB_Display);
			this->TS_Display->Location = System::Drawing::Point(4, 22);
			this->TS_Display->Name = L"TS_Display";
			this->TS_Display->Padding = System::Windows::Forms::Padding(3);
			this->TS_Display->Size = System::Drawing::Size(776, 511);
			this->TS_Display->TabIndex = 1;
			this->TS_Display->Text = L"Display";
			// 
			// SS_MainDisplay
			// 
			this->SS_MainDisplay->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->SL_CursorPosition });
			this->SS_MainDisplay->Location = System::Drawing::Point(3, 484);
			this->SS_MainDisplay->Name = L"SS_MainDisplay";
			this->SS_MainDisplay->Size = System::Drawing::Size(768, 22);
			this->SS_MainDisplay->TabIndex = 4;
			this->SS_MainDisplay->Text = L"SS_MainDisplay";
			// 
			// SL_CursorPosition
			// 
			this->SL_CursorPosition->AutoSize = false;
			this->SL_CursorPosition->Name = L"SL_CursorPosition";
			this->SL_CursorPosition->Size = System::Drawing::Size(140, 17);
			this->SL_CursorPosition->Text = L"Cursor Position: [0,0]";
			this->SL_CursorPosition->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// PB_Display
			// 
			this->PB_Display->BackColor = System::Drawing::Color::Black;
			this->PB_Display->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PB_Display->Location = System::Drawing::Point(3, 3);
			this->PB_Display->Name = L"PB_Display";
			this->PB_Display->Size = System::Drawing::Size(768, 503);
			this->PB_Display->TabIndex = 0;
			this->PB_Display->TabStop = false;
			this->PB_Display->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &fm_Main::PB_Display_MouseMove);
			// 
			// TS_Test
			// 
			this->TS_Test->BackColor = System::Drawing::SystemColors::Control;
			this->TS_Test->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TS_Test->Location = System::Drawing::Point(4, 22);
			this->TS_Test->Name = L"TS_Test";
			this->TS_Test->Size = System::Drawing::Size(776, 511);
			this->TS_Test->TabIndex = 2;
			this->TS_Test->Text = L"Testing & Fun";
			// 
			// MS_Main
			// 
			this->MS_Main->BackColor = System::Drawing::SystemColors::Control;
			this->MS_Main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->MS_Main->Location = System::Drawing::Point(0, 0);
			this->MS_Main->Name = L"MS_Main";
			this->MS_Main->Size = System::Drawing::Size(784, 24);
			this->MS_Main->TabIndex = 1;
			this->MS_Main->Text = L"MS_Main";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &fm_Main::exitToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Input_Name,
					this->Input_Mass
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Left;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(243, 503);
			this->dataGridView1->TabIndex = 0;
			// 
			// Input_Name
			// 
			this->Input_Name->HeaderText = L"Name";
			this->Input_Name->Name = L"Input_Name";
			// 
			// Input_Mass
			// 
			this->Input_Mass->HeaderText = L"Mass";
			this->Input_Mass->Name = L"Input_Mass";
			// 
			// fm_Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->TC_Main);
			this->Controls->Add(this->MS_Main);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->MS_Main;
			this->Name = L"fm_Main";
			this->Text = L"Solar System Project";
			this->TC_Main->ResumeLayout(false);
			this->TS_Settings->ResumeLayout(false);
			this->TS_Display->ResumeLayout(false);
			this->TS_Display->PerformLayout();
			this->SS_MainDisplay->ResumeLayout(false);
			this->SS_MainDisplay->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Display))->EndInit();
			this->MS_Main->ResumeLayout(false);
			this->MS_Main->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void PB_Display_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	HandleMouseMove(SL_CursorPosition, e);
}

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void SG_InputData_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
