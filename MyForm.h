#pragma once
#include <WinUser.h>
#include "db/DataBase.cpp"
#include "db/DBAdapter.cpp"
#include "InfoWindow.h"

namespace DataBaseProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::PictureBox^ CloseCrossPicture;
	private: System::Windows::Forms::PictureBox^ WrapPicture;
	private: System::Windows::Forms::PictureBox^ ExpandPicture;
	private: System::Windows::Forms::Panel^ MainBottomPanel;
	private: System::Windows::Forms::PictureBox^ MainDataBasePicture;
	private: System::Windows::Forms::Label^ MMFile;
	private: System::Windows::Forms::Label^ MMAbout;
	private: System::Windows::Forms::Label^ MMEdit;
	private: System::Windows::Forms::Panel^ MainPanel;
	private: System::Windows::Forms::Panel^ LeftControlPanel;
	private: System::Windows::Forms::Panel^ TopControlPanel;
	private: System::Windows::Forms::DataGridView^ MainDataGridView;
	private: System::Windows::Forms::PictureBox^ AddRecordPictureBox;
	private: System::Windows::Forms::PictureBox^ AddFieldPictureBox;
	private: System::Windows::Forms::PictureBox^ OptionalButton;
	private: System::Windows::Forms::PictureBox^ NewDB;
	private: System::Windows::Forms::Panel^ BottomMsgPanel;
	private: System::Windows::Forms::PictureBox^ OpenDB;
	private: System::Windows::Forms::PictureBox^ SaveDB;
	private: System::Windows::Forms::PictureBox^ Separator1;
	private: System::Windows::Forms::PictureBox^ SwapFields;
	private: System::Windows::Forms::PictureBox^ RemoveField;
	private: System::Windows::Forms::PictureBox^ AddField;
	private: System::Windows::Forms::PictureBox^ RowEditMode;	
	private: System::Windows::Forms::PictureBox^ Separator3;
	private: System::Windows::Forms::PictureBox^ MoveRecordBefore;
	private: System::Windows::Forms::PictureBox^ SwapRecords;
	private: System::Windows::Forms::PictureBox^ RemoveRecord;
	private: System::Windows::Forms::PictureBox^ AddRecord;
	private: System::Windows::Forms::PictureBox^ Separator2;
	private: System::Windows::Forms::PictureBox^ MoveFieldBefore;
	private: System::Windows::Forms::PictureBox^ InfoButton;
	private: System::Windows::Forms::Panel^ AddFieldPanel;
	private: System::Windows::Forms::ComboBox^ TypeComboBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TitleTextBox;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ AddFieldPanelTitle;
	private: System::Windows::Forms::Label^ RemoveFieldColumnTitle;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ AddFieldPanelCancel;
	private: System::Windows::Forms::Label^ AddFieldPanelConfirm;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ MsgContainer;
	private: System::Windows::Forms::PictureBox^ MsgCrossBox;
	private: System::Windows::Forms::Timer^ MsgCloseTimer;
	private: System::Windows::Forms::Label^ MsgText;
	private: System::Windows::Forms::PictureBox^ MsgContainerSeparatorPB;
	private: System::Windows::Forms::Panel^ AddRecordPanel;
	private: System::Windows::Forms::CheckedListBox^ TypesList;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ AddRecordPanelCancel;
	private: System::Windows::Forms::Label^ AddRecordPanelConfirm;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ AddRecordPanelTitle;
	private: System::Windows::Forms::Label^ TypeValidationLabel;
	private: System::Windows::Forms::Panel^ RemoveFieldPanel;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ RemoveFieldDialogPanel;
	private: System::Windows::Forms::Label^ RemoveFieldCancel;
	private: System::Windows::Forms::Label^ RemoveFieldConfirm;
	private: System::Windows::Forms::TextBox^ RemoveFieldTB;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ RemoveFieldPanelTitle;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ AddFieldTitleLabel;
	private: System::Windows::Forms::Panel^ RemoveRecordPanel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ RemoveRecordCancel;
	private: System::Windows::Forms::Label^ RemoveRecordConfirm;
	private: System::Windows::Forms::TextBox^ RemoveRecordTB;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ RemoveRecordPanelTitle;
	private: System::Windows::Forms::Panel^ SwapFieldsPanel;
	private: System::Windows::Forms::Label^ SwapFieldsPanelSTitleLabel;
	private: System::Windows::Forms::TextBox^ SwapFieldsPanelSTB;
	private: System::Windows::Forms::Label^ SwapFieldsPanelFTitleLabel;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ SwapFieldsCancel;
	private: System::Windows::Forms::Label^ SwapFieldsConfirm;
	private: System::Windows::Forms::TextBox^ SwapFieldsPanelFTB;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ SwapFieldsPanelTitle;
	private: System::Windows::Forms::OpenFileDialog^ OpenFileDialog;
	private: System::Windows::Forms::SaveFileDialog^ SaveFileDialog;
	private: System::Windows::Forms::PictureBox^ Separator4;
	private: System::Windows::Forms::Label^ TopHintLabel;
	private: System::Windows::Forms::Panel^ MoveFieldBeforePanel;
	private: System::Windows::Forms::Label^ TitleOfMovableLabel;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ MoveFieldBeforeCancel;
	private: System::Windows::Forms::Label^ MoveFieldBeforeConfirm;
	private: System::Windows::Forms::Label^ MoveFieldBeforeLabel;
	private: System::Windows::Forms::TextBox^ TitleOfMovableFieldTB;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ MoveFieldBeforePanelTitle;
	private: System::Windows::Forms::TextBox^ MoveFieldBeforeTB;
	private: System::Windows::Forms::Label^ MoveFieldToEnd;
	private: System::Windows::Forms::Panel^ MoveRecordBeforePanel;
	private: System::Windows::Forms::Label^ MoveRecordToEnd;
	private: System::Windows::Forms::TextBox^ MoveRecordBeforeTB;
	private: System::Windows::Forms::Label^ IndexOfMovableRecordLabel;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Label^ MoveRecordBeforeCancel;
	private: System::Windows::Forms::Label^ MoveRecordBeforeConfirm;
	private: System::Windows::Forms::Label^ MoveRecordBeforeLabel;
	private: System::Windows::Forms::TextBox^ IndexOfMovableRecordTB;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Label^ MoveRecordBeforePanelTitle;
	private: System::Windows::Forms::Panel^ SwapRecordsPanel;
	private: System::Windows::Forms::Label^ SwapRecordsSecondLabel;
	private: System::Windows::Forms::TextBox^ SwapRecordsPanelSTB;
	private: System::Windows::Forms::Label^ SwapRecordsFirstLabel;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Label^ SwapRecordsPanelCancel;
	private: System::Windows::Forms::Label^ SwapRecordsPanelConfirm;
	private: System::Windows::Forms::TextBox^ SwapRecordsPanelFTB;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Label^ SwapRecordsPanelTitle;
	private: System::Windows::Forms::PictureBox^ ReloadDB;
	private: System::Windows::Forms::Panel^ RowEditModePanel;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Label^ RowEditModeConfirm;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Label^ RowEditModePanelTitle;
	private: System::Windows::Forms::PictureBox^ Filter;
	private: System::Windows::Forms::PictureBox^ Sort;
	private: System::Windows::Forms::PictureBox^ Find;
	private: System::Windows::Forms::PictureBox^ Separator5;
	private: System::Windows::Forms::PictureBox^ Separator6;
	private: System::Windows::Forms::Panel^ FindPanel;
	private: System::Windows::Forms::Label^ FindNext;
	private: System::Windows::Forms::Label^ FindableTitle;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Label^ FindPanelConfirm;
	private: System::Windows::Forms::TextBox^ FindableTB;
	private: System::Windows::Forms::Panel^ panel34;
	private: System::Windows::Forms::Label^ FindPanelTitle;
	private: System::Windows::Forms::Panel^ SortPanel;
	private: System::Windows::Forms::Label^ TargetFieldTitle;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Label^ SortPanelSort;
	private: System::Windows::Forms::TextBox^ TargetFieldTB;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Label^ SortPanelTitle;
	private: System::Windows::Forms::Label^ SortPanelCancel;
	private: System::Windows::Forms::RadioButton^ DescendingOption;
	private: System::Windows::Forms::RadioButton^ AscendingOption;
	private: System::Windows::Forms::Panel^ FilterPanel;
	private: System::Windows::Forms::Label^ HowToUseTitle;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel35;
	private: System::Windows::Forms::Label^ FilterPanelCancel;
	private: System::Windows::Forms::Label^ FilterPanelFilter;
	private: System::Windows::Forms::Panel^ panel36;
	private: System::Windows::Forms::Label^ FilterPanelTitle;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ NonStrictMode;
	private: System::Windows::Forms::RadioButton^ StrictMode;
	private: System::Windows::Forms::Panel^ MMAboutSubMenu;
	private: System::Windows::Forms::Panel^ MMAboutAuthor;
	private: System::Windows::Forms::Label^ AboutAuthorHK;
	private: System::Windows::Forms::Label^ MIAboutAuthor;
	private: System::Windows::Forms::Panel^ MMAboutProgram;
	private: System::Windows::Forms::Label^ AboutProgramHK;
	private: System::Windows::Forms::Label^ MIAboutProgram;
	private: System::Windows::Forms::Panel^ AboutSubMenuSeparator;
	private: System::Windows::Forms::Panel^ MMHelp;
	private: System::Windows::Forms::Label^ HelpHK;
	private: System::Windows::Forms::Label^ MIHelp;
	private: System::Windows::Forms::Panel^ MMHotKeys;
	private: System::Windows::Forms::Label^ HotKeysHK;
	private: System::Windows::Forms::Label^ MIHotKeys;
	private: System::Windows::Forms::Panel^ MMEditSubMenu;
	private: System::Windows::Forms::Panel^ panel52;
	private: System::Windows::Forms::Label^ FilterHK;
	private: System::Windows::Forms::Label^ MIFilter;
	private: System::Windows::Forms::Panel^ panel51;
	private: System::Windows::Forms::Label^ SortHK;
	private: System::Windows::Forms::Label^ MISort;
	private: System::Windows::Forms::Panel^ panel50;
	private: System::Windows::Forms::Label^ FindHK;
	private: System::Windows::Forms::Label^ MIFind;
	private: System::Windows::Forms::Panel^ panel49;
	private: System::Windows::Forms::Label^ RecordEditModeHK;
	private: System::Windows::Forms::Label^ MIRecordEditMode;
	private: System::Windows::Forms::Panel^ panel48;
	private: System::Windows::Forms::Panel^ panel47;
	private: System::Windows::Forms::Label^ MoveRecordBeforeHK;
	private: System::Windows::Forms::Label^ MIMoveRecordBefore;
	private: System::Windows::Forms::Panel^ panel46;
	private: System::Windows::Forms::Label^ SwapRecordsHK;
	private: System::Windows::Forms::Label^ MISwapRecords;
	private: System::Windows::Forms::Panel^ panel45;
	private: System::Windows::Forms::Label^ RemoveRecordHK;
	private: System::Windows::Forms::Label^ MIRemoveRecord;
	private: System::Windows::Forms::Panel^ panel44;
	private: System::Windows::Forms::Label^ AddRecordHK;
	private: System::Windows::Forms::Label^ MIAddRecord;
	private: System::Windows::Forms::Panel^ panel43;
	private: System::Windows::Forms::Panel^ panel42;
	private: System::Windows::Forms::Label^ MoveFieldBeforeHK;
	private: System::Windows::Forms::Label^ MIMoveFieldBefore;
	private: System::Windows::Forms::Panel^ panel40;
	private: System::Windows::Forms::Label^ SwapFieldsHK;
	private: System::Windows::Forms::Label^ MISwapFields;
	private: System::Windows::Forms::Panel^ panel37;
	private: System::Windows::Forms::Label^ RemoveFieldHK;
	private: System::Windows::Forms::Label^ MIRemoveField;
	private: System::Windows::Forms::Panel^ panel38;
	private: System::Windows::Forms::Label^ AddFieldHK;
	private: System::Windows::Forms::Label^ MIAddField;
	private: System::Windows::Forms::Panel^ panel39;
	private: System::Windows::Forms::Panel^ panel41;
	private: System::Windows::Forms::Label^ ReloadHK;
	private: System::Windows::Forms::Label^ MIReload;
	private: System::Windows::Forms::Panel^ MMFileSubMenu;
	private: System::Windows::Forms::Panel^ panel61;
	private: System::Windows::Forms::Label^ ExitHK;
	private: System::Windows::Forms::Label^ MIExit;
	private: System::Windows::Forms::Panel^ panel62;
	private: System::Windows::Forms::Panel^ panel64;
	private: System::Windows::Forms::Label^ SaveHK;
	private: System::Windows::Forms::Label^ MISave;
	private: System::Windows::Forms::Panel^ panel65;
	private: System::Windows::Forms::Label^ OpenHK;
	private: System::Windows::Forms::Label^ MIOpen;
	private: System::Windows::Forms::Panel^ panel66;
	private: System::Windows::Forms::Label^ NewHK;
	private: System::Windows::Forms::Label^ MINew;
	private: System::ComponentModel::IContainer^ components;
	protected:
	protected:
	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->MMAbout = (gcnew System::Windows::Forms::Label());
			this->MMEdit = (gcnew System::Windows::Forms::Label());
			this->MMFile = (gcnew System::Windows::Forms::Label());
			this->MainDataBasePicture = (gcnew System::Windows::Forms::PictureBox());
			this->WrapPicture = (gcnew System::Windows::Forms::PictureBox());
			this->ExpandPicture = (gcnew System::Windows::Forms::PictureBox());
			this->CloseCrossPicture = (gcnew System::Windows::Forms::PictureBox());
			this->MainBottomPanel = (gcnew System::Windows::Forms::Panel());
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->BottomMsgPanel = (gcnew System::Windows::Forms::Panel());
			this->MsgContainer = (gcnew System::Windows::Forms::Panel());
			this->MsgText = (gcnew System::Windows::Forms::Label());
			this->MsgContainerSeparatorPB = (gcnew System::Windows::Forms::PictureBox());
			this->MsgCrossBox = (gcnew System::Windows::Forms::PictureBox());
			this->OptionalButton = (gcnew System::Windows::Forms::PictureBox());
			this->MainDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->LeftControlPanel = (gcnew System::Windows::Forms::Panel());
			this->FilterPanel = (gcnew System::Windows::Forms::Panel());
			this->NonStrictMode = (gcnew System::Windows::Forms::RadioButton());
			this->StrictMode = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->HowToUseTitle = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->FilterPanelCancel = (gcnew System::Windows::Forms::Label());
			this->FilterPanelFilter = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->FilterPanelTitle = (gcnew System::Windows::Forms::Label());
			this->SortPanel = (gcnew System::Windows::Forms::Panel());
			this->DescendingOption = (gcnew System::Windows::Forms::RadioButton());
			this->AscendingOption = (gcnew System::Windows::Forms::RadioButton());
			this->TargetFieldTitle = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->SortPanelCancel = (gcnew System::Windows::Forms::Label());
			this->SortPanelSort = (gcnew System::Windows::Forms::Label());
			this->TargetFieldTB = (gcnew System::Windows::Forms::TextBox());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->SortPanelTitle = (gcnew System::Windows::Forms::Label());
			this->FindPanel = (gcnew System::Windows::Forms::Panel());
			this->FindNext = (gcnew System::Windows::Forms::Label());
			this->FindableTitle = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->FindPanelConfirm = (gcnew System::Windows::Forms::Label());
			this->FindableTB = (gcnew System::Windows::Forms::TextBox());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->FindPanelTitle = (gcnew System::Windows::Forms::Label());
			this->RowEditModePanel = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->RowEditModeConfirm = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->RowEditModePanelTitle = (gcnew System::Windows::Forms::Label());
			this->MoveRecordBeforePanel = (gcnew System::Windows::Forms::Panel());
			this->MoveRecordToEnd = (gcnew System::Windows::Forms::Label());
			this->MoveRecordBeforeTB = (gcnew System::Windows::Forms::TextBox());
			this->IndexOfMovableRecordLabel = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->MoveRecordBeforeCancel = (gcnew System::Windows::Forms::Label());
			this->MoveRecordBeforeConfirm = (gcnew System::Windows::Forms::Label());
			this->MoveRecordBeforeLabel = (gcnew System::Windows::Forms::Label());
			this->IndexOfMovableRecordTB = (gcnew System::Windows::Forms::TextBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->MoveRecordBeforePanelTitle = (gcnew System::Windows::Forms::Label());
			this->MoveFieldBeforePanel = (gcnew System::Windows::Forms::Panel());
			this->MoveFieldToEnd = (gcnew System::Windows::Forms::Label());
			this->MoveFieldBeforeTB = (gcnew System::Windows::Forms::TextBox());
			this->TitleOfMovableLabel = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->MoveFieldBeforeCancel = (gcnew System::Windows::Forms::Label());
			this->MoveFieldBeforeConfirm = (gcnew System::Windows::Forms::Label());
			this->MoveFieldBeforeLabel = (gcnew System::Windows::Forms::Label());
			this->TitleOfMovableFieldTB = (gcnew System::Windows::Forms::TextBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->MoveFieldBeforePanelTitle = (gcnew System::Windows::Forms::Label());
			this->AddFieldPanel = (gcnew System::Windows::Forms::Panel());
			this->AddFieldTitleLabel = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->AddFieldPanelCancel = (gcnew System::Windows::Forms::Label());
			this->AddFieldPanelConfirm = (gcnew System::Windows::Forms::Label());
			this->TypeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TitleTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AddFieldPanelTitle = (gcnew System::Windows::Forms::Label());
			this->AddRecordPanel = (gcnew System::Windows::Forms::Panel());
			this->TypesList = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->AddRecordPanelCancel = (gcnew System::Windows::Forms::Label());
			this->AddRecordPanelConfirm = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->AddRecordPanelTitle = (gcnew System::Windows::Forms::Label());
			this->TypeValidationLabel = (gcnew System::Windows::Forms::Label());
			this->RemoveFieldPanel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->RemoveFieldDialogPanel = (gcnew System::Windows::Forms::Panel());
			this->RemoveFieldCancel = (gcnew System::Windows::Forms::Label());
			this->RemoveFieldConfirm = (gcnew System::Windows::Forms::Label());
			this->RemoveFieldTB = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->RemoveFieldPanelTitle = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->RemoveRecordPanel = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->RemoveRecordCancel = (gcnew System::Windows::Forms::Label());
			this->RemoveRecordConfirm = (gcnew System::Windows::Forms::Label());
			this->RemoveRecordTB = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->RemoveRecordPanelTitle = (gcnew System::Windows::Forms::Label());
			this->SwapFieldsPanel = (gcnew System::Windows::Forms::Panel());
			this->SwapFieldsPanelSTitleLabel = (gcnew System::Windows::Forms::Label());
			this->SwapFieldsPanelSTB = (gcnew System::Windows::Forms::TextBox());
			this->SwapFieldsPanelFTitleLabel = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->SwapFieldsCancel = (gcnew System::Windows::Forms::Label());
			this->SwapFieldsConfirm = (gcnew System::Windows::Forms::Label());
			this->SwapFieldsPanelFTB = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->SwapFieldsPanelTitle = (gcnew System::Windows::Forms::Label());
			this->SwapRecordsPanel = (gcnew System::Windows::Forms::Panel());
			this->SwapRecordsSecondLabel = (gcnew System::Windows::Forms::Label());
			this->SwapRecordsPanelSTB = (gcnew System::Windows::Forms::TextBox());
			this->SwapRecordsFirstLabel = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->SwapRecordsPanelCancel = (gcnew System::Windows::Forms::Label());
			this->SwapRecordsPanelConfirm = (gcnew System::Windows::Forms::Label());
			this->SwapRecordsPanelFTB = (gcnew System::Windows::Forms::TextBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->SwapRecordsPanelTitle = (gcnew System::Windows::Forms::Label());
			this->AddRecordPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->AddFieldPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->TopControlPanel = (gcnew System::Windows::Forms::Panel());
			this->InfoButton = (gcnew System::Windows::Forms::PictureBox());
			this->TopHintLabel = (gcnew System::Windows::Forms::Label());
			this->Separator6 = (gcnew System::Windows::Forms::PictureBox());
			this->Filter = (gcnew System::Windows::Forms::PictureBox());
			this->Sort = (gcnew System::Windows::Forms::PictureBox());
			this->Find = (gcnew System::Windows::Forms::PictureBox());
			this->Separator5 = (gcnew System::Windows::Forms::PictureBox());
			this->RowEditMode = (gcnew System::Windows::Forms::PictureBox());
			this->Separator4 = (gcnew System::Windows::Forms::PictureBox());
			this->MoveRecordBefore = (gcnew System::Windows::Forms::PictureBox());
			this->SwapRecords = (gcnew System::Windows::Forms::PictureBox());
			this->RemoveRecord = (gcnew System::Windows::Forms::PictureBox());
			this->AddRecord = (gcnew System::Windows::Forms::PictureBox());
			this->Separator3 = (gcnew System::Windows::Forms::PictureBox());
			this->MoveFieldBefore = (gcnew System::Windows::Forms::PictureBox());
			this->SwapFields = (gcnew System::Windows::Forms::PictureBox());
			this->RemoveField = (gcnew System::Windows::Forms::PictureBox());
			this->AddField = (gcnew System::Windows::Forms::PictureBox());
			this->Separator2 = (gcnew System::Windows::Forms::PictureBox());
			this->ReloadDB = (gcnew System::Windows::Forms::PictureBox());
			this->Separator1 = (gcnew System::Windows::Forms::PictureBox());
			this->OpenDB = (gcnew System::Windows::Forms::PictureBox());
			this->SaveDB = (gcnew System::Windows::Forms::PictureBox());
			this->NewDB = (gcnew System::Windows::Forms::PictureBox());
			this->RemoveFieldColumnTitle = (gcnew System::Windows::Forms::Label());
			this->MsgCloseTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->OpenFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SaveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->MMAboutSubMenu = (gcnew System::Windows::Forms::Panel());
			this->MMAboutAuthor = (gcnew System::Windows::Forms::Panel());
			this->AboutAuthorHK = (gcnew System::Windows::Forms::Label());
			this->MIAboutAuthor = (gcnew System::Windows::Forms::Label());
			this->MMAboutProgram = (gcnew System::Windows::Forms::Panel());
			this->AboutProgramHK = (gcnew System::Windows::Forms::Label());
			this->MIAboutProgram = (gcnew System::Windows::Forms::Label());
			this->AboutSubMenuSeparator = (gcnew System::Windows::Forms::Panel());
			this->MMHelp = (gcnew System::Windows::Forms::Panel());
			this->HelpHK = (gcnew System::Windows::Forms::Label());
			this->MIHelp = (gcnew System::Windows::Forms::Label());
			this->MMHotKeys = (gcnew System::Windows::Forms::Panel());
			this->HotKeysHK = (gcnew System::Windows::Forms::Label());
			this->MIHotKeys = (gcnew System::Windows::Forms::Label());
			this->MMEditSubMenu = (gcnew System::Windows::Forms::Panel());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->FilterHK = (gcnew System::Windows::Forms::Label());
			this->MIFilter = (gcnew System::Windows::Forms::Label());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->SortHK = (gcnew System::Windows::Forms::Label());
			this->MISort = (gcnew System::Windows::Forms::Label());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->FindHK = (gcnew System::Windows::Forms::Label());
			this->MIFind = (gcnew System::Windows::Forms::Label());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->RecordEditModeHK = (gcnew System::Windows::Forms::Label());
			this->MIRecordEditMode = (gcnew System::Windows::Forms::Label());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->MoveRecordBeforeHK = (gcnew System::Windows::Forms::Label());
			this->MIMoveRecordBefore = (gcnew System::Windows::Forms::Label());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->SwapRecordsHK = (gcnew System::Windows::Forms::Label());
			this->MISwapRecords = (gcnew System::Windows::Forms::Label());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->RemoveRecordHK = (gcnew System::Windows::Forms::Label());
			this->MIRemoveRecord = (gcnew System::Windows::Forms::Label());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->AddRecordHK = (gcnew System::Windows::Forms::Label());
			this->MIAddRecord = (gcnew System::Windows::Forms::Label());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->MoveFieldBeforeHK = (gcnew System::Windows::Forms::Label());
			this->MIMoveFieldBefore = (gcnew System::Windows::Forms::Label());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->SwapFieldsHK = (gcnew System::Windows::Forms::Label());
			this->MISwapFields = (gcnew System::Windows::Forms::Label());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->RemoveFieldHK = (gcnew System::Windows::Forms::Label());
			this->MIRemoveField = (gcnew System::Windows::Forms::Label());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->AddFieldHK = (gcnew System::Windows::Forms::Label());
			this->MIAddField = (gcnew System::Windows::Forms::Label());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->ReloadHK = (gcnew System::Windows::Forms::Label());
			this->MIReload = (gcnew System::Windows::Forms::Label());
			this->MMFileSubMenu = (gcnew System::Windows::Forms::Panel());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->ExitHK = (gcnew System::Windows::Forms::Label());
			this->MIExit = (gcnew System::Windows::Forms::Label());
			this->panel62 = (gcnew System::Windows::Forms::Panel());
			this->panel64 = (gcnew System::Windows::Forms::Panel());
			this->SaveHK = (gcnew System::Windows::Forms::Label());
			this->MISave = (gcnew System::Windows::Forms::Label());
			this->panel65 = (gcnew System::Windows::Forms::Panel());
			this->OpenHK = (gcnew System::Windows::Forms::Label());
			this->MIOpen = (gcnew System::Windows::Forms::Label());
			this->panel66 = (gcnew System::Windows::Forms::Panel());
			this->NewHK = (gcnew System::Windows::Forms::Label());
			this->MINew = (gcnew System::Windows::Forms::Label());
			this->MenuPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainDataBasePicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WrapPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExpandPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CloseCrossPicture))->BeginInit();
			this->MainBottomPanel->SuspendLayout();
			this->MainPanel->SuspendLayout();
			this->BottomMsgPanel->SuspendLayout();
			this->MsgContainer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MsgContainerSeparatorPB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MsgCrossBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OptionalButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainDataGridView))->BeginInit();
			this->LeftControlPanel->SuspendLayout();
			this->FilterPanel->SuspendLayout();
			this->panel35->SuspendLayout();
			this->SortPanel->SuspendLayout();
			this->panel29->SuspendLayout();
			this->FindPanel->SuspendLayout();
			this->panel33->SuspendLayout();
			this->RowEditModePanel->SuspendLayout();
			this->panel26->SuspendLayout();
			this->MoveRecordBeforePanel->SuspendLayout();
			this->panel20->SuspendLayout();
			this->MoveFieldBeforePanel->SuspendLayout();
			this->panel17->SuspendLayout();
			this->AddFieldPanel->SuspendLayout();
			this->panel5->SuspendLayout();
			this->AddRecordPanel->SuspendLayout();
			this->panel7->SuspendLayout();
			this->RemoveFieldPanel->SuspendLayout();
			this->RemoveFieldDialogPanel->SuspendLayout();
			this->RemoveRecordPanel->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SwapFieldsPanel->SuspendLayout();
			this->panel14->SuspendLayout();
			this->SwapRecordsPanel->SuspendLayout();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddRecordPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddFieldPictureBox))->BeginInit();
			this->TopControlPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InfoButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Filter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sort))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Find))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowEditMode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MoveRecordBefore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SwapRecords))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemoveRecord))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddRecord))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MoveFieldBefore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SwapFields))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemoveField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddField))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReloadDB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpenDB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SaveDB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NewDB))->BeginInit();
			this->MMAboutSubMenu->SuspendLayout();
			this->MMAboutAuthor->SuspendLayout();
			this->MMAboutProgram->SuspendLayout();
			this->MMHelp->SuspendLayout();
			this->MMHotKeys->SuspendLayout();
			this->MMEditSubMenu->SuspendLayout();
			this->panel52->SuspendLayout();
			this->panel51->SuspendLayout();
			this->panel50->SuspendLayout();
			this->panel49->SuspendLayout();
			this->panel47->SuspendLayout();
			this->panel46->SuspendLayout();
			this->panel45->SuspendLayout();
			this->panel44->SuspendLayout();
			this->panel42->SuspendLayout();
			this->panel40->SuspendLayout();
			this->panel37->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel41->SuspendLayout();
			this->MMFileSubMenu->SuspendLayout();
			this->panel61->SuspendLayout();
			this->panel64->SuspendLayout();
			this->panel65->SuspendLayout();
			this->panel66->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::White;
			this->MenuPanel->Controls->Add(this->MMAbout);
			this->MenuPanel->Controls->Add(this->MMEdit);
			this->MenuPanel->Controls->Add(this->MMFile);
			this->MenuPanel->Controls->Add(this->MainDataBasePicture);
			this->MenuPanel->Controls->Add(this->WrapPicture);
			this->MenuPanel->Controls->Add(this->ExpandPicture);
			this->MenuPanel->Controls->Add(this->CloseCrossPicture);
			this->MenuPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->MenuPanel->Location = System::Drawing::Point(0, 0);
			this->MenuPanel->Margin = System::Windows::Forms::Padding(3, 3, 3, 1);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(1500, 30);
			this->MenuPanel->TabIndex = 0;
			this->MenuPanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MenuPanel_MouseDown);
			this->MenuPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MenuPanel_MouseMove);
			this->MenuPanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MenuPanel_MouseUp);
			// 
			// MMAbout
			// 
			this->MMAbout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MMAbout->Dock = System::Windows::Forms::DockStyle::Left;
			this->MMAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MMAbout->Location = System::Drawing::Point(126, 0);
			this->MMAbout->Name = L"MMAbout";
			this->MMAbout->Size = System::Drawing::Size(56, 30);
			this->MMAbout->TabIndex = 7;
			this->MMAbout->Text = L"About";
			this->MMAbout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MMAbout->Click += gcnew System::EventHandler(this, &MyForm::MMAbout_Click);
			this->MMAbout->MouseEnter += gcnew System::EventHandler(this, &MyForm::mmTitle_MouseEnter);
			this->MMAbout->MouseLeave += gcnew System::EventHandler(this, &MyForm::mmTitle_MouseLeave);
			// 
			// MMEdit
			// 
			this->MMEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MMEdit->Dock = System::Windows::Forms::DockStyle::Left;
			this->MMEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MMEdit->Location = System::Drawing::Point(78, 0);
			this->MMEdit->Name = L"MMEdit";
			this->MMEdit->Size = System::Drawing::Size(48, 30);
			this->MMEdit->TabIndex = 6;
			this->MMEdit->Text = L"Edit";
			this->MMEdit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MMEdit->Click += gcnew System::EventHandler(this, &MyForm::MMEdit_Click);
			this->MMEdit->MouseEnter += gcnew System::EventHandler(this, &MyForm::mmTitle_MouseEnter);
			this->MMEdit->MouseLeave += gcnew System::EventHandler(this, &MyForm::mmTitle_MouseLeave);
			// 
			// MMFile
			// 
			this->MMFile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MMFile->Dock = System::Windows::Forms::DockStyle::Left;
			this->MMFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MMFile->Location = System::Drawing::Point(30, 0);
			this->MMFile->Name = L"MMFile";
			this->MMFile->Size = System::Drawing::Size(48, 30);
			this->MMFile->TabIndex = 5;
			this->MMFile->Text = L"File";
			this->MMFile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MMFile->Click += gcnew System::EventHandler(this, &MyForm::MMFile_Click);
			this->MMFile->MouseEnter += gcnew System::EventHandler(this, &MyForm::mmTitle_MouseEnter);
			this->MMFile->MouseLeave += gcnew System::EventHandler(this, &MyForm::mmTitle_MouseLeave);
			// 
			// MainDataBasePicture
			// 
			this->MainDataBasePicture->Dock = System::Windows::Forms::DockStyle::Left;
			this->MainDataBasePicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainDataBasePicture.Image")));
			this->MainDataBasePicture->Location = System::Drawing::Point(0, 0);
			this->MainDataBasePicture->Margin = System::Windows::Forms::Padding(0);
			this->MainDataBasePicture->Name = L"MainDataBasePicture";
			this->MainDataBasePicture->Size = System::Drawing::Size(30, 30);
			this->MainDataBasePicture->TabIndex = 4;
			this->MainDataBasePicture->TabStop = false;
			// 
			// WrapPicture
			// 
			this->WrapPicture->BackColor = System::Drawing::Color::Transparent;
			this->WrapPicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->WrapPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->WrapPicture->Dock = System::Windows::Forms::DockStyle::Right;
			this->WrapPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WrapPicture.Image")));
			this->WrapPicture->Location = System::Drawing::Point(1356, 0);
			this->WrapPicture->Name = L"WrapPicture";
			this->WrapPicture->Size = System::Drawing::Size(42, 30);
			this->WrapPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->WrapPicture->TabIndex = 3;
			this->WrapPicture->TabStop = false;
			this->WrapPicture->Click += gcnew System::EventHandler(this, &MyForm::WrapPicture_Click);
			this->WrapPicture->MouseEnter += gcnew System::EventHandler(this, &MyForm::WrapPicture_MouseEnter);
			this->WrapPicture->MouseLeave += gcnew System::EventHandler(this, &MyForm::WrapPicture_MouseLeave);
			// 
			// ExpandPicture
			// 
			this->ExpandPicture->BackColor = System::Drawing::Color::Transparent;
			this->ExpandPicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ExpandPicture->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ExpandPicture->Dock = System::Windows::Forms::DockStyle::Right;
			this->ExpandPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExpandPicture.Image")));
			this->ExpandPicture->Location = System::Drawing::Point(1398, 0);
			this->ExpandPicture->Name = L"ExpandPicture";
			this->ExpandPicture->Size = System::Drawing::Size(42, 30);
			this->ExpandPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ExpandPicture->TabIndex = 2;
			this->ExpandPicture->TabStop = false;
			this->ExpandPicture->MouseEnter += gcnew System::EventHandler(this, &MyForm::ExpandPicture_MouseEnter);
			this->ExpandPicture->MouseLeave += gcnew System::EventHandler(this, &MyForm::ExpandPicture_MouseLeave);
			// 
			// CloseCrossPicture
			// 
			this->CloseCrossPicture->BackColor = System::Drawing::Color::Transparent;
			this->CloseCrossPicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CloseCrossPicture->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CloseCrossPicture->Dock = System::Windows::Forms::DockStyle::Right;
			this->CloseCrossPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CloseCrossPicture.Image")));
			this->CloseCrossPicture->Location = System::Drawing::Point(1440, 0);
			this->CloseCrossPicture->Name = L"CloseCrossPicture";
			this->CloseCrossPicture->Size = System::Drawing::Size(60, 30);
			this->CloseCrossPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->CloseCrossPicture->TabIndex = 1;
			this->CloseCrossPicture->TabStop = false;
			this->CloseCrossPicture->Click += gcnew System::EventHandler(this, &MyForm::CloseCrossPicture_Click);
			this->CloseCrossPicture->MouseEnter += gcnew System::EventHandler(this, &MyForm::CloseCrossPicture_MouseEnter);
			this->CloseCrossPicture->MouseLeave += gcnew System::EventHandler(this, &MyForm::CloseCrossPicture_MouseLeave);
			// 
			// MainBottomPanel
			// 
			this->MainBottomPanel->BackColor = System::Drawing::Color::White;
			this->MainBottomPanel->Controls->Add(this->MainPanel);
			this->MainBottomPanel->Controls->Add(this->TopControlPanel);
			this->MainBottomPanel->Location = System::Drawing::Point(0, 32);
			this->MainBottomPanel->Margin = System::Windows::Forms::Padding(3, 1, 3, 3);
			this->MainBottomPanel->Name = L"MainBottomPanel";
			this->MainBottomPanel->Size = System::Drawing::Size(1500, 868);
			this->MainBottomPanel->TabIndex = 1;
			// 
			// MainPanel
			// 
			this->MainPanel->BackColor = System::Drawing::Color::Gainsboro;
			this->MainPanel->Controls->Add(this->BottomMsgPanel);
			this->MainPanel->Controls->Add(this->OptionalButton);
			this->MainPanel->Controls->Add(this->MainDataGridView);
			this->MainPanel->Controls->Add(this->LeftControlPanel);
			this->MainPanel->Controls->Add(this->AddRecordPictureBox);
			this->MainPanel->Controls->Add(this->AddFieldPictureBox);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->Location = System::Drawing::Point(0, 30);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(1500, 838);
			this->MainPanel->TabIndex = 3;
			// 
			// BottomMsgPanel
			// 
			this->BottomMsgPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->BottomMsgPanel->Controls->Add(this->MsgContainer);
			this->BottomMsgPanel->Location = System::Drawing::Point(202, 809);
			this->BottomMsgPanel->Margin = System::Windows::Forms::Padding(2, 1, 0, 0);
			this->BottomMsgPanel->Name = L"BottomMsgPanel";
			this->BottomMsgPanel->Size = System::Drawing::Size(1300, 29);
			this->BottomMsgPanel->TabIndex = 5;
			// 
			// MsgContainer
			// 
			this->MsgContainer->Controls->Add(this->MsgText);
			this->MsgContainer->Controls->Add(this->MsgContainerSeparatorPB);
			this->MsgContainer->Controls->Add(this->MsgCrossBox);
			this->MsgContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MsgContainer->Location = System::Drawing::Point(0, 0);
			this->MsgContainer->Name = L"MsgContainer";
			this->MsgContainer->Size = System::Drawing::Size(1300, 29);
			this->MsgContainer->TabIndex = 0;
			this->MsgContainer->Visible = false;
			// 
			// MsgText
			// 
			this->MsgText->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MsgText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MsgText->Location = System::Drawing::Point(39, 0);
			this->MsgText->Name = L"MsgText";
			this->MsgText->Size = System::Drawing::Size(1261, 29);
			this->MsgText->TabIndex = 2;
			this->MsgText->Text = L"label5";
			this->MsgText->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MsgContainerSeparatorPB
			// 
			this->MsgContainerSeparatorPB->Dock = System::Windows::Forms::DockStyle::Left;
			this->MsgContainerSeparatorPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MsgContainerSeparatorPB.Image")));
			this->MsgContainerSeparatorPB->Location = System::Drawing::Point(29, 0);
			this->MsgContainerSeparatorPB->Name = L"MsgContainerSeparatorPB";
			this->MsgContainerSeparatorPB->Size = System::Drawing::Size(10, 29);
			this->MsgContainerSeparatorPB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->MsgContainerSeparatorPB->TabIndex = 1;
			this->MsgContainerSeparatorPB->TabStop = false;
			// 
			// MsgCrossBox
			// 
			this->MsgCrossBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MsgCrossBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->MsgCrossBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MsgCrossBox.Image")));
			this->MsgCrossBox->Location = System::Drawing::Point(0, 0);
			this->MsgCrossBox->Name = L"MsgCrossBox";
			this->MsgCrossBox->Size = System::Drawing::Size(29, 29);
			this->MsgCrossBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->MsgCrossBox->TabIndex = 0;
			this->MsgCrossBox->TabStop = false;
			this->MsgCrossBox->Click += gcnew System::EventHandler(this, &MyForm::MsgCrossBox_Click);
			this->MsgCrossBox->MouseEnter += gcnew System::EventHandler(this, &MyForm::MsgCrossBox_MouseEnter);
			this->MsgCrossBox->MouseLeave += gcnew System::EventHandler(this, &MyForm::MsgCrossBox_MouseLeave);
			// 
			// OptionalButton
			// 
			this->OptionalButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->OptionalButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OptionalButton->Location = System::Drawing::Point(1472, 778);
			this->OptionalButton->Margin = System::Windows::Forms::Padding(1);
			this->OptionalButton->Name = L"OptionalButton";
			this->OptionalButton->Size = System::Drawing::Size(28, 30);
			this->OptionalButton->TabIndex = 3;
			this->OptionalButton->TabStop = false;
			this->OptionalButton->Click += gcnew System::EventHandler(this, &MyForm::OptionalButton_Click);
			// 
			// MainDataGridView
			// 
			this->MainDataGridView->AllowUserToAddRows = false;
			this->MainDataGridView->AllowUserToDeleteRows = false;
			this->MainDataGridView->AllowUserToOrderColumns = true;
			this->MainDataGridView->BackgroundColor = System::Drawing::Color::White;
			this->MainDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MainDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->MainDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->MainDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MainDataGridView->EnableHeadersVisualStyles = false;
			this->MainDataGridView->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MainDataGridView->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->MainDataGridView->Location = System::Drawing::Point(202, 2);
			this->MainDataGridView->Margin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->MainDataGridView->Name = L"MainDataGridView";
			this->MainDataGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->MainDataGridView->RowHeadersVisible = false;
			this->MainDataGridView->Size = System::Drawing::Size(1269, 775);
			this->MainDataGridView->TabIndex = 2;
			this->MainDataGridView->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataGridView_CellEndEdit);
			this->MainDataGridView->CellMouseEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataBaseGrid_CellMouseEnter);
			this->MainDataGridView->CellMouseLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataBaseGrid_CellMouseLeave);
			this->MainDataGridView->ColumnDisplayIndexChanged += gcnew System::Windows::Forms::DataGridViewColumnEventHandler(this, &MyForm::MainDataGridView_ColumnDisplayIndexChanged);
			// 
			// LeftControlPanel
			// 
			this->LeftControlPanel->BackColor = System::Drawing::Color::White;
			this->LeftControlPanel->Controls->Add(this->FilterPanel);
			this->LeftControlPanel->Controls->Add(this->SortPanel);
			this->LeftControlPanel->Controls->Add(this->FindPanel);
			this->LeftControlPanel->Controls->Add(this->RowEditModePanel);
			this->LeftControlPanel->Controls->Add(this->MoveRecordBeforePanel);
			this->LeftControlPanel->Controls->Add(this->MoveFieldBeforePanel);
			this->LeftControlPanel->Controls->Add(this->AddFieldPanel);
			this->LeftControlPanel->Controls->Add(this->AddRecordPanel);
			this->LeftControlPanel->Controls->Add(this->RemoveFieldPanel);
			this->LeftControlPanel->Controls->Add(this->RemoveRecordPanel);
			this->LeftControlPanel->Controls->Add(this->SwapFieldsPanel);
			this->LeftControlPanel->Controls->Add(this->SwapRecordsPanel);
			this->LeftControlPanel->Location = System::Drawing::Point(0, 2);
			this->LeftControlPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->LeftControlPanel->Name = L"LeftControlPanel";
			this->LeftControlPanel->Size = System::Drawing::Size(200, 836);
			this->LeftControlPanel->TabIndex = 2;
			// 
			// FilterPanel
			// 
			this->FilterPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->FilterPanel->Controls->Add(this->NonStrictMode);
			this->FilterPanel->Controls->Add(this->StrictMode);
			this->FilterPanel->Controls->Add(this->label1);
			this->FilterPanel->Controls->Add(this->HowToUseTitle);
			this->FilterPanel->Controls->Add(this->panel31);
			this->FilterPanel->Controls->Add(this->panel35);
			this->FilterPanel->Controls->Add(this->panel36);
			this->FilterPanel->Controls->Add(this->FilterPanelTitle);
			this->FilterPanel->Location = System::Drawing::Point(0, 0);
			this->FilterPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->FilterPanel->Name = L"FilterPanel";
			this->FilterPanel->Size = System::Drawing::Size(200, 836);
			this->FilterPanel->TabIndex = 18;
			this->FilterPanel->Visible = false;
			// 
			// NonStrictMode
			// 
			this->NonStrictMode->AutoSize = true;
			this->NonStrictMode->Location = System::Drawing::Point(17, 197);
			this->NonStrictMode->Name = L"NonStrictMode";
			this->NonStrictMode->Size = System::Drawing::Size(99, 17);
			this->NonStrictMode->TabIndex = 13;
			this->NonStrictMode->Text = L"Non-strict mode";
			this->NonStrictMode->UseVisualStyleBackColor = true;
			// 
			// StrictMode
			// 
			this->StrictMode->AutoSize = true;
			this->StrictMode->Checked = true;
			this->StrictMode->Location = System::Drawing::Point(18, 174);
			this->StrictMode->Name = L"StrictMode";
			this->StrictMode->Size = System::Drawing::Size(78, 17);
			this->StrictMode->TabIndex = 12;
			this->StrictMode->TabStop = true;
			this->StrictMode->Text = L"Strict mode";
			this->StrictMode->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 96);
			this->label1->TabIndex = 11;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// HowToUseTitle
			// 
			this->HowToUseTitle->AutoSize = true;
			this->HowToUseTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HowToUseTitle->Location = System::Drawing::Point(13, 47);
			this->HowToUseTitle->Name = L"HowToUseTitle";
			this->HowToUseTitle->Size = System::Drawing::Size(93, 20);
			this->HowToUseTitle->TabIndex = 10;
			this->HowToUseTitle->Text = L"How to use:";
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::LightGray;
			this->panel31->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel31->Location = System::Drawing::Point(0, 723);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(200, 1);
			this->panel31->TabIndex = 9;
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel35->Controls->Add(this->FilterPanelCancel);
			this->panel35->Controls->Add(this->FilterPanelFilter);
			this->panel35->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel35->Location = System::Drawing::Point(0, 724);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(200, 112);
			this->panel35->TabIndex = 8;
			// 
			// FilterPanelCancel
			// 
			this->FilterPanelCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->FilterPanelCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FilterPanelCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FilterPanelCancel->Location = System::Drawing::Point(17, 61);
			this->FilterPanelCancel->Name = L"FilterPanelCancel";
			this->FilterPanelCancel->Size = System::Drawing::Size(166, 42);
			this->FilterPanelCancel->TabIndex = 10;
			this->FilterPanelCancel->Text = L"Cancel";
			this->FilterPanelCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->FilterPanelCancel->Click += gcnew System::EventHandler(this, &MyForm::FilterPanelCancel_Click);
			this->FilterPanelCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->FilterPanelCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// FilterPanelFilter
			// 
			this->FilterPanelFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->FilterPanelFilter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FilterPanelFilter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FilterPanelFilter->Location = System::Drawing::Point(17, 9);
			this->FilterPanelFilter->Name = L"FilterPanelFilter";
			this->FilterPanelFilter->Size = System::Drawing::Size(166, 42);
			this->FilterPanelFilter->TabIndex = 8;
			this->FilterPanelFilter->Text = L"Filter";
			this->FilterPanelFilter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->FilterPanelFilter->Click += gcnew System::EventHandler(this, &MyForm::FilterPanelFilter_Click);
			this->FilterPanelFilter->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->FilterPanelFilter->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::LightGray;
			this->panel36->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel36->Location = System::Drawing::Point(0, 42);
			this->panel36->Margin = System::Windows::Forms::Padding(0);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(200, 1);
			this->panel36->TabIndex = 2;
			// 
			// FilterPanelTitle
			// 
			this->FilterPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->FilterPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FilterPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->FilterPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FilterPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FilterPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->FilterPanelTitle->Location = System::Drawing::Point(0, 0);
			this->FilterPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->FilterPanelTitle->Name = L"FilterPanelTitle";
			this->FilterPanelTitle->Size = System::Drawing::Size(200, 42);
			this->FilterPanelTitle->TabIndex = 1;
			this->FilterPanelTitle->Text = L"Filter";
			this->FilterPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SortPanel
			// 
			this->SortPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->SortPanel->Controls->Add(this->DescendingOption);
			this->SortPanel->Controls->Add(this->AscendingOption);
			this->SortPanel->Controls->Add(this->TargetFieldTitle);
			this->SortPanel->Controls->Add(this->panel28);
			this->SortPanel->Controls->Add(this->panel29);
			this->SortPanel->Controls->Add(this->TargetFieldTB);
			this->SortPanel->Controls->Add(this->panel30);
			this->SortPanel->Controls->Add(this->SortPanelTitle);
			this->SortPanel->Location = System::Drawing::Point(0, 0);
			this->SortPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->SortPanel->Name = L"SortPanel";
			this->SortPanel->Size = System::Drawing::Size(200, 836);
			this->SortPanel->TabIndex = 17;
			this->SortPanel->Visible = false;
			// 
			// DescendingOption
			// 
			this->DescendingOption->AutoSize = true;
			this->DescendingOption->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DescendingOption->Location = System::Drawing::Point(18, 132);
			this->DescendingOption->Name = L"DescendingOption";
			this->DescendingOption->Size = System::Drawing::Size(112, 24);
			this->DescendingOption->TabIndex = 14;
			this->DescendingOption->TabStop = true;
			this->DescendingOption->Text = L"Descending";
			this->DescendingOption->UseVisualStyleBackColor = true;
			// 
			// AscendingOption
			// 
			this->AscendingOption->AutoSize = true;
			this->AscendingOption->Checked = true;
			this->AscendingOption->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AscendingOption->Location = System::Drawing::Point(18, 107);
			this->AscendingOption->Name = L"AscendingOption";
			this->AscendingOption->Size = System::Drawing::Size(102, 24);
			this->AscendingOption->TabIndex = 13;
			this->AscendingOption->TabStop = true;
			this->AscendingOption->Text = L"Ascending";
			this->AscendingOption->UseVisualStyleBackColor = true;
			// 
			// TargetFieldTitle
			// 
			this->TargetFieldTitle->AutoSize = true;
			this->TargetFieldTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TargetFieldTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->TargetFieldTitle->Location = System::Drawing::Point(17, 55);
			this->TargetFieldTitle->Name = L"TargetFieldTitle";
			this->TargetFieldTitle->Size = System::Drawing::Size(100, 20);
			this->TargetFieldTitle->TabIndex = 12;
			this->TargetFieldTitle->Text = L"Target field";
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::LightGray;
			this->panel28->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel28->Location = System::Drawing::Point(0, 723);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(200, 1);
			this->panel28->TabIndex = 9;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel29->Controls->Add(this->SortPanelCancel);
			this->panel29->Controls->Add(this->SortPanelSort);
			this->panel29->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel29->Location = System::Drawing::Point(0, 724);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(200, 112);
			this->panel29->TabIndex = 8;
			// 
			// SortPanelCancel
			// 
			this->SortPanelCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->SortPanelCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortPanelCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortPanelCancel->Location = System::Drawing::Point(17, 61);
			this->SortPanelCancel->Name = L"SortPanelCancel";
			this->SortPanelCancel->Size = System::Drawing::Size(166, 42);
			this->SortPanelCancel->TabIndex = 10;
			this->SortPanelCancel->Text = L"Cancel";
			this->SortPanelCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SortPanelCancel->Click += gcnew System::EventHandler(this, &MyForm::SortPanelCancel_Click);
			this->SortPanelCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->SortPanelCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// SortPanelSort
			// 
			this->SortPanelSort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->SortPanelSort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortPanelSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortPanelSort->Location = System::Drawing::Point(17, 9);
			this->SortPanelSort->Name = L"SortPanelSort";
			this->SortPanelSort->Size = System::Drawing::Size(166, 42);
			this->SortPanelSort->TabIndex = 8;
			this->SortPanelSort->Text = L"Sort";
			this->SortPanelSort->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SortPanelSort->Click += gcnew System::EventHandler(this, &MyForm::SortPanelSort_Click);
			this->SortPanelSort->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->SortPanelSort->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// TargetFieldTB
			// 
			this->TargetFieldTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TargetFieldTB->Location = System::Drawing::Point(16, 80);
			this->TargetFieldTB->Name = L"TargetFieldTB";
			this->TargetFieldTB->Size = System::Drawing::Size(166, 22);
			this->TargetFieldTB->TabIndex = 3;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::LightGray;
			this->panel30->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel30->Location = System::Drawing::Point(0, 42);
			this->panel30->Margin = System::Windows::Forms::Padding(0);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(200, 1);
			this->panel30->TabIndex = 2;
			// 
			// SortPanelTitle
			// 
			this->SortPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->SortPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SortPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->SortPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SortPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->SortPanelTitle->Location = System::Drawing::Point(0, 0);
			this->SortPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->SortPanelTitle->Name = L"SortPanelTitle";
			this->SortPanelTitle->Size = System::Drawing::Size(200, 42);
			this->SortPanelTitle->TabIndex = 1;
			this->SortPanelTitle->Text = L"Sorting";
			this->SortPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FindPanel
			// 
			this->FindPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->FindPanel->Controls->Add(this->FindNext);
			this->FindPanel->Controls->Add(this->FindableTitle);
			this->FindPanel->Controls->Add(this->panel32);
			this->FindPanel->Controls->Add(this->panel33);
			this->FindPanel->Controls->Add(this->FindableTB);
			this->FindPanel->Controls->Add(this->panel34);
			this->FindPanel->Controls->Add(this->FindPanelTitle);
			this->FindPanel->Location = System::Drawing::Point(0, 0);
			this->FindPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->FindPanel->Name = L"FindPanel";
			this->FindPanel->Size = System::Drawing::Size(200, 836);
			this->FindPanel->TabIndex = 16;
			this->FindPanel->Visible = false;
			// 
			// FindNext
			// 
			this->FindNext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->FindNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FindNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindNext->Location = System::Drawing::Point(17, 714);
			this->FindNext->Name = L"FindNext";
			this->FindNext->Size = System::Drawing::Size(166, 42);
			this->FindNext->TabIndex = 14;
			this->FindNext->Text = L"Find next";
			this->FindNext->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->FindNext->Click += gcnew System::EventHandler(this, &MyForm::FindNext_Click);
			this->FindNext->MouseEnter += gcnew System::EventHandler(this, &MyForm::MoveToEnd_MouseEnter);
			this->FindNext->MouseLeave += gcnew System::EventHandler(this, &MyForm::MoveToEnd_MouseLeave);
			// 
			// FindableTitle
			// 
			this->FindableTitle->AutoSize = true;
			this->FindableTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindableTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->FindableTitle->Location = System::Drawing::Point(17, 55);
			this->FindableTitle->Name = L"FindableTitle";
			this->FindableTitle->Size = System::Drawing::Size(78, 20);
			this->FindableTitle->TabIndex = 12;
			this->FindableTitle->Text = L"Findable";
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::LightGray;
			this->panel32->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel32->Location = System::Drawing::Point(0, 767);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(200, 1);
			this->panel32->TabIndex = 9;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel33->Controls->Add(this->FindPanelConfirm);
			this->panel33->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel33->Location = System::Drawing::Point(0, 768);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(200, 68);
			this->panel33->TabIndex = 8;
			// 
			// FindPanelConfirm
			// 
			this->FindPanelConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->FindPanelConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FindPanelConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindPanelConfirm->Location = System::Drawing::Point(17, 9);
			this->FindPanelConfirm->Name = L"FindPanelConfirm";
			this->FindPanelConfirm->Size = System::Drawing::Size(166, 42);
			this->FindPanelConfirm->TabIndex = 8;
			this->FindPanelConfirm->Text = L"Confirm";
			this->FindPanelConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->FindPanelConfirm->Click += gcnew System::EventHandler(this, &MyForm::FindPanelConfirm_Click);
			this->FindPanelConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->FindPanelConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// FindableTB
			// 
			this->FindableTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindableTB->Location = System::Drawing::Point(16, 80);
			this->FindableTB->Name = L"FindableTB";
			this->FindableTB->Size = System::Drawing::Size(166, 22);
			this->FindableTB->TabIndex = 3;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::LightGray;
			this->panel34->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel34->Location = System::Drawing::Point(0, 42);
			this->panel34->Margin = System::Windows::Forms::Padding(0);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(200, 1);
			this->panel34->TabIndex = 2;
			// 
			// FindPanelTitle
			// 
			this->FindPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->FindPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FindPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->FindPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FindPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->FindPanelTitle->Location = System::Drawing::Point(0, 0);
			this->FindPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->FindPanelTitle->Name = L"FindPanelTitle";
			this->FindPanelTitle->Size = System::Drawing::Size(200, 42);
			this->FindPanelTitle->TabIndex = 1;
			this->FindPanelTitle->Text = L"Find cell";
			this->FindPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RowEditModePanel
			// 
			this->RowEditModePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->RowEditModePanel->Controls->Add(this->panel25);
			this->RowEditModePanel->Controls->Add(this->panel26);
			this->RowEditModePanel->Controls->Add(this->panel27);
			this->RowEditModePanel->Controls->Add(this->RowEditModePanelTitle);
			this->RowEditModePanel->Location = System::Drawing::Point(0, 0);
			this->RowEditModePanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->RowEditModePanel->Name = L"RowEditModePanel";
			this->RowEditModePanel->Size = System::Drawing::Size(200, 836);
			this->RowEditModePanel->TabIndex = 16;
			this->RowEditModePanel->Visible = false;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::LightGray;
			this->panel25->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel25->Location = System::Drawing::Point(0, 767);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(200, 1);
			this->panel25->TabIndex = 9;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel26->Controls->Add(this->RowEditModeConfirm);
			this->panel26->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel26->Location = System::Drawing::Point(0, 768);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(200, 68);
			this->panel26->TabIndex = 8;
			// 
			// RowEditModeConfirm
			// 
			this->RowEditModeConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->RowEditModeConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RowEditModeConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RowEditModeConfirm->Location = System::Drawing::Point(14, 8);
			this->RowEditModeConfirm->Name = L"RowEditModeConfirm";
			this->RowEditModeConfirm->Size = System::Drawing::Size(166, 42);
			this->RowEditModeConfirm->TabIndex = 8;
			this->RowEditModeConfirm->Text = L"Confirm";
			this->RowEditModeConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RowEditModeConfirm->Click += gcnew System::EventHandler(this, &MyForm::RowEditModeConfirm_Click);
			this->RowEditModeConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->RowEditModeConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::LightGray;
			this->panel27->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel27->Location = System::Drawing::Point(0, 42);
			this->panel27->Margin = System::Windows::Forms::Padding(0);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(200, 1);
			this->panel27->TabIndex = 2;
			// 
			// RowEditModePanelTitle
			// 
			this->RowEditModePanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->RowEditModePanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RowEditModePanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->RowEditModePanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RowEditModePanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RowEditModePanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->RowEditModePanelTitle->Location = System::Drawing::Point(0, 0);
			this->RowEditModePanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->RowEditModePanelTitle->Name = L"RowEditModePanelTitle";
			this->RowEditModePanelTitle->Size = System::Drawing::Size(200, 42);
			this->RowEditModePanelTitle->TabIndex = 1;
			this->RowEditModePanelTitle->Text = L"Row edit mode";
			this->RowEditModePanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MoveRecordBeforePanel
			// 
			this->MoveRecordBeforePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->MoveRecordBeforePanel->Controls->Add(this->MoveRecordToEnd);
			this->MoveRecordBeforePanel->Controls->Add(this->MoveRecordBeforeTB);
			this->MoveRecordBeforePanel->Controls->Add(this->IndexOfMovableRecordLabel);
			this->MoveRecordBeforePanel->Controls->Add(this->panel19);
			this->MoveRecordBeforePanel->Controls->Add(this->panel20);
			this->MoveRecordBeforePanel->Controls->Add(this->MoveRecordBeforeLabel);
			this->MoveRecordBeforePanel->Controls->Add(this->IndexOfMovableRecordTB);
			this->MoveRecordBeforePanel->Controls->Add(this->panel21);
			this->MoveRecordBeforePanel->Controls->Add(this->MoveRecordBeforePanelTitle);
			this->MoveRecordBeforePanel->Location = System::Drawing::Point(0, 0);
			this->MoveRecordBeforePanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->MoveRecordBeforePanel->Name = L"MoveRecordBeforePanel";
			this->MoveRecordBeforePanel->Size = System::Drawing::Size(200, 836);
			this->MoveRecordBeforePanel->TabIndex = 15;
			this->MoveRecordBeforePanel->Visible = false;
			// 
			// MoveRecordToEnd
			// 
			this->MoveRecordToEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->MoveRecordToEnd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveRecordToEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MoveRecordToEnd->Location = System::Drawing::Point(17, 670);
			this->MoveRecordToEnd->Name = L"MoveRecordToEnd";
			this->MoveRecordToEnd->Size = System::Drawing::Size(166, 42);
			this->MoveRecordToEnd->TabIndex = 14;
			this->MoveRecordToEnd->Text = L"Move to end";
			this->MoveRecordToEnd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MoveRecordToEnd->Click += gcnew System::EventHandler(this, &MyForm::MoveRecordToEnd_Click);
			this->MoveRecordToEnd->MouseEnter += gcnew System::EventHandler(this, &MyForm::MoveToEnd_MouseEnter);
			this->MoveRecordToEnd->MouseLeave += gcnew System::EventHandler(this, &MyForm::MoveToEnd_MouseLeave);
			// 
			// MoveRecordBeforeTB
			// 
			this->MoveRecordBeforeTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MoveRecordBeforeTB->Location = System::Drawing::Point(16, 137);
			this->MoveRecordBeforeTB->Name = L"MoveRecordBeforeTB";
			this->MoveRecordBeforeTB->Size = System::Drawing::Size(166, 22);
			this->MoveRecordBeforeTB->TabIndex = 13;
			// 
			// IndexOfMovableRecordLabel
			// 
			this->IndexOfMovableRecordLabel->AutoSize = true;
			this->IndexOfMovableRecordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IndexOfMovableRecordLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->IndexOfMovableRecordLabel->Location = System::Drawing::Point(17, 55);
			this->IndexOfMovableRecordLabel->Name = L"IndexOfMovableRecordLabel";
			this->IndexOfMovableRecordLabel->Size = System::Drawing::Size(168, 20);
			this->IndexOfMovableRecordLabel->TabIndex = 12;
			this->IndexOfMovableRecordLabel->Text = L"Title of movable row";
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::LightGray;
			this->panel19->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel19->Location = System::Drawing::Point(0, 723);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(200, 1);
			this->panel19->TabIndex = 9;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel20->Controls->Add(this->MoveRecordBeforeCancel);
			this->panel20->Controls->Add(this->MoveRecordBeforeConfirm);
			this->panel20->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel20->Location = System::Drawing::Point(0, 724);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(200, 112);
			this->panel20->TabIndex = 8;
			// 
			// MoveRecordBeforeCancel
			// 
			this->MoveRecordBeforeCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->MoveRecordBeforeCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveRecordBeforeCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MoveRecordBeforeCancel->Location = System::Drawing::Point(17, 61);
			this->MoveRecordBeforeCancel->Name = L"MoveRecordBeforeCancel";
			this->MoveRecordBeforeCancel->Size = System::Drawing::Size(166, 42);
			this->MoveRecordBeforeCancel->TabIndex = 9;
			this->MoveRecordBeforeCancel->Text = L"Cancel";
			this->MoveRecordBeforeCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MoveRecordBeforeCancel->Click += gcnew System::EventHandler(this, &MyForm::MoveRecordBeforeCancel_Click);
			this->MoveRecordBeforeCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->MoveRecordBeforeCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// MoveRecordBeforeConfirm
			// 
			this->MoveRecordBeforeConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->MoveRecordBeforeConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveRecordBeforeConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MoveRecordBeforeConfirm->Location = System::Drawing::Point(17, 9);
			this->MoveRecordBeforeConfirm->Name = L"MoveRecordBeforeConfirm";
			this->MoveRecordBeforeConfirm->Size = System::Drawing::Size(166, 42);
			this->MoveRecordBeforeConfirm->TabIndex = 8;
			this->MoveRecordBeforeConfirm->Text = L"Confirm";
			this->MoveRecordBeforeConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MoveRecordBeforeConfirm->Click += gcnew System::EventHandler(this, &MyForm::MoveRecordBeforeConfirm_Click);
			this->MoveRecordBeforeConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->MoveRecordBeforeConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// MoveRecordBeforeLabel
			// 
			this->MoveRecordBeforeLabel->AutoSize = true;
			this->MoveRecordBeforeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MoveRecordBeforeLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->MoveRecordBeforeLabel->Location = System::Drawing::Point(12, 114);
			this->MoveRecordBeforeLabel->Name = L"MoveRecordBeforeLabel";
			this->MoveRecordBeforeLabel->Size = System::Drawing::Size(108, 20);
			this->MoveRecordBeforeLabel->TabIndex = 4;
			this->MoveRecordBeforeLabel->Text = L"Move before";
			// 
			// IndexOfMovableRecordTB
			// 
			this->IndexOfMovableRecordTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IndexOfMovableRecordTB->Location = System::Drawing::Point(16, 80);
			this->IndexOfMovableRecordTB->Name = L"IndexOfMovableRecordTB";
			this->IndexOfMovableRecordTB->Size = System::Drawing::Size(166, 22);
			this->IndexOfMovableRecordTB->TabIndex = 3;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::LightGray;
			this->panel21->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel21->Location = System::Drawing::Point(0, 42);
			this->panel21->Margin = System::Windows::Forms::Padding(0);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(200, 1);
			this->panel21->TabIndex = 2;
			// 
			// MoveRecordBeforePanelTitle
			// 
			this->MoveRecordBeforePanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->MoveRecordBeforePanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MoveRecordBeforePanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->MoveRecordBeforePanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MoveRecordBeforePanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MoveRecordBeforePanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->MoveRecordBeforePanelTitle->Location = System::Drawing::Point(0, 0);
			this->MoveRecordBeforePanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->MoveRecordBeforePanelTitle->Name = L"MoveRecordBeforePanelTitle";
			this->MoveRecordBeforePanelTitle->Size = System::Drawing::Size(200, 42);
			this->MoveRecordBeforePanelTitle->TabIndex = 1;
			this->MoveRecordBeforePanelTitle->Text = L"Move row before";
			this->MoveRecordBeforePanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MoveFieldBeforePanel
			// 
			this->MoveFieldBeforePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->MoveFieldBeforePanel->Controls->Add(this->MoveFieldToEnd);
			this->MoveFieldBeforePanel->Controls->Add(this->MoveFieldBeforeTB);
			this->MoveFieldBeforePanel->Controls->Add(this->TitleOfMovableLabel);
			this->MoveFieldBeforePanel->Controls->Add(this->panel16);
			this->MoveFieldBeforePanel->Controls->Add(this->panel17);
			this->MoveFieldBeforePanel->Controls->Add(this->MoveFieldBeforeLabel);
			this->MoveFieldBeforePanel->Controls->Add(this->TitleOfMovableFieldTB);
			this->MoveFieldBeforePanel->Controls->Add(this->panel18);
			this->MoveFieldBeforePanel->Controls->Add(this->MoveFieldBeforePanelTitle);
			this->MoveFieldBeforePanel->Location = System::Drawing::Point(0, 0);
			this->MoveFieldBeforePanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->MoveFieldBeforePanel->Name = L"MoveFieldBeforePanel";
			this->MoveFieldBeforePanel->Size = System::Drawing::Size(200, 836);
			this->MoveFieldBeforePanel->TabIndex = 13;
			this->MoveFieldBeforePanel->Visible = false;
			// 
			// MoveFieldToEnd
			// 
			this->MoveFieldToEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->MoveFieldToEnd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveFieldToEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MoveFieldToEnd->Location = System::Drawing::Point(17, 670);
			this->MoveFieldToEnd->Name = L"MoveFieldToEnd";
			this->MoveFieldToEnd->Size = System::Drawing::Size(166, 42);
			this->MoveFieldToEnd->TabIndex = 14;
			this->MoveFieldToEnd->Text = L"Move to end";
			this->MoveFieldToEnd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MoveFieldToEnd->Click += gcnew System::EventHandler(this, &MyForm::MoveFieldBeforeToEnd_Click);
			this->MoveFieldToEnd->MouseEnter += gcnew System::EventHandler(this, &MyForm::MoveToEnd_MouseEnter);
			this->MoveFieldToEnd->MouseLeave += gcnew System::EventHandler(this, &MyForm::MoveToEnd_MouseLeave);
			// 
			// MoveFieldBeforeTB
			// 
			this->MoveFieldBeforeTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MoveFieldBeforeTB->Location = System::Drawing::Point(16, 137);
			this->MoveFieldBeforeTB->Name = L"MoveFieldBeforeTB";
			this->MoveFieldBeforeTB->Size = System::Drawing::Size(166, 22);
			this->MoveFieldBeforeTB->TabIndex = 13;
			// 
			// TitleOfMovableLabel
			// 
			this->TitleOfMovableLabel->AutoSize = true;
			this->TitleOfMovableLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TitleOfMovableLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->TitleOfMovableLabel->Location = System::Drawing::Point(17, 55);
			this->TitleOfMovableLabel->Name = L"TitleOfMovableLabel";
			this->TitleOfMovableLabel->Size = System::Drawing::Size(174, 20);
			this->TitleOfMovableLabel->TabIndex = 12;
			this->TitleOfMovableLabel->Text = L"Title of movable field";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::LightGray;
			this->panel16->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel16->Location = System::Drawing::Point(0, 723);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(200, 1);
			this->panel16->TabIndex = 9;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel17->Controls->Add(this->MoveFieldBeforeCancel);
			this->panel17->Controls->Add(this->MoveFieldBeforeConfirm);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel17->Location = System::Drawing::Point(0, 724);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(200, 112);
			this->panel17->TabIndex = 8;
			// 
			// MoveFieldBeforeCancel
			// 
			this->MoveFieldBeforeCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->MoveFieldBeforeCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveFieldBeforeCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MoveFieldBeforeCancel->Location = System::Drawing::Point(17, 61);
			this->MoveFieldBeforeCancel->Name = L"MoveFieldBeforeCancel";
			this->MoveFieldBeforeCancel->Size = System::Drawing::Size(166, 42);
			this->MoveFieldBeforeCancel->TabIndex = 9;
			this->MoveFieldBeforeCancel->Text = L"Cancel";
			this->MoveFieldBeforeCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MoveFieldBeforeCancel->Click += gcnew System::EventHandler(this, &MyForm::MoveFieldBeforeCancel_Click);
			this->MoveFieldBeforeCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->MoveFieldBeforeCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// MoveFieldBeforeConfirm
			// 
			this->MoveFieldBeforeConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->MoveFieldBeforeConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveFieldBeforeConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MoveFieldBeforeConfirm->Location = System::Drawing::Point(17, 9);
			this->MoveFieldBeforeConfirm->Name = L"MoveFieldBeforeConfirm";
			this->MoveFieldBeforeConfirm->Size = System::Drawing::Size(166, 42);
			this->MoveFieldBeforeConfirm->TabIndex = 8;
			this->MoveFieldBeforeConfirm->Text = L"Confirm";
			this->MoveFieldBeforeConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MoveFieldBeforeConfirm->Click += gcnew System::EventHandler(this, &MyForm::MoveFieldBeforeConfirm_Click);
			this->MoveFieldBeforeConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->MoveFieldBeforeConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// MoveFieldBeforeLabel
			// 
			this->MoveFieldBeforeLabel->AutoSize = true;
			this->MoveFieldBeforeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MoveFieldBeforeLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->MoveFieldBeforeLabel->Location = System::Drawing::Point(12, 114);
			this->MoveFieldBeforeLabel->Name = L"MoveFieldBeforeLabel";
			this->MoveFieldBeforeLabel->Size = System::Drawing::Size(108, 20);
			this->MoveFieldBeforeLabel->TabIndex = 4;
			this->MoveFieldBeforeLabel->Text = L"Move before";
			// 
			// TitleOfMovableFieldTB
			// 
			this->TitleOfMovableFieldTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->TitleOfMovableFieldTB->Location = System::Drawing::Point(16, 80);
			this->TitleOfMovableFieldTB->Name = L"TitleOfMovableFieldTB";
			this->TitleOfMovableFieldTB->Size = System::Drawing::Size(166, 22);
			this->TitleOfMovableFieldTB->TabIndex = 3;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::LightGray;
			this->panel18->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel18->Location = System::Drawing::Point(0, 42);
			this->panel18->Margin = System::Windows::Forms::Padding(0);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(200, 1);
			this->panel18->TabIndex = 2;
			// 
			// MoveFieldBeforePanelTitle
			// 
			this->MoveFieldBeforePanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->MoveFieldBeforePanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MoveFieldBeforePanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->MoveFieldBeforePanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MoveFieldBeforePanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MoveFieldBeforePanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->MoveFieldBeforePanelTitle->Location = System::Drawing::Point(0, 0);
			this->MoveFieldBeforePanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->MoveFieldBeforePanelTitle->Name = L"MoveFieldBeforePanelTitle";
			this->MoveFieldBeforePanelTitle->Size = System::Drawing::Size(200, 42);
			this->MoveFieldBeforePanelTitle->TabIndex = 1;
			this->MoveFieldBeforePanelTitle->Text = L"Move field before";
			this->MoveFieldBeforePanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddFieldPanel
			// 
			this->AddFieldPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->AddFieldPanel->Controls->Add(this->AddFieldTitleLabel);
			this->AddFieldPanel->Controls->Add(this->panel6);
			this->AddFieldPanel->Controls->Add(this->panel5);
			this->AddFieldPanel->Controls->Add(this->TypeComboBox);
			this->AddFieldPanel->Controls->Add(this->label4);
			this->AddFieldPanel->Controls->Add(this->TitleTextBox);
			this->AddFieldPanel->Controls->Add(this->panel2);
			this->AddFieldPanel->Controls->Add(this->AddFieldPanelTitle);
			this->AddFieldPanel->Location = System::Drawing::Point(0, 0);
			this->AddFieldPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->AddFieldPanel->Name = L"AddFieldPanel";
			this->AddFieldPanel->Size = System::Drawing::Size(200, 836);
			this->AddFieldPanel->TabIndex = 4;
			this->AddFieldPanel->Visible = false;
			// 
			// AddFieldTitleLabel
			// 
			this->AddFieldTitleLabel->AutoSize = true;
			this->AddFieldTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddFieldTitleLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->AddFieldTitleLabel->Location = System::Drawing::Point(17, 55);
			this->AddFieldTitleLabel->Name = L"AddFieldTitleLabel";
			this->AddFieldTitleLabel->Size = System::Drawing::Size(43, 20);
			this->AddFieldTitleLabel->TabIndex = 12;
			this->AddFieldTitleLabel->Text = L"Title";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LightGray;
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(0, 723);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 1);
			this->panel6->TabIndex = 9;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel5->Controls->Add(this->AddFieldPanelCancel);
			this->panel5->Controls->Add(this->AddFieldPanelConfirm);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 724);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 112);
			this->panel5->TabIndex = 8;
			// 
			// AddFieldPanelCancel
			// 
			this->AddFieldPanelCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->AddFieldPanelCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddFieldPanelCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddFieldPanelCancel->Location = System::Drawing::Point(17, 61);
			this->AddFieldPanelCancel->Name = L"AddFieldPanelCancel";
			this->AddFieldPanelCancel->Size = System::Drawing::Size(166, 42);
			this->AddFieldPanelCancel->TabIndex = 9;
			this->AddFieldPanelCancel->Text = L"Cancel";
			this->AddFieldPanelCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddFieldPanelCancel->Click += gcnew System::EventHandler(this, &MyForm::AddFieldPanelCancel_Click);
			this->AddFieldPanelCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->AddFieldPanelCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// AddFieldPanelConfirm
			// 
			this->AddFieldPanelConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->AddFieldPanelConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddFieldPanelConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddFieldPanelConfirm->Location = System::Drawing::Point(17, 9);
			this->AddFieldPanelConfirm->Name = L"AddFieldPanelConfirm";
			this->AddFieldPanelConfirm->Size = System::Drawing::Size(166, 42);
			this->AddFieldPanelConfirm->TabIndex = 8;
			this->AddFieldPanelConfirm->Text = L"Confirm";
			this->AddFieldPanelConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddFieldPanelConfirm->Click += gcnew System::EventHandler(this, &MyForm::AddFieldPanelConfirm_Click);
			this->AddFieldPanelConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->AddFieldPanelConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// TypeComboBox
			// 
			this->TypeComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TypeComboBox->FormattingEnabled = true;
			this->TypeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Date", L"Day", L"Number", L"Text", L"Time" });
			this->TypeComboBox->Location = System::Drawing::Point(16, 138);
			this->TypeComboBox->Name = L"TypeComboBox";
			this->TypeComboBox->Size = System::Drawing::Size(166, 21);
			this->TypeComboBox->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label4->Location = System::Drawing::Point(12, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Data type";
			// 
			// TitleTextBox
			// 
			this->TitleTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TitleTextBox->Location = System::Drawing::Point(16, 80);
			this->TitleTextBox->Name = L"TitleTextBox";
			this->TitleTextBox->Size = System::Drawing::Size(166, 22);
			this->TitleTextBox->TabIndex = 3;
			this->TitleTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::TitleTextBox_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 42);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 1);
			this->panel2->TabIndex = 2;
			// 
			// AddFieldPanelTitle
			// 
			this->AddFieldPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->AddFieldPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddFieldPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->AddFieldPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddFieldPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddFieldPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->AddFieldPanelTitle->Location = System::Drawing::Point(0, 0);
			this->AddFieldPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->AddFieldPanelTitle->Name = L"AddFieldPanelTitle";
			this->AddFieldPanelTitle->Size = System::Drawing::Size(200, 42);
			this->AddFieldPanelTitle->TabIndex = 1;
			this->AddFieldPanelTitle->Text = L"Adding field";
			this->AddFieldPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddRecordPanel
			// 
			this->AddRecordPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->AddRecordPanel->Controls->Add(this->TypesList);
			this->AddRecordPanel->Controls->Add(this->panel4);
			this->AddRecordPanel->Controls->Add(this->panel7);
			this->AddRecordPanel->Controls->Add(this->panel8);
			this->AddRecordPanel->Controls->Add(this->AddRecordPanelTitle);
			this->AddRecordPanel->Controls->Add(this->TypeValidationLabel);
			this->AddRecordPanel->Location = System::Drawing::Point(0, 0);
			this->AddRecordPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->AddRecordPanel->Name = L"AddRecordPanel";
			this->AddRecordPanel->Size = System::Drawing::Size(200, 836);
			this->AddRecordPanel->TabIndex = 10;
			this->AddRecordPanel->Visible = false;
			// 
			// TypesList
			// 
			this->TypesList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->TypesList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TypesList->FormattingEnabled = true;
			this->TypesList->Location = System::Drawing::Point(16, 85);
			this->TypesList->Name = L"TypesList";
			this->TypesList->Size = System::Drawing::Size(120, 90);
			this->TypesList->TabIndex = 10;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightGray;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(0, 723);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 1);
			this->panel4->TabIndex = 9;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel7->Controls->Add(this->AddRecordPanelCancel);
			this->panel7->Controls->Add(this->AddRecordPanelConfirm);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(0, 724);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(200, 112);
			this->panel7->TabIndex = 8;
			// 
			// AddRecordPanelCancel
			// 
			this->AddRecordPanelCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->AddRecordPanelCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddRecordPanelCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddRecordPanelCancel->Location = System::Drawing::Point(17, 61);
			this->AddRecordPanelCancel->Name = L"AddRecordPanelCancel";
			this->AddRecordPanelCancel->Size = System::Drawing::Size(166, 42);
			this->AddRecordPanelCancel->TabIndex = 9;
			this->AddRecordPanelCancel->Text = L"Cancel";
			this->AddRecordPanelCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddRecordPanelCancel->Click += gcnew System::EventHandler(this, &MyForm::AddRecordPanelCancel_Click);
			this->AddRecordPanelCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->AddRecordPanelCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// AddRecordPanelConfirm
			// 
			this->AddRecordPanelConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->AddRecordPanelConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddRecordPanelConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddRecordPanelConfirm->Location = System::Drawing::Point(17, 9);
			this->AddRecordPanelConfirm->Name = L"AddRecordPanelConfirm";
			this->AddRecordPanelConfirm->Size = System::Drawing::Size(166, 42);
			this->AddRecordPanelConfirm->TabIndex = 8;
			this->AddRecordPanelConfirm->Text = L"Confirm";
			this->AddRecordPanelConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddRecordPanelConfirm->Click += gcnew System::EventHandler(this, &MyForm::AddRecordPanelConfirm_Click);
			this->AddRecordPanelConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->AddRecordPanelConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::LightGray;
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 42);
			this->panel8->Margin = System::Windows::Forms::Padding(0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(200, 1);
			this->panel8->TabIndex = 2;
			// 
			// AddRecordPanelTitle
			// 
			this->AddRecordPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->AddRecordPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddRecordPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->AddRecordPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddRecordPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddRecordPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->AddRecordPanelTitle->Location = System::Drawing::Point(0, 0);
			this->AddRecordPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->AddRecordPanelTitle->Name = L"AddRecordPanelTitle";
			this->AddRecordPanelTitle->Size = System::Drawing::Size(200, 42);
			this->AddRecordPanelTitle->TabIndex = 1;
			this->AddRecordPanelTitle->Text = L"Adding record";
			this->AddRecordPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TypeValidationLabel
			// 
			this->TypeValidationLabel->AutoSize = true;
			this->TypeValidationLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TypeValidationLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->TypeValidationLabel->Location = System::Drawing::Point(12, 57);
			this->TypeValidationLabel->Name = L"TypeValidationLabel";
			this->TypeValidationLabel->Size = System::Drawing::Size(128, 20);
			this->TypeValidationLabel->TabIndex = 0;
			this->TypeValidationLabel->Text = L"Type validation";
			// 
			// RemoveFieldPanel
			// 
			this->RemoveFieldPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->RemoveFieldPanel->Controls->Add(this->panel3);
			this->RemoveFieldPanel->Controls->Add(this->RemoveFieldDialogPanel);
			this->RemoveFieldPanel->Controls->Add(this->RemoveFieldTB);
			this->RemoveFieldPanel->Controls->Add(this->panel10);
			this->RemoveFieldPanel->Controls->Add(this->RemoveFieldPanelTitle);
			this->RemoveFieldPanel->Controls->Add(this->label9);
			this->RemoveFieldPanel->Location = System::Drawing::Point(0, 0);
			this->RemoveFieldPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->RemoveFieldPanel->Name = L"RemoveFieldPanel";
			this->RemoveFieldPanel->Size = System::Drawing::Size(200, 836);
			this->RemoveFieldPanel->TabIndex = 10;
			this->RemoveFieldPanel->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightGray;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 723);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 1);
			this->panel3->TabIndex = 9;
			// 
			// RemoveFieldDialogPanel
			// 
			this->RemoveFieldDialogPanel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->RemoveFieldDialogPanel->Controls->Add(this->RemoveFieldCancel);
			this->RemoveFieldDialogPanel->Controls->Add(this->RemoveFieldConfirm);
			this->RemoveFieldDialogPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->RemoveFieldDialogPanel->Location = System::Drawing::Point(0, 724);
			this->RemoveFieldDialogPanel->Name = L"RemoveFieldDialogPanel";
			this->RemoveFieldDialogPanel->Size = System::Drawing::Size(200, 112);
			this->RemoveFieldDialogPanel->TabIndex = 8;
			// 
			// RemoveFieldCancel
			// 
			this->RemoveFieldCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->RemoveFieldCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveFieldCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RemoveFieldCancel->Location = System::Drawing::Point(17, 61);
			this->RemoveFieldCancel->Name = L"RemoveFieldCancel";
			this->RemoveFieldCancel->Size = System::Drawing::Size(166, 42);
			this->RemoveFieldCancel->TabIndex = 9;
			this->RemoveFieldCancel->Text = L"Cancel";
			this->RemoveFieldCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RemoveFieldCancel->Click += gcnew System::EventHandler(this, &MyForm::RemoveFieldCancel_Click);
			this->RemoveFieldCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->RemoveFieldCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// RemoveFieldConfirm
			// 
			this->RemoveFieldConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->RemoveFieldConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveFieldConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RemoveFieldConfirm->Location = System::Drawing::Point(17, 9);
			this->RemoveFieldConfirm->Name = L"RemoveFieldConfirm";
			this->RemoveFieldConfirm->Size = System::Drawing::Size(166, 42);
			this->RemoveFieldConfirm->TabIndex = 8;
			this->RemoveFieldConfirm->Text = L"Confirm";
			this->RemoveFieldConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RemoveFieldConfirm->Click += gcnew System::EventHandler(this, &MyForm::RemoveFieldConfirm_Click);
			this->RemoveFieldConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->RemoveFieldConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// RemoveFieldTB
			// 
			this->RemoveFieldTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RemoveFieldTB->Location = System::Drawing::Point(16, 80);
			this->RemoveFieldTB->Name = L"RemoveFieldTB";
			this->RemoveFieldTB->Size = System::Drawing::Size(166, 22);
			this->RemoveFieldTB->TabIndex = 3;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::LightGray;
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(0, 42);
			this->panel10->Margin = System::Windows::Forms::Padding(0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(200, 1);
			this->panel10->TabIndex = 2;
			// 
			// RemoveFieldPanelTitle
			// 
			this->RemoveFieldPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->RemoveFieldPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RemoveFieldPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->RemoveFieldPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RemoveFieldPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RemoveFieldPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->RemoveFieldPanelTitle->Location = System::Drawing::Point(0, 0);
			this->RemoveFieldPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->RemoveFieldPanelTitle->Name = L"RemoveFieldPanelTitle";
			this->RemoveFieldPanelTitle->Size = System::Drawing::Size(200, 42);
			this->RemoveFieldPanelTitle->TabIndex = 1;
			this->RemoveFieldPanelTitle->Text = L"Remove field";
			this->RemoveFieldPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label9->Location = System::Drawing::Point(12, 57);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Column title";
			// 
			// RemoveRecordPanel
			// 
			this->RemoveRecordPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->RemoveRecordPanel->Controls->Add(this->label7);
			this->RemoveRecordPanel->Controls->Add(this->panel9);
			this->RemoveRecordPanel->Controls->Add(this->panel11);
			this->RemoveRecordPanel->Controls->Add(this->RemoveRecordTB);
			this->RemoveRecordPanel->Controls->Add(this->panel12);
			this->RemoveRecordPanel->Controls->Add(this->RemoveRecordPanelTitle);
			this->RemoveRecordPanel->Location = System::Drawing::Point(5, 3);
			this->RemoveRecordPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->RemoveRecordPanel->Name = L"RemoveRecordPanel";
			this->RemoveRecordPanel->Size = System::Drawing::Size(200, 836);
			this->RemoveRecordPanel->TabIndex = 10;
			this->RemoveRecordPanel->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label7->Location = System::Drawing::Point(17, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Data type";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::LightGray;
			this->panel9->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel9->Location = System::Drawing::Point(0, 723);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(200, 1);
			this->panel9->TabIndex = 9;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel11->Controls->Add(this->RemoveRecordCancel);
			this->panel11->Controls->Add(this->RemoveRecordConfirm);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel11->Location = System::Drawing::Point(0, 724);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(200, 112);
			this->panel11->TabIndex = 8;
			// 
			// RemoveRecordCancel
			// 
			this->RemoveRecordCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->RemoveRecordCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveRecordCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RemoveRecordCancel->Location = System::Drawing::Point(17, 61);
			this->RemoveRecordCancel->Name = L"RemoveRecordCancel";
			this->RemoveRecordCancel->Size = System::Drawing::Size(166, 42);
			this->RemoveRecordCancel->TabIndex = 9;
			this->RemoveRecordCancel->Text = L"Cancel";
			this->RemoveRecordCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RemoveRecordCancel->Click += gcnew System::EventHandler(this, &MyForm::RemoveRecordCancel_Click);
			this->RemoveRecordCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->RemoveRecordCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// RemoveRecordConfirm
			// 
			this->RemoveRecordConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->RemoveRecordConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveRecordConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RemoveRecordConfirm->Location = System::Drawing::Point(17, 9);
			this->RemoveRecordConfirm->Name = L"RemoveRecordConfirm";
			this->RemoveRecordConfirm->Size = System::Drawing::Size(166, 42);
			this->RemoveRecordConfirm->TabIndex = 8;
			this->RemoveRecordConfirm->Text = L"Confirm";
			this->RemoveRecordConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RemoveRecordConfirm->Click += gcnew System::EventHandler(this, &MyForm::RemoveRecordConfirm_Click);
			this->RemoveRecordConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->RemoveRecordConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// RemoveRecordTB
			// 
			this->RemoveRecordTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RemoveRecordTB->Location = System::Drawing::Point(16, 80);
			this->RemoveRecordTB->Name = L"RemoveRecordTB";
			this->RemoveRecordTB->Size = System::Drawing::Size(166, 22);
			this->RemoveRecordTB->TabIndex = 3;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::LightGray;
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 42);
			this->panel12->Margin = System::Windows::Forms::Padding(0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(200, 1);
			this->panel12->TabIndex = 2;
			// 
			// RemoveRecordPanelTitle
			// 
			this->RemoveRecordPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->RemoveRecordPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RemoveRecordPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->RemoveRecordPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RemoveRecordPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RemoveRecordPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->RemoveRecordPanelTitle->Location = System::Drawing::Point(0, 0);
			this->RemoveRecordPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->RemoveRecordPanelTitle->Name = L"RemoveRecordPanelTitle";
			this->RemoveRecordPanelTitle->Size = System::Drawing::Size(200, 42);
			this->RemoveRecordPanelTitle->TabIndex = 1;
			this->RemoveRecordPanelTitle->Text = L"Remove record";
			this->RemoveRecordPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SwapFieldsPanel
			// 
			this->SwapFieldsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->SwapFieldsPanel->Controls->Add(this->SwapFieldsPanelSTitleLabel);
			this->SwapFieldsPanel->Controls->Add(this->SwapFieldsPanelSTB);
			this->SwapFieldsPanel->Controls->Add(this->SwapFieldsPanelFTitleLabel);
			this->SwapFieldsPanel->Controls->Add(this->panel13);
			this->SwapFieldsPanel->Controls->Add(this->panel14);
			this->SwapFieldsPanel->Controls->Add(this->SwapFieldsPanelFTB);
			this->SwapFieldsPanel->Controls->Add(this->panel15);
			this->SwapFieldsPanel->Controls->Add(this->SwapFieldsPanelTitle);
			this->SwapFieldsPanel->Location = System::Drawing::Point(0, 0);
			this->SwapFieldsPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->SwapFieldsPanel->Name = L"SwapFieldsPanel";
			this->SwapFieldsPanel->Size = System::Drawing::Size(200, 836);
			this->SwapFieldsPanel->TabIndex = 13;
			this->SwapFieldsPanel->Visible = false;
			// 
			// SwapFieldsPanelSTitleLabel
			// 
			this->SwapFieldsPanelSTitleLabel->AutoSize = true;
			this->SwapFieldsPanelSTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapFieldsPanelSTitleLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->SwapFieldsPanelSTitleLabel->Location = System::Drawing::Point(17, 107);
			this->SwapFieldsPanelSTitleLabel->Name = L"SwapFieldsPanelSTitleLabel";
			this->SwapFieldsPanelSTitleLabel->Size = System::Drawing::Size(105, 20);
			this->SwapFieldsPanelSTitleLabel->TabIndex = 14;
			this->SwapFieldsPanelSTitleLabel->Text = L"Second title";
			// 
			// SwapFieldsPanelSTB
			// 
			this->SwapFieldsPanelSTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapFieldsPanelSTB->Location = System::Drawing::Point(16, 132);
			this->SwapFieldsPanelSTB->Name = L"SwapFieldsPanelSTB";
			this->SwapFieldsPanelSTB->Size = System::Drawing::Size(166, 22);
			this->SwapFieldsPanelSTB->TabIndex = 13;
			// 
			// SwapFieldsPanelFTitleLabel
			// 
			this->SwapFieldsPanelFTitleLabel->AutoSize = true;
			this->SwapFieldsPanelFTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapFieldsPanelFTitleLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->SwapFieldsPanelFTitleLabel->Location = System::Drawing::Point(17, 55);
			this->SwapFieldsPanelFTitleLabel->Name = L"SwapFieldsPanelFTitleLabel";
			this->SwapFieldsPanelFTitleLabel->Size = System::Drawing::Size(80, 20);
			this->SwapFieldsPanelFTitleLabel->TabIndex = 12;
			this->SwapFieldsPanelFTitleLabel->Text = L"First title";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::LightGray;
			this->panel13->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel13->Location = System::Drawing::Point(0, 723);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(200, 1);
			this->panel13->TabIndex = 9;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel14->Controls->Add(this->SwapFieldsCancel);
			this->panel14->Controls->Add(this->SwapFieldsConfirm);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel14->Location = System::Drawing::Point(0, 724);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(200, 112);
			this->panel14->TabIndex = 8;
			// 
			// SwapFieldsCancel
			// 
			this->SwapFieldsCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->SwapFieldsCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapFieldsCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SwapFieldsCancel->Location = System::Drawing::Point(17, 61);
			this->SwapFieldsCancel->Name = L"SwapFieldsCancel";
			this->SwapFieldsCancel->Size = System::Drawing::Size(166, 42);
			this->SwapFieldsCancel->TabIndex = 9;
			this->SwapFieldsCancel->Text = L"Cancel";
			this->SwapFieldsCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SwapFieldsCancel->Click += gcnew System::EventHandler(this, &MyForm::SwapFieldsCancel_Click);
			this->SwapFieldsCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->SwapFieldsCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// SwapFieldsConfirm
			// 
			this->SwapFieldsConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->SwapFieldsConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapFieldsConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SwapFieldsConfirm->Location = System::Drawing::Point(17, 9);
			this->SwapFieldsConfirm->Name = L"SwapFieldsConfirm";
			this->SwapFieldsConfirm->Size = System::Drawing::Size(166, 42);
			this->SwapFieldsConfirm->TabIndex = 8;
			this->SwapFieldsConfirm->Text = L"Confirm";
			this->SwapFieldsConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SwapFieldsConfirm->Click += gcnew System::EventHandler(this, &MyForm::SwapFieldsConfirm_Click);
			this->SwapFieldsConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->SwapFieldsConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// SwapFieldsPanelFTB
			// 
			this->SwapFieldsPanelFTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapFieldsPanelFTB->Location = System::Drawing::Point(16, 80);
			this->SwapFieldsPanelFTB->Name = L"SwapFieldsPanelFTB";
			this->SwapFieldsPanelFTB->Size = System::Drawing::Size(166, 22);
			this->SwapFieldsPanelFTB->TabIndex = 3;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::LightGray;
			this->panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel15->Location = System::Drawing::Point(0, 42);
			this->panel15->Margin = System::Windows::Forms::Padding(0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(200, 1);
			this->panel15->TabIndex = 2;
			// 
			// SwapFieldsPanelTitle
			// 
			this->SwapFieldsPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->SwapFieldsPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SwapFieldsPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->SwapFieldsPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SwapFieldsPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapFieldsPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->SwapFieldsPanelTitle->Location = System::Drawing::Point(0, 0);
			this->SwapFieldsPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->SwapFieldsPanelTitle->Name = L"SwapFieldsPanelTitle";
			this->SwapFieldsPanelTitle->Size = System::Drawing::Size(200, 42);
			this->SwapFieldsPanelTitle->TabIndex = 1;
			this->SwapFieldsPanelTitle->Text = L"Swap fields";
			this->SwapFieldsPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SwapRecordsPanel
			// 
			this->SwapRecordsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->SwapRecordsPanel->Controls->Add(this->SwapRecordsSecondLabel);
			this->SwapRecordsPanel->Controls->Add(this->SwapRecordsPanelSTB);
			this->SwapRecordsPanel->Controls->Add(this->SwapRecordsFirstLabel);
			this->SwapRecordsPanel->Controls->Add(this->panel22);
			this->SwapRecordsPanel->Controls->Add(this->panel23);
			this->SwapRecordsPanel->Controls->Add(this->SwapRecordsPanelFTB);
			this->SwapRecordsPanel->Controls->Add(this->panel24);
			this->SwapRecordsPanel->Controls->Add(this->SwapRecordsPanelTitle);
			this->SwapRecordsPanel->Location = System::Drawing::Point(0, 0);
			this->SwapRecordsPanel->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->SwapRecordsPanel->Name = L"SwapRecordsPanel";
			this->SwapRecordsPanel->Size = System::Drawing::Size(200, 836);
			this->SwapRecordsPanel->TabIndex = 13;
			this->SwapRecordsPanel->Visible = false;
			// 
			// SwapRecordsSecondLabel
			// 
			this->SwapRecordsSecondLabel->AutoSize = true;
			this->SwapRecordsSecondLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapRecordsSecondLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->SwapRecordsSecondLabel->Location = System::Drawing::Point(17, 107);
			this->SwapRecordsSecondLabel->Name = L"SwapRecordsSecondLabel";
			this->SwapRecordsSecondLabel->Size = System::Drawing::Size(117, 20);
			this->SwapRecordsSecondLabel->TabIndex = 14;
			this->SwapRecordsSecondLabel->Text = L"Second index";
			// 
			// SwapRecordsPanelSTB
			// 
			this->SwapRecordsPanelSTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapRecordsPanelSTB->Location = System::Drawing::Point(16, 132);
			this->SwapRecordsPanelSTB->Name = L"SwapRecordsPanelSTB";
			this->SwapRecordsPanelSTB->Size = System::Drawing::Size(166, 22);
			this->SwapRecordsPanelSTB->TabIndex = 13;
			// 
			// SwapRecordsFirstLabel
			// 
			this->SwapRecordsFirstLabel->AutoSize = true;
			this->SwapRecordsFirstLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SwapRecordsFirstLabel->ForeColor = System::Drawing::SystemColors::MenuText;
			this->SwapRecordsFirstLabel->Location = System::Drawing::Point(17, 55);
			this->SwapRecordsFirstLabel->Name = L"SwapRecordsFirstLabel";
			this->SwapRecordsFirstLabel->Size = System::Drawing::Size(92, 20);
			this->SwapRecordsFirstLabel->TabIndex = 12;
			this->SwapRecordsFirstLabel->Text = L"First index";
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::LightGray;
			this->panel22->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel22->Location = System::Drawing::Point(0, 723);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(200, 1);
			this->panel22->TabIndex = 9;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel23->Controls->Add(this->SwapRecordsPanelCancel);
			this->panel23->Controls->Add(this->SwapRecordsPanelConfirm);
			this->panel23->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel23->Location = System::Drawing::Point(0, 724);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(200, 112);
			this->panel23->TabIndex = 8;
			// 
			// SwapRecordsPanelCancel
			// 
			this->SwapRecordsPanelCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->SwapRecordsPanelCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapRecordsPanelCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapRecordsPanelCancel->Location = System::Drawing::Point(17, 61);
			this->SwapRecordsPanelCancel->Name = L"SwapRecordsPanelCancel";
			this->SwapRecordsPanelCancel->Size = System::Drawing::Size(166, 42);
			this->SwapRecordsPanelCancel->TabIndex = 9;
			this->SwapRecordsPanelCancel->Text = L"Cancel";
			this->SwapRecordsPanelCancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SwapRecordsPanelCancel->Click += gcnew System::EventHandler(this, &MyForm::SwapRecordsCancel_Click);
			this->SwapRecordsPanelCancel->MouseEnter += gcnew System::EventHandler(this, &MyForm::Cancel_MouseEnter);
			this->SwapRecordsPanelCancel->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancel_MouseLeave);
			// 
			// SwapRecordsPanelConfirm
			// 
			this->SwapRecordsPanelConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->SwapRecordsPanelConfirm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapRecordsPanelConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapRecordsPanelConfirm->Location = System::Drawing::Point(17, 9);
			this->SwapRecordsPanelConfirm->Name = L"SwapRecordsPanelConfirm";
			this->SwapRecordsPanelConfirm->Size = System::Drawing::Size(166, 42);
			this->SwapRecordsPanelConfirm->TabIndex = 8;
			this->SwapRecordsPanelConfirm->Text = L"Confirm";
			this->SwapRecordsPanelConfirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SwapRecordsPanelConfirm->Click += gcnew System::EventHandler(this, &MyForm::SwapRecordsConfirm_Click);
			this->SwapRecordsPanelConfirm->MouseEnter += gcnew System::EventHandler(this, &MyForm::Confirm_MouseEnter);
			this->SwapRecordsPanelConfirm->MouseLeave += gcnew System::EventHandler(this, &MyForm::Confirm_MouseLeave);
			// 
			// SwapRecordsPanelFTB
			// 
			this->SwapRecordsPanelFTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapRecordsPanelFTB->Location = System::Drawing::Point(16, 80);
			this->SwapRecordsPanelFTB->Name = L"SwapRecordsPanelFTB";
			this->SwapRecordsPanelFTB->Size = System::Drawing::Size(166, 22);
			this->SwapRecordsPanelFTB->TabIndex = 3;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::LightGray;
			this->panel24->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel24->Location = System::Drawing::Point(0, 42);
			this->panel24->Margin = System::Windows::Forms::Padding(0);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(200, 1);
			this->panel24->TabIndex = 2;
			// 
			// SwapRecordsPanelTitle
			// 
			this->SwapRecordsPanelTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->SwapRecordsPanelTitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SwapRecordsPanelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->SwapRecordsPanelTitle->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SwapRecordsPanelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SwapRecordsPanelTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->SwapRecordsPanelTitle->Location = System::Drawing::Point(0, 0);
			this->SwapRecordsPanelTitle->Margin = System::Windows::Forms::Padding(3);
			this->SwapRecordsPanelTitle->Name = L"SwapRecordsPanelTitle";
			this->SwapRecordsPanelTitle->Size = System::Drawing::Size(200, 42);
			this->SwapRecordsPanelTitle->TabIndex = 1;
			this->SwapRecordsPanelTitle->Text = L"Swap records";
			this->SwapRecordsPanelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddRecordPictureBox
			// 
			this->AddRecordPictureBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AddRecordPictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddRecordPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddRecordPictureBox.Image")));
			this->AddRecordPictureBox->Location = System::Drawing::Point(202, 778);
			this->AddRecordPictureBox->Margin = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->AddRecordPictureBox->Name = L"AddRecordPictureBox";
			this->AddRecordPictureBox->Size = System::Drawing::Size(1269, 30);
			this->AddRecordPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->AddRecordPictureBox->TabIndex = 1;
			this->AddRecordPictureBox->TabStop = false;
			this->AddRecordPictureBox->Click += gcnew System::EventHandler(this, &MyForm::AddRecordPictureBox_Click);
			this->AddRecordPictureBox->MouseEnter += gcnew System::EventHandler(this, &MyForm::AddPictureBox_MouseEnter);
			this->AddRecordPictureBox->MouseLeave += gcnew System::EventHandler(this, &MyForm::AddPictureBox_MouseLeave);
			// 
			// AddFieldPictureBox
			// 
			this->AddFieldPictureBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AddFieldPictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddFieldPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddFieldPictureBox.Image")));
			this->AddFieldPictureBox->Location = System::Drawing::Point(1472, 2);
			this->AddFieldPictureBox->Margin = System::Windows::Forms::Padding(0, 2, 0, 0);
			this->AddFieldPictureBox->Name = L"AddFieldPictureBox";
			this->AddFieldPictureBox->Size = System::Drawing::Size(30, 775);
			this->AddFieldPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->AddFieldPictureBox->TabIndex = 0;
			this->AddFieldPictureBox->TabStop = false;
			this->AddFieldPictureBox->Click += gcnew System::EventHandler(this, &MyForm::AddFieldPictureBox_Click);
			this->AddFieldPictureBox->MouseEnter += gcnew System::EventHandler(this, &MyForm::AddPictureBox_MouseEnter);
			this->AddFieldPictureBox->MouseLeave += gcnew System::EventHandler(this, &MyForm::AddPictureBox_MouseLeave);
			// 
			// TopControlPanel
			// 
			this->TopControlPanel->Controls->Add(this->InfoButton);
			this->TopControlPanel->Controls->Add(this->TopHintLabel);
			this->TopControlPanel->Controls->Add(this->Separator6);
			this->TopControlPanel->Controls->Add(this->Filter);
			this->TopControlPanel->Controls->Add(this->Sort);
			this->TopControlPanel->Controls->Add(this->Find);
			this->TopControlPanel->Controls->Add(this->Separator5);
			this->TopControlPanel->Controls->Add(this->RowEditMode);
			this->TopControlPanel->Controls->Add(this->Separator4);
			this->TopControlPanel->Controls->Add(this->MoveRecordBefore);
			this->TopControlPanel->Controls->Add(this->SwapRecords);
			this->TopControlPanel->Controls->Add(this->RemoveRecord);
			this->TopControlPanel->Controls->Add(this->AddRecord);
			this->TopControlPanel->Controls->Add(this->Separator3);
			this->TopControlPanel->Controls->Add(this->MoveFieldBefore);
			this->TopControlPanel->Controls->Add(this->SwapFields);
			this->TopControlPanel->Controls->Add(this->RemoveField);
			this->TopControlPanel->Controls->Add(this->AddField);
			this->TopControlPanel->Controls->Add(this->Separator2);
			this->TopControlPanel->Controls->Add(this->ReloadDB);
			this->TopControlPanel->Controls->Add(this->Separator1);
			this->TopControlPanel->Controls->Add(this->OpenDB);
			this->TopControlPanel->Controls->Add(this->SaveDB);
			this->TopControlPanel->Controls->Add(this->NewDB);
			this->TopControlPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->TopControlPanel->Location = System::Drawing::Point(0, 0);
			this->TopControlPanel->Name = L"TopControlPanel";
			this->TopControlPanel->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->TopControlPanel->Size = System::Drawing::Size(1500, 30);
			this->TopControlPanel->TabIndex = 1;
			// 
			// InfoButton
			// 
			this->InfoButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->InfoButton->Dock = System::Windows::Forms::DockStyle::Right;
			this->InfoButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"InfoButton.Image")));
			this->InfoButton->Location = System::Drawing::Point(1470, 0);
			this->InfoButton->Name = L"InfoButton";
			this->InfoButton->Size = System::Drawing::Size(30, 30);
			this->InfoButton->TabIndex = 26;
			this->InfoButton->TabStop = false;
			this->InfoButton->Click += gcnew System::EventHandler(this, &MyForm::InfoButton_Click);
			// 
			// TopHintLabel
			// 
			this->TopHintLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->TopHintLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TopHintLabel->Location = System::Drawing::Point(603, 0);
			this->TopHintLabel->Name = L"TopHintLabel";
			this->TopHintLabel->Size = System::Drawing::Size(945, 30);
			this->TopHintLabel->TabIndex = 28;
			this->TopHintLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Separator6
			// 
			this->Separator6->Dock = System::Windows::Forms::DockStyle::Left;
			this->Separator6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separator6.Image")));
			this->Separator6->Location = System::Drawing::Point(593, 0);
			this->Separator6->Name = L"Separator6";
			this->Separator6->Size = System::Drawing::Size(10, 30);
			this->Separator6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Separator6->TabIndex = 34;
			this->Separator6->TabStop = false;
			// 
			// Filter
			// 
			this->Filter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Filter->Dock = System::Windows::Forms::DockStyle::Left;
			this->Filter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Filter.Image")));
			this->Filter->Location = System::Drawing::Point(563, 0);
			this->Filter->Name = L"Filter";
			this->Filter->Size = System::Drawing::Size(30, 30);
			this->Filter->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Filter->TabIndex = 32;
			this->Filter->TabStop = false;
			this->Filter->Click += gcnew System::EventHandler(this, &MyForm::Filter_Click);
			this->Filter->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->Filter->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// Sort
			// 
			this->Sort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sort->Dock = System::Windows::Forms::DockStyle::Left;
			this->Sort->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sort.Image")));
			this->Sort->Location = System::Drawing::Point(533, 0);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(30, 30);
			this->Sort->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Sort->TabIndex = 31;
			this->Sort->TabStop = false;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::Sort_Click);
			this->Sort->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->Sort->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// Find
			// 
			this->Find->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Find->Dock = System::Windows::Forms::DockStyle::Left;
			this->Find->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Find.Image")));
			this->Find->Location = System::Drawing::Point(503, 0);
			this->Find->Name = L"Find";
			this->Find->Size = System::Drawing::Size(30, 30);
			this->Find->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Find->TabIndex = 30;
			this->Find->TabStop = false;
			this->Find->Click += gcnew System::EventHandler(this, &MyForm::Find_Click);
			this->Find->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->Find->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// Separator5
			// 
			this->Separator5->Dock = System::Windows::Forms::DockStyle::Left;
			this->Separator5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separator5.Image")));
			this->Separator5->Location = System::Drawing::Point(493, 0);
			this->Separator5->Name = L"Separator5";
			this->Separator5->Size = System::Drawing::Size(10, 30);
			this->Separator5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Separator5->TabIndex = 33;
			this->Separator5->TabStop = false;
			// 
			// RowEditMode
			// 
			this->RowEditMode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RowEditMode->Dock = System::Windows::Forms::DockStyle::Left;
			this->RowEditMode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RowEditMode.Image")));
			this->RowEditMode->Location = System::Drawing::Point(405, 0);
			this->RowEditMode->Name = L"RowEditMode";
			this->RowEditMode->Size = System::Drawing::Size(88, 30);
			this->RowEditMode->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->RowEditMode->TabIndex = 25;
			this->RowEditMode->TabStop = false;
			this->RowEditMode->Click += gcnew System::EventHandler(this, &MyForm::RowEditMode_Click);
			this->RowEditMode->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->RowEditMode->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// Separator4
			// 
			this->Separator4->Dock = System::Windows::Forms::DockStyle::Left;
			this->Separator4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separator4.Image")));
			this->Separator4->Location = System::Drawing::Point(395, 0);
			this->Separator4->Name = L"Separator4";
			this->Separator4->Size = System::Drawing::Size(10, 30);
			this->Separator4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Separator4->TabIndex = 27;
			this->Separator4->TabStop = false;
			// 
			// MoveRecordBefore
			// 
			this->MoveRecordBefore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveRecordBefore->Dock = System::Windows::Forms::DockStyle::Left;
			this->MoveRecordBefore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MoveRecordBefore.Image")));
			this->MoveRecordBefore->Location = System::Drawing::Point(365, 0);
			this->MoveRecordBefore->Name = L"MoveRecordBefore";
			this->MoveRecordBefore->Size = System::Drawing::Size(30, 30);
			this->MoveRecordBefore->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->MoveRecordBefore->TabIndex = 23;
			this->MoveRecordBefore->TabStop = false;
			this->MoveRecordBefore->Click += gcnew System::EventHandler(this, &MyForm::MoveRecordBefore_Click);
			this->MoveRecordBefore->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->MoveRecordBefore->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// SwapRecords
			// 
			this->SwapRecords->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapRecords->Dock = System::Windows::Forms::DockStyle::Left;
			this->SwapRecords->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SwapRecords.Image")));
			this->SwapRecords->Location = System::Drawing::Point(335, 0);
			this->SwapRecords->Name = L"SwapRecords";
			this->SwapRecords->Size = System::Drawing::Size(30, 30);
			this->SwapRecords->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SwapRecords->TabIndex = 22;
			this->SwapRecords->TabStop = false;
			this->SwapRecords->Click += gcnew System::EventHandler(this, &MyForm::SwapRecords_Click);
			this->SwapRecords->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->SwapRecords->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// RemoveRecord
			// 
			this->RemoveRecord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveRecord->Dock = System::Windows::Forms::DockStyle::Left;
			this->RemoveRecord->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RemoveRecord.Image")));
			this->RemoveRecord->Location = System::Drawing::Point(305, 0);
			this->RemoveRecord->Name = L"RemoveRecord";
			this->RemoveRecord->Size = System::Drawing::Size(30, 30);
			this->RemoveRecord->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->RemoveRecord->TabIndex = 21;
			this->RemoveRecord->TabStop = false;
			this->RemoveRecord->Click += gcnew System::EventHandler(this, &MyForm::RemoveRecord_Click);
			this->RemoveRecord->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->RemoveRecord->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// AddRecord
			// 
			this->AddRecord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddRecord->Dock = System::Windows::Forms::DockStyle::Left;
			this->AddRecord->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddRecord.Image")));
			this->AddRecord->Location = System::Drawing::Point(275, 0);
			this->AddRecord->Name = L"AddRecord";
			this->AddRecord->Size = System::Drawing::Size(30, 30);
			this->AddRecord->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->AddRecord->TabIndex = 20;
			this->AddRecord->TabStop = false;
			this->AddRecord->Click += gcnew System::EventHandler(this, &MyForm::AddRecordPictureBox_Click);
			this->AddRecord->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->AddRecord->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// Separator3
			// 
			this->Separator3->Dock = System::Windows::Forms::DockStyle::Left;
			this->Separator3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separator3.Image")));
			this->Separator3->Location = System::Drawing::Point(265, 0);
			this->Separator3->Name = L"Separator3";
			this->Separator3->Size = System::Drawing::Size(10, 30);
			this->Separator3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Separator3->TabIndex = 24;
			this->Separator3->TabStop = false;
			// 
			// MoveFieldBefore
			// 
			this->MoveFieldBefore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveFieldBefore->Dock = System::Windows::Forms::DockStyle::Left;
			this->MoveFieldBefore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MoveFieldBefore.Image")));
			this->MoveFieldBefore->Location = System::Drawing::Point(235, 0);
			this->MoveFieldBefore->Name = L"MoveFieldBefore";
			this->MoveFieldBefore->Size = System::Drawing::Size(30, 30);
			this->MoveFieldBefore->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->MoveFieldBefore->TabIndex = 17;
			this->MoveFieldBefore->TabStop = false;
			this->MoveFieldBefore->Click += gcnew System::EventHandler(this, &MyForm::MoveFieldBefore_Click);
			this->MoveFieldBefore->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->MoveFieldBefore->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// SwapFields
			// 
			this->SwapFields->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapFields->Dock = System::Windows::Forms::DockStyle::Left;
			this->SwapFields->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SwapFields.Image")));
			this->SwapFields->Location = System::Drawing::Point(205, 0);
			this->SwapFields->Name = L"SwapFields";
			this->SwapFields->Size = System::Drawing::Size(30, 30);
			this->SwapFields->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SwapFields->TabIndex = 13;
			this->SwapFields->TabStop = false;
			this->SwapFields->Click += gcnew System::EventHandler(this, &MyForm::SwapFields_Click);
			this->SwapFields->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->SwapFields->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// RemoveField
			// 
			this->RemoveField->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveField->Dock = System::Windows::Forms::DockStyle::Left;
			this->RemoveField->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RemoveField.Image")));
			this->RemoveField->Location = System::Drawing::Point(175, 0);
			this->RemoveField->Name = L"RemoveField";
			this->RemoveField->Size = System::Drawing::Size(30, 30);
			this->RemoveField->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->RemoveField->TabIndex = 12;
			this->RemoveField->TabStop = false;
			this->RemoveField->Click += gcnew System::EventHandler(this, &MyForm::RemoveField_Click);
			this->RemoveField->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->RemoveField->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// AddField
			// 
			this->AddField->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddField->Dock = System::Windows::Forms::DockStyle::Left;
			this->AddField->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddField.Image")));
			this->AddField->Location = System::Drawing::Point(145, 0);
			this->AddField->Name = L"AddField";
			this->AddField->Size = System::Drawing::Size(30, 30);
			this->AddField->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->AddField->TabIndex = 10;
			this->AddField->TabStop = false;
			this->AddField->Click += gcnew System::EventHandler(this, &MyForm::AddFieldPictureBox_Click);
			this->AddField->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->AddField->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// Separator2
			// 
			this->Separator2->Dock = System::Windows::Forms::DockStyle::Left;
			this->Separator2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separator2.Image")));
			this->Separator2->Location = System::Drawing::Point(135, 0);
			this->Separator2->Name = L"Separator2";
			this->Separator2->Size = System::Drawing::Size(10, 30);
			this->Separator2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Separator2->TabIndex = 18;
			this->Separator2->TabStop = false;
			// 
			// ReloadDB
			// 
			this->ReloadDB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReloadDB->Dock = System::Windows::Forms::DockStyle::Left;
			this->ReloadDB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReloadDB.Image")));
			this->ReloadDB->Location = System::Drawing::Point(105, 0);
			this->ReloadDB->Name = L"ReloadDB";
			this->ReloadDB->Size = System::Drawing::Size(30, 30);
			this->ReloadDB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ReloadDB->TabIndex = 29;
			this->ReloadDB->TabStop = false;
			this->ReloadDB->Click += gcnew System::EventHandler(this, &MyForm::ReloadDB_Click);
			this->ReloadDB->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->ReloadDB->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// Separator1
			// 
			this->Separator1->Dock = System::Windows::Forms::DockStyle::Left;
			this->Separator1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Separator1.Image")));
			this->Separator1->Location = System::Drawing::Point(95, 0);
			this->Separator1->Name = L"Separator1";
			this->Separator1->Size = System::Drawing::Size(10, 30);
			this->Separator1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->Separator1->TabIndex = 5;
			this->Separator1->TabStop = false;
			// 
			// OpenDB
			// 
			this->OpenDB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OpenDB->Dock = System::Windows::Forms::DockStyle::Left;
			this->OpenDB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OpenDB.Image")));
			this->OpenDB->Location = System::Drawing::Point(65, 0);
			this->OpenDB->Name = L"OpenDB";
			this->OpenDB->Size = System::Drawing::Size(30, 30);
			this->OpenDB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->OpenDB->TabIndex = 3;
			this->OpenDB->TabStop = false;
			this->OpenDB->Click += gcnew System::EventHandler(this, &MyForm::OpenDB_Click);
			this->OpenDB->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->OpenDB->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// SaveDB
			// 
			this->SaveDB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SaveDB->Dock = System::Windows::Forms::DockStyle::Left;
			this->SaveDB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SaveDB.Image")));
			this->SaveDB->Location = System::Drawing::Point(35, 0);
			this->SaveDB->Name = L"SaveDB";
			this->SaveDB->Size = System::Drawing::Size(30, 30);
			this->SaveDB->TabIndex = 2;
			this->SaveDB->TabStop = false;
			this->SaveDB->Click += gcnew System::EventHandler(this, &MyForm::SaveDB_Click);
			this->SaveDB->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->SaveDB->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// NewDB
			// 
			this->NewDB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NewDB->Dock = System::Windows::Forms::DockStyle::Left;
			this->NewDB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewDB.Image")));
			this->NewDB->Location = System::Drawing::Point(5, 0);
			this->NewDB->Name = L"NewDB";
			this->NewDB->Size = System::Drawing::Size(30, 30);
			this->NewDB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->NewDB->TabIndex = 0;
			this->NewDB->TabStop = false;
			this->NewDB->Click += gcnew System::EventHandler(this, &MyForm::NewDB_Click);
			this->NewDB->MouseEnter += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseEnter);
			this->NewDB->MouseLeave += gcnew System::EventHandler(this, &MyForm::TopControlButton_MouseLeave);
			// 
			// RemoveFieldColumnTitle
			// 
			this->RemoveFieldColumnTitle->AutoSize = true;
			this->RemoveFieldColumnTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RemoveFieldColumnTitle->ForeColor = System::Drawing::SystemColors::MenuText;
			this->RemoveFieldColumnTitle->Location = System::Drawing::Point(12, 57);
			this->RemoveFieldColumnTitle->Name = L"RemoveFieldColumnTitle";
			this->RemoveFieldColumnTitle->Size = System::Drawing::Size(104, 20);
			this->RemoveFieldColumnTitle->TabIndex = 0;
			this->RemoveFieldColumnTitle->Text = L"Column title";
			// 
			// MsgCloseTimer
			// 
			this->MsgCloseTimer->Interval = 3000;
			this->MsgCloseTimer->Tick += gcnew System::EventHandler(this, &MyForm::MsgCloseTimer_Tick);
			// 
			// OpenFileDialog
			// 
			this->OpenFileDialog->Filter = L"Database files|*.dbvm";
			this->OpenFileDialog->Title = L"Load database from...";
			// 
			// SaveFileDialog
			// 
			this->SaveFileDialog->DefaultExt = L"dbvm";
			this->SaveFileDialog->Filter = L"Database files|*.dbvm";
			this->SaveFileDialog->Title = L"Saving database to...";
			// 
			// MMAboutSubMenu
			// 
			this->MMAboutSubMenu->BackColor = System::Drawing::Color::White;
			this->MMAboutSubMenu->Controls->Add(this->MMAboutAuthor);
			this->MMAboutSubMenu->Controls->Add(this->MMAboutProgram);
			this->MMAboutSubMenu->Controls->Add(this->AboutSubMenuSeparator);
			this->MMAboutSubMenu->Controls->Add(this->MMHelp);
			this->MMAboutSubMenu->Controls->Add(this->MMHotKeys);
			this->MMAboutSubMenu->Location = System::Drawing::Point(126, 31);
			this->MMAboutSubMenu->Name = L"MMAboutSubMenu";
			this->MMAboutSubMenu->Size = System::Drawing::Size(143, 81);
			this->MMAboutSubMenu->TabIndex = 6;
			this->MMAboutSubMenu->Visible = false;
			// 
			// MMAboutAuthor
			// 
			this->MMAboutAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->MMAboutAuthor->Controls->Add(this->AboutAuthorHK);
			this->MMAboutAuthor->Controls->Add(this->MIAboutAuthor);
			this->MMAboutAuthor->Dock = System::Windows::Forms::DockStyle::Top;
			this->MMAboutAuthor->Location = System::Drawing::Point(0, 61);
			this->MMAboutAuthor->Name = L"MMAboutAuthor";
			this->MMAboutAuthor->Size = System::Drawing::Size(143, 20);
			this->MMAboutAuthor->TabIndex = 4;
			// 
			// AboutAuthorHK
			// 
			this->AboutAuthorHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AboutAuthorHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AboutAuthorHK->Location = System::Drawing::Point(105, 0);
			this->AboutAuthorHK->Name = L"AboutAuthorHK";
			this->AboutAuthorHK->Size = System::Drawing::Size(38, 20);
			this->AboutAuthorHK->TabIndex = 3;
			this->AboutAuthorHK->Text = L"Alt+A";
			this->AboutAuthorHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->AboutAuthorHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->AboutAuthorHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIAboutAuthor
			// 
			this->MIAboutAuthor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIAboutAuthor->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIAboutAuthor->Location = System::Drawing::Point(0, 0);
			this->MIAboutAuthor->Name = L"MIAboutAuthor";
			this->MIAboutAuthor->Size = System::Drawing::Size(105, 20);
			this->MIAboutAuthor->TabIndex = 2;
			this->MIAboutAuthor->Text = L"About author";
			this->MIAboutAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIAboutAuthor->Click += gcnew System::EventHandler(this, &MyForm::MIAboutAuthor_Click);
			this->MIAboutAuthor->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIAboutAuthor->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MMAboutProgram
			// 
			this->MMAboutProgram->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->MMAboutProgram->Controls->Add(this->AboutProgramHK);
			this->MMAboutProgram->Controls->Add(this->MIAboutProgram);
			this->MMAboutProgram->Dock = System::Windows::Forms::DockStyle::Top;
			this->MMAboutProgram->Location = System::Drawing::Point(0, 41);
			this->MMAboutProgram->Name = L"MMAboutProgram";
			this->MMAboutProgram->Size = System::Drawing::Size(143, 20);
			this->MMAboutProgram->TabIndex = 3;
			// 
			// AboutProgramHK
			// 
			this->AboutProgramHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AboutProgramHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AboutProgramHK->Location = System::Drawing::Point(105, 0);
			this->AboutProgramHK->Name = L"AboutProgramHK";
			this->AboutProgramHK->Size = System::Drawing::Size(38, 20);
			this->AboutProgramHK->TabIndex = 3;
			this->AboutProgramHK->Text = L"Alt+P";
			this->AboutProgramHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->AboutProgramHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->AboutProgramHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIAboutProgram
			// 
			this->MIAboutProgram->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIAboutProgram->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIAboutProgram->Location = System::Drawing::Point(0, 0);
			this->MIAboutProgram->Name = L"MIAboutProgram";
			this->MIAboutProgram->Size = System::Drawing::Size(105, 20);
			this->MIAboutProgram->TabIndex = 2;
			this->MIAboutProgram->Text = L"About program";
			this->MIAboutProgram->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIAboutProgram->Click += gcnew System::EventHandler(this, &MyForm::MIAboutProgram_Click);
			this->MIAboutProgram->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIAboutProgram->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// AboutSubMenuSeparator
			// 
			this->AboutSubMenuSeparator->BackColor = System::Drawing::Color::LightGray;
			this->AboutSubMenuSeparator->Dock = System::Windows::Forms::DockStyle::Top;
			this->AboutSubMenuSeparator->Location = System::Drawing::Point(0, 40);
			this->AboutSubMenuSeparator->Name = L"AboutSubMenuSeparator";
			this->AboutSubMenuSeparator->Size = System::Drawing::Size(143, 1);
			this->AboutSubMenuSeparator->TabIndex = 2;
			// 
			// MMHelp
			// 
			this->MMHelp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->MMHelp->Controls->Add(this->HelpHK);
			this->MMHelp->Controls->Add(this->MIHelp);
			this->MMHelp->Dock = System::Windows::Forms::DockStyle::Top;
			this->MMHelp->Location = System::Drawing::Point(0, 20);
			this->MMHelp->Name = L"MMHelp";
			this->MMHelp->Size = System::Drawing::Size(143, 20);
			this->MMHelp->TabIndex = 1;
			// 
			// HelpHK
			// 
			this->HelpHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HelpHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HelpHK->Location = System::Drawing::Point(105, 0);
			this->HelpHK->Name = L"HelpHK";
			this->HelpHK->Size = System::Drawing::Size(38, 20);
			this->HelpHK->TabIndex = 3;
			this->HelpHK->Text = L"Alt+H";
			this->HelpHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->HelpHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->HelpHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIHelp
			// 
			this->MIHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIHelp->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIHelp->Location = System::Drawing::Point(0, 0);
			this->MIHelp->Name = L"MIHelp";
			this->MIHelp->Size = System::Drawing::Size(105, 20);
			this->MIHelp->TabIndex = 2;
			this->MIHelp->Text = L"Help";
			this->MIHelp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIHelp->Click += gcnew System::EventHandler(this, &MyForm::MIHelp_Click);
			this->MIHelp->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIHelp->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MMHotKeys
			// 
			this->MMHotKeys->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->MMHotKeys->Controls->Add(this->HotKeysHK);
			this->MMHotKeys->Controls->Add(this->MIHotKeys);
			this->MMHotKeys->Dock = System::Windows::Forms::DockStyle::Top;
			this->MMHotKeys->Location = System::Drawing::Point(0, 0);
			this->MMHotKeys->Name = L"MMHotKeys";
			this->MMHotKeys->Size = System::Drawing::Size(143, 20);
			this->MMHotKeys->TabIndex = 0;
			// 
			// HotKeysHK
			// 
			this->HotKeysHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HotKeysHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HotKeysHK->Location = System::Drawing::Point(105, 0);
			this->HotKeysHK->Name = L"HotKeysHK";
			this->HotKeysHK->Size = System::Drawing::Size(38, 20);
			this->HotKeysHK->TabIndex = 1;
			this->HotKeysHK->Text = L"Alt+K";
			this->HotKeysHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->HotKeysHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->HotKeysHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIHotKeys
			// 
			this->MIHotKeys->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIHotKeys->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIHotKeys->Location = System::Drawing::Point(0, 0);
			this->MIHotKeys->Name = L"MIHotKeys";
			this->MIHotKeys->Size = System::Drawing::Size(105, 20);
			this->MIHotKeys->TabIndex = 0;
			this->MIHotKeys->Text = L"Hot keys";
			this->MIHotKeys->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIHotKeys->Click += gcnew System::EventHandler(this, &MyForm::MIHotKeys_Click);
			this->MIHotKeys->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIHotKeys->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MMEditSubMenu
			// 
			this->MMEditSubMenu->BackColor = System::Drawing::Color::White;
			this->MMEditSubMenu->Controls->Add(this->panel52);
			this->MMEditSubMenu->Controls->Add(this->panel51);
			this->MMEditSubMenu->Controls->Add(this->panel50);
			this->MMEditSubMenu->Controls->Add(this->panel49);
			this->MMEditSubMenu->Controls->Add(this->panel48);
			this->MMEditSubMenu->Controls->Add(this->panel47);
			this->MMEditSubMenu->Controls->Add(this->panel46);
			this->MMEditSubMenu->Controls->Add(this->panel45);
			this->MMEditSubMenu->Controls->Add(this->panel44);
			this->MMEditSubMenu->Controls->Add(this->panel43);
			this->MMEditSubMenu->Controls->Add(this->panel42);
			this->MMEditSubMenu->Controls->Add(this->panel40);
			this->MMEditSubMenu->Controls->Add(this->panel37);
			this->MMEditSubMenu->Controls->Add(this->panel38);
			this->MMEditSubMenu->Controls->Add(this->panel39);
			this->MMEditSubMenu->Controls->Add(this->panel41);
			this->MMEditSubMenu->Location = System::Drawing::Point(77, 31);
			this->MMEditSubMenu->Name = L"MMEditSubMenu";
			this->MMEditSubMenu->Size = System::Drawing::Size(143, 263);
			this->MMEditSubMenu->TabIndex = 7;
			this->MMEditSubMenu->Visible = false;
			// 
			// panel52
			// 
			this->panel52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel52->Controls->Add(this->FilterHK);
			this->panel52->Controls->Add(this->MIFilter);
			this->panel52->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel52->Location = System::Drawing::Point(0, 243);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(143, 20);
			this->panel52->TabIndex = 16;
			// 
			// FilterHK
			// 
			this->FilterHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FilterHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->FilterHK->Location = System::Drawing::Point(93, 0);
			this->FilterHK->Name = L"FilterHK";
			this->FilterHK->Size = System::Drawing::Size(50, 20);
			this->FilterHK->TabIndex = 3;
			this->FilterHK->Text = L"Alt+E";
			this->FilterHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->FilterHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->FilterHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIFilter
			// 
			this->MIFilter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIFilter->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIFilter->Location = System::Drawing::Point(0, 0);
			this->MIFilter->Name = L"MIFilter";
			this->MIFilter->Size = System::Drawing::Size(93, 20);
			this->MIFilter->TabIndex = 2;
			this->MIFilter->Text = L"Filter";
			this->MIFilter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIFilter->Click += gcnew System::EventHandler(this, &MyForm::MIFilter_Click);
			this->MIFilter->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIFilter->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel51
			// 
			this->panel51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel51->Controls->Add(this->SortHK);
			this->panel51->Controls->Add(this->MISort);
			this->panel51->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel51->Location = System::Drawing::Point(0, 223);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(143, 20);
			this->panel51->TabIndex = 15;
			// 
			// SortHK
			// 
			this->SortHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SortHK->Location = System::Drawing::Point(93, 0);
			this->SortHK->Name = L"SortHK";
			this->SortHK->Size = System::Drawing::Size(50, 20);
			this->SortHK->TabIndex = 3;
			this->SortHK->Text = L"Alt+T";
			this->SortHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SortHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->SortHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MISort
			// 
			this->MISort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MISort->Dock = System::Windows::Forms::DockStyle::Left;
			this->MISort->Location = System::Drawing::Point(0, 0);
			this->MISort->Name = L"MISort";
			this->MISort->Size = System::Drawing::Size(93, 20);
			this->MISort->TabIndex = 2;
			this->MISort->Text = L"Sort";
			this->MISort->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MISort->Click += gcnew System::EventHandler(this, &MyForm::MISort_Click);
			this->MISort->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MISort->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel50
			// 
			this->panel50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel50->Controls->Add(this->FindHK);
			this->panel50->Controls->Add(this->MIFind);
			this->panel50->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel50->Location = System::Drawing::Point(0, 203);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(143, 20);
			this->panel50->TabIndex = 14;
			// 
			// FindHK
			// 
			this->FindHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FindHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->FindHK->Location = System::Drawing::Point(93, 0);
			this->FindHK->Name = L"FindHK";
			this->FindHK->Size = System::Drawing::Size(50, 20);
			this->FindHK->TabIndex = 3;
			this->FindHK->Text = L"Alt+F";
			this->FindHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->FindHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->FindHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIFind
			// 
			this->MIFind->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIFind->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIFind->Location = System::Drawing::Point(0, 0);
			this->MIFind->Name = L"MIFind";
			this->MIFind->Size = System::Drawing::Size(93, 20);
			this->MIFind->TabIndex = 2;
			this->MIFind->Text = L"Find";
			this->MIFind->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIFind->Click += gcnew System::EventHandler(this, &MyForm::MIFind_Click);
			this->MIFind->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIFind->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel49
			// 
			this->panel49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel49->Controls->Add(this->RecordEditModeHK);
			this->panel49->Controls->Add(this->MIRecordEditMode);
			this->panel49->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel49->Location = System::Drawing::Point(0, 183);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(143, 20);
			this->panel49->TabIndex = 13;
			// 
			// RecordEditModeHK
			// 
			this->RecordEditModeHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RecordEditModeHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RecordEditModeHK->Location = System::Drawing::Point(93, 0);
			this->RecordEditModeHK->Name = L"RecordEditModeHK";
			this->RecordEditModeHK->Size = System::Drawing::Size(50, 20);
			this->RecordEditModeHK->TabIndex = 3;
			this->RecordEditModeHK->Text = L"Alt+9";
			this->RecordEditModeHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->RecordEditModeHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->RecordEditModeHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIRecordEditMode
			// 
			this->MIRecordEditMode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIRecordEditMode->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIRecordEditMode->Location = System::Drawing::Point(0, 0);
			this->MIRecordEditMode->Name = L"MIRecordEditMode";
			this->MIRecordEditMode->Size = System::Drawing::Size(93, 20);
			this->MIRecordEditMode->TabIndex = 2;
			this->MIRecordEditMode->Text = L"Record edit mode";
			this->MIRecordEditMode->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIRecordEditMode->Click += gcnew System::EventHandler(this, &MyForm::MIRecordEditMode_Click);
			this->MIRecordEditMode->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIRecordEditMode->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel48
			// 
			this->panel48->BackColor = System::Drawing::Color::LightGray;
			this->panel48->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel48->Location = System::Drawing::Point(0, 182);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(143, 1);
			this->panel48->TabIndex = 12;
			// 
			// panel47
			// 
			this->panel47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel47->Controls->Add(this->MoveRecordBeforeHK);
			this->panel47->Controls->Add(this->MIMoveRecordBefore);
			this->panel47->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel47->Location = System::Drawing::Point(0, 162);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(143, 20);
			this->panel47->TabIndex = 11;
			// 
			// MoveRecordBeforeHK
			// 
			this->MoveRecordBeforeHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveRecordBeforeHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MoveRecordBeforeHK->Location = System::Drawing::Point(94, 0);
			this->MoveRecordBeforeHK->Name = L"MoveRecordBeforeHK";
			this->MoveRecordBeforeHK->Size = System::Drawing::Size(49, 20);
			this->MoveRecordBeforeHK->TabIndex = 3;
			this->MoveRecordBeforeHK->Text = L"Alt+8";
			this->MoveRecordBeforeHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->MoveRecordBeforeHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MoveRecordBeforeHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIMoveRecordBefore
			// 
			this->MIMoveRecordBefore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIMoveRecordBefore->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIMoveRecordBefore->Location = System::Drawing::Point(0, 0);
			this->MIMoveRecordBefore->Name = L"MIMoveRecordBefore";
			this->MIMoveRecordBefore->Size = System::Drawing::Size(94, 20);
			this->MIMoveRecordBefore->TabIndex = 2;
			this->MIMoveRecordBefore->Text = L"Move row before";
			this->MIMoveRecordBefore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIMoveRecordBefore->Click += gcnew System::EventHandler(this, &MyForm::MIMoveRecordBefore_Click);
			this->MIMoveRecordBefore->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIMoveRecordBefore->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel46
			// 
			this->panel46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel46->Controls->Add(this->SwapRecordsHK);
			this->panel46->Controls->Add(this->MISwapRecords);
			this->panel46->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel46->Location = System::Drawing::Point(0, 142);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(143, 20);
			this->panel46->TabIndex = 10;
			// 
			// SwapRecordsHK
			// 
			this->SwapRecordsHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapRecordsHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SwapRecordsHK->Location = System::Drawing::Point(93, 0);
			this->SwapRecordsHK->Name = L"SwapRecordsHK";
			this->SwapRecordsHK->Size = System::Drawing::Size(50, 20);
			this->SwapRecordsHK->TabIndex = 3;
			this->SwapRecordsHK->Text = L"Alt+7";
			this->SwapRecordsHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SwapRecordsHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->SwapRecordsHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MISwapRecords
			// 
			this->MISwapRecords->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MISwapRecords->Dock = System::Windows::Forms::DockStyle::Left;
			this->MISwapRecords->Location = System::Drawing::Point(0, 0);
			this->MISwapRecords->Name = L"MISwapRecords";
			this->MISwapRecords->Size = System::Drawing::Size(93, 20);
			this->MISwapRecords->TabIndex = 2;
			this->MISwapRecords->Text = L"Swap records";
			this->MISwapRecords->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MISwapRecords->Click += gcnew System::EventHandler(this, &MyForm::MISwapRecords_Click);
			this->MISwapRecords->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MISwapRecords->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel45
			// 
			this->panel45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel45->Controls->Add(this->RemoveRecordHK);
			this->panel45->Controls->Add(this->MIRemoveRecord);
			this->panel45->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel45->Location = System::Drawing::Point(0, 122);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(143, 20);
			this->panel45->TabIndex = 9;
			// 
			// RemoveRecordHK
			// 
			this->RemoveRecordHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveRecordHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RemoveRecordHK->Location = System::Drawing::Point(93, 0);
			this->RemoveRecordHK->Name = L"RemoveRecordHK";
			this->RemoveRecordHK->Size = System::Drawing::Size(50, 20);
			this->RemoveRecordHK->TabIndex = 3;
			this->RemoveRecordHK->Text = L"Alt+6";
			this->RemoveRecordHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->RemoveRecordHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->RemoveRecordHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIRemoveRecord
			// 
			this->MIRemoveRecord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIRemoveRecord->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIRemoveRecord->Location = System::Drawing::Point(0, 0);
			this->MIRemoveRecord->Name = L"MIRemoveRecord";
			this->MIRemoveRecord->Size = System::Drawing::Size(93, 20);
			this->MIRemoveRecord->TabIndex = 2;
			this->MIRemoveRecord->Text = L"Remove record";
			this->MIRemoveRecord->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIRemoveRecord->Click += gcnew System::EventHandler(this, &MyForm::MIRemoveRecord_Click);
			this->MIRemoveRecord->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIRemoveRecord->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel44
			// 
			this->panel44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel44->Controls->Add(this->AddRecordHK);
			this->panel44->Controls->Add(this->MIAddRecord);
			this->panel44->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel44->Location = System::Drawing::Point(0, 102);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(143, 20);
			this->panel44->TabIndex = 8;
			// 
			// AddRecordHK
			// 
			this->AddRecordHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddRecordHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddRecordHK->Location = System::Drawing::Point(93, 0);
			this->AddRecordHK->Name = L"AddRecordHK";
			this->AddRecordHK->Size = System::Drawing::Size(50, 20);
			this->AddRecordHK->TabIndex = 3;
			this->AddRecordHK->Text = L"Alt+5";
			this->AddRecordHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->AddRecordHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->AddRecordHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIAddRecord
			// 
			this->MIAddRecord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIAddRecord->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIAddRecord->Location = System::Drawing::Point(0, 0);
			this->MIAddRecord->Name = L"MIAddRecord";
			this->MIAddRecord->Size = System::Drawing::Size(93, 20);
			this->MIAddRecord->TabIndex = 2;
			this->MIAddRecord->Text = L"Add record";
			this->MIAddRecord->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIAddRecord->Click += gcnew System::EventHandler(this, &MyForm::MIAddRecord_Click);
			this->MIAddRecord->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIAddRecord->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel43
			// 
			this->panel43->BackColor = System::Drawing::Color::LightGray;
			this->panel43->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel43->Location = System::Drawing::Point(0, 101);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(143, 1);
			this->panel43->TabIndex = 7;
			// 
			// panel42
			// 
			this->panel42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel42->Controls->Add(this->MoveFieldBeforeHK);
			this->panel42->Controls->Add(this->MIMoveFieldBefore);
			this->panel42->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel42->Location = System::Drawing::Point(0, 81);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(143, 20);
			this->panel42->TabIndex = 6;
			// 
			// MoveFieldBeforeHK
			// 
			this->MoveFieldBeforeHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MoveFieldBeforeHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MoveFieldBeforeHK->Location = System::Drawing::Point(93, 0);
			this->MoveFieldBeforeHK->Name = L"MoveFieldBeforeHK";
			this->MoveFieldBeforeHK->Size = System::Drawing::Size(50, 20);
			this->MoveFieldBeforeHK->TabIndex = 3;
			this->MoveFieldBeforeHK->Text = L"Alt+4";
			this->MoveFieldBeforeHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->MoveFieldBeforeHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MoveFieldBeforeHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIMoveFieldBefore
			// 
			this->MIMoveFieldBefore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIMoveFieldBefore->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIMoveFieldBefore->Location = System::Drawing::Point(0, 0);
			this->MIMoveFieldBefore->Name = L"MIMoveFieldBefore";
			this->MIMoveFieldBefore->Size = System::Drawing::Size(93, 20);
			this->MIMoveFieldBefore->TabIndex = 2;
			this->MIMoveFieldBefore->Text = L"Move field before";
			this->MIMoveFieldBefore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIMoveFieldBefore->Click += gcnew System::EventHandler(this, &MyForm::MIMoveFieldBefore_Click);
			this->MIMoveFieldBefore->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIMoveFieldBefore->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel40->Controls->Add(this->SwapFieldsHK);
			this->panel40->Controls->Add(this->MISwapFields);
			this->panel40->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel40->Location = System::Drawing::Point(0, 61);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(143, 20);
			this->panel40->TabIndex = 5;
			// 
			// SwapFieldsHK
			// 
			this->SwapFieldsHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SwapFieldsHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SwapFieldsHK->Location = System::Drawing::Point(93, 0);
			this->SwapFieldsHK->Name = L"SwapFieldsHK";
			this->SwapFieldsHK->Size = System::Drawing::Size(50, 20);
			this->SwapFieldsHK->TabIndex = 3;
			this->SwapFieldsHK->Text = L"Alt+3";
			this->SwapFieldsHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SwapFieldsHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->SwapFieldsHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MISwapFields
			// 
			this->MISwapFields->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MISwapFields->Dock = System::Windows::Forms::DockStyle::Left;
			this->MISwapFields->Location = System::Drawing::Point(0, 0);
			this->MISwapFields->Name = L"MISwapFields";
			this->MISwapFields->Size = System::Drawing::Size(93, 20);
			this->MISwapFields->TabIndex = 2;
			this->MISwapFields->Text = L"Swap fields";
			this->MISwapFields->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MISwapFields->Click += gcnew System::EventHandler(this, &MyForm::MISwapFields_Click);
			this->MISwapFields->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MISwapFields->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel37
			// 
			this->panel37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel37->Controls->Add(this->RemoveFieldHK);
			this->panel37->Controls->Add(this->MIRemoveField);
			this->panel37->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel37->Location = System::Drawing::Point(0, 41);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(143, 20);
			this->panel37->TabIndex = 4;
			// 
			// RemoveFieldHK
			// 
			this->RemoveFieldHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveFieldHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RemoveFieldHK->Location = System::Drawing::Point(93, 0);
			this->RemoveFieldHK->Name = L"RemoveFieldHK";
			this->RemoveFieldHK->Size = System::Drawing::Size(50, 20);
			this->RemoveFieldHK->TabIndex = 3;
			this->RemoveFieldHK->Text = L"Alt+2";
			this->RemoveFieldHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->RemoveFieldHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->RemoveFieldHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIRemoveField
			// 
			this->MIRemoveField->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIRemoveField->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIRemoveField->Location = System::Drawing::Point(0, 0);
			this->MIRemoveField->Name = L"MIRemoveField";
			this->MIRemoveField->Size = System::Drawing::Size(93, 20);
			this->MIRemoveField->TabIndex = 2;
			this->MIRemoveField->Text = L"Remove field";
			this->MIRemoveField->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIRemoveField->Click += gcnew System::EventHandler(this, &MyForm::MIRemoveField_Click);
			this->MIRemoveField->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIRemoveField->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel38->Controls->Add(this->AddFieldHK);
			this->panel38->Controls->Add(this->MIAddField);
			this->panel38->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel38->Location = System::Drawing::Point(0, 21);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(143, 20);
			this->panel38->TabIndex = 3;
			// 
			// AddFieldHK
			// 
			this->AddFieldHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddFieldHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddFieldHK->Location = System::Drawing::Point(99, 0);
			this->AddFieldHK->Name = L"AddFieldHK";
			this->AddFieldHK->Size = System::Drawing::Size(44, 20);
			this->AddFieldHK->TabIndex = 3;
			this->AddFieldHK->Text = L"Alt+1";
			this->AddFieldHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->AddFieldHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->AddFieldHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIAddField
			// 
			this->MIAddField->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIAddField->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIAddField->Location = System::Drawing::Point(0, 0);
			this->MIAddField->Name = L"MIAddField";
			this->MIAddField->Size = System::Drawing::Size(99, 20);
			this->MIAddField->TabIndex = 2;
			this->MIAddField->Text = L"Add field";
			this->MIAddField->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIAddField->Click += gcnew System::EventHandler(this, &MyForm::MIAddField_Click);
			this->MIAddField->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIAddField->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel39
			// 
			this->panel39->BackColor = System::Drawing::Color::LightGray;
			this->panel39->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel39->Location = System::Drawing::Point(0, 20);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(143, 1);
			this->panel39->TabIndex = 2;
			// 
			// panel41
			// 
			this->panel41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel41->Controls->Add(this->ReloadHK);
			this->panel41->Controls->Add(this->MIReload);
			this->panel41->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel41->Location = System::Drawing::Point(0, 0);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(143, 20);
			this->panel41->TabIndex = 0;
			// 
			// ReloadHK
			// 
			this->ReloadHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReloadHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ReloadHK->Location = System::Drawing::Point(105, 0);
			this->ReloadHK->Name = L"ReloadHK";
			this->ReloadHK->Size = System::Drawing::Size(38, 20);
			this->ReloadHK->TabIndex = 1;
			this->ReloadHK->Text = L"Alt+R";
			this->ReloadHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ReloadHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->ReloadHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIReload
			// 
			this->MIReload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIReload->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIReload->Location = System::Drawing::Point(0, 0);
			this->MIReload->Name = L"MIReload";
			this->MIReload->Size = System::Drawing::Size(105, 20);
			this->MIReload->TabIndex = 0;
			this->MIReload->Text = L"Reload";
			this->MIReload->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIReload->Click += gcnew System::EventHandler(this, &MyForm::MIReload_Click);
			this->MIReload->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIReload->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MMFileSubMenu
			// 
			this->MMFileSubMenu->BackColor = System::Drawing::Color::White;
			this->MMFileSubMenu->Controls->Add(this->panel61);
			this->MMFileSubMenu->Controls->Add(this->panel62);
			this->MMFileSubMenu->Controls->Add(this->panel64);
			this->MMFileSubMenu->Controls->Add(this->panel65);
			this->MMFileSubMenu->Controls->Add(this->panel66);
			this->MMFileSubMenu->Location = System::Drawing::Point(32, 29);
			this->MMFileSubMenu->Name = L"MMFileSubMenu";
			this->MMFileSubMenu->Size = System::Drawing::Size(143, 81);
			this->MMFileSubMenu->TabIndex = 8;
			this->MMFileSubMenu->Visible = false;
			// 
			// panel61
			// 
			this->panel61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel61->Controls->Add(this->ExitHK);
			this->panel61->Controls->Add(this->MIExit);
			this->panel61->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel61->Location = System::Drawing::Point(0, 61);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(143, 20);
			this->panel61->TabIndex = 8;
			// 
			// ExitHK
			// 
			this->ExitHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ExitHK->Location = System::Drawing::Point(93, 0);
			this->ExitHK->Name = L"ExitHK";
			this->ExitHK->Size = System::Drawing::Size(50, 20);
			this->ExitHK->TabIndex = 3;
			this->ExitHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ExitHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->ExitHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIExit
			// 
			this->MIExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIExit->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIExit->Location = System::Drawing::Point(0, 0);
			this->MIExit->Name = L"MIExit";
			this->MIExit->Size = System::Drawing::Size(93, 20);
			this->MIExit->TabIndex = 2;
			this->MIExit->Text = L"Exit";
			this->MIExit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIExit->Click += gcnew System::EventHandler(this, &MyForm::MIExit_Click);
			this->MIExit->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIExit->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel62
			// 
			this->panel62->BackColor = System::Drawing::Color::LightGray;
			this->panel62->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel62->Location = System::Drawing::Point(0, 60);
			this->panel62->Name = L"panel62";
			this->panel62->Size = System::Drawing::Size(143, 1);
			this->panel62->TabIndex = 7;
			// 
			// panel64
			// 
			this->panel64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel64->Controls->Add(this->SaveHK);
			this->panel64->Controls->Add(this->MISave);
			this->panel64->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel64->Location = System::Drawing::Point(0, 40);
			this->panel64->Name = L"panel64";
			this->panel64->Size = System::Drawing::Size(143, 20);
			this->panel64->TabIndex = 5;
			// 
			// SaveHK
			// 
			this->SaveHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SaveHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SaveHK->Location = System::Drawing::Point(93, 0);
			this->SaveHK->Name = L"SaveHK";
			this->SaveHK->Size = System::Drawing::Size(50, 20);
			this->SaveHK->TabIndex = 3;
			this->SaveHK->Text = L"Alt+S";
			this->SaveHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SaveHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->SaveHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MISave
			// 
			this->MISave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MISave->Dock = System::Windows::Forms::DockStyle::Left;
			this->MISave->Location = System::Drawing::Point(0, 0);
			this->MISave->Name = L"MISave";
			this->MISave->Size = System::Drawing::Size(93, 20);
			this->MISave->TabIndex = 2;
			this->MISave->Text = L"Save";
			this->MISave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MISave->Click += gcnew System::EventHandler(this, &MyForm::MISave_Click);
			this->MISave->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MISave->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel65
			// 
			this->panel65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel65->Controls->Add(this->OpenHK);
			this->panel65->Controls->Add(this->MIOpen);
			this->panel65->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel65->Location = System::Drawing::Point(0, 20);
			this->panel65->Name = L"panel65";
			this->panel65->Size = System::Drawing::Size(143, 20);
			this->panel65->TabIndex = 4;
			// 
			// OpenHK
			// 
			this->OpenHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OpenHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OpenHK->Location = System::Drawing::Point(93, 0);
			this->OpenHK->Name = L"OpenHK";
			this->OpenHK->Size = System::Drawing::Size(50, 20);
			this->OpenHK->TabIndex = 3;
			this->OpenHK->Text = L"Alt+O";
			this->OpenHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->OpenHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->OpenHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MIOpen
			// 
			this->MIOpen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MIOpen->Dock = System::Windows::Forms::DockStyle::Left;
			this->MIOpen->Location = System::Drawing::Point(0, 0);
			this->MIOpen->Name = L"MIOpen";
			this->MIOpen->Size = System::Drawing::Size(93, 20);
			this->MIOpen->TabIndex = 2;
			this->MIOpen->Text = L"Open";
			this->MIOpen->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MIOpen->Click += gcnew System::EventHandler(this, &MyForm::MIOpen_Click);
			this->MIOpen->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MIOpen->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// panel66
			// 
			this->panel66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->panel66->Controls->Add(this->NewHK);
			this->panel66->Controls->Add(this->MINew);
			this->panel66->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel66->Location = System::Drawing::Point(0, 0);
			this->panel66->Name = L"panel66";
			this->panel66->Size = System::Drawing::Size(143, 20);
			this->panel66->TabIndex = 3;
			// 
			// NewHK
			// 
			this->NewHK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NewHK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NewHK->Location = System::Drawing::Point(99, 0);
			this->NewHK->Name = L"NewHK";
			this->NewHK->Size = System::Drawing::Size(44, 20);
			this->NewHK->TabIndex = 3;
			this->NewHK->Text = L"Alt+N";
			this->NewHK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->NewHK->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->NewHK->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MINew
			// 
			this->MINew->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MINew->Dock = System::Windows::Forms::DockStyle::Left;
			this->MINew->Location = System::Drawing::Point(0, 0);
			this->MINew->Name = L"MINew";
			this->MINew->Size = System::Drawing::Size(99, 20);
			this->MINew->TabIndex = 2;
			this->MINew->Text = L"New";
			this->MINew->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MINew->Click += gcnew System::EventHandler(this, &MyForm::MINew_Click);
			this->MINew->MouseEnter += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseEnter);
			this->MINew->MouseLeave += gcnew System::EventHandler(this, &MyForm::HighlightMenuItem_MouseLeave);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1500, 900);
			this->ControlBox = false;
			this->Controls->Add(this->MMEditSubMenu);
			this->Controls->Add(this->MMAboutSubMenu);
			this->Controls->Add(this->MMFileSubMenu);
			this->Controls->Add(this->MainBottomPanel);
			this->Controls->Add(this->MenuPanel);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->MenuPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainDataBasePicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WrapPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExpandPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CloseCrossPicture))->EndInit();
			this->MainBottomPanel->ResumeLayout(false);
			this->MainPanel->ResumeLayout(false);
			this->BottomMsgPanel->ResumeLayout(false);
			this->MsgContainer->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MsgContainerSeparatorPB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MsgCrossBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OptionalButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainDataGridView))->EndInit();
			this->LeftControlPanel->ResumeLayout(false);
			this->FilterPanel->ResumeLayout(false);
			this->FilterPanel->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->SortPanel->ResumeLayout(false);
			this->SortPanel->PerformLayout();
			this->panel29->ResumeLayout(false);
			this->FindPanel->ResumeLayout(false);
			this->FindPanel->PerformLayout();
			this->panel33->ResumeLayout(false);
			this->RowEditModePanel->ResumeLayout(false);
			this->panel26->ResumeLayout(false);
			this->MoveRecordBeforePanel->ResumeLayout(false);
			this->MoveRecordBeforePanel->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->MoveFieldBeforePanel->ResumeLayout(false);
			this->MoveFieldBeforePanel->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->AddFieldPanel->ResumeLayout(false);
			this->AddFieldPanel->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->AddRecordPanel->ResumeLayout(false);
			this->AddRecordPanel->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->RemoveFieldPanel->ResumeLayout(false);
			this->RemoveFieldPanel->PerformLayout();
			this->RemoveFieldDialogPanel->ResumeLayout(false);
			this->RemoveRecordPanel->ResumeLayout(false);
			this->RemoveRecordPanel->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->SwapFieldsPanel->ResumeLayout(false);
			this->SwapFieldsPanel->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->SwapRecordsPanel->ResumeLayout(false);
			this->SwapRecordsPanel->PerformLayout();
			this->panel23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddRecordPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddFieldPictureBox))->EndInit();
			this->TopControlPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InfoButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Filter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sort))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Find))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowEditMode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MoveRecordBefore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SwapRecords))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemoveRecord))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddRecord))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MoveFieldBefore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SwapFields))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RemoveField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddField))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReloadDB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Separator1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OpenDB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SaveDB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NewDB))->EndInit();
			this->MMAboutSubMenu->ResumeLayout(false);
			this->MMAboutAuthor->ResumeLayout(false);
			this->MMAboutProgram->ResumeLayout(false);
			this->MMHelp->ResumeLayout(false);
			this->MMHotKeys->ResumeLayout(false);
			this->MMEditSubMenu->ResumeLayout(false);
			this->panel52->ResumeLayout(false);
			this->panel51->ResumeLayout(false);
			this->panel50->ResumeLayout(false);
			this->panel49->ResumeLayout(false);
			this->panel47->ResumeLayout(false);
			this->panel46->ResumeLayout(false);
			this->panel45->ResumeLayout(false);
			this->panel44->ResumeLayout(false);
			this->panel42->ResumeLayout(false);
			this->panel40->ResumeLayout(false);
			this->panel37->ResumeLayout(false);
			this->panel38->ResumeLayout(false);
			this->panel41->ResumeLayout(false);
			this->MMFileSubMenu->ResumeLayout(false);
			this->panel61->ResumeLayout(false);
			this->panel64->ResumeLayout(false);
			this->panel65->ResumeLayout(false);
			this->panel66->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		// Highlight close cross
	private: System::Void CloseCrossPicture_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::FromArgb(252, 98, 32);
	}
	private: System::Void CloseCrossPicture_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::White;
	}
		   // Exit question
	private: System::Void CloseCrossPicture_Click(System::Object^ sender, System::EventArgs^ e) {
		if (adapter->wasSaved()) {
			if (MessageBox::Show(L"Do you want to exit?", L"Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
				== System::Windows::Forms::DialogResult::Yes) {
				Close();
			}
		}
		else {
			System::Windows::Forms::DialogResult res
				= MessageBox::Show(L"Database not saved. Do you want to save it before closure?", L"Exit",
					MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);

			if (res != System::Windows::Forms::DialogResult::Cancel) {
				if (res == System::Windows::Forms::DialogResult::Yes) {
					SaveDB_Click(nullptr, nullptr);

					if (adapter->wasSaved())
						Close();
				}
				else {
					Close();
				}

			}
		}
	}
		   //Minimizing
	private: System::Void WrapPicture_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
		   //Highlight wrap button
	private: System::Void WrapPicture_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::FromArgb(252, 148, 103);
	}
	private: System::Void WrapPicture_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::White;
	}
		   //Highlight expand button
	private: System::Void ExpandPicture_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::FromArgb(240, 240, 240);
	}
	private: System::Void ExpandPicture_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::White;
	}
		   //Highlight adds buttons
	private: System::Void AddPictureBox_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::FromArgb(252, 197, 173);
	}
	private: System::Void AddPictureBox_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::WhiteSmoke;
	}

		   //Dragging
		   bool isDragging = false;
		   int mouseX, mouseY;

	private: System::Void MenuPanel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			isDragging = true;
			mouseX = e->X;
			mouseY = e->Y;
		}
	}
	private: System::Void MenuPanel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isDragging) {
			this->Left = System::Windows::Forms::Cursor::Position.X - mouseX;
			this->Top = System::Windows::Forms::Cursor::Position.Y - mouseY;
		}
	}
	private: System::Void MenuPanel_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isDragging = false;
	}
		   //Highlight menu items
	private: System::Void mmTitle_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(252, 148, 103);
	}
	private: System::Void mmTitle_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::White;
	}
	private: System::Void MainDataBaseGrid_CellMouseEnter(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		DataGridView^ target = (DataGridView^)sender;
		target->Columns[e->ColumnIndex]->HeaderCell->Style->BackColor = Color::FromArgb(252, 135, 85);
	}
	private: System::Void MainDataBaseGrid_CellMouseLeave(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		DataGridView^ target = (DataGridView^)sender;
		target->Columns[e->ColumnIndex]->HeaderCell->Style->BackColor = Color::FromArgb(252, 158, 118);

	}

		   // INITIALIZING ADAPTER
		   DataBase* db = new DataBase();
		   DBAdapter^ adapter;
	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		adapter = gcnew DBAdapter(db, MainDataGridView);
	}

		   bool isGridFree = true;
		   // ADDING FIELD
	private: System::Void AddFieldPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			isGridFree = false;
			MainDataGridView->Columns->Add("Column", "Column");
			TitleTextBox->Text = "Column" + (db->getFieldCount() + 1);
			TypeComboBox->SelectedIndex = 0;
			AddFieldPanel->Visible = true;
			ShowHint("Enter unique title.");
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::AddFieldHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void AddFieldHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			AddFieldPanelConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			e->SuppressKeyPress = true;
			AddFieldPanelCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void AddFieldPanelConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		AddFieldPanel->Visible = false;
		MainDataGridView->Columns->RemoveAt(MainDataGridView->ColumnCount - 1);
		if (!adapter->addField(DBType::types(Convert::ToInt32(TypeComboBox->SelectedIndex + 2)), new DBString(TitleTextBox->Text))) {
			ShowAndHighlightMsg("Such field already exsists.", Color::FromArgb(245, 223, 111));
		}
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::AddFieldHotKey_KeyDown);
	}
	private: System::Void AddFieldPanelCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		AddFieldPanel->Visible = false;
		MainDataGridView->Columns->RemoveAt(MainDataGridView->ColumnCount - 1);
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::AddFieldHotKey_KeyDown);
	}
	private: System::Void TitleTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		TitleTextBox->SelectAll();
	}
	private: System::Void TitleTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->Columns[MainDataGridView->ColumnCount - 1]->HeaderText = ((TextBox^)sender)->Text;
	}

		   // END

		   // ADDING RECORD
	private: System::Void AddRecordPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {

		if (isGridFree) {
			if (db->getFieldCount() == 0) {
				ShowAndHighlightMsg("Add columns first", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			TypesList->Items->Clear();
			for (int i = 0; i < db->getFieldCount(); i++) {
				TypesList->Items->Add(db->getTitle(i).toSysString());
			}
			AddRecordPanel->Visible = true;
			MainDataGridView->Rows->Add();
			ShowHint("Values of cells of new record must be correct.");
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::AddRecordHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void AddRecordHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			AddRecordPanelConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			e->SuppressKeyPress = true;
			AddRecordPanelCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void AddRecordPanelConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < TypesList->Items->Count; i++) {
			if (!TypesList->GetItemChecked(i)) {
				ShowAndHighlightMsg("Enter correct values.", Color::FromArgb(255, 113, 113));
				return;
			}
		}
		AddRecordPanel->Visible = false;
		auto rec = new DBRecord<DBType*>();
		int lastRowIndex = MainDataGridView->RowCount - 1;

		for (int i = 0; i < db->getFieldCount(); i++) {
			rec->add(db->newElementFromString(DBType::types(db->getType(i)),
				DBString((System::String^)MainDataGridView->Rows[lastRowIndex]->Cells[i]->Value)));
		}

		MainDataGridView->Rows->RemoveAt(lastRowIndex);
		adapter->addRecord(rec);
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::AddRecordHotKey_KeyDown);
	}

	private: System::Void AddRecordPanelCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		int lastRowIndex = MainDataGridView->RowCount - 1;
		MainDataGridView->Rows->RemoveAt(lastRowIndex);
		AddRecordPanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::AddRecordHotKey_KeyDown);
	}
		   // END

	   // REMOVE FIELD
	private: System::Void RemoveField_Click(System::Object^ sender, System::EventArgs^ e) {

		if (isGridFree) {
			if (db->getFieldCount() == 0) {
				ShowAndHighlightMsg("No columns.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			RemoveFieldTB->Text = "";
			RemoveFieldPanel->Visible = true;
			MainDataGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataGridView_RemoveFieldCellClick);
			ShowHint("Click on column you need.");
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::RemoveFieldHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void RemoveFieldHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			RemoveFieldConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			RemoveFieldCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void RemoveFieldConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = db->indexOfTitle(&(new DBString(RemoveFieldTB->Text))->trim());
		if (index == -1) {
			ShowAndHighlightMsg("Field not found.", Color::FromArgb(255, 113, 113));
		}
		else {
			if (!adapter->removeField(index)) {
				ShowAndHighlightMsg("Unknown error.", Color::FromArgb(255, 113, 113));
				return;
			}
			MainDataGridView->CellClick -= gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataGridView_RemoveFieldCellClick);
			RemoveFieldPanel->Visible = false;
			isGridFree = true;
			ClearHint();
			this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::RemoveFieldHotKey_KeyDown);
		}
	}
	private: System::Void RemoveFieldCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->CellClick -= gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataGridView_RemoveFieldCellClick);
		RemoveFieldPanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::RemoveFieldHotKey_KeyDown);
	}
	private: System::Void MainDataGridView_RemoveFieldCellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		RemoveFieldTB->Text = MainDataGridView->Columns[e->ColumnIndex]->HeaderText;
	}
		   // END

		   // REMOVE RECORD
	private: System::Void RemoveRecord_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (db->getSize() == 0) {
				ShowAndHighlightMsg("No records.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			RemoveRecordTB->Text = "";
			RemoveRecordPanel->Visible = true;
			MainDataGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataGridView_RemoveRecordCellClick);
			ShowHint("Click on record you need.");
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::RemoveRecordHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void RemoveRecordHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			RemoveRecordConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			RemoveRecordConfirm_Click(nullptr, nullptr);
		}
	}
	private: System::Void RemoveRecordConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!adapter->removeRecord(Convert::ToInt32(RemoveRecordTB->Text))) {
				ShowAndHighlightMsg("Record not found.", Color::FromArgb(255, 113, 113));
				return;
			}
			MainDataGridView->CellClick -= gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataGridView_RemoveRecordCellClick);
			RemoveRecordPanel->Visible = false;
			isGridFree = true;
			ClearHint();
			this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::RemoveRecordHotKey_KeyDown);
		}
		catch (System::Exception^)
		{
			ShowAndHighlightMsg("Invalid value.", Color::FromArgb(255, 113, 113));
		}
	}
	private: System::Void RemoveRecordCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->CellClick -= gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::MainDataGridView_RemoveRecordCellClick);
		RemoveRecordPanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::RemoveRecordHotKey_KeyDown);
	}
	private: System::Void MainDataGridView_RemoveRecordCellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		RemoveRecordTB->Text = Convert::ToString(e->RowIndex);
	}
		   //END

		   // SWAP FIELDS
	private: System::Void SwapFields_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (db->getFieldCount() == 0) {
				ShowAndHighlightMsg("No colunms.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			SwapFieldsPanelFTB->Text = "";
			SwapFieldsPanelSTB->Text = "";
			SwapFieldsPanel->Visible = true;
			isFirstTurn = true;
			ShowHint("Left click to choose columns, right click to cancel choice.");
			MainDataGridView->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this,
				&MyForm::MainDataGridView_SwapFieldsCellMouseClick);
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::SwapFieldsHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void SwapFieldsHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			SwapFieldsConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			e->SuppressKeyPress = true;
			SwapFieldsCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void SwapFieldsConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!adapter->swapFields(new DBString(SwapFieldsPanelFTB->Text), new DBString(SwapFieldsPanelSTB->Text))) {
				ShowAndHighlightMsg("One or more fields not found.", Color::FromArgb(255, 113, 113));
				return;
			}
			MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_SwapFieldsCellMouseClick);
			SwapFieldsPanel->Visible = false;
			isGridFree = true;
			ClearHint();
			this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::SwapFieldsHotKey_KeyDown);
		}
		catch (System::Exception^)
		{
			ShowAndHighlightMsg("Invalid value.", Color::FromArgb(255, 113, 113));
		}
	}
	private: System::Void SwapFieldsCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_SwapFieldsCellMouseClick);
		SwapFieldsPanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::SwapFieldsHotKey_KeyDown);
	}
		   bool isFirstTurn;
	private: System::Void MainDataGridView_SwapFieldsCellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			if (SwapFieldsPanelSTB->Text == "") {
				SwapFieldsPanelFTB->Text = "";
				isFirstTurn = true;
			}
			else {
				SwapFieldsPanelSTB->Text = "";
				isFirstTurn = true;
			}
		}
		else {
			if (isFirstTurn) {
				SwapFieldsPanelFTB->Text = MainDataGridView->Columns[e->ColumnIndex]->HeaderText;
			}
			else {
				SwapFieldsPanelSTB->Text = MainDataGridView->Columns[e->ColumnIndex]->HeaderText;
			}
			isFirstTurn = !isFirstTurn;
		}
	}
		   //END

		   // SWAP RECORDS
	private: System::Void SwapRecords_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (db->getSize() == 0) {
				ShowAndHighlightMsg("No rows.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			SwapRecordsPanelFTB->Text = "";
			SwapRecordsPanelSTB->Text = "";
			SwapRecordsPanel->Visible = true;
			isFirstTurn = true;
			ShowHint("Left click to choose rows, right click to cancel choice.");
			MainDataGridView->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this,
				&MyForm::MainDataGridView_SwapRecordsCellMouseClick);
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::SwapRecordsHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void SwapRecordsHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			SwapRecordsConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			e->SuppressKeyPress = true;
			SwapRecordsCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void SwapRecordsConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!adapter->swapRecords(Convert::ToInt32(SwapRecordsPanelFTB->Text), Convert::ToInt32(SwapRecordsPanelSTB->Text))) {
				ShowAndHighlightMsg("One or more records not found.", Color::FromArgb(255, 113, 113));
				return;
			}
			MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_SwapRecordsCellMouseClick);
			SwapRecordsPanel->Visible = false;
			isGridFree = true;
			ClearHint();
			this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::SwapRecordsHotKey_KeyDown);
		}
		catch (System::Exception^)
		{
			ShowAndHighlightMsg("Invalid value.", Color::FromArgb(255, 113, 113));
		}
	}
	private: System::Void SwapRecordsCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_SwapRecordsCellMouseClick);
		SwapRecordsPanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::SwapRecordsHotKey_KeyDown);
	}

	private: System::Void MainDataGridView_SwapRecordsCellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			if (SwapRecordsPanelSTB->Text == "") {
				SwapRecordsPanelFTB->Text = "";
				isFirstTurn = true;
			}
			else {
				SwapRecordsPanelSTB->Text = "";
				isFirstTurn = true;
			}
		}
		else {
			if (isFirstTurn) {
				SwapRecordsPanelFTB->Text = "" + e->RowIndex;
			}
			else {
				SwapRecordsPanelSTB->Text = "" + e->RowIndex;
			}
			isFirstTurn = !isFirstTurn;
		}
	}
		   // END

		   // MOVE FIELD BEFORE
	private: System::Void MainDataGridView_ColumnDisplayIndexChanged(System::Object^ sender, System::Windows::Forms::DataGridViewColumnEventArgs^ e) {
		if (isGridFree && !adapter->moveFieldInDB(e->Column->Index, e->Column->DisplayIndex)) {
			adapter->reload();
		}
	}
	private: System::Void MoveFieldBefore_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (db->getFieldCount() == 0) {
				ShowAndHighlightMsg("No colunms.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			TitleOfMovableFieldTB->Text = "";
			MoveFieldBeforeTB->Text = "";
			MoveFieldBeforePanel->Visible = true;
			isFirstTurn = true;
			ShowHint("Left click to choose columns, right click to cancel choice.");
			MainDataGridView->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this,
				&MyForm::MainDataGridView_MoveFieldBeforeCellMouseClick);
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::MoveFieldBeforeHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void MoveFieldBeforeHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			MoveFieldBeforeConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			MoveFieldBeforeCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void MoveFieldBeforeToEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!adapter->moveFieldToEnd(new DBString(TitleOfMovableFieldTB->Text))) {
			ShowAndHighlightMsg("Field not found.", Color::FromArgb(255, 113, 113));
			return;
		}
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_MoveFieldBeforeCellMouseClick);
		MoveFieldBeforePanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::MoveFieldBeforeHotKey_KeyDown);
	}
	private: System::Void MoveFieldBeforeConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!adapter->moveFieldBefore(new DBString(TitleOfMovableFieldTB->Text), new DBString(MoveFieldBeforeTB->Text))) {
			ShowAndHighlightMsg("One or more fields not found.", Color::FromArgb(255, 113, 113));
			return;
		}
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_MoveFieldBeforeCellMouseClick);
		MoveFieldBeforePanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::MoveFieldBeforeHotKey_KeyDown);
	}
	private: System::Void MoveFieldBeforeCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_MoveFieldBeforeCellMouseClick);
		MoveFieldBeforePanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::MoveFieldBeforeHotKey_KeyDown);
	}

	private: System::Void MainDataGridView_MoveFieldBeforeCellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			if (MoveFieldBeforeTB->Text == "") {
				TitleOfMovableFieldTB->Text = "";
				isFirstTurn = true;
			}
			else {
				MoveFieldBeforeTB->Text = "";
				isFirstTurn = true;
			}
		}
		else {
			if (isFirstTurn) {
				TitleOfMovableFieldTB->Text = MainDataGridView->Columns[e->ColumnIndex]->HeaderText;
			}
			else {
				MoveFieldBeforeTB->Text = MainDataGridView->Columns[e->ColumnIndex]->HeaderText;
			}
			isFirstTurn = !isFirstTurn;
		}
	}
		   // END

		   // MOVE RECORD BEFORE
	private: System::Void MoveRecordBefore_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (db->getSize() == 0) {
				ShowAndHighlightMsg("No records.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			IndexOfMovableRecordTB->Text = "";
			MoveRecordBeforeTB->Text = "";
			MoveRecordBeforePanel->Visible = true;
			isFirstTurn = true;
			ShowHint("Left click to choose rows, right click to cancel choice.");
			MainDataGridView->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this,
				&MyForm::MainDataGridView_MoveRecordBeforeCellMouseClick);
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::MoveRecordBeforeHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void MoveRecordBeforeHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			MoveRecordBeforeConfirm_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			MoveRecordBeforeCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void MoveRecordToEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!adapter->moveRecordBefore(Convert::ToInt32(IndexOfMovableRecordTB->Text), db->getSize())) {
				ShowAndHighlightMsg("Field not found.", Color::FromArgb(255, 113, 113));
				return;
			}
			MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_MoveRecordBeforeCellMouseClick);
			MoveRecordBeforePanel->Visible = false;
			isGridFree = true;
			ClearHint();
			this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::MoveRecordBeforeHotKey_KeyDown);
		}
		catch (const std::exception&)
		{
			ShowAndHighlightMsg("Invalid value.", Color::FromArgb(255, 113, 113));
		}
	}
	private: System::Void MoveRecordBeforeConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (!adapter->moveRecordBefore(Convert::ToInt32(IndexOfMovableRecordTB->Text), Convert::ToInt32(MoveRecordBeforeTB->Text))) {
				ShowAndHighlightMsg("One or more fields not found.", Color::FromArgb(255, 113, 113));
				return;
			}
			MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_MoveRecordBeforeCellMouseClick);
			MoveRecordBeforePanel->Visible = false;
			isGridFree = true;
			ClearHint();
			this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::MoveRecordBeforeHotKey_KeyDown);
		}
		catch (const std::exception&)
		{
			ShowAndHighlightMsg("One or more index is incorrect.", Color::FromArgb(255, 113, 113));
		}
	}
	private: System::Void MoveRecordBeforeCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_MoveRecordBeforeCellMouseClick);
		MoveRecordBeforePanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::MoveRecordBeforeHotKey_KeyDown);
	}

	private: System::Void MainDataGridView_MoveRecordBeforeCellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			if (MoveRecordBeforeTB->Text == "") {
				IndexOfMovableRecordTB->Text = "";
				isFirstTurn = true;
			}
			else {
				MoveRecordBeforeTB->Text = "";
				isFirstTurn = true;
			}
		}
		else {
			if (isFirstTurn) {
				IndexOfMovableRecordTB->Text = "" + e->RowIndex;
			}
			else {
				MoveRecordBeforeTB->Text = "" + e->RowIndex;
			}
			isFirstTurn = !isFirstTurn;
		}
	}
		   //END

		   // SETTING 
	private: System::Void MainDataGridView_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (isGridFree) {
			adapter->set(e->RowIndex, e->ColumnIndex, DBString((System::String^)((DataGridView^)sender)->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value));
		}
		else {
			if (AddRecordPanel->Visible) {
				if (db->isCorrectInitializer(DBString((System::String^)((DataGridView^)sender)->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value),
					e->ColumnIndex)) {
					adapter->set(e->RowIndex, e->ColumnIndex, DBString((System::String^)((DataGridView^)sender)->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value));

					ShowAndHighlightMsg("Entered correct value...", Color::FromArgb(118, 205, 118));
					TypesList->SetItemChecked(e->ColumnIndex, true);
				}
				else {
					ShowAndHighlightMsg("Entered invalid value...", Color::FromArgb(245, 223, 111));
					TypesList->SetItemChecked(e->ColumnIndex, false);
				}
			}
		}
	}
		   // END

		   // LIVE EDITING ROW MODE
	private: System::Void RowEditMode_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (db->getSize() == 0) {
				ShowAndHighlightMsg("No records.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			RowEditModePanel->Visible = true;
			ShowHint("You can remove or copy rows.");
			MainDataGridView->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this,
				&MyForm::MainDataGridView_RowEditModeCellMouseClick);
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::RowEditModeHotKey_KeyDown);

			initRowEditMode();
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void initRowEditMode() {
		DataGridViewImageColumn^ copyCol = gcnew DataGridViewImageColumn();
		copyCol->Name = "%%%Copy%%%";
		copyCol->HeaderText = "Copy";
		copyCol->Image = Image::FromFile("images\\copyForCell.png");
		copyCol->DefaultCellStyle->SelectionBackColor = Color::FromArgb(255, 255, 255);

		MainDataGridView->Columns->Insert(0, copyCol);

		DataGridViewImageColumn^ removeCol = gcnew DataGridViewImageColumn();
		removeCol->Name = "%%%Remove%%%";
		removeCol->HeaderText = "Remove";
		removeCol->Image = Image::FromFile("images\\removeForCell.png");
		removeCol->DefaultCellStyle->SelectionBackColor = Color::FromArgb(255, 255, 255);

		MainDataGridView->Columns->Insert(0, removeCol);
		MainDataGridView->Cursor = Cursors::Hand;

	}
	private: System::Void RowEditModeHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter || e->KeyCode == Keys::Escape) {
			e->SuppressKeyPress = true;
			RowEditModeConfirm_Click(nullptr, nullptr);
		}
	}
	private: System::Void RowEditModeConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_RowEditModeCellMouseClick);
		RowEditModePanel->Visible = false;
		isGridFree = true;
		ClearHint();
		MainDataGridView->Cursor = Cursors::Default;
		MainDataGridView->Columns->RemoveAt(0);
		MainDataGridView->Columns->RemoveAt(0);
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::RowEditModeHotKey_KeyDown);
	}

	private: System::Void MainDataGridView_RowEditModeCellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->ColumnIndex == 0) {
			if (!adapter->removeRecord(e->RowIndex)) ShowAndHighlightMsg("Error.", Color::FromArgb(255, 113, 113));
		}
		if (e->ColumnIndex == 1) {
			if (!adapter->copyRecord(e->RowIndex)) ShowAndHighlightMsg("Error.", Color::FromArgb(255, 113, 113));
		}
	}
		   // END

		   // FINDING
	private: System::Void Find_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (db->getSize() == 0) {
				ShowAndHighlightMsg("No records.", Color::FromArgb(255, 113, 113));
				return;
			}
			isGridFree = false;
			FindPanel->Visible = true;
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::FindHotKey_KeyDown);

			initFindMode();
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void initFindMode() {
		MainDataGridView->Rows[0]->Cells[0]->Selected = true;
		FindableTB->Text = "";

	}
	private: System::Void FindHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			FindNext_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			e->SuppressKeyPress = true;
			FindPanelConfirm_Click(nullptr, nullptr);
		}
	}
	private: System::Void FindPanelConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		FindPanel->Visible = false;
		isGridFree = true;
		ClearHint();
		MainDataGridView->ClearSelection();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::FindHotKey_KeyDown);
	}
	private: System::Void FindNext_Click(System::Object^ sender, System::EventArgs^ e) {
		int sCol = MainDataGridView->SelectedCells[0]->ColumnIndex;
		int sRow = MainDataGridView->SelectedCells[0]->RowIndex;
		CellLocation answer = adapter->find(DBString(FindableTB->Text), (sCol + 1) % db->getFieldCount(), sRow + ((sCol + 1) % db->getFieldCount() == 0));

		if (answer.col == -1 || answer.row == -1) {
			ShowAndHighlightMsg("Not found enough.", Color::FromArgb(255, 113, 113));
			MainDataGridView->ClearSelection();
			MainDataGridView->Rows[0]->Cells[0]->Selected = true;
		}
		else {
			MainDataGridView->ClearSelection();
			MainDataGridView->Rows[answer.row]->Cells[answer.col]->Selected = true;
		}
	}
		   // END

		   // SORTING
	private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			isGridFree = false;
			SortPanel->Visible = true;
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::SortHotKey_KeyDown);
			MainDataGridView->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_SortCellMouseClick);

			initSortMode();
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void MainDataGridView_SortCellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		TargetFieldTB->Text = MainDataGridView->Columns[e->ColumnIndex]->HeaderText;
	}
	private: System::Void initSortMode() {
		TargetFieldTB->Text = "";

	}
	private: System::Void SortHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			e->SuppressKeyPress = true;
			SortPanelSort_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			e->SuppressKeyPress = true;
			SortPanelCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void SortPanelCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		adapter->unsort();
		SortPanel->Visible = false;
		isGridFree = true;
		ClearHint();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::SortHotKey_KeyDown);
		MainDataGridView->CellMouseClick -= gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::MainDataGridView_SortCellMouseClick);
	}
	private: System::Void SortPanelSort_Click(System::Object^ sender, System::EventArgs^ e) {
		if (adapter->sort(new DBString(TargetFieldTB->Text), AscendingOption->Checked)) {
			ShowAndHighlightMsg("Success!", Color::FromArgb(118, 205, 118));
		}
		else {
			ShowAndHighlightMsg("Enter field title.", Color::FromArgb(255, 113, 113));
		}
	}
		   // END

		  // FILTER
	private: System::Void Filter_Click(System::Object^ sender, System::EventArgs^ e) {

		if (isGridFree) {
			if (db->getSize() == 0) {
				ShowAndHighlightMsg("Add records first.", Color::FromArgb(255, 113, 113));
				return;
			}

			isGridFree = false;
			FilterPanel->Visible = true;
			MainDataGridView->Rows->Add();
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::FilterHotKey_KeyDown);
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
	private: System::Void FilterHotKey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			FilterPanelFilter_Click(nullptr, nullptr);
		}
		if (e->KeyCode == Keys::Escape) {
			FilterPanelCancel_Click(nullptr, nullptr);
		}
	}
	private: System::Void FilterPanelFilter_Click(System::Object^ sender, System::EventArgs^ e) {
		int lastRowIndex = MainDataGridView->RowCount - 1;

		DBRecord<DBString*>* filter = new DBRecord<DBString*>();
		for (int i = 0; i < db->getFieldCount(); i++) {
			filter->add(new DBString((System::String^)MainDataGridView->Rows[lastRowIndex]->Cells[i]->Value));
		}

		adapter->filter(StrictMode->Checked, filter);
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::FilterHotKey_KeyDown);
	}
	private: System::Void FilterPanelCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		int lastRowIndex = MainDataGridView->RowCount - 1;

		MainDataGridView->Rows->RemoveAt(lastRowIndex);
		FilterPanel->Visible = false;
		isGridFree = true;
		adapter->unfilter();
		this->KeyDown -= gcnew KeyEventHandler(this, &MyForm::FilterHotKey_KeyDown);
	}
		   // END

		   // HIGHLIGHTING TOP CONTROL BUTTON
	private: System::Void TopControlButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::WhiteSmoke;
	}
	private: System::Void TopControlButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::White;
	}
		   // END

		   // INFO BUTTON (TOP RIGHT)
	private: System::Void InfoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew InfoWindow)->Show();
	}
		   // END

		   // LEFT CONTROL PANEL
	private: System::Void MoveToEnd_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(116, 207, 249);
	}
	private: System::Void MoveToEnd_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(153, 219, 249);
	}
	private: System::Void Confirm_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(92, 184, 92);
	}
	private: System::Void Confirm_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(118, 205, 118);
	}
	private: System::Void Cancel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(217, 105, 101);
	}
	private: System::Void Cancel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->BackColor = Color::FromArgb(248, 143, 144);
	}
		   // END

		   //OPTIONAL BUTTON
	private: System::Void OptionalButton_Click(System::Object^ sender, System::EventArgs^ e) {
		adapter->addField(DBType::types(2), new DBString("Field 1"));
		adapter->addField(DBType::types(2), new DBString("Field 2"));
		adapter->addField(DBType::types(2), new DBString("Field 3"));
		adapter->addField(DBType::types(2), new DBString("Field 4"));
		adapter->addField(DBType::types(2), new DBString("Field 5"));
		for (int i = 9; i > -1; i--)
		{
			DBRecord<DBType*>* rec = new DBRecord<DBType*>();
			for (int j = db->getFieldCount() - 1; j > -1; j--)
			{
				rec->add(new DBDate(i + 1, j + 1, 2020));
			}
			adapter->addRecord(rec);
		}
	}
		   // END

		   // SPECIAL MESSAGE
	private: System::Void ShowAndHighlightMsg(System::String^ text, System::Drawing::Color color) {
		MsgText->Text = text;
		MsgContainer->BackColor = color;
		MsgContainer->Visible = true;
		MsgCloseTimer->Enabled = true;
	}
	private: System::Void MsgCrossBox_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = Color::FromArgb(202, 39, 39);
	}
	private: System::Void MsgCrossBox_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((PictureBox^)sender)->BackColor = ((PictureBox^)sender)->Parent->BackColor;
	}
	private: System::Void MsgCrossBox_Click(System::Object^ sender, System::EventArgs^ e) {
		MsgContainer->Visible = false;
	}
	private: System::Void MsgCloseTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		MsgContainer->Visible = false;
		MsgCloseTimer->Enabled = false;
	}
		   // END

		   // HINT LABEL
	private: System::Void ShowHint(System::String^ text) {
		TopHintLabel->Text = text;
		TopHintLabel->BackColor = Color::FromArgb(153, 219, 249);
	}
	private: System::Void ClearHint() {
		TopHintLabel->Text = "";
		TopHintLabel->BackColor = TopHintLabel->Parent->BackColor;
	}
		   // END

		   // SAVING DATABASE
	private: System::Void SaveDB_Click(System::Object^ sender, System::EventArgs^ e) {
		if (SaveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (adapter->save(SaveFileDialog->FileName)) {
				ShowAndHighlightMsg("Success!", Color::FromArgb(118, 205, 118));
			}
			else {
				ShowAndHighlightMsg("Error!", Color::FromArgb(255, 113, 113));
			}
		}
	}
		   // END

		   // LOADING DATABASE
	private: System::Void OpenDB_Click(System::Object^ sender, System::EventArgs^ e) {
		if (OpenFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (adapter->load(OpenFileDialog->FileName)) {
				ShowAndHighlightMsg("Success!", Color::FromArgb(118, 205, 118));
			}
			else {
				ShowAndHighlightMsg("Error!", Color::FromArgb(255, 113, 113));
			}
		}
	}
		   // END

		   // CREATING DATABASE
	private: System::Void NewDB_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (adapter->wasSaved()) {
				db = new DataBase();
				adapter = gcnew DBAdapter(db, MainDataGridView);
				adapter->reload();
			}
			else {
				System::Windows::Forms::DialogResult res
					= MessageBox::Show(L"Database not saved. Do you want to save it?", L"Exit",
						MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
				if (res != System::Windows::Forms::DialogResult::Cancel) {
					if (res == System::Windows::Forms::DialogResult::Yes) {
						SaveDB_Click(nullptr, nullptr);
					}

					if (res != System::Windows::Forms::DialogResult::Cancel) {
						db = new DataBase();
						adapter = gcnew DBAdapter(db, MainDataGridView);
						adapter->reload();
					}
				}
			}
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
		   // END

		   // RELOAD DATABASE
	private: System::Void ReloadDB_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isGridFree) {
			if (adapter->reload()) {
				ShowAndHighlightMsg("Reloaded successfully!", Color::FromArgb(118, 205, 118));
			}
			else {
				ShowAndHighlightMsg("Error!", Color::FromArgb(255, 113, 113));
			}
		}
		else {
			ShowAndHighlightMsg("Complete or cancel current operation.", Color::FromArgb(245, 223, 111));
		}
	}
		   // END

		   // MAIN MENU

	private: System::Void HighlightMenuItem_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->Parent->BackColor = Color::FromArgb(252, 148, 103);
	}
	private: System::Void HighlightMenuItem_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		((Label^)sender)->Parent->BackColor = Color::FromArgb(248, 248, 248);
	}

		   // ABOUT
	private: System::Void MMAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		MMFileSubMenu->Visible = false;
		MMEditSubMenu->Visible = false;
		MMAboutSubMenu->Visible = !MMAboutSubMenu->Visible;
	}
		   // EDIT
	private: System::Void MMEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		MMFileSubMenu->Visible = false;
		MMAboutSubMenu->Visible = false;
		MMEditSubMenu->Visible = !MMEditSubMenu->Visible;
	}
		   // FILE

		   // END
	private: System::Void MMFile_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		MMAboutSubMenu->Visible = false;
		MMFileSubMenu->Visible = !MMFileSubMenu->Visible;
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->Alt) {
			switch (e->KeyCode)
			{
			case Keys::N: MINew_Click(nullptr, nullptr); break;
			case Keys::O: MIOpen_Click(nullptr, nullptr); break;
			case Keys::S: MISave_Click(nullptr, nullptr); break;
			case Keys::R: MIReload_Click(nullptr, nullptr); break;
			case Keys::D1: MIAddField_Click(nullptr, nullptr); break;
			case Keys::D2: MIRemoveField_Click(nullptr, nullptr); break;
			case Keys::D3: MISwapFields_Click(nullptr, nullptr); break;
			case Keys::D4: MIMoveFieldBefore_Click(nullptr, nullptr); break;
			case Keys::D5: MIAddRecord_Click(nullptr, nullptr); break;
			case Keys::D6: MIRemoveRecord_Click(nullptr, nullptr); break;
			case Keys::D7: MISwapRecords_Click(nullptr, nullptr); break;
			case Keys::D8: MIMoveRecordBefore_Click(nullptr, nullptr); break;
			case Keys::D9: MIRecordEditMode_Click(nullptr, nullptr); break;
			case Keys::F: MIFind_Click(nullptr, nullptr); break;
			case Keys::T: MISort_Click(nullptr, nullptr); break;
			case Keys::E: MIFilter_Click(nullptr, nullptr); break;
			case Keys::K: MIHotKeys_Click(nullptr, nullptr); break;
			case Keys::H: MIHelp_Click(nullptr, nullptr); break;
			case Keys::P: MIAboutProgram_Click(nullptr, nullptr); break;
			case Keys::A: MIAboutAuthor_Click(nullptr, nullptr); break;
			default:
				break;
			}
		}
	}
	private: System::Void MINew_Click(System::Object^ sender, System::EventArgs^ e) {
		MMFileSubMenu->Visible = false;
		NewDB_Click(nullptr, nullptr);
	}
	private: System::Void MIOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		MMFileSubMenu->Visible = false;
		OpenDB_Click(nullptr, nullptr);
	}
	private: System::Void MISave_Click(System::Object^ sender, System::EventArgs^ e) {
		MMFileSubMenu->Visible = false;
		SaveDB_Click(nullptr, nullptr);
	}
	private: System::Void MIExit_Click(System::Object^ sender, System::EventArgs^ e) {
		MMFileSubMenu->Visible = false;
		Close();
	}
	private: System::Void MIReload_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		ReloadDB_Click(nullptr, nullptr);
	}
	private: System::Void MIAddField_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		AddFieldPictureBox_Click(nullptr, nullptr);
	}
	private: System::Void MIRemoveField_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		RemoveField_Click(nullptr, nullptr);
	}
	private: System::Void MISwapFields_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		SwapFields_Click(nullptr, nullptr);
	}
	private: System::Void MIMoveFieldBefore_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		MoveFieldBefore_Click(nullptr, nullptr);
	}
	private: System::Void MIAddRecord_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		AddRecordPictureBox_Click(nullptr, nullptr);
	}
	private: System::Void MIRemoveRecord_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		RemoveRecord_Click(nullptr, nullptr);
	}
	private: System::Void MISwapRecords_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		SwapRecords_Click(nullptr, nullptr);
	}
	private: System::Void MIMoveRecordBefore_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		MoveRecordBefore_Click(nullptr, nullptr);
	}
	private: System::Void MIRecordEditMode_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		RowEditMode_Click(nullptr, nullptr);
	}
	private: System::Void MIFind_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		Find_Click(nullptr, nullptr);
	}
	private: System::Void MISort_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		Sort_Click(nullptr, nullptr);
	}
	private: System::Void MIFilter_Click(System::Object^ sender, System::EventArgs^ e) {
		MMEditSubMenu->Visible = false;
		Filter_Click(nullptr, nullptr);
	}
	private: System::Void MIHotKeys_Click(System::Object^ sender, System::EventArgs^ e) {
		MMAboutSubMenu->Visible = false;
		MessageBox::Show("Alt+N - new database\n" + "Alt+O - open database\n" + "Alt+S - save database\n" + "Alt+R - reload database\n" +
			"Alt+1 - add field\n" + "Alt+2 - remove field\n" + "Alt+3 - swap fields\n" + "Alt+4 - move field before\n" + "Alt+5 - add record\n" +
			"Alt+6 - remove record\n" + "Alt+7 - swap records\n" + "Alt+8 - move record before\n" + "Alt+9 - row edit mode\n" +
			"Alt+F - find\n" + "Alt+T - sort\n" + "Alt+E - filter\n" + "Alt+K - hot keys\n" + "Alt+H - help\n" + "Alt+P - about program\n" +
			"Alt+A - about author\n", "Hot keys", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void MIHelp_Click(System::Object^ sender, System::EventArgs^ e) {
		MMAboutSubMenu->Visible = false;
		InfoButton_Click(nullptr, nullptr);
	}
	private: System::Void MIAboutProgram_Click(System::Object^ sender, System::EventArgs^ e) {
		MMAboutSubMenu->Visible = false;
		MessageBox::Show("This program provides work with databases.", "About program", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void MIAboutAuthor_Click(System::Object^ sender, System::EventArgs^ e) {
		MMAboutSubMenu->Visible = false;
		MessageBox::Show("Made by Matvey Vorivoda, student of group 951007.", "About author", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	};
}