procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.AllTable := new System.Windows.Forms.DataGridView();
        self.NumCard := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Fam := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Im := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Otch := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.DateR := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Grach := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.DateP := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.HeadAdd := new System.Windows.Forms.Label();
        self.NumBox := new System.Windows.Forms.TextBox();
        self.FamBox := new System.Windows.Forms.TextBox();
        self.ImBox := new System.Windows.Forms.TextBox();
        self.OthcBox := new System.Windows.Forms.TextBox();
        self.DateRBox := new System.Windows.Forms.TextBox();
        self.GrachBox := new System.Windows.Forms.TextBox();
        self.DatePBox := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.label5 := new System.Windows.Forms.Label();
        self.label6 := new System.Windows.Forms.Label();
        self.label7 := new System.Windows.Forms.Label();
        self.AddBt := new System.Windows.Forms.Button();
        self.HeadDel := new System.Windows.Forms.Label();
        self.DelInfo := new System.Windows.Forms.Label();
        self.DelBt := new System.Windows.Forms.Button();
        self.label8 := new System.Windows.Forms.Label();
        self.label9 := new System.Windows.Forms.Label();
        self.FindBt := new System.Windows.Forms.Button();
        self.FindBox := new System.Windows.Forms.TextBox();
        self.BackBt := new System.Windows.Forms.Button();
        self.ExBt := new System.Windows.Forms.Button();
        (System.ComponentModel.ISupportInitialize(self.AllTable)).BeginInit();
        self.SuspendLayout();
        // 
        // AllTable
        // 
        self.AllTable.AllowUserToAddRows := false;
        self.AllTable.AllowUserToDeleteRows := false;
        self.AllTable.BackgroundColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.AllTable.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.AllTable.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[7](self.NumCard, self.Fam, self.Im, self.Otch, self.DateR, self.Grach, self.DateP));
        self.AllTable.Location := new System.Drawing.Point(12, 12);
        self.AllTable.Name := 'AllTable';
        self.AllTable.ReadOnly := true;
        self.AllTable.RowHeadersWidth := 51;
        self.AllTable.RowTemplate.Height := 24;
        self.AllTable.Size := new System.Drawing.Size(934, 629);
        self.AllTable.TabIndex := 0;
        // 
        // NumCard
        // 
        self.NumCard.HeaderText := 'Номер карты';
        self.NumCard.MinimumWidth := 6;
        self.NumCard.Name := 'NumCard';
        self.NumCard.ReadOnly := true;
        self.NumCard.Width := 125;
        // 
        // Fam
        // 
        self.Fam.HeaderText := 'Фамилия';
        self.Fam.MinimumWidth := 6;
        self.Fam.Name := 'Fam';
        self.Fam.ReadOnly := true;
        self.Fam.Width := 125;
        // 
        // Im
        // 
        self.Im.HeaderText := 'Имя';
        self.Im.MinimumWidth := 6;
        self.Im.Name := 'Im';
        self.Im.ReadOnly := true;
        self.Im.Width := 125;
        // 
        // Otch
        // 
        self.Otch.HeaderText := 'Отчество';
        self.Otch.MinimumWidth := 6;
        self.Otch.Name := 'Otch';
        self.Otch.ReadOnly := true;
        self.Otch.Width := 125;
        // 
        // DateR
        // 
        self.DateR.HeaderText := 'Дата рождения';
        self.DateR.MinimumWidth := 6;
        self.DateR.Name := 'DateR';
        self.DateR.ReadOnly := true;
        self.DateR.Width := 125;
        // 
        // Grach
        // 
        self.Grach.HeaderText := 'Лечащий врач';
        self.Grach.MinimumWidth := 6;
        self.Grach.Name := 'Grach';
        self.Grach.ReadOnly := true;
        self.Grach.Width := 125;
        // 
        // DateP
        // 
        self.DateP.HeaderText := 'Дата последнего посещения';
        self.DateP.MinimumWidth := 6;
        self.DateP.Name := 'DateP';
        self.DateP.ReadOnly := true;
        self.DateP.Width := 125;
        // 
        // HeadAdd
        // 
        self.HeadAdd.Font := new System.Drawing.Font('Times New Roman', 12, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.HeadAdd.Location := new System.Drawing.Point(969, 12);
        self.HeadAdd.Name := 'HeadAdd';
        self.HeadAdd.Size := new System.Drawing.Size(230, 33);
        self.HeadAdd.TabIndex := 1;
        self.HeadAdd.Text := 'Добавление мед. карты';
        self.HeadAdd.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // NumBox
        // 
        self.NumBox.Location := new System.Drawing.Point(1085, 48);
        self.NumBox.Name := 'NumBox';
        self.NumBox.Size := new System.Drawing.Size(124, 22);
        self.NumBox.TabIndex := 2;
        self.NumBox.Text := '000000';
        // 
        // FamBox
        // 
        self.FamBox.Location := new System.Drawing.Point(1085, 76);
        self.FamBox.Name := 'FamBox';
        self.FamBox.Size := new System.Drawing.Size(124, 22);
        self.FamBox.TabIndex := 3;
        self.FamBox.Text := 'Иванов';
        // 
        // ImBox
        // 
        self.ImBox.Location := new System.Drawing.Point(1085, 104);
        self.ImBox.Name := 'ImBox';
        self.ImBox.Size := new System.Drawing.Size(124, 22);
        self.ImBox.TabIndex := 4;
        self.ImBox.Text := 'Иван';
        // 
        // OthcBox
        // 
        self.OthcBox.Location := new System.Drawing.Point(1085, 132);
        self.OthcBox.Name := 'OthcBox';
        self.OthcBox.Size := new System.Drawing.Size(124, 22);
        self.OthcBox.TabIndex := 5;
        self.OthcBox.Text := 'Иванович';
        // 
        // DateRBox
        // 
        self.DateRBox.Location := new System.Drawing.Point(1085, 160);
        self.DateRBox.Name := 'DateRBox';
        self.DateRBox.Size := new System.Drawing.Size(124, 22);
        self.DateRBox.TabIndex := 6;
        self.DateRBox.Text := '00.00.0000';
        // 
        // GrachBox
        // 
        self.GrachBox.Location := new System.Drawing.Point(1085, 188);
        self.GrachBox.Name := 'GrachBox';
        self.GrachBox.Size := new System.Drawing.Size(124, 22);
        self.GrachBox.TabIndex := 7;
        self.GrachBox.Text := 'Иванов И.И.';
        // 
        // DatePBox
        // 
        self.DatePBox.Location := new System.Drawing.Point(1085, 216);
        self.DatePBox.Name := 'DatePBox';
        self.DatePBox.Size := new System.Drawing.Size(124, 22);
        self.DatePBox.TabIndex := 8;
        self.DatePBox.Text := '00.00.0000';
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(952, 48);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(127, 23);
        self.label1.TabIndex := 9;
        self.label1.Text := 'Номер карты:';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(952, 76);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(127, 23);
        self.label2.TabIndex := 10;
        self.label2.Text := 'Фамилия:';
        self.label2.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(952, 104);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(127, 23);
        self.label3.TabIndex := 11;
        self.label3.Text := 'Имя:';
        self.label3.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(952, 132);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(127, 23);
        self.label4.TabIndex := 12;
        self.label4.Text := 'Отчество:';
        self.label4.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(952, 160);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(127, 23);
        self.label5.TabIndex := 13;
        self.label5.Text := 'Дата рождения:';
        self.label5.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // label6
        // 
        self.label6.Location := new System.Drawing.Point(952, 188);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(127, 23);
        self.label6.TabIndex := 14;
        self.label6.Text := 'Лечащий врач:';
        self.label6.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // label7
        // 
        self.label7.Location := new System.Drawing.Point(952, 216);
        self.label7.Name := 'label7';
        self.label7.Size := new System.Drawing.Size(127, 23);
        self.label7.TabIndex := 15;
        self.label7.Text := 'Дата посещения:';
        self.label7.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // AddBt
        // 
        self.AddBt.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.AddBt.Location := new System.Drawing.Point(1033, 244);
        self.AddBt.Name := 'AddBt';
        self.AddBt.Size := new System.Drawing.Size(111, 26);
        self.AddBt.TabIndex := 16;
        self.AddBt.Text := 'Добавить';
        self.AddBt.UseVisualStyleBackColor := false;
        // 
        // HeadDel
        // 
        self.HeadDel.Font := new System.Drawing.Font('Times New Roman', 12, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.HeadDel.Location := new System.Drawing.Point(969, 282);
        self.HeadDel.Name := 'HeadDel';
        self.HeadDel.Size := new System.Drawing.Size(230, 22);
        self.HeadDel.TabIndex := 17;
        self.HeadDel.Text := 'Удаление мед. карты';
        self.HeadDel.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // DelInfo
        // 
        self.DelInfo.Location := new System.Drawing.Point(969, 304);
        self.DelInfo.Name := 'DelInfo';
        self.DelInfo.Size := new System.Drawing.Size(240, 72);
        self.DelInfo.TabIndex := 18;
        self.DelInfo.Text := 'Чтобы удалить карту выделите запись, нажав на пустое поле левее записи, и нажмите на кнопку "Удалить"';
        self.DelInfo.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // DelBt
        // 
        self.DelBt.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.DelBt.Location := new System.Drawing.Point(1033, 379);
        self.DelBt.Name := 'DelBt';
        self.DelBt.Size := new System.Drawing.Size(111, 26);
        self.DelBt.TabIndex := 19;
        self.DelBt.Text := 'Удалить';
        self.DelBt.UseVisualStyleBackColor := false;
        // 
        // label8
        // 
        self.label8.Font := new System.Drawing.Font('Times New Roman', 12, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label8.Location := new System.Drawing.Point(969, 420);
        self.label8.Name := 'label8';
        self.label8.Size := new System.Drawing.Size(230, 22);
        self.label8.TabIndex := 20;
        self.label8.Text := 'Поиск мед. карт';
        self.label8.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // label9
        // 
        self.label9.Location := new System.Drawing.Point(969, 442);
        self.label9.Name := 'label9';
        self.label9.Size := new System.Drawing.Size(240, 72);
        self.label9.TabIndex := 21;
        self.label9.Text := 'Чтобы найти нужную карту(ы) введите интересующий параметр (например фамилию или дату рождения) и нажмите на кнопку "Поиск"';
        self.label9.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // FindBt
        // 
        self.FindBt.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.FindBt.Location := new System.Drawing.Point(1085, 517);
        self.FindBt.Name := 'FindBt';
        self.FindBt.Size := new System.Drawing.Size(111, 26);
        self.FindBt.TabIndex := 22;
        self.FindBt.Text := 'Удалить';
        self.FindBt.UseVisualStyleBackColor := false;
        // 
        // FindBox
        // 
        self.FindBox.Location := new System.Drawing.Point(969, 519);
        self.FindBox.Name := 'FindBox';
        self.FindBox.Size := new System.Drawing.Size(111, 22);
        self.FindBox.TabIndex := 23;
        // 
        // BackBt
        // 
        self.BackBt.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.BackBt.Location := new System.Drawing.Point(984, 549);
        self.BackBt.Name := 'BackBt';
        self.BackBt.Size := new System.Drawing.Size(195, 26);
        self.BackBt.TabIndex := 24;
        self.BackBt.Text := 'Вернуться ко всем записям';
        self.BackBt.UseVisualStyleBackColor := false;
        // 
        // ExBt
        // 
        self.ExBt.BackColor := System.Drawing.SystemColors.GradientActiveCaption;
        self.ExBt.Location := new System.Drawing.Point(984, 606);
        self.ExBt.Name := 'ExBt';
        self.ExBt.Size := new System.Drawing.Size(195, 26);
        self.ExBt.TabIndex := 25;
        self.ExBt.Text := 'Выход из регистратуры';
        self.ExBt.UseVisualStyleBackColor := false;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.ActiveBorder;
        self.ClientSize := new System.Drawing.Size(1221, 653);
        self.Controls.Add(self.ExBt);
        self.Controls.Add(self.BackBt);
        self.Controls.Add(self.FindBox);
        self.Controls.Add(self.FindBt);
        self.Controls.Add(self.label9);
        self.Controls.Add(self.label8);
        self.Controls.Add(self.DelBt);
        self.Controls.Add(self.DelInfo);
        self.Controls.Add(self.HeadDel);
        self.Controls.Add(self.AddBt);
        self.Controls.Add(self.label7);
        self.Controls.Add(self.label6);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.DatePBox);
        self.Controls.Add(self.GrachBox);
        self.Controls.Add(self.DateRBox);
        self.Controls.Add(self.OthcBox);
        self.Controls.Add(self.ImBox);
        self.Controls.Add(self.FamBox);
        self.Controls.Add(self.NumBox);
        self.Controls.Add(self.HeadAdd);
        self.Controls.Add(self.AllTable);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.Text := 'Form1';
        (System.ComponentModel.ISupportInitialize(self.AllTable)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
