procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form3));
        self.AllInfo := new System.Windows.Forms.Label();
        self.ExtBt := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // AllInfo
        // 
        self.AllInfo.BackColor := System.Drawing.SystemColors.GradientActiveCaption;
        self.AllInfo.Font := new System.Drawing.Font('Times New Roman', 25.8000011, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.AllInfo.Location := new System.Drawing.Point(77, 51);
        self.AllInfo.Name := 'AllInfo';
        self.AllInfo.Size := new System.Drawing.Size(409, 360);
        self.AllInfo.TabIndex := 0;
        self.AllInfo.Text := 'Курсовая работа'#13#10'Выполнил:'#13#10'Студент группы №945'#13#10'Макаров Олег Александрович';
        self.AllInfo.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // ExtBt
        // 
        self.ExtBt.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.ExtBt.Location := new System.Drawing.Point(448, 435);
        self.ExtBt.Name := 'ExtBt';
        self.ExtBt.Size := new System.Drawing.Size(97, 33);
        self.ExtBt.TabIndex := 1;
        self.ExtBt.Text := 'Закрыть';
        self.ExtBt.UseVisualStyleBackColor := false;
        self.ExtBt.Click += ExtBt_Click;
        // 
        // Form3
        // 
        self.BackColor := System.Drawing.SystemColors.ActiveBorder;
        self.ClientSize := new System.Drawing.Size(557, 487);
        self.Controls.Add(self.ExtBt);
        self.Controls.Add(self.AllInfo);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form3';
        self.Text := 'Информация о разработчике';
        self.ResumeLayout(false);
    end;
