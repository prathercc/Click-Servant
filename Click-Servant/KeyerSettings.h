#pragma once
#include "Profile.h"
#include "Error.h"

namespace PRATHTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for KeyerSettings
	/// </summary>
	public ref class KeyerSettings : public System::Windows::Forms::Form
	{
	private: Profile^ prof;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Drawing::Point Point;
	public:
		KeyerSettings(Profile^ f, System::Drawing::Point point)
		{
			InitializeComponent();


			prof = f;

			if (!System::String::IsNullOrEmpty(prof->AKMAX))
				AKMaxTextBox->Text = prof->AKMAX->Replace("X", "");
			else
				AKMaxTextBox->Text = prof->AKMAX;

			if (!System::String::IsNullOrEmpty(prof->AKMIN))
				AKMinTextBox->Text = prof->AKMIN->Replace("X", "");
			else
				AKMinTextBox->Text = prof->AKMIN;

			if (prof->AKDROPDOWN != -1)
				AKDropDown->SelectedIndex = prof->AKDROPDOWN;
			else
				prof->AKDROPDOWN = -1;

			AKHotkeyCheckBox->Checked = prof->AKHOTKEY;
			Point = point;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KeyerSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ AKHotkeyCheckBox;

	private: System::Windows::Forms::TextBox^ AKMaxTextBox;
	private: System::Windows::Forms::TextBox^ AKMinTextBox;
	private: System::Windows::Forms::ComboBox^ AKDropDown;
	private: System::Windows::Forms::Button^ KeyerSave;
	private: System::Windows::Forms::Button^ KeyerCancel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolTip^ minimumBoxToolTip;
	private: System::Windows::Forms::Label^ label3;


	private: System::ComponentModel::IContainer^ components;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KeyerSettings::typeid));
			this->AKHotkeyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->AKMaxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AKMinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AKDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->KeyerSave = (gcnew System::Windows::Forms::Button());
			this->KeyerCancel = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->minimumBoxToolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// AKHotkeyCheckBox
			// 
			this->AKHotkeyCheckBox->AutoSize = true;
			this->AKHotkeyCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->AKHotkeyCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKHotkeyCheckBox->ForeColor = System::Drawing::Color::LightGray;
			this->AKHotkeyCheckBox->Location = System::Drawing::Point(11, 68);
			this->AKHotkeyCheckBox->Name = L"AKHotkeyCheckBox";
			this->AKHotkeyCheckBox->Size = System::Drawing::Size(119, 17);
			this->AKHotkeyCheckBox->TabIndex = 13;
			this->AKHotkeyCheckBox->Text = L"R-SHIFT Hotkey";
			this->AKHotkeyCheckBox->UseVisualStyleBackColor = false;
			// 
			// AKMaxTextBox
			// 
			this->AKMaxTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->AKMaxTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AKMaxTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKMaxTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->AKMaxTextBox->Location = System::Drawing::Point(115, 3);
			this->AKMaxTextBox->Name = L"AKMaxTextBox";
			this->AKMaxTextBox->Size = System::Drawing::Size(76, 20);
			this->AKMaxTextBox->TabIndex = 16;
			this->AKMaxTextBox->TabStop = false;
			this->AKMaxTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->AKMaxTextBox->TextChanged += gcnew System::EventHandler(this, &KeyerSettings::AKMaxTextBox_TextChanged);
			// 
			// AKMinTextBox
			// 
			this->AKMinTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->AKMinTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AKMinTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKMinTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->AKMinTextBox->Location = System::Drawing::Point(8, 3);
			this->AKMinTextBox->Name = L"AKMinTextBox";
			this->AKMinTextBox->Size = System::Drawing::Size(76, 20);
			this->AKMinTextBox->TabIndex = 15;
			this->AKMinTextBox->TabStop = false;
			this->AKMinTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->AKMinTextBox->TextChanged += gcnew System::EventHandler(this, &KeyerSettings::AKMinTextBox_TextChanged);
			// 
			// AKDropDown
			// 
			this->AKDropDown->BackColor = System::Drawing::Color::DarkSlateGray;
			this->AKDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->AKDropDown->DropDownWidth = 76;
			this->AKDropDown->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AKDropDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AKDropDown->ForeColor = System::Drawing::Color::LightBlue;
			this->AKDropDown->FormattingEnabled = true;
			this->AKDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Escape", L"BackSpace", L"End", L"Home", L"F1",
					L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12", L"Tab", L"Up Arrow", L"Down Arrow", L"Left Arrow",
					L"Right Arrow"
			});
			this->AKDropDown->Location = System::Drawing::Point(208, 5);
			this->AKDropDown->Name = L"AKDropDown";
			this->AKDropDown->Size = System::Drawing::Size(91, 21);
			this->AKDropDown->TabIndex = 17;
			// 
			// KeyerSave
			// 
			this->KeyerSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KeyerSave.BackgroundImage")));
			this->KeyerSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->KeyerSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeyerSave->Location = System::Drawing::Point(165, 68);
			this->KeyerSave->Name = L"KeyerSave";
			this->KeyerSave->Size = System::Drawing::Size(60, 23);
			this->KeyerSave->TabIndex = 18;
			this->KeyerSave->TabStop = false;
			this->KeyerSave->Text = L"Save";
			this->KeyerSave->UseVisualStyleBackColor = true;
			this->KeyerSave->Click += gcnew System::EventHandler(this, &KeyerSettings::KeyerSave_Click);
			// 
			// KeyerCancel
			// 
			this->KeyerCancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KeyerCancel.BackgroundImage")));
			this->KeyerCancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->KeyerCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KeyerCancel->Location = System::Drawing::Point(231, 68);
			this->KeyerCancel->Name = L"KeyerCancel";
			this->KeyerCancel->Size = System::Drawing::Size(60, 23);
			this->KeyerCancel->TabIndex = 19;
			this->KeyerCancel->TabStop = false;
			this->KeyerCancel->Text = L"Cancel";
			this->KeyerCancel->UseVisualStyleBackColor = true;
			this->KeyerCancel->Click += gcnew System::EventHandler(this, &KeyerSettings::KeyerCancel_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(8, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"[Min. Range]";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(108, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"[Max. Range]";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(228, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"[Key]";
			// 
			// minimumBoxToolTip
			// 
			this->minimumBoxToolTip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->minimumBoxToolTip->ToolTipTitle = L"Interval Keyer General Information";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(94, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LightBlue;
			this->label7->Location = System::Drawing::Point(18, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(295, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Confused\? Hover over a component to see a relevant tooltip.\r\n";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->AKMinTextBox);
			this->panel2->Controls->Add(this->AKMaxTextBox);
			this->panel2->Controls->Add(this->AKDropDown);
			this->panel2->Controls->Add(this->KeyerCancel);
			this->panel2->Controls->Add(this->AKHotkeyCheckBox);
			this->panel2->Controls->Add(this->KeyerSave);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(15, 35);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(306, 102);
			this->panel2->TabIndex = 37;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(101, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(146, 17);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			// 
			// KeyerSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(336, 162);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label7);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(352, 201);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(352, 201);
			this->Name = L"KeyerSettings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Interval Keyer Settings";
			this->Load += gcnew System::EventHandler(this, &KeyerSettings::KeyerSettings_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KeyerSettings_Load(System::Object^ sender, System::EventArgs^ e) {
		minimumBoxToolTip->SetToolTip(AKMinTextBox, "Enter the lower range value of the desired key interval in milliseconds. For Example: 1000");
		minimumBoxToolTip->SetToolTip(AKMaxTextBox, "Enter the upper range value of the desired key interval in milliseconds. For Example: 5000");
		minimumBoxToolTip->SetToolTip(AKHotkeyCheckBox, "Activate the Interval Keyer by pressing the Right-Shift button.");
		this->SetDesktopLocation(Point.X, Point.Y);
	}

	private: System::Void KeyerSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ AKMaxTextBoxText = AKMaxTextBox->Text->Replace(" ms", "");
		String^ AKMinTextBoxText = AKMinTextBox->Text->Replace(" ms", "");
		try
		{
			int countError = 0;

			if (Convert::ToInt32(AKMaxTextBoxText) < Convert::ToInt32(AKMinTextBoxText))
			{
				MessageBox::Show("MAX: " + AKMaxTextBoxText + ", MIN:" + AKMinTextBoxText);
				countError++;
				Error::throwErrorMessage("Upper range must be larger than lower range!", this->Location.X, this->Location.Y);
			}
			else if (Convert::ToInt32(AKMinTextBoxText) < 1)
			{
				countError++;
				Error::throwErrorMessage("Lower value must be greater than 0", this->Location.X, this->Location.Y);
			}

			if (countError == 0)
			{
				prof->AKHOTKEY = AKHotkeyCheckBox->Checked;
				prof->AKMIN = AKMinTextBoxText;
				prof->AKMAX = AKMaxTextBoxText;
				prof->AKDROPDOWN = AKDropDown->SelectedIndex;
				this->Close();
			}
		}
		catch (...)
		{
			Error::throwErrorMessage("The variable settings entered are incorrect or incomplete. Please review variable settings and try again.", this->Location.X, this->Location.Y);
		}


	}
	private: System::Void KeyerCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: String^ filterText(String^ value, bool isTime) {
		String^ retString = "";
		try {
			for (int i = 0; i < value->Length; i++) {
				if (System::Char::IsDigit(value[i])) {
					retString += value[i];
				}
			}
			if (!isTime) {
				return retString; //Not dealing with a time range
			}
			if (retString->Length == 0) {
				return "";
			}
			return retString + " ms";
		}
		catch (...) {
			//String was invalid, return empty string
			return "";
		}
	}
	private: System::Void AKMinTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		AKMinTextBox->Text = filterText(AKMinTextBox->Text, true);
		if (AKMinTextBox->Text->Length >= 3) {
			AKMinTextBox->SelectionStart = AKMinTextBox->Text->Length - 3;
		}
	}
	private: System::Void AKMaxTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		AKMaxTextBox->Text = filterText(AKMaxTextBox->Text, true);
		if (AKMaxTextBox->Text->Length >= 3) {
			AKMaxTextBox->SelectionStart = AKMaxTextBox->Text->Length - 3;
		}
	}
	};
}
