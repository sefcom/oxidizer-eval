
  fn alacritty_terminal::vi_mode::semantic::h2e9989b1dd410e0b(arg1: *mut c_void, arg2: i64, arg3: i32, arg4: i32, arg5: i32) -> i64

{
    let r12: i8 = arg4;
    let mut var_4d: i8 = r12;
    let r15_1: i32 = arg5 ^ arg4;
    let var_48: i8 = r15_1;
    let var_4c: i8 = arg4;
    let mut rax_1: i8;
    
    if r15_1 != 1
    {
        rax_1 = r12;
    }
    else if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, arg2, arg3, r12) == 0
    {
        let mut rax_2: i64;
        rax_2 =
            alacritty_terminal::vi_mode::semantic::_$u7b$$u7b$closure$u7d$$u7d$::h6ed5e1985e6fd4fb(
            arg1, &var_4d, arg2, arg3);
        arg2 = rax_2;
        rax_1 = var_4d;
    }
    else
    {
        rax_1 = r12;
    }
    
    let mut result_2: i64;
    let mut rdx_1: i32;
    result_2 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, 
        arg3, rax_1 & 1);
    let mut result_4: i64;
    let mut rdx_2: i32;
    result_4 =
        alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result_2, rdx_1, var_4d);
    let mut result_3: i64 = result_4;
    let mut r15_2: i32 = rdx_2;
    let mut rbx_2: i8 = var_4d;
    let mut rcx_6: i32;
    let mut result_1: i64;
    let mut r15_3: i8;
    
    if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_2, rdx_1, rbx_2)
        == 0
    {
        let rax_4: i8 =
            alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_3, r15_2);
        rbx_2 = var_4d;
        
        if rax_4 == 0
        {
            rcx_6 = rdx_1;
            result_1 = result_2;
        }
        else
        {
            let mut i: i8;
            
            do
            {
                let mut result_5: i64;
                let mut rdx_6: i32;
                result_5 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result_3, 
                    r15_2, rbx_2);
                rbx_2 = var_4d;
                
                if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_3, 
                    r15_2, rbx_2) != 0
                {
                    rcx_6 = r15_2;
                    result_1 = result_3;
                    break;
                }
                
                i = alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_5, rdx_6);
                rbx_2 = var_4d;
                result_1 = result_3;
                rcx_6 = r15_2;
                r15_2 = rdx_6;
                result_3 = result_5;
            } while i != 0;
        }
        
        r15_3 = var_48;
    }
    else
    {
        rcx_6 = rdx_1;
        r15_3 = var_48;
        result_1 = result_2;
    }
    
    let rbp_3: i32 = rbx_2 & 1;
    let mut result: i64;
    let mut rdx_10: i32;
    
    if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_1, rcx_6, rbp_3)
        == 0
    {
        result =
            alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result_1, rcx_6, rbp_3);
        
        if var_4c == 0
        {
            result = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, 
                result, rdx_10, var_4d);
        }
    }
    else
    {
        rdx_10 = rcx_6;
        result = result_1;
    }
    
    if r15_3 != 0
    {
        return result;
    }
    
    if alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rdx_10, var_4d)
        == 0
    {
        return 
            alacritty_terminal::vi_mode::semantic::_$u7b$$u7b$closure$u7d$$u7d$::h6ed5e1985e6fd4fb(
            arg1, &var_4d, result, rdx_10);
    }
    
    result
}
