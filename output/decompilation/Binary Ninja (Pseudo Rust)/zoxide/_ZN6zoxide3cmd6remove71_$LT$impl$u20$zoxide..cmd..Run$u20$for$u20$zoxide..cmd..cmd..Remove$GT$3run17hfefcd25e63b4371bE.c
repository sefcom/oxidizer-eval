
  fn zoxide::cmd::remove::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Remove$GT$::run::hfefcd25e63b4371b(arg1: *mut c_void, arg2: i64) -> u64

{
    let mut r14: *mut c_void = arg1;
    let mut var_d0: i32;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::open::ha2e4ec58863e42c6(&var_d0);
    let result_1: u64;
    let mut result: u64 = result_1;
    
    if var_d0 != 1
    {
        let var_90: i64;
        let var_38_1: i64 = var_90;
        let var_a0: i128;
        let var_48_1: i128 = var_a0;
        let mut var_b0: i128;
        let var_58_1: i128 = var_b0;
        let mut var_c0: i128;
        let var_68_1: i128 = var_c0;
        let mut result_2: u64 = result;
        
        if arg2 == 0
        {
            'label_490914:
            result = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(&result_2);
        }
        else
        {
            let mut r15_2: i64 = arg2 * 0x18;
            
            loop
            {
                let mut var_88: *mut c_void = r14;
                
                if zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he03cc2ff8669cdde(&result_2, r14) == 0
                {
                    zoxide::util::resolve_path::h8aa7abc34508b0d7(&var_d0, r14);
                    let r12_1: i64 = var_d0;
                    result = result_1;
                    
                    if -(r12_1) == -0x8000000000000000
                    {
                        break;
                    }
                    
                    zoxide::util::path_to_str::h52f975d9744c5a30(&var_d0, result);
                    let r13_1: i64 = var_d0;
                    let mut result_3: u64 = result_1;
                    
                    if r13_1 == 0
                    {
                        goto 'label_490900;
                    }
                    
                    let rax_5: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(r13_1, result_3, *r14.byte_offset(8), *r14.byte_offset(0x10));
                    let mut rax_6: i8;
                    
                    if rax_5 == 0
                    {
                        rax_6 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he8cbb156e9e90a2b(&result_2, r13_1);
                    }
                    
                    if rax_5 != 0 || rax_6 == 0
                    {
                        let mut var_80: *mut *mut c_void = &var_88;
                        let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff193ca47b9cf8cb;
                        var_d0 = &data_534970;
                        let var_c8: i64 = 1;
                        var_b0 = 0;
                        var_c0 = &var_80;
                        *var_c0[8] = 1;
                        result_3 = anyhow::__private::format_err::h09b344f6a077676a(&var_d0);
                        'label_490900:
                        core::mem::drop::h8efcdb4578edbe7f(r12_1, result);
                        result = result_3;
                        break;
                    }
                    
                    core::mem::drop::h8efcdb4578edbe7f(r12_1, result);
                }
                
                r14 += 0x18;
                let temp0_1: i64 = r15_2;
                r15_2 -= 0x18;
                
                if temp0_1 == 0x18
                {
                    goto 'label_490914;
                }
            }
        }
        
        core::ptr::drop_in_place$LT$zoxide..db..ouroboros_impl_database..Database$GT$::h5b6619742b1f1539(&result_2);
    }
    
    result
}
