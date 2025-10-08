
  fn alacritty_terminal::vi_mode::first_occupied::h5202d98debe22cab(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let result_3: i64 = *arg1.byte_offset(0xb8) - 1;
    let mut result_4: i64 = result_3;
    let mut rax: i64;
    let mut rdx: i32;
    rax = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, arg3, 
        0);
    let mut var_80: i8;
    alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_80, arg1, rdx);
    let mut r13: i32 = rdx;
    let mut result: i64 = result_3;
    
    if var_80 != 0
    {
        let var_70: i32;
        r13 = var_70;
        let result_1: i64;
        result = result_1;
    }
    
    if (rax == result & rdx == r13) == 1
    {
        let rax_1: i64 = *arg1.byte_offset(0x50);
        let mut r12_1: i32 = 0;
        
        if rax_1 >= *arg1.byte_offset(0xc0)
        {
            r12_1 = rax_1 - *arg1.byte_offset(0xc0);
        }
        
        let r12_2: i32 = -(r12_1);
        let mut var_68: *mut c_void;
        let mut rdx_4: i32;
        
        if rdx <= r12_2
        {
            var_80 = rdx;
            var_68 = arg1;
            let var_60_1: *mut i8 = &var_80;
            let var_58_1: *mut i64 = &result_4;
            result = alacritty_terminal::vi_mode::first_occupied::_$u7b$$u7b$closure$u7d$$u7d$::h799fa8e0d74eb071(&var_68);
        }
        else
        {
            let mut r15_1: i8 = 0;
            let mut rbp_1: i32 = rdx;
            let mut result_2: i64;
            
            do
            {
                rbp_1 -= 1;
                
                if alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg1, result_3, rbp_1)
                    == 0
                {
                    break;
                }
                
                let mut var_48: i8;
                alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_48, 
                    arg1, rbp_1);
                let rax_4: i8 = var_48;
                let result_5: i64;
                
                if rax_4 != 0
                {
                    result_2 = result_5;
                }
                r15_1 |= rax_4;
            } while rbp_1 > r12_2;
            
            var_80 = rdx;
            var_68 = arg1;
            let var_60_2: *mut i8 = &var_80;
            let var_58_2: *mut i64 = &result_4;
            result = result_2;
            
            if (r15_1 & 1) == 0
            {
                result = alacritty_terminal::vi_mode::first_occupied::_$u7b$$u7b$closure$u7d$$u7d$::h799fa8e0d74eb071(&var_68);
            }
        }
    }
    
    result
}
