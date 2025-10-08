
  fn uu_env::apply_unset_env_vars::h38498305449b9d8f(arg1: *mut c_void) -> u64

{
    let rbp: i64 = *arg1.byte_offset(0x28);
    
    if rbp != 0
    {
        let mut r12_1: *mut i64 = *arg1.byte_offset(0x20);
        let mut i_1: i64 = rbp << 4;
        let mut i: i64;
        
        do
        {
            let r14_1: i64 = *r12_1;
            let rax_1: i64 = r12_1[1];
            let mut var_80: i64 = -0x8000000000000000;
            let var_78_1: i64 = r14_1;
            let var_70_1: i64 = rax_1;
            
            if rax_1 == 0
            {
                'label_4753b3:
                let rax_4: i64 = *r12_1;
                let rcx_1: i64 = r12_1[1];
                let mut var_68: i64 = 1;
                let var_60_1: i64 = rax_4;
                let var_58_1: i64 = rcx_1;
                let var_50_1: i8 = 1;
                let mut var_90: *mut i64 = &var_68;
                let var_88_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let mut var_c8: *mut *mut c_void = &data_510c38;
                let var_c0_1: i64 = 2;
                let var_a8_1: i64 = 0;
                let var_b8_1: *mut *mut i64 = &var_90;
                let mut var_b0_1: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_48, &var_c8);
                var_b0_1 = 0x7d;
                var_c8 = var_48;
                let var_38: i64;
                let var_b8_2: i64 = var_38;
                let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_c8);
                core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h6fa88c11416956ac(-0x8000000000000000, r14_1);
                return result;
            }
            
            let rax_2: i8 = uu_env::native_int_str::NativeStr::contains::hb8fde7d27ed4d3f1(&var_80, 
                &data_41c740);
            
            if rax_2 == 2
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            if (rax_2 & 1) != 0
            {
                goto 'label_4753b3;
            }
            
            let rax_3: i8 =
                uu_env::native_int_str::NativeStr::contains::hb8fde7d27ed4d3f1(&var_80, "=");
            
            if rax_3 == 2
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            if (rax_3 & 1) != 0
            {
                goto 'label_4753b3;
            }
            
            std::env::remove_var::h2faae5d651d19217(r12_1);
            r12_1 = &r12_1[2];
            core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h6fa88c11416956ac(
                -0x8000000000000000, r14_1);
            i = i_1;
            i_1 -= 0x10;
        } while i != 0x10;
    }
    
    0
}
