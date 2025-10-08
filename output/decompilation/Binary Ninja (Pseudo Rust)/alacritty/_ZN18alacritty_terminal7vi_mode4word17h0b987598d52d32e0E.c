
  fn alacritty_terminal::vi_mode::word::h0b987598d52d32e0(arg1: *mut c_void, arg2: i64, arg3: i32, arg4: i8, arg5: i8) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut result_1: i64;
    let mut rdx: i32;
    result_1 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, 
        arg3, arg4);
    let mut result: i64 = result_1;
    let mut rbp: i32 = rdx;
    
    if arg4 == arg5
    {
        let r15_2: u32 = arg4;
        let mut rdi_8: *mut c_void = arg1;
        let mut result_6: i64 = result;
        let mut rdx_10: i32 = rbp;
        
        loop
        {
            let mut result_4: i64;
            let mut rdx_11: i32;
            result_4 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(rdi_8, result_6, 
                rdx_10, r15_2);
            
            if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, r15_2)
                != 0
            {
                break;
            }
            
            if alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_4, rdx_11) == 0
            {
                break;
            }
            
            result = result_4;
            rbp = rdx_11;
            rdi_8 = arg1;
            result_6 = result_4;
            rdx_10 = rdx_11;
        }
        
        let mut rdi_11: *mut c_void = arg1;
        let mut result_7: i64 = result;
        let mut rdx_14: i32 = rbp;
        
        loop
        {
            let mut result_5: i64;
            let mut rdx_15: i32;
            result_5 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(rdi_11, result_7, 
                rdx_14, r15_2);
            
            if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, r15_2)
                != 0
            {
                break;
            }
            
            if alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_5, rdx_15) != 0
            {
                break;
            }
            
            result = result_5;
            rbp = rdx_15;
            rdi_11 = arg1;
            result_7 = result_5;
            rdx_14 = rdx_15;
        }
    }
    else
    {
        let r15_1: u32 = arg4;
        
        if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, r15_1)
            == 0
        {
            let mut i: i8;
            
            do
            {
                if alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result, rbp) != 0
                {
                    break;
                }
                
                let mut result_2: i64;
                let mut rdx_4: i32;
                result_2 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result, 
                    rbp, r15_1);
                result = result_2;
                rbp = rdx_4;
                i = alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_2, 
                    rdx_4, r15_1);
            } while i == 0;
        }
        
        if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, r15_1)
            == 0
        {
            let mut i_1: i8;
            
            do
            {
                if alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result, rbp) == 0
                {
                    break;
                }
                
                let mut result_3: i64;
                let mut rdx_8: i32;
                result_3 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result, 
                    rbp, r15_1);
                result = result_3;
                rbp = rdx_8;
                i_1 = alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_3, 
                    rdx_8, r15_1);
            } while i_1 == 0;
        }
    }
    
    result
}
