procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.Head := new System.Windows.Forms.Label();
        self.inTable := new System.Windows.Forms.Button();
        self.Info := new System.Windows.Forms.Button();
        self.exitBt := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // Head
        // 
        self.Head.BackColor := System.Drawing.SystemColors.GradientActiveCaption;
        self.Head.Font := new System.Drawing.Font('Times New Roman', 25.8000011, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.Head.Location := new System.Drawing.Point(12, 61);
        self.Head.Name := 'Head';
        self.Head.Size := new System.Drawing.Size(675, 115);
        self.Head.TabIndex := 0;
        self.Head.Text := 'Регистратура';
        self.Head.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // inTable
        // 
        self.inTable.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.inTable.Font := new System.Drawing.Font('Times New Roman', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.inTable.Location := new System.Drawing.Point(270, 224);
        self.inTable.Name := 'inTable';
        self.inTable.Size := new System.Drawing.Size(156, 59);
        self.inTable.TabIndex := 1;
        self.inTable.Text := 'Мед. карты';
        self.inTable.UseVisualStyleBackColor := false;
        self.inTable.Click += inTable_Click;
        // 
        // Info
        // 
        self.Info.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.Info.Font := new System.Drawing.Font('Times New Roman', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.Info.Location := new System.Drawing.Point(270, 310);
        self.Info.Name := 'Info';
        self.Info.Size := new System.Drawing.Size(156, 59);
        self.Info.TabIndex := 2;
        self.Info.Text := 'Разработчик';
        self.Info.UseVisualStyleBackColor := false;
        self.Info.Click += Info_Click;
        // 
        // exitBt
        // 
        self.exitBt.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.exitBt.Font := new System.Drawing.Font('Times New Roman', 15, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.exitBt.Location := new System.Drawing.Point(270, 396);
        self.exitBt.Name := 'exitBt';
        self.exitBt.Size := new System.Drawing.Size(156, 59);
        self.exitBt.TabIndex := 3;
        self.exitBt.Text := 'Выход';
        self.exitBt.UseVisualStyleBackColor := false;
        self.exitBt.Click += exitBt_Click;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.ActiveBorder;
        self.ClientSize := new System.Drawing.Size(699, 526);
        self.Controls.Add(self.exitBt);
        self.Controls.Add(self.Info);
        self.Controls.Add(self.inTable);
        self.Controls.Add(self.Head);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.Text := 'Курсовая работа Макарова Олега Александровича';
        self.Load += Form1_Load;
        self.ResumeLayout(false);
    end;
