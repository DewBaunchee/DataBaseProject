#pragma once

namespace DataBaseProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для InfoWindow
	/// </summary>
	public ref class InfoWindow : public System::Windows::Forms::Form
	{
	public:
		InfoWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~InfoWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ MainPanel;
	protected:

	protected:
	private: System::Windows::Forms::Label^ ReturnBtn;
	private: System::Windows::Forms::TreeView^ HelpTreeView;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"List of hot keys can find in About->Hot keys."));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"If you find an error in displaying the database,"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"you can reload it."));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"General", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode1,
					treeNode2, treeNode3
			}));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"To add field you should enter unique title "));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"and choose data type"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Add field", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode5,
					treeNode6
			}));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"To remove field you should click on"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"title you need or enter title."));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Remove field", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode8,
					treeNode9
			}));
			System::Windows::Forms::TreeNode^ treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Click on columns to choose titles or just enter it."));
			System::Windows::Forms::TreeNode^ treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Swap felds", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode11 }));
			System::Windows::Forms::TreeNode^ treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Click on field you need or enter title."));
			System::Windows::Forms::TreeNode^ treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Or drag column in table."));
			System::Windows::Forms::TreeNode^ treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"Move field before", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode13,
					treeNode14
			}));
			System::Windows::Forms::TreeNode^ treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Click on \"add record\" and correctly fill fields."));
			System::Windows::Forms::TreeNode^ treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Add record", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode16 }));
			System::Windows::Forms::TreeNode^ treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Click on record you need or enter its index."));
			System::Windows::Forms::TreeNode^ treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"Remove record", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode18 }));
			System::Windows::Forms::TreeNode^ treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"Click on records or enter its indexes."));
			System::Windows::Forms::TreeNode^ treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"Swap records", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode20 }));
			System::Windows::Forms::TreeNode^ treeNode22 = (gcnew System::Windows::Forms::TreeNode(L"Click on record that you need to move."));
			System::Windows::Forms::TreeNode^ treeNode23 = (gcnew System::Windows::Forms::TreeNode(L"Move record before", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode22 }));
			System::Windows::Forms::TreeNode^ treeNode24 = (gcnew System::Windows::Forms::TreeNode(L"Editing", gcnew cli::array< System::Windows::Forms::TreeNode^  >(8) {
				treeNode7,
					treeNode10, treeNode12, treeNode15, treeNode17, treeNode19, treeNode21, treeNode23
			}));
			System::Windows::Forms::TreeNode^ treeNode25 = (gcnew System::Windows::Forms::TreeNode(L"Row edit mode need for quickly deleting "));
			System::Windows::Forms::TreeNode^ treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"and copying records."));
			System::Windows::Forms::TreeNode^ treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"In this mode in table insert to additional "));
			System::Windows::Forms::TreeNode^ treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"columns. Click on left additional column"));
			System::Windows::Forms::TreeNode^ treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"to remove appropriate record and on"));
			System::Windows::Forms::TreeNode^ treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"right column to insert copy of this record."));
			System::Windows::Forms::TreeNode^ treeNode31 = (gcnew System::Windows::Forms::TreeNode(L"Row edit mode", gcnew cli::array< System::Windows::Forms::TreeNode^  >(6) {
				treeNode25,
					treeNode26, treeNode27, treeNode28, treeNode29, treeNode30
			}));
			System::Windows::Forms::TreeNode^ treeNode32 = (gcnew System::Windows::Forms::TreeNode(L"Enter condition and click on \"find next\" until"));
			System::Windows::Forms::TreeNode^ treeNode33 = (gcnew System::Windows::Forms::TreeNode(L"and program find this condition starting "));
			System::Windows::Forms::TreeNode^ treeNode34 = (gcnew System::Windows::Forms::TreeNode(L"from selected cell."));
			System::Windows::Forms::TreeNode^ treeNode35 = (gcnew System::Windows::Forms::TreeNode(L"Find", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode32,
					treeNode33, treeNode34
			}));
			System::Windows::Forms::TreeNode^ treeNode36 = (gcnew System::Windows::Forms::TreeNode(L"Choose target column which will be sorted, "));
			System::Windows::Forms::TreeNode^ treeNode37 = (gcnew System::Windows::Forms::TreeNode(L"choose type of sort and enter condition."));
			System::Windows::Forms::TreeNode^ treeNode38 = (gcnew System::Windows::Forms::TreeNode(L"Sorted table will be able only in that window."));
			System::Windows::Forms::TreeNode^ treeNode39 = (gcnew System::Windows::Forms::TreeNode(L"When you escape from that window table "));
			System::Windows::Forms::TreeNode^ treeNode40 = (gcnew System::Windows::Forms::TreeNode(L"will be unsort."));
			System::Windows::Forms::TreeNode^ treeNode41 = (gcnew System::Windows::Forms::TreeNode(L"Sort", gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode36,
					treeNode37, treeNode38, treeNode39, treeNode40
			}));
			System::Windows::Forms::TreeNode^ treeNode42 = (gcnew System::Windows::Forms::TreeNode(L"When you click on filter icon additional row"));
			System::Windows::Forms::TreeNode^ treeNode43 = (gcnew System::Windows::Forms::TreeNode(L"will be added. In that row you should enter "));
			System::Windows::Forms::TreeNode^ treeNode44 = (gcnew System::Windows::Forms::TreeNode(L"condition. If cell is empty that field will be"));
			System::Windows::Forms::TreeNode^ treeNode45 = (gcnew System::Windows::Forms::TreeNode(L"ignored while filtering. In strict mode all "));
			System::Windows::Forms::TreeNode^ treeNode46 = (gcnew System::Windows::Forms::TreeNode(L"conditions should match."));
			System::Windows::Forms::TreeNode^ treeNode47 = (gcnew System::Windows::Forms::TreeNode(L"Filter", gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode42,
					treeNode43, treeNode44, treeNode45, treeNode46
			}));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoWindow::typeid));
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->ReturnBtn = (gcnew System::Windows::Forms::Label());
			this->HelpTreeView = (gcnew System::Windows::Forms::TreeView());
			this->MainPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainPanel
			// 
			this->MainPanel->Controls->Add(this->ReturnBtn);
			this->MainPanel->Controls->Add(this->HelpTreeView);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->Location = System::Drawing::Point(0, 0);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(284, 261);
			this->MainPanel->TabIndex = 2;
			// 
			// ReturnBtn
			// 
			this->ReturnBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReturnBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->ReturnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ReturnBtn->Location = System::Drawing::Point(0, 220);
			this->ReturnBtn->Name = L"ReturnBtn";
			this->ReturnBtn->Size = System::Drawing::Size(284, 41);
			this->ReturnBtn->TabIndex = 2;
			this->ReturnBtn->Text = L"Return";
			this->ReturnBtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ReturnBtn->Click += gcnew System::EventHandler(this, &InfoWindow::ReturnBtn_Click);
			this->ReturnBtn->MouseEnter += gcnew System::EventHandler(this, &InfoWindow::ReturnBtn_MouseEnter);
			this->ReturnBtn->MouseLeave += gcnew System::EventHandler(this, &InfoWindow::ReturnBtn_MouseLeave);
			// 
			// HelpTreeView
			// 
			this->HelpTreeView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->HelpTreeView->Dock = System::Windows::Forms::DockStyle::Top;
			this->HelpTreeView->Location = System::Drawing::Point(0, 0);
			this->HelpTreeView->Name = L"HelpTreeView";
			treeNode1->Name = L"Узел0";
			treeNode1->Text = L"List of hot keys can find in About->Hot keys.";
			treeNode2->Name = L"Узел0";
			treeNode2->Text = L"If you find an error in displaying the database,";
			treeNode3->Name = L"Узел1";
			treeNode3->Text = L"you can reload it.";
			treeNode4->Name = L"Узел0";
			treeNode4->Text = L"General";
			treeNode5->Name = L"Узел11";
			treeNode5->Text = L"To add field you should enter unique title ";
			treeNode6->Name = L"Узел13";
			treeNode6->Text = L"and choose data type";
			treeNode7->Name = L"Узел3";
			treeNode7->Text = L"Add field";
			treeNode8->Name = L"Узел12";
			treeNode8->Text = L"To remove field you should click on";
			treeNode9->Name = L"Узел14";
			treeNode9->Text = L"title you need or enter title.";
			treeNode10->Name = L"Узел4";
			treeNode10->Text = L"Remove field";
			treeNode11->Name = L"Узел15";
			treeNode11->Text = L"Click on columns to choose titles or just enter it.";
			treeNode12->Name = L"Узел5";
			treeNode12->Text = L"Swap felds";
			treeNode13->Name = L"Узел0";
			treeNode13->Text = L"Click on field you need or enter title.";
			treeNode14->Name = L"Узел16";
			treeNode14->Text = L"Or drag column in table.";
			treeNode15->Name = L"Узел6";
			treeNode15->Text = L"Move field before";
			treeNode16->Name = L"Узел17";
			treeNode16->Text = L"Click on \"add record\" and correctly fill fields.";
			treeNode17->Name = L"Узел7";
			treeNode17->Text = L"Add record";
			treeNode18->Name = L"Узел18";
			treeNode18->Text = L"Click on record you need or enter its index.";
			treeNode19->Name = L"Узел8";
			treeNode19->Text = L"Remove record";
			treeNode20->Name = L"Узел19";
			treeNode20->Text = L"Click on records or enter its indexes.";
			treeNode21->Name = L"Узел9";
			treeNode21->Text = L"Swap records";
			treeNode22->Name = L"Узел20";
			treeNode22->Text = L"Click on record that you need to move.";
			treeNode23->Name = L"Узел10";
			treeNode23->Text = L"Move record before";
			treeNode24->Name = L"Узел2";
			treeNode24->Text = L"Editing";
			treeNode25->Name = L"Узел22";
			treeNode25->Text = L"Row edit mode need for quickly deleting ";
			treeNode26->Name = L"Узел23";
			treeNode26->Text = L"and copying records.";
			treeNode27->Name = L"Узел24";
			treeNode27->Text = L"In this mode in table insert to additional ";
			treeNode28->Name = L"Узел25";
			treeNode28->Text = L"columns. Click on left additional column";
			treeNode29->Name = L"Узел26";
			treeNode29->Text = L"to remove appropriate record and on";
			treeNode30->Name = L"Узел27";
			treeNode30->Text = L"right column to insert copy of this record.";
			treeNode31->Name = L"Узел21";
			treeNode31->Text = L"Row edit mode";
			treeNode32->Name = L"Узел29";
			treeNode32->Text = L"Enter condition and click on \"find next\" until";
			treeNode33->Name = L"Узел30";
			treeNode33->Text = L"and program find this condition starting ";
			treeNode34->Name = L"Узел31";
			treeNode34->Text = L"from selected cell.";
			treeNode35->Name = L"Узел28";
			treeNode35->Text = L"Find";
			treeNode36->Name = L"Узел33";
			treeNode36->Text = L"Choose target column which will be sorted, ";
			treeNode37->Name = L"Узел34";
			treeNode37->Text = L"choose type of sort and enter condition.";
			treeNode38->Name = L"Узел35";
			treeNode38->Text = L"Sorted table will be able only in that window.";
			treeNode39->Name = L"Узел36";
			treeNode39->Text = L"When you escape from that window table ";
			treeNode40->Name = L"Узел37";
			treeNode40->Text = L"will be unsort.";
			treeNode41->Name = L"Узел32";
			treeNode41->Text = L"Sort";
			treeNode42->Name = L"Узел39";
			treeNode42->Text = L"When you click on filter icon additional row";
			treeNode43->Name = L"Узел40";
			treeNode43->Text = L"will be added. In that row you should enter ";
			treeNode44->Name = L"Узел41";
			treeNode44->Text = L"condition. If cell is empty that field will be";
			treeNode45->Name = L"Узел42";
			treeNode45->Text = L"ignored while filtering. In strict mode all ";
			treeNode46->Name = L"Узел43";
			treeNode46->Text = L"conditions should match.";
			treeNode47->Name = L"Узел38";
			treeNode47->Text = L"Filter";
			this->HelpTreeView->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(6) {
				treeNode4, treeNode24, treeNode31,
					treeNode35, treeNode41, treeNode47
			});
			this->HelpTreeView->Size = System::Drawing::Size(284, 220);
			this->HelpTreeView->TabIndex = 1;
			// 
			// InfoWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->MainPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InfoWindow";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InfoWindow";
			this->MainPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReturnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void ReturnBtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(116, 207, 249);
	}
	private: System::Void ReturnBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(240, 240, 240);
	}
};
}
