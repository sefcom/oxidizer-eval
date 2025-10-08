
  fn alacritty::config::imports::he228980ef6034b5f(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64) -> *mut c_void

{
    let mut result: *mut c_void = core::option::Option$LT$T$GT$::or_else::hbd14aba21ff2822d(
        toml::value::Value::get::hdb566b349a2e1877(arg2, "import~/Removing null key "" fro…", 6), 
        arg2);
    
    if result == 0
    {
        arg1[2] = 8;
        arg1[3] = 0;
        *arg1 = {0};
    }
    else if *result.byte_offset(0x1a) != 7
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&arg1[1], "Invalid import type: expected a …", 0x28);
        *arg1 = 1;
    }
    else
    {
        let r13_1: i64 = *result.byte_offset(0x10);
        
        if (arg5 == 0 & r13_1 != 0) == 0
        {
            let mut var_c0: i64 = 0;
            let result_1: *mut c_void = 8;
            let var_b0_1: i64 = 0;
            
            if r13_1 != 0
            {
                let rbp_1: i64 = *result.byte_offset(8);
                let mut i: i64 = 0;
                
                do
                {
                    let mut var_98: i64;
                    let mut var_90: i128;
                    
                    if *(rbp_1 + i + 0x1a) != 2
                    {
                        let mut var_48: i128;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_48, "Invalid import element type: exp…", 0x31);
                        let var_38: i64;
                        let var_80_2: i64 = var_38;
                        var_90 = var_48;
                        var_98 = 1;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::he6dbae5d4f9d6ea0(&var_c0, &var_98);
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_98, *(rbp_1 + i + 8), *(rbp_1 + i + 0x10));
                        let var_68_1: i64 = *var_90[8];
                        let mut var_78: i128 = var_98;
                        let mut var_60: i128;
                        alacritty::config::normalize_import::he46573190aa32594(&var_60, arg3, arg4, 
                            &var_78);
                        let var_50: i64;
                        let var_80_1: i64 = var_50;
                        var_90 = var_60;
                        var_98 = 0;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::he6dbae5d4f9d6ea0(&var_c0, &var_98);
                    }
                    i += 0x20;
                } while r13_1 << 5 != i;
            }
            
            arg1[3] = var_b0_1;
            arg1[1] = var_c0;
            result = result_1;
            arg1[2] = result;
            *arg1 = 0;
        }
        else
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&arg1[1], "Exceeded maximum configuration i…", 0x2b);
            *arg1 = 1;
        }
    }
    
    result
}
