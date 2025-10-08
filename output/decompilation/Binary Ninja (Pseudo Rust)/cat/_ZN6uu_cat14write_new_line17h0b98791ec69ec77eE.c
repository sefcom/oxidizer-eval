
  fn uu_cat::write_new_line::h0b98791ec69ec77e(arg1: *mut i128, arg2: *mut i64, arg3: *mut i8, arg4: *mut i8, arg5: i8)

{
    let mut var_48: *mut *mut [i8; 0xc5];
    let var_40: i128;
    let mut rax: *mut *mut [i8; 0xc5];
    
    if arg4[0x39] == 0
    {
        if arg4[0x38] == 0
        {
            arg4[0x3a] = 1;
            
            if arg3[2] != 0
            {
                'label_45fca3:
                uu_cat::write_end_of_line::h1af273733bdb3f49(&var_48, arg2, 
                    "$\n^M\t^I^?unknown filetype: Is …", 2, arg5);
                rax = var_48;
                
                if rax == -0x7ffffffffffffffa
                {
                    *arg1 = -0x7ffffffffffffffa;
                }
                else
                {
                    *arg1.byte_offset(8) = var_40;
                    *arg1 = rax;
                }
            }
            else
            {
                'label_45fd01:
                uu_cat::write_end_of_line::h1af273733bdb3f49(&var_48, arg2, 
                    "\n$\n^M\t^I^?unknown filetype: I…", 1, arg5);
                rax = var_48;
                
                if rax == -0x7ffffffffffffffa
                {
                    *arg1 = -0x7ffffffffffffffa;
                }
                else
                {
                    *arg1.byte_offset(8) = var_40;
                    *arg1 = rax;
                }
            }
        }
        else if *arg3 != 1 || arg4[0x3a] != 1
        {
            arg4[0x3a] = 1;
            
            if arg3[4] != 2
            {
                goto 'label_45fc8a;
            }
            
            rax = uu_cat::LineNumber::write::h9eeedfd1c7640e65(arg4, arg2);
            
            if rax == 0
            {
                uu_cat::LineNumber::increment::hc9558597a4dcfd2d(arg4);
                'label_45fc8a:
                
                if arg3[2] == 0
                {
                    goto 'label_45fd01;
                }
                
                goto 'label_45fca3;
            }
            
            *arg1 = -0x8000000000000000;
            *arg1.byte_offset(8) = rax;
        }
        else
        {
            *arg1 = -0x7ffffffffffffffa;
        }
    }
    else if arg3[2] == 0
    {
        rax = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg2, "\r\n$\n^M\t^I^?unknown filetype:…", 1);
        
        if rax == 0
        {
            arg4[0x39] = 0;
            uu_cat::write_end_of_line::h1af273733bdb3f49(&var_48, arg2, 
                "\n$\n^M\t^I^?unknown filetype: I…", 1, arg5);
            
            if var_48 != -0x7ffffffffffffffa
            {
                arg1[1] = *var_40[8];
                *arg1 = var_48;
            }
            else
            {
                *arg1 = -0x7ffffffffffffffa;
            }
        }
        else
        {
            *arg1 = -0x8000000000000000;
            *arg1.byte_offset(8) = rax;
        }
    }
    else
    {
        rax = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg2, "^M\t^I^?unknown filetype: Is a d…", 2);
        
        if rax != 0
        {
            *arg1 = -0x8000000000000000;
            *arg1.byte_offset(8) = rax;
        }
        else
        {
            arg4[0x39] = 0;
            uu_cat::write_end_of_line::h1af273733bdb3f49(&var_48, arg2, 
                "$\n^M\t^I^?unknown filetype: Is …", 2, arg5);
            
            if var_48 == -0x7ffffffffffffffa
            {
                *arg1 = -0x7ffffffffffffffa;
            }
            else
            {
                arg1[1] = *var_40[8];
                *arg1 = var_48;
            }
        }
    }
}
