procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem7 := new System.Windows.Forms.ToolStripMenuItem();
        self.tabControl1 := new System.Windows.Forms.TabControl();
        self.tabPage1 := new System.Windows.Forms.TabPage();
        self.label5 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.groupBox2 := new System.Windows.Forms.GroupBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.label4 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.groupBox1 := new System.Windows.Forms.GroupBox();
        self.label1 := new System.Windows.Forms.Label();
        self.numericUpDown2 := new System.Windows.Forms.NumericUpDown();
        self.numericUpDown1 := new System.Windows.Forms.NumericUpDown();
        self.menuStrip1.SuspendLayout();
        self.tabControl1.SuspendLayout();
        self.tabPage1.SuspendLayout();
        self.groupBox2.SuspendLayout();
        self.groupBox1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.numericUpDown2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.numericUpDown1)).BeginInit();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackColor := System.Drawing.Color.CornflowerBlue;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem1, self.toolStripMenuItem6));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(484, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem5));
        self.toolStripMenuItem1.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(75, 20);
        self.toolStripMenuItem1.Text := 'Операции';
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.BackColor := System.Drawing.Color.CornflowerBlue;
        self.toolStripMenuItem5.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(109, 22);
        self.toolStripMenuItem5.Text := 'Выйти';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.BackColor := System.Drawing.Color.CornflowerBlue;
        self.toolStripMenuItem6.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem7));
        self.toolStripMenuItem6.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(68, 20);
        self.toolStripMenuItem6.Text := 'Помощь';
        // 
        // toolStripMenuItem7
        // 
        self.toolStripMenuItem7.BackColor := System.Drawing.Color.CornflowerBlue;
        self.toolStripMenuItem7.ForeColor := System.Drawing.Color.White;
        self.toolStripMenuItem7.Name := 'toolStripMenuItem7';
        self.toolStripMenuItem7.Size := new System.Drawing.Size(149, 22);
        self.toolStripMenuItem7.Text := 'О программе';
        self.toolStripMenuItem7.Click += toolStripMenuItem16_Click;
        // 
        // tabControl1
        // 
        self.tabControl1.Controls.Add(self.tabPage1);
        self.tabControl1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.tabControl1.Location := new System.Drawing.Point(0, 24);
        self.tabControl1.Name := 'tabControl1';
        self.tabControl1.SelectedIndex := 0;
        self.tabControl1.Size := new System.Drawing.Size(484, 337);
        self.tabControl1.TabIndex := 1;
        // 
        // tabPage1
        // 
        self.tabPage1.Controls.Add(self.label5);
        self.tabPage1.Controls.Add(self.textBox1);
        self.tabPage1.Controls.Add(self.groupBox2);
        self.tabPage1.Controls.Add(self.button1);
        self.tabPage1.Controls.Add(self.label4);
        self.tabPage1.Controls.Add(self.label3);
        self.tabPage1.Controls.Add(self.label2);
        self.tabPage1.Controls.Add(self.groupBox1);
        self.tabPage1.Controls.Add(self.numericUpDown2);
        self.tabPage1.Controls.Add(self.numericUpDown1);
        self.tabPage1.Location := new System.Drawing.Point(4, 22);
        self.tabPage1.Name := 'tabPage1';
        self.tabPage1.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage1.Size := new System.Drawing.Size(476, 311);
        self.tabPage1.TabIndex := 0;
        self.tabPage1.Text := 'Основное';
        self.tabPage1.UseVisualStyleBackColor := true;
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(132, 230);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(174, 73);
        self.label5.TabIndex := 10;
        self.label5.Text := 'Если цена не будет указана в цифрах программа закроется.'#13#10#13#10'В цене не должны быть дробные числа через запятую.';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(6, 233);
        self.textBox1.Multiline := true;
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(120, 20);
        self.textBox1.TabIndex := 9;
        self.textBox1.Text := '0';
        // 
        // groupBox2
        // 
        self.groupBox2.Controls.Add(self.textBox2);
        self.groupBox2.Location := new System.Drawing.Point(312, 112);
        self.groupBox2.Name := 'groupBox2';
        self.groupBox2.Size := new System.Drawing.Size(158, 191);
        self.groupBox2.TabIndex := 8;
        self.groupBox2.TabStop := false;
        self.groupBox2.Text := 'Итог';
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(6, 19);
        self.textBox2.Multiline := true;
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(146, 166);
        self.textBox2.TabIndex := 0;
        // 
        // button1
        // 
        self.button1.BackColor := System.Drawing.Color.CornflowerBlue;
        self.button1.FlatStyle := System.Windows.Forms.FlatStyle.Flat;
        self.button1.ForeColor := System.Drawing.Color.White;
        self.button1.Location := new System.Drawing.Point(5, 259);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(122, 44);
        self.button1.TabIndex := 7;
        self.button1.Text := 'Посчитать';
        self.button1.UseVisualStyleBackColor := false;
        self.button1.Click += button1_Click;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(6, 207);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(300, 23);
        self.label4.TabIndex := 5;
        self.label4.Text := 'Какова цена каждой страницы?';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 158);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(300, 23);
        self.label3.TabIndex := 4;
        self.label3.Text := 'С какой страницы заканчивается ваша распечатка?';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(6, 109);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(300, 23);
        self.label2.TabIndex := 3;
        self.label2.Text := 'С какой страницы начинается ваша распечатка?';
        // 
        // groupBox1
        // 
        self.groupBox1.BackColor := System.Drawing.Color.Transparent;
        self.groupBox1.Controls.Add(self.label1);
        self.groupBox1.Location := new System.Drawing.Point(6, 6);
        self.groupBox1.Name := 'groupBox1';
        self.groupBox1.Size := new System.Drawing.Size(464, 100);
        self.groupBox1.TabIndex := 2;
        self.groupBox1.TabStop := false;
        self.groupBox1.Text := 'Инструкция';
        // 
        // label1
        // 
        self.label1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.label1.Location := new System.Drawing.Point(3, 16);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(458, 81);
        self.label1.TabIndex := 0;
        self.label1.Text := resources.GetString('label1.Text');
        // 
        // numericUpDown2
        // 
        self.numericUpDown2.BackColor := System.Drawing.SystemColors.Window;
        self.numericUpDown2.ForeColor := System.Drawing.SystemColors.WindowText;
        self.numericUpDown2.Location := new System.Drawing.Point(5, 184);
        self.numericUpDown2.Maximum := new System.Decimal(new System.Int32[4](1000000000, 0, 0, 0));
        self.numericUpDown2.Name := 'numericUpDown2';
        self.numericUpDown2.Size := new System.Drawing.Size(120, 20);
        self.numericUpDown2.TabIndex := 1;
        // 
        // numericUpDown1
        // 
        self.numericUpDown1.BackColor := System.Drawing.SystemColors.Window;
        self.numericUpDown1.ForeColor := System.Drawing.SystemColors.WindowText;
        self.numericUpDown1.Location := new System.Drawing.Point(5, 135);
        self.numericUpDown1.Maximum := new System.Decimal(new System.Int32[4](1000000000, 0, 0, 0));
        self.numericUpDown1.Name := 'numericUpDown1';
        self.numericUpDown1.Size := new System.Drawing.Size(120, 20);
        self.numericUpDown1.TabIndex := 0;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.Control;
        self.ClientSize := new System.Drawing.Size(484, 361);
        self.Controls.Add(self.tabControl1);
        self.Controls.Add(self.menuStrip1);
        self.Font := new System.Drawing.Font('Microsoft Sans Serif', 8.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.MainMenuStrip := self.menuStrip1;
        self.MaximizeBox := false;
        self.MaximumSize := new System.Drawing.Size(500, 400);
        self.MinimumSize := new System.Drawing.Size(500, 400);
        self.Name := 'Form1';
        self.Text := 'PageCalc 0.1';
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.tabControl1.ResumeLayout(false);
        self.tabPage1.ResumeLayout(false);
        self.tabPage1.PerformLayout();
        self.groupBox2.ResumeLayout(false);
        self.groupBox2.PerformLayout();
        self.groupBox1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.numericUpDown2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.numericUpDown1)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
