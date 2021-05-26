procedure InitializeComponent;
    begin
        self.CloseInfoButton := new System.Windows.Forms.Button();
        self.labelinfo := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // CloseInfoButton
        // 
        self.CloseInfoButton.Location := new System.Drawing.Point(99, 226);
        self.CloseInfoButton.Name := 'CloseInfoButton';
        self.CloseInfoButton.Size := new System.Drawing.Size(75, 23);
        self.CloseInfoButton.TabIndex := 0;
        self.CloseInfoButton.Text := 'Закрыть';
        self.CloseInfoButton.UseVisualStyleBackColor := true;
        self.CloseInfoButton.Click += CloseInfoButton_Click;
        // 
        // labelinfo
        // 
        self.labelinfo.Font := new System.Drawing.Font('Microsoft Sans Serif', 16, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.labelinfo.Location := new System.Drawing.Point(13, 13);
        self.labelinfo.Name := 'labelinfo';
        self.labelinfo.Size := new System.Drawing.Size(259, 210);
        self.labelinfo.TabIndex := 1;
        self.labelinfo.Text := 'Курсовой проект подготовил:'#13#10'студент 945 группы '#13#10'Леонов Михаил';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.labelinfo);
        self.Controls.Add(self.CloseInfoButton);
        self.Name := 'Form1';
        self.Text := 'Информация';
        self.ResumeLayout(false);
    end;
