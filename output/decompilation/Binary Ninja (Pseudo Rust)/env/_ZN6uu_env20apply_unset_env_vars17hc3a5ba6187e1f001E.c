
  fn uu_env::apply_unset_env_vars::hc3a5ba6187e1f001(arg1: *mut c_void) -> *mut i128

{
    let rax: i64 = *arg1.byte_offset(0x20);
    let rcx_2: i64 = (*arg1.byte_offset(0x28) << 4) + rax;
    let mut var_d0: i64 = rax;
    let var_c8: i64 = rcx_2;
    let i_2: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_d0);
    
    if i_2 != 0
    {
        let mut i_1: *mut i64 = i_2;
        let mut var_d8_1: *mut *mut [i8; 0xfa] = &data_548bc8;
        let mut i: *mut i64;
        
        do
        {
            let rbx_1: i64 = *i_1;
            let r13_1: i64 = i_1[1];
            let mut var_c0: i64 = -0x8000000000000000;
            let var_b8_1: i64 = rbx_1;
            let var_b0_1: i64 = r13_1;
            
            if r13_1 == 0
            {
                'label_4ced79:
                let mut var_68: i64 = 1;
                let var_60_1: i64 = rbx_1;
                let var_58_1: i64 = r13_1;
                let var_50_1: i8 = 1;
                let mut var_78: *mut i64 = &var_68;
                let var_70_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                let mut var_a8: *mut *mut c_void = &data_548ba8;
                let var_a0_1: i64 = 2;
                let var_88_1: i64 = 0;
                let var_98_1: *mut *mut i64 = &var_78;
                let mut var_90_1: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_48, &var_a8);
                var_90_1 = 0x7d;
                var_a8 = var_48;
                let var_38: i64;
                let var_98_2: i64 = var_38;
                let result: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_a8);
                core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(&var_c0);
                return result;
            }
            
            let rax_1: i8 = uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(&var_c0, 
                &data_417568);
            let mut rax_3: u32;
            
            if rax_1 != 0
            {
                rax_3 = rax_1;
                'label_4ced70:
                
                if rax_3 != 2
                {
                    goto 'label_4ced79;
                }
                
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let rax_2: i8 =
                uu_env::native_int_str::NativeStr::contains::h70e4bf3944233ada(&var_c0, "=");
            
            if rax_2 != 0
            {
                rax_3 = rax_2;
                var_d8_1 = &data_548be0;
                goto 'label_4ced70;
            }
            
            std::env::remove_var::h15b89aa0b6126639(i_1);
            core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(
                &var_c0);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4336037a61c6f015(&var_d0);
            i_1 = i;
        } while i != 0;
    }
    
    nullptr
}
