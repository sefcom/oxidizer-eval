
  fn zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_interactive::hb59cdf2fd68d3de0(arg1: *mut c_void, arg2: *mut c_void, arg3: i64) -> *mut i8

{
    let mut var_d8: i32;
    zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::get_fzf::hf403ce7b6e161106(
        &var_d8);
    let var_d0: *mut i8;
    
    if var_d8 == 1
    {
        return var_d0;
    }
    
    let var_d4: i32;
    let mut var_84: i32 = var_d4;
    let var_80_1: *mut i8 = var_d0;
    let mut var_c8: i128;
    let var_78_1: i128 = var_c8;
    let mut var_f0: *mut i64;
    let mut var_e8_1: *mut i8;
    let mut var_e0_1: i64;
    let mut var_a8: *mut i64;
    let mut var_a0_1: *mut i8;
    let mut var_98_1: i64;
    let mut rbp_1: *mut i8;
    
    if !(0 + -(*arg1.byte_offset(0x18)))
    {
        let r12_1: i64 = *arg1.byte_offset(0x20);
        let r13_1: i64 = *arg1.byte_offset(0x28);
        let var_60_1: i64 = -0x7fffffffffffffff;
        
        loop
        {
            let rax_4: *mut c_void = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
            
            if rax_4 == 0
            {
                goto 'label_48fd27;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*rax_4.byte_offset(8), *rax_4.byte_offset(0x10), r12_1, r13_1) == 0
            {
                zoxide::util::FzfChild::write::h5751cfe08cd05641(&var_d8, &var_84);
                let rax_6: *mut i64 = var_d8;
                rbp_1 = var_d0;
                
                if rax_6 == var_60_1
                {
                    goto 'label_48feb9;
                }
                
                var_f0 = rax_6;
                var_e8_1 = rbp_1;
                var_e0_1 = var_c8;
                
                if rax_6 != -0x8000000000000000
                {
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::he4fa8c614f7df1fb(
                    &var_f0);
            }
        }
    }
    else
    {
        loop
        {
            if zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2) == 0
            {
                'label_48fd27:
                zoxide::util::FzfChild::wait::h58b549ee022416b6(&var_d8, &var_84);
                let rax_7: *mut i64 = var_d8;
                rbp_1 = var_d0;
                
                if rax_7 == -0x8000000000000000
                {
                    goto 'label_48feb9;
                }
                
                var_a8 = rax_7;
                var_a0_1 = rbp_1;
                var_98_1 = var_c8;
                
                if *arg1.byte_offset(0x4b) != 0
                {
                    goto 'label_48fe45;
                }
                
                goto 'label_48fd74;
            }
            
            zoxide::util::FzfChild::write::h5751cfe08cd05641(&var_d8, &var_84);
            let rax_3: *mut i64 = var_d8;
            rbp_1 = var_d0;
            
            if rax_3 == -0x7fffffffffffffff
            {
                goto 'label_48feb9;
            }
            
            var_f0 = rax_3;
            var_e8_1 = rbp_1;
            var_e0_1 = var_c8;
            
            if rax_3 != -0x8000000000000000
            {
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::he4fa8c614f7df1fb(
                &var_f0);
        }
    }
    
    var_98_1 = var_e0_1;
    var_a8 = var_f0;
    var_a0_1 = var_e8_1;
    
    if *arg1.byte_offset(0x4b) == 0
    {
        'label_48fd74:
        let mut rax_9: *mut c_void;
        let mut rdx_4: i64;
        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(7, var_a0_1, var_98_1);
        anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::h87531f8a1ca6dc18(&var_d8, rax_9, rdx_4, "could not read selection from fz…", 0x21);
        let rax_10: i64 = var_d8;
        rbp_1 = var_d0;
        
        if rax_10 == 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_a8);
            'label_48feb9:
            core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(&var_84);
            return rbp_1;
        }
        
        let mut var_58: i64 = rax_10;
        let var_50_1: *mut i8 = rbp_1;
        var_f0 = &var_58;
        let var_e8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3f43078e28aa9000;
        var_d8 = &data_418b80;
        let var_d0_1: i64 = 1;
        let var_b8_1: i64 = 0;
        var_c8 = &var_f0;
        *var_c8[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
    }
    else
    {
        'label_48fe45:
        var_f0 = &var_a8;
        let var_e8_3: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_d8 = &data_418b80;
        let var_d0_2: i64 = 1;
        let var_b8_2: i64 = 0;
        var_c8 = &var_f0;
        *var_c8[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_a8);
    core::ptr::drop_in_place$LT$zoxide..util..FzfChild$GT$::h8162ffcf0a6e609c(&var_84);
    nullptr
}
