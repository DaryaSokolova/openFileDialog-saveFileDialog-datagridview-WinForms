#pragma once
#include <string>

namespace Project26 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace std;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnOpen;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;


	private: System::Windows::Forms::DataGridView^ grdFirst;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnNewGrid;
	private: System::Windows::Forms::DataGridView^ grdSecond;
	private: System::Windows::Forms::Button^ btnFind;
	private: System::Windows::Forms::TextBox^ txtFind;
	private: System::Windows::Forms::Button^ btnSaveSecond;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->grdFirst = (gcnew System::Windows::Forms::DataGridView());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnNewGrid = (gcnew System::Windows::Forms::Button());
			this->grdSecond = (gcnew System::Windows::Forms::DataGridView());
			this->btnFind = (gcnew System::Windows::Forms::Button());
			this->txtFind = (gcnew System::Windows::Forms::TextBox());
			this->btnSaveSecond = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdSecond))->BeginInit();
			this->SuspendLayout();
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(791, 227);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(104, 40);
			this->btnOpen->TabIndex = 1;
			this->btnOpen->Text = L"�������";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(791, 114);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(104, 38);
			this->btnSave->TabIndex = 2;
			this->btnSave->Text = L"���������";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"txt";
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"��������� ����� (*.txt)|*.txt|��� ����� (*.*)|*.*";
			this->openFileDialog->Title = L"������� ����";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"txt";
			this->saveFileDialog->Filter = L"��������� ����� (*.txt)|*.txt|��� ����� (*.*)|*.*";
			this->saveFileDialog->Title = L"��������� ����";
			// 
			// grdFirst
			// 
			this->grdFirst->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdFirst->Location = System::Drawing::Point(29, 25);
			this->grdFirst->Name = L"grdFirst";
			this->grdFirst->ReadOnly = true;
			this->grdFirst->Size = System::Drawing::Size(756, 127);
			this->grdFirst->TabIndex = 5;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(791, 25);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(104, 42);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"�������� ������";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(791, 73);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(104, 35);
			this->btnRemove->TabIndex = 7;
			this->btnRemove->Text = L"������� ������";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnNewGrid
			// 
			this->btnNewGrid->Location = System::Drawing::Point(791, 158);
			this->btnNewGrid->Name = L"btnNewGrid";
			this->btnNewGrid->Size = System::Drawing::Size(104, 63);
			this->btnNewGrid->TabIndex = 8;
			this->btnNewGrid->Text = L"������� �������";
			this->btnNewGrid->UseVisualStyleBackColor = true;
			this->btnNewGrid->Click += gcnew System::EventHandler(this, &MyForm::btnNewGrid_Click);
			// 
			// grdSecond
			// 
			this->grdSecond->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdSecond->Location = System::Drawing::Point(29, 158);
			this->grdSecond->Name = L"grdSecond";
			this->grdSecond->ReadOnly = true;
			this->grdSecond->Size = System::Drawing::Size(756, 150);
			this->grdSecond->TabIndex = 9;
			// 
			// btnFind
			// 
			this->btnFind->Location = System::Drawing::Point(761, 336);
			this->btnFind->Name = L"btnFind";
			this->btnFind->Size = System::Drawing::Size(75, 23);
			this->btnFind->TabIndex = 10;
			this->btnFind->Text = L"�����";
			this->btnFind->UseVisualStyleBackColor = true;
			this->btnFind->Click += gcnew System::EventHandler(this, &MyForm::btnFind_Click);
			// 
			// txtFind
			// 
			this->txtFind->Location = System::Drawing::Point(642, 339);
			this->txtFind->Name = L"txtFind";
			this->txtFind->Size = System::Drawing::Size(100, 20);
			this->txtFind->TabIndex = 11;
			// 
			// btnSaveSecond
			// 
			this->btnSaveSecond->Location = System::Drawing::Point(791, 273);
			this->btnSaveSecond->Name = L"btnSaveSecond";
			this->btnSaveSecond->Size = System::Drawing::Size(104, 35);
			this->btnSaveSecond->TabIndex = 12;
			this->btnSaveSecond->Text = L"��������� ������ �������";
			this->btnSaveSecond->UseVisualStyleBackColor = true;
			this->btnSaveSecond->Click += gcnew System::EventHandler(this, &MyForm::btnSaveSecond_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(469, 341);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"������� ��������� ��� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(146, 389);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 26);
			this->label2->TabIndex = 14;
			this->label2->Text = L"����� �� ������������ ������� ���� � �����\r\n�������� �������� � ����������\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(365, 65);
			this->label3->TabIndex = 15;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(907, 454);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSaveSecond);
			this->Controls->Add(this->txtFind);
			this->Controls->Add(this->btnFind);
			this->Controls->Add(this->grdSecond);
			this->Controls->Add(this->btnNewGrid);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->grdFirst);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnOpen);
			this->Name = L"MyForm";
			this->Text = L"������ � �������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdSecond))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//������� ����
	private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		//������� �������
		clearAllFirst();
		clearAllSecond();
		//���� ������� ���
		if (grdFirst->RowCount == 0)
		{
			MessageBox::Show("�������� �������!");
		}
		else //���� ����
		{
			//�� ��� � �������
			System::IO::Stream^ myStream;
			if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = openFileDialog->OpenFile()) != nullptr)
				{
					System::IO::StreamReader^ sw =
						gcnew System::IO::StreamReader(myStream,
							System::Text::Encoding::GetEncoding(1251));
					int j = 0; //�������

					try
					{
						while (sw->Peek() > -1) //���� ���� �� ����������
						{
							System::String^ strl = "";
							strl = sw->ReadLine(); //��������� ���������

							for (int i = 0; i < grdFirst->ColumnCount; i++) //����� ������ ������, 
								//� ��� �������� ����� ��� ������ �� �����������
							{
								int pos = 0;
								int x = strl->IndexOf(' '); //������������� �� _, 
								//������� ������ ������������ ������������ ������� �� � ����� �����

								System::String^ s = strl->Substring(pos, x - pos);
								grdFirst->Rows[j]->Cells[i]->Value = s; //������� � ��������

								strl = strl->Remove(0, x - pos + 1);//����������
							}
							j++;
						}
					}

					catch (...)
					{
						MessageBox::Show("� ������� ������������ ����� ��� �������� ������� � ����� �����!");
						//��� �������
						clearAllFirst(); 
						clearAllSecond();
					}

					sw->Close();
				}
			}
		}
	}
		//��������� ������� �������
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//���� ������� ���
		if (grdFirst->RowCount == 0 || grdSecond->RowCount == 0)
		{
			MessageBox::Show("�������� �������!");
		}
		else
		{
			System::IO::Stream^ myStream;
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = saveFileDialog->OpenFile()) != nullptr)
				{
					System::IO::StreamWriter^ sw =
						gcnew System::IO::StreamWriter(myStream,
							System::Text::Encoding::GetEncoding(1251));
					//�������� �� �������
					for (int j = 0; j < grdFirst->RowCount; j++)
					{
						//���� �� ��������� ������ ������
						if (grdFirst->Rows[j]->Cells[0]->Value != "")
						{
							String^ s = "";
							for (int i = 0; i < grdFirst->ColumnCount; i++)
							{
								s += grdFirst->Rows[j]->Cells[i]->Value;
								s += " ";
							}
							sw->WriteLine(s);
						}
					}
			
					sw->Close();
				}
			}
		}
	}
		   //�������� ������� �������
		   void clearAllFirst()
		   {
			   for (int j = 0; j < grdFirst->RowCount; j++)
			   {
				   for (int i = 0; i < grdFirst->ColumnCount; i++)
				   {
					   grdFirst->Rows[j]->Cells[i]->Value = "";
				   }
			   }
		   }

		   //�������� ������ �������
		   void clearAllSecond()
		   {
			   for (int j = 0; j < grdSecond->RowCount; j++)
			   {
				   for (int i = 0; i < grdSecond->ColumnCount; i++)
				   {
					   grdSecond->Rows[j]->Cells[i]->Value = "";
				   }
			   }
		   }

		   //�������� ������
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//�� ������, ���� �������� ��� ������
		try
		{
			this->grdFirst->Rows->Add(1);
			this->grdSecond->Rows->Add(1); //�������� ����� �� 2 ������� - �������� �� � ������
		}
		catch (...)
		{
			MessageBox::Show("�������� �������!");
		}
	}
		  
		   //������� ��� �������
		   void deleteColumn()
		   {
			   //���� ��� ��������
			   if (!grdFirst->ColumnCount)
			   {
				   MessageBox::Show("� ������� ��� ��������!");
				   return;
			   }

			   if (grdFirst->SelectedColumns->Count > 0)
			   {
				   for (int i = 0; i < grdFirst->SelectedColumns->Count; i++)
				   {
					   int index1 = grdFirst->SelectedColumns[i]->Index;
					   try
					   {
						   grdFirst->Columns->RemoveAt(index1);
					   }
					   catch (...)
					   {
						   MessageBox::Show("�� ���� ������� ������� � �������� ");
					   }
				   }
			   }
			   else
			   {
				   int index1;
				   try
				   {
					   index1 = grdFirst->CurrentCell->ColumnIndex;
				   }
				   catch (...)
				   {

				   }

				   if (index1 != -1)
				   {
					   try
					   {
						   grdFirst->Columns->RemoveAt(index1);
					   }
					   catch (...)
					   {
						   MessageBox::Show("�� ���� ������� ������� � �������� ");
					   }
				   }
				   else MessageBox::Show("�������� ������� ��� ��������");
			   }
		   }

		//������� ������
	private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			if (!this->grdFirst->CurrentRow->IsNewRow)
			{
				int i1 = this->grdFirst->CurrentRow->Index;
				this->grdFirst->Rows->Remove(this->grdFirst->Rows[i1]);
			}
		}
		catch (...)
		{
			MessageBox::Show("��� ������ ������ �������!");
		}
	}

		//������� �������
	private: System::Void btnNewGrid_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for (int index = 0; index < 6; index++)
		{
			DataGridViewTextBoxColumn^ i1 = gcnew DataGridViewTextBoxColumn();
			grdFirst->Columns->Add(i1);
		}

		for (int index = 0; index < 6; index++)
		{
			DataGridViewTextBoxColumn^ i1 = gcnew DataGridViewTextBoxColumn();
			grdSecond->Columns->Add(i1);
		}
		//�������� �������
		grdFirst->Columns[0]->HeaderText = "�������";
		grdFirst->Columns[1]->HeaderText = "���";
		grdFirst->Columns[2]->HeaderText = "��������";
		grdFirst->Columns[3]->HeaderText = "���� ������";
		grdFirst->Columns[4]->HeaderText = "���������";
		grdFirst->Columns[5]->HeaderText = "�����";

		grdSecond->Columns[0]->HeaderText = "�������";
		grdSecond->Columns[1]->HeaderText = "���";
		grdSecond->Columns[2]->HeaderText = "��������";
		grdSecond->Columns[3]->HeaderText = "���� ������";
		grdSecond->Columns[4]->HeaderText = "���������";
		grdSecond->Columns[5]->HeaderText = "�����";
		btnNewGrid->Enabled = false;
	}

		   //����� ������
	private: System::Void btnFind_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//���� �� �������
		if (grdFirst->RowCount == 0)
		{
			MessageBox::Show("�������� �������!");
		}
		else
		{
			//������� ������
			clearAllSecond();

			String^ str = txtFind->Text;

			int count = 0;
			try
			{
				//����
				for (int j = 0; j < grdFirst->RowCount; j++)
				{
					if (str == grdFirst->Rows[j]->Cells[4]->Value->ToString())
					{
						//���� �����, �� �������� �� ��� �������
						//����� ������ � ���������� ���������, ����� ����� ����� ������ �� ������, ���� ���������
						newFind(j, count); 
						count++;
					}
				}
				if (count == 0) MessageBox::Show("������ �� �������");
			}
			catch (...)
			{
				MessageBox::Show("������� ������ ������ ������");
			}
		}
		txtFind->Text = "";
	}

		   //������� ������ � �������� �� ������ �������
	void newFind(int index, int n)
	{
		for (int i = 0; i < grdSecond->ColumnCount; i++)
		{
			grdSecond->Rows[n]->Cells[i]->Value = grdFirst->Rows[index]->Cells[i]->Value;
		}
	}
		//��������� ������ �������
	private: System::Void btnSaveSecond_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//���������� �� ��� ������
		if (grdSecond->RowCount == 0 || grdSecond->RowCount == 0)
		{
			MessageBox::Show("�������� ������ ������� ���������");
		}
		else
		{
			System::IO::Stream^ myStream;
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = saveFileDialog->OpenFile()) != nullptr)
				{
					System::IO::StreamWriter^ sw =
						gcnew System::IO::StreamWriter(myStream,
							System::Text::Encoding::GetEncoding(1251));
					//�������� ��� ������
					for (int j = 0; j < grdSecond->RowCount; j++)
					{
						if (grdSecond->Rows[j]->Cells[0]->Value != "")
						{
							String^ s = "";
							for (int i = 0; i < grdSecond->ColumnCount; i++)
							{
								s += grdSecond->Rows[j]->Cells[i]->Value;
								s += " ";
							}
							sw->WriteLine(s);
						}
					}

					sw->Close();
				}
			}
		}
	}
};
}
