procedure InitializeComponent;
    begin
        self.MainTable := new System.Windows.Forms.DataGridView();
        self.Num := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.PribType := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Year := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Price := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Place := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Date := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.BackStartBtn := new System.Windows.Forms.Button();
        self.NumBox := new System.Windows.Forms.TextBox();
        self.TypeBox := new System.Windows.Forms.TextBox();
        self.YearBox := new System.Windows.Forms.TextBox();
        self.PriceBox := new System.Windows.Forms.TextBox();
        self.PlaceBox := new System.Windows.Forms.TextBox();
        self.DateBox := new System.Windows.Forms.TextBox();
        self.AddItemLabel := new System.Windows.Forms.Label();
        self.AddLabelInfo := new System.Windows.Forms.Label();
        self.AddItemButton := new System.Windows.Forms.Button();
        self.DeleteLabel := new System.Windows.Forms.Label();
        self.DeleteLabelInfo := new System.Windows.Forms.Label();
        self.DeleteItemButton := new System.Windows.Forms.Button();
        self.SortLabel := new System.Windows.Forms.Label();
        self.SortTableButton := new System.Windows.Forms.Button();
        self.SortBox := new System.Windows.Forms.TextBox();
        self.SortLabelInfo := new System.Windows.Forms.Label();
        self.ShowTableButton := new System.Windows.Forms.Button();
        self.ItodButton := new System.Windows.Forms.Button();
        (System.ComponentModel.ISupportInitialize(self.MainTable)).BeginInit();
        self.SuspendLayout();
        // 
        // MainTable
        // 
        self.MainTable.AllowUserToAddRows := false;
        self.MainTable.AllowUserToDeleteRows := false;
        self.MainTable.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.MainTable.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[6](self.Num, self.PribType, self.Year, self.Price, self.Place, self.Date));
        self.MainTable.Location := new System.Drawing.Point(28, 26);
        self.MainTable.Name := 'MainTable';
        self.MainTable.ReadOnly := true;
        self.MainTable.RowHeadersWidth := 51;
        self.MainTable.Size := new System.Drawing.Size(643, 483);
        self.MainTable.TabIndex := 0;
        self.MainTable.CellContentClick += MainTable_CellContentClick;
        // 
        // Num
        // 
        self.Num.HeaderText := 'Номер прибора';
        self.Num.MinimumWidth := 6;
        self.Num.Name := 'Num';
        self.Num.ReadOnly := true;
        self.Num.Width := 125;
        // 
        // PribType
        // 
        self.PribType.HeaderText := 'Тип прибора';
        self.PribType.MinimumWidth := 6;
        self.PribType.Name := 'PribType';
        self.PribType.ReadOnly := true;
        self.PribType.Width := 125;
        // 
        // Year
        // 
        self.Year.HeaderText := 'Год выпуска';
        self.Year.MinimumWidth := 6;
        self.Year.Name := 'Year';
        self.Year.ReadOnly := true;
        self.Year.Width := 125;
        // 
        // Price
        // 
        self.Price.HeaderText := 'Цена';
        self.Price.MinimumWidth := 6;
        self.Price.Name := 'Price';
        self.Price.ReadOnly := true;
        self.Price.Width := 125;
        // 
        // Place
        // 
        self.Place.HeaderText := 'Место нахождения';
        self.Place.MinimumWidth := 6;
        self.Place.Name := 'Place';
        self.Place.ReadOnly := true;
        self.Place.Width := 125;
        // 
        // Date
        // 
        self.Date.HeaderText := 'Дата поверки';
        self.Date.MinimumWidth := 6;
        self.Date.Name := 'Date';
        self.Date.ReadOnly := true;
        self.Date.Width := 125;
        // 
        // BackStartBtn
        // 
        self.BackStartBtn.Location := new System.Drawing.Point(929, 515);
        self.BackStartBtn.Name := 'BackStartBtn';
        self.BackStartBtn.Size := new System.Drawing.Size(75, 23);
        self.BackStartBtn.TabIndex := 1;
        self.BackStartBtn.Text := 'Закрыть';
        self.BackStartBtn.UseVisualStyleBackColor := true;
        self.BackStartBtn.Click += BackStartBtn_Click;
        // 
        // NumBox
        // 
        self.NumBox.Location := new System.Drawing.Point(904, 52);
        self.NumBox.Name := 'NumBox';
        self.NumBox.Size := new System.Drawing.Size(100, 22);
        self.NumBox.TabIndex := 2;
        self.NumBox.Text := 'Номер';
        // 
        // TypeBox
        // 
        self.TypeBox.Location := new System.Drawing.Point(904, 78);
        self.TypeBox.Name := 'TypeBox';
        self.TypeBox.Size := new System.Drawing.Size(100, 22);
        self.TypeBox.TabIndex := 3;
        self.TypeBox.Text := 'Тип прибора';
        // 
        // YearBox
        // 
        self.YearBox.Location := new System.Drawing.Point(904, 104);
        self.YearBox.Name := 'YearBox';
        self.YearBox.Size := new System.Drawing.Size(100, 22);
        self.YearBox.TabIndex := 4;
        self.YearBox.Text := 'Год выпуска';
        // 
        // PriceBox
        // 
        self.PriceBox.Location := new System.Drawing.Point(904, 130);
        self.PriceBox.Name := 'PriceBox';
        self.PriceBox.Size := new System.Drawing.Size(100, 22);
        self.PriceBox.TabIndex := 5;
        self.PriceBox.Text := 'Цена';
        // 
        // PlaceBox
        // 
        self.PlaceBox.Location := new System.Drawing.Point(904, 156);
        self.PlaceBox.Name := 'PlaceBox';
        self.PlaceBox.Size := new System.Drawing.Size(100, 22);
        self.PlaceBox.TabIndex := 6;
        self.PlaceBox.Text := 'Место';
        // 
        // DateBox
        // 
        self.DateBox.Location := new System.Drawing.Point(904, 182);
        self.DateBox.Name := 'DateBox';
        self.DateBox.Size := new System.Drawing.Size(100, 22);
        self.DateBox.TabIndex := 7;
        self.DateBox.Text := 'Дата поверки';
        // 
        // AddItemLabel
        // 
        self.AddItemLabel.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.AddItemLabel.Location := new System.Drawing.Point(677, 26);
        self.AddItemLabel.Name := 'AddItemLabel';
        self.AddItemLabel.Size := new System.Drawing.Size(327, 23);
        self.AddItemLabel.TabIndex := 8;
        self.AddItemLabel.Text := 'Добавить запись в таблицу';
        // 
        // AddLabelInfo
        // 
        self.AddLabelInfo.Font := new System.Drawing.Font('Microsoft Sans Serif', 9, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.AddLabelInfo.Location := new System.Drawing.Point(677, 49);
        self.AddLabelInfo.Name := 'AddLabelInfo';
        self.AddLabelInfo.Size := new System.Drawing.Size(221, 183);
        self.AddLabelInfo.TabIndex := 9;
        self.AddLabelInfo.Text := 'Введите необходимые данные и нажмите кнопку "Добавить", чтобы добавить новую запись в таблицу ';
        // 
        // AddItemButton
        // 
        self.AddItemButton.Location := new System.Drawing.Point(904, 209);
        self.AddItemButton.Name := 'AddItemButton';
        self.AddItemButton.Size := new System.Drawing.Size(100, 23);
        self.AddItemButton.TabIndex := 10;
        self.AddItemButton.Text := 'Добавить';
        self.AddItemButton.UseVisualStyleBackColor := true;
        self.AddItemButton.Click += AddItemButton_Click;
        // 
        // DeleteLabel
        // 
        self.DeleteLabel.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.DeleteLabel.Location := new System.Drawing.Point(677, 235);
        self.DeleteLabel.Name := 'DeleteLabel';
        self.DeleteLabel.Size := new System.Drawing.Size(327, 23);
        self.DeleteLabel.TabIndex := 11;
        self.DeleteLabel.Text := 'Удалить запись из таблицы';
        // 
        // DeleteLabelInfo
        // 
        self.DeleteLabelInfo.Font := new System.Drawing.Font('Microsoft Sans Serif', 9, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.DeleteLabelInfo.Location := new System.Drawing.Point(677, 258);
        self.DeleteLabelInfo.Name := 'DeleteLabelInfo';
        self.DeleteLabelInfo.Size := new System.Drawing.Size(221, 99);
        self.DeleteLabelInfo.TabIndex := 12;
        self.DeleteLabelInfo.Text := 'Выделите необходимую запись и нажмите кнопку "Удалить", чтобы удалить запись';
        // 
        // DeleteItemButton
        // 
        self.DeleteItemButton.Location := new System.Drawing.Point(904, 261);
        self.DeleteItemButton.Name := 'DeleteItemButton';
        self.DeleteItemButton.Size := new System.Drawing.Size(100, 23);
        self.DeleteItemButton.TabIndex := 13;
        self.DeleteItemButton.Text := 'Удалить';
        self.DeleteItemButton.UseVisualStyleBackColor := true;
        self.DeleteItemButton.Click += DeleteItemButton_Click;
        // 
        // SortLabel
        // 
        self.SortLabel.Font := new System.Drawing.Font('Microsoft Sans Serif', 10, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.SortLabel.Location := new System.Drawing.Point(677, 357);
        self.SortLabel.Name := 'SortLabel';
        self.SortLabel.Size := new System.Drawing.Size(338, 23);
        self.SortLabel.TabIndex := 14;
        self.SortLabel.Text := 'Сортировка по ключу';
        // 
        // SortTableButton
        // 
        self.SortTableButton.Location := new System.Drawing.Point(904, 409);
        self.SortTableButton.Name := 'SortTableButton';
        self.SortTableButton.Size := new System.Drawing.Size(100, 23);
        self.SortTableButton.TabIndex := 15;
        self.SortTableButton.Text := 'Сортировать';
        self.SortTableButton.UseVisualStyleBackColor := true;
        self.SortTableButton.Click += SortTableButton_Click;
        // 
        // SortBox
        // 
        self.SortBox.Location := new System.Drawing.Point(904, 383);
        self.SortBox.Name := 'SortBox';
        self.SortBox.Size := new System.Drawing.Size(100, 22);
        self.SortBox.TabIndex := 16;
        self.SortBox.Text := 'Введите ключ...';
        // 
        // SortLabelInfo
        // 
        self.SortLabelInfo.Font := new System.Drawing.Font('Microsoft Sans Serif', 9, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.SortLabelInfo.Location := new System.Drawing.Point(677, 380);
        self.SortLabelInfo.Name := 'SortLabelInfo';
        self.SortLabelInfo.Size := new System.Drawing.Size(221, 158);
        self.SortLabelInfo.TabIndex := 17;
        self.SortLabelInfo.Text := 'Введите ключ, по которому необходимо отсортировать таблицу, и нажмите кнопку "Сортировать".'#13#10'Нажмите "Вернуть таблицу", чтобы показать не сортированную таблицу';
        // 
        // ShowTableButton
        // 
        self.ShowTableButton.Location := new System.Drawing.Point(904, 438);
        self.ShowTableButton.Name := 'ShowTableButton';
        self.ShowTableButton.Size := new System.Drawing.Size(100, 23);
        self.ShowTableButton.TabIndex := 19;
        self.ShowTableButton.Text := 'Вернуть таблицу';
        self.ShowTableButton.UseVisualStyleBackColor := true;
        self.ShowTableButton.Click += ShowTableButton_Click;
        // 
        // ItodButton
        // 
        self.ItodButton.Location := new System.Drawing.Point(564, 515);
        self.ItodButton.Name := 'ItodButton';
        self.ItodButton.Size := new System.Drawing.Size(107, 23);
        self.ItodButton.TabIndex := 20;
        self.ItodButton.Text := 'Подвести итог';
        self.ItodButton.UseVisualStyleBackColor := true;
        self.ItodButton.Click += ItodButton_Click;
        // 
        // TableFormForm
        // 
        self.AutoScaleMode := System.Windows.Forms.AutoScaleMode.Inherit;
        self.ClientSize := new System.Drawing.Size(1016, 550);
        self.Controls.Add(self.ItodButton);
        self.Controls.Add(self.ShowTableButton);
        self.Controls.Add(self.SortLabelInfo);
        self.Controls.Add(self.SortBox);
        self.Controls.Add(self.SortTableButton);
        self.Controls.Add(self.SortLabel);
        self.Controls.Add(self.DeleteItemButton);
        self.Controls.Add(self.DeleteLabelInfo);
        self.Controls.Add(self.DeleteLabel);
        self.Controls.Add(self.AddItemButton);
        self.Controls.Add(self.AddLabelInfo);
        self.Controls.Add(self.AddItemLabel);
        self.Controls.Add(self.DateBox);
        self.Controls.Add(self.PlaceBox);
        self.Controls.Add(self.PriceBox);
        self.Controls.Add(self.YearBox);
        self.Controls.Add(self.TypeBox);
        self.Controls.Add(self.NumBox);
        self.Controls.Add(self.BackStartBtn);
        self.Controls.Add(self.MainTable);
        self.Name := 'TableFormForm';
        self.Text := 'Метрология';
        self.Load += TableFormForm_Load;
        (System.ComponentModel.ISupportInitialize(self.MainTable)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
