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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
			this->btnOpen->Text = L"Открыть";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(791, 114);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(104, 38);
			this->btnSave->TabIndex = 2;
			this->btnSave->Text = L"Сохранить";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"txt";
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->openFileDialog->Title = L"Открыть файл";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->DefaultExt = L"txt";
			this->saveFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->saveFileDialog->Title = L"Сохранить файл";
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
			this->btnAdd->Text = L"Добавить строку";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(791, 73);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(104, 35);
			this->btnRemove->TabIndex = 7;
			this->btnRemove->Text = L"Удалить строку";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// btnNewGrid
			// 
			this->btnNewGrid->Location = System::Drawing::Point(791, 158);
			this->btnNewGrid->Name = L"btnNewGrid";
			this->btnNewGrid->Size = System::Drawing::Size(104, 63);
			this->btnNewGrid->TabIndex = 8;
			this->btnNewGrid->Text = L"Создать таблицы";
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
			this->btnFind->Text = L"Найти";
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
			this->btnSaveSecond->Text = L"Сохранить нижнюю таблицу";
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
			this->label1->Text = L"Введите должность для поиска";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(146, 389);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 26);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Лучше не использовать русский язык в файле\r\nВозможны проблемы с кодировкой\r\n";
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
			this->Text = L"Работа с файлами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdSecond))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//открыть файл
	private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		//очищаем таблицы
		clearAllFirst();
		clearAllSecond();
		//если верхней нет
		if (grdFirst->RowCount == 0)
		{
			MessageBox::Show("Создайте таблицу!");
		}
		else //если есть
		{
			//из тхт в таблицу
			System::IO::Stream^ myStream;
			if (this->openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				if ((myStream = openFileDialog->OpenFile()) != nullptr)
				{
					System::IO::StreamReader^ sw =
						gcnew System::IO::StreamReader(myStream,
							System::Text::Encoding::GetEncoding(1251));
					int j = 0; //счетчик

					try
					{
						while (sw->Peek() > -1) //пока файл не закончился
						{
							System::String^ strl = "";
							strl = sw->ReadLine(); //считываем построчно

							for (int i = 0; i < grdFirst->ColumnCount; i++) //стоит только чтение, 
								//а при открытии файла доп строка не добавляется
							{
								int pos = 0;
								int x = strl->IndexOf(' '); //ориентируемся по _, 
								//поэтому просим пользователя пользоваться ставить их в конце строк

								System::String^ s = strl->Substring(pos, x - pos);
								grdFirst->Rows[j]->Cells[i]->Value = s; //заносим в табличку

								strl = strl->Remove(0, x - pos + 1);//сдвигаемся
							}
							j++;
						}
					}

					catch (...)
					{
						MessageBox::Show("В таблице недостаточно строк или добавьте пробелы в конец строк!");
						//все очищаем
						clearAllFirst(); 
						clearAllSecond();
					}

					sw->Close();
				}
			}
		}
	}
		//сохранить верхнюю таблицу
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//если таблицы нет
		if (grdFirst->RowCount == 0 || grdSecond->RowCount == 0)
		{
			MessageBox::Show("Создайте таблицу!");
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
					//проходим по таблицк
					for (int j = 0; j < grdFirst->RowCount; j++)
					{
						//чтоб не сохранять пустые строки
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
		   //очистить верхнюю таблицу
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

		   //очистить нижнюю таблицу
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

		   //добавить строку
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//на случай, если столбцов нет совсем
		try
		{
			this->grdFirst->Rows->Add(1);
			this->grdSecond->Rows->Add(1); //максимум строк во 2 таблице - максимум их в первой
		}
		catch (...)
		{
			MessageBox::Show("Создайте таблицу!");
		}
	}
		  
		   //удалить все колонки
		   void deleteColumn()
		   {
			   //если нет столбцов
			   if (!grdFirst->ColumnCount)
			   {
				   MessageBox::Show("В таблице нет столбцов!");
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
						   MessageBox::Show("Не могу удалить столбец с индексом ");
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
						   MessageBox::Show("Не могу удалить столбец с индексом ");
					   }
				   }
				   else MessageBox::Show("Выберите столбцы для удаления");
			   }
		   }

		//удалить строку
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
			MessageBox::Show("Эту строку нельзя удалить!");
		}
	}

		//создать таблицы
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
		//названия колонок
		grdFirst->Columns[0]->HeaderText = "Фамилия";
		grdFirst->Columns[1]->HeaderText = "Имя";
		grdFirst->Columns[2]->HeaderText = "Отчество";
		grdFirst->Columns[3]->HeaderText = "Стаж работы";
		grdFirst->Columns[4]->HeaderText = "Должность";
		grdFirst->Columns[5]->HeaderText = "Оклад";

		grdSecond->Columns[0]->HeaderText = "Фамилия";
		grdSecond->Columns[1]->HeaderText = "Имя";
		grdSecond->Columns[2]->HeaderText = "Отчество";
		grdSecond->Columns[3]->HeaderText = "Стаж работы";
		grdSecond->Columns[4]->HeaderText = "Должность";
		grdSecond->Columns[5]->HeaderText = "Оклад";
		btnNewGrid->Enabled = false;
	}

		   //найти строки
	private: System::Void btnFind_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//есть ли таблицы
		if (grdFirst->RowCount == 0)
		{
			MessageBox::Show("Создайте таблицу!");
		}
		else
		{
			//очищаем вторую
			clearAllSecond();

			String^ str = txtFind->Text;

			int count = 0;
			try
			{
				//ищем
				for (int j = 0; j < grdFirst->RowCount; j++)
				{
					if (str == grdFirst->Rows[j]->Cells[4]->Value->ToString())
					{
						//если нашли, то вызываем от нее функцию
						//номер строки и количество найденных, чтобы знать номер строки во второй, куда вписывать
						newFind(j, count); 
						count++;
					}
				}
				if (count == 0) MessageBox::Show("Ничего не найдено");
			}
			catch (...)
			{
				MessageBox::Show("Уберите лишние пустые строки");
			}
		}
		txtFind->Text = "";
	}

		   //функция поиска и передачи во вторую таблицу
	void newFind(int index, int n)
	{
		for (int i = 0; i < grdSecond->ColumnCount; i++)
		{
			grdSecond->Rows[n]->Cells[i]->Value = grdFirst->Rows[index]->Cells[i]->Value;
		}
	}
		//сохранить вторую таблицу
	private: System::Void btnSaveSecond_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//существуют ли они вообще
		if (grdSecond->RowCount == 0 || grdSecond->RowCount == 0)
		{
			MessageBox::Show("Создайте нижнюю таблицу правильно");
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
					//проходим все ячейки
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
