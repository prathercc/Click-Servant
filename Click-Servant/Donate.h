#pragma once

namespace PRATHTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Donate
	/// </summary>
	public ref class Donate : public System::Windows::Forms::Form
	{
	private: System::Drawing::Point Point;
	public:
		Donate(int i, System::Drawing::Point point)
		{
			InitializeComponent();
			Point = point;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Donate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ bitCoinTSButton;
	private: System::Windows::Forms::ToolStripButton^ liteCoinTSButton;
	protected:



	private: System::Windows::Forms::PictureBox^ bitCoinPicture;
	private: System::Windows::Forms::TextBox^ bitCoinTextBox;




	private: System::Windows::Forms::PictureBox^ liteCoinPicture;
	private: System::Windows::Forms::PictureBox^ liteCoinAddress;



	private: System::Windows::Forms::TextBox^ liteCoinTextBox;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::PictureBox^ bitCoinAddress;
	private: System::Windows::Forms::LinkLabel^ liteCoinLinkLabel;
	private: System::Windows::Forms::LinkLabel^ bitCoinLinkLabel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Donate::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->bitCoinTSButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->liteCoinTSButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->bitCoinAddress = (gcnew System::Windows::Forms::PictureBox());
			this->bitCoinPicture = (gcnew System::Windows::Forms::PictureBox());
			this->bitCoinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->liteCoinPicture = (gcnew System::Windows::Forms::PictureBox());
			this->liteCoinAddress = (gcnew System::Windows::Forms::PictureBox());
			this->liteCoinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->liteCoinLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->bitCoinLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bitCoinAddress))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bitCoinPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->liteCoinPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->liteCoinAddress))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::Transparent;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->bitCoinTSButton,
					this->liteCoinTSButton, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(500, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// bitCoinTSButton
			// 
			this->bitCoinTSButton->Enabled = false;
			this->bitCoinTSButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->bitCoinTSButton->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->bitCoinTSButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bitCoinTSButton.Image")));
			this->bitCoinTSButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->bitCoinTSButton->Name = L"bitCoinTSButton";
			this->bitCoinTSButton->Size = System::Drawing::Size(66, 22);
			this->bitCoinTSButton->Text = L"Bitcoin";
			this->bitCoinTSButton->Click += gcnew System::EventHandler(this, &Donate::ToolStripButton1_Click);
			// 
			// liteCoinTSButton
			// 
			this->liteCoinTSButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->liteCoinTSButton->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->liteCoinTSButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"liteCoinTSButton.Image")));
			this->liteCoinTSButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->liteCoinTSButton->Name = L"liteCoinTSButton";
			this->liteCoinTSButton->Size = System::Drawing::Size(71, 22);
			this->liteCoinTSButton->Text = L"Litecoin";
			this->liteCoinTSButton->Click += gcnew System::EventHandler(this, &Donate::ToolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->toolStripButton3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(90, 22);
			this->toolStripButton3->Text = L"Return to App";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Donate::ToolStripButton3_Click);
			// 
			// bitCoinAddress
			// 
			this->bitCoinAddress->BackColor = System::Drawing::Color::Transparent;
			this->bitCoinAddress->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bitCoinAddress.Image")));
			this->bitCoinAddress->Location = System::Drawing::Point(12, 31);
			this->bitCoinAddress->Name = L"bitCoinAddress";
			this->bitCoinAddress->Size = System::Drawing::Size(193, 169);
			this->bitCoinAddress->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bitCoinAddress->TabIndex = 3;
			this->bitCoinAddress->TabStop = false;
			// 
			// bitCoinPicture
			// 
			this->bitCoinPicture->BackColor = System::Drawing::Color::Transparent;
			this->bitCoinPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bitCoinPicture.Image")));
			this->bitCoinPicture->Location = System::Drawing::Point(313, 59);
			this->bitCoinPicture->Name = L"bitCoinPicture";
			this->bitCoinPicture->Size = System::Drawing::Size(84, 62);
			this->bitCoinPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bitCoinPicture->TabIndex = 2;
			this->bitCoinPicture->TabStop = false;
			// 
			// bitCoinTextBox
			// 
			this->bitCoinTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->bitCoinTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bitCoinTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->bitCoinTextBox->Location = System::Drawing::Point(227, 127);
			this->bitCoinTextBox->Name = L"bitCoinTextBox";
			this->bitCoinTextBox->ReadOnly = true;
			this->bitCoinTextBox->Size = System::Drawing::Size(252, 20);
			this->bitCoinTextBox->TabIndex = 0;
			this->bitCoinTextBox->TabStop = false;
			this->bitCoinTextBox->Text = L"3KwkiTj1QhmmUgHkwfWscTHUDbNd9e4QQH";
			this->bitCoinTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// liteCoinPicture
			// 
			this->liteCoinPicture->BackColor = System::Drawing::Color::Transparent;
			this->liteCoinPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"liteCoinPicture.Image")));
			this->liteCoinPicture->Location = System::Drawing::Point(313, 59);
			this->liteCoinPicture->Name = L"liteCoinPicture";
			this->liteCoinPicture->Size = System::Drawing::Size(84, 62);
			this->liteCoinPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->liteCoinPicture->TabIndex = 2;
			this->liteCoinPicture->TabStop = false;
			this->liteCoinPicture->Visible = false;
			// 
			// liteCoinAddress
			// 
			this->liteCoinAddress->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"liteCoinAddress.Image")));
			this->liteCoinAddress->Location = System::Drawing::Point(12, 31);
			this->liteCoinAddress->Name = L"liteCoinAddress";
			this->liteCoinAddress->Size = System::Drawing::Size(193, 169);
			this->liteCoinAddress->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->liteCoinAddress->TabIndex = 1;
			this->liteCoinAddress->TabStop = false;
			this->liteCoinAddress->Visible = false;
			// 
			// liteCoinTextBox
			// 
			this->liteCoinTextBox->BackColor = System::Drawing::Color::DarkSlateGray;
			this->liteCoinTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->liteCoinTextBox->ForeColor = System::Drawing::Color::LightBlue;
			this->liteCoinTextBox->Location = System::Drawing::Point(227, 129);
			this->liteCoinTextBox->Name = L"liteCoinTextBox";
			this->liteCoinTextBox->ReadOnly = true;
			this->liteCoinTextBox->Size = System::Drawing::Size(252, 20);
			this->liteCoinTextBox->TabIndex = 0;
			this->liteCoinTextBox->TabStop = false;
			this->liteCoinTextBox->Text = L"MDRL7QDPCH6MBMrgbJDL4Ecr3RWUdmtTae";
			this->liteCoinTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->liteCoinTextBox->Visible = false;
			// 
			// liteCoinLinkLabel
			// 
			this->liteCoinLinkLabel->AutoSize = true;
			this->liteCoinLinkLabel->BackColor = System::Drawing::Color::Transparent;
			this->liteCoinLinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->liteCoinLinkLabel->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->liteCoinLinkLabel->Location = System::Drawing::Point(280, 155);
			this->liteCoinLinkLabel->Name = L"liteCoinLinkLabel";
			this->liteCoinLinkLabel->Size = System::Drawing::Size(155, 13);
			this->liteCoinLinkLabel->TabIndex = 14;
			this->liteCoinLinkLabel->TabStop = true;
			this->liteCoinLinkLabel->Text = L"Learn more about Litecoin";
			this->liteCoinLinkLabel->Visible = false;
			this->liteCoinLinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Donate::LiteCoinLinkLabel_LinkClicked);
			// 
			// bitCoinLinkLabel
			// 
			this->bitCoinLinkLabel->AutoSize = true;
			this->bitCoinLinkLabel->BackColor = System::Drawing::Color::Transparent;
			this->bitCoinLinkLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bitCoinLinkLabel->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->bitCoinLinkLabel->Location = System::Drawing::Point(280, 155);
			this->bitCoinLinkLabel->Name = L"bitCoinLinkLabel";
			this->bitCoinLinkLabel->Size = System::Drawing::Size(149, 13);
			this->bitCoinLinkLabel->TabIndex = 15;
			this->bitCoinLinkLabel->TabStop = true;
			this->bitCoinLinkLabel->Text = L"Learn more about Bitcoin";
			this->bitCoinLinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Donate::BitCoinLinkLabel_LinkClicked);
			// 
			// Donate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(500, 208);
			this->Controls->Add(this->bitCoinLinkLabel);
			this->Controls->Add(this->liteCoinLinkLabel);
			this->Controls->Add(this->liteCoinTextBox);
			this->Controls->Add(this->liteCoinPicture);
			this->Controls->Add(this->bitCoinTextBox);
			this->Controls->Add(this->liteCoinAddress);
			this->Controls->Add(this->bitCoinPicture);
			this->Controls->Add(this->bitCoinAddress);
			this->Controls->Add(this->toolStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(516, 247);
			this->MinimumSize = System::Drawing::Size(516, 247);
			this->Name = L"Donate";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Support Click-Servant";
			this->Load += gcnew System::EventHandler(this, &Donate::Donate_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bitCoinAddress))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bitCoinPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->liteCoinPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->liteCoinAddress))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ToolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) { //Bitcoin
		bitCoinAddress->Visible = true;
		bitCoinPicture->Visible = true;
		bitCoinTextBox->Visible = true;

		liteCoinAddress->Visible = false;
		liteCoinPicture->Visible = false;
		liteCoinTextBox->Visible = false;

		bitCoinTSButton->Enabled = false;
		liteCoinTSButton->Enabled = true;

		bitCoinLinkLabel->Visible = true;
		liteCoinLinkLabel->Visible = false;

	}
private: System::Void ToolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) { //Litecoin
	bitCoinAddress->Visible = false;
	bitCoinPicture->Visible = false;
	bitCoinTextBox->Visible = false;

	liteCoinAddress->Visible = true;
	liteCoinPicture->Visible = true;
	liteCoinTextBox->Visible = true;

	bitCoinTSButton->Enabled = true;
	liteCoinTSButton->Enabled = false;

	bitCoinLinkLabel->Visible = false;
	liteCoinLinkLabel->Visible = true;

}
private: System::Void ToolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Donate_Load(System::Object^ sender, System::EventArgs^ e) {
	this->SetDesktopLocation(Point.X, Point.Y);

}
private: System::Void BitCoinLinkLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://bitcoin.org");

}
private: System::Void LiteCoinLinkLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://litecoin.org/");

}
};
}
