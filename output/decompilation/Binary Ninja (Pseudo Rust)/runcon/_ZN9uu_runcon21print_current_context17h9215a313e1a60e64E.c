
  fn uu_runcon::print_current_context::h9215a313e1a60e64(arg1: *mut i32) -> *mut i32

{
    let mut var_d0: i32;
    selinux::SecurityContext::current::h79d84b1b82db0947(&var_d0, 0);
    let rax: i32 = var_d0;
    let mut var_cc: i128;
    let mut var_bc: i128;
    let var_a8: i128;
    let mut var_98: i128;
    let mut var_68: i128;
    
    if rax != 0xa
    {
        var_68 = var_cc;
        *arg1.byte_offset(0x28) = var_a8;
        let zmm0: i128 = var_68;
        var_98 = zmm0;
        let var_88_1: i128 = var_bc;
        let var_ac: i32;
        let var_78: i32 = var_ac;
        arg1[9] = var_ac;
        *arg1.byte_offset(0x14) = var_bc;
        *arg1.byte_offset(4) = zmm0;
        *arg1 = rax;
        *arg1.byte_offset(0x38) = "Getting security context of the …";
        *arg1.byte_offset(0x40) = 0x2f;
        return arg1;
    }
    
    var_68 = var_cc;
    let var_58: i128 = var_bc;
    selinux::SecurityContext::to_c_string::h0c9c9ed290d135c6(&var_d0, &var_68);
    let rax_1: i32 = var_d0;
    let mut var_38: i128;
    
    if rax_1 != 0xa
    {
        var_98 = var_cc;
        *arg1.byte_offset(0x30) = *var_a8[8];
        *arg1.byte_offset(0x20) = var_bc;
        let zmm0_1: i128 = var_98;
        var_38 = zmm0_1;
        *arg1.byte_offset(0x10) = zmm0_1;
        *arg1 = rax_1;
        arg1[1] = var_cc;
        *arg1.byte_offset(8) = *var_cc[4];
        *arg1.byte_offset(0x38) = "Getting security context of the …";
        *arg1.byte_offset(0x40) = 0x2f;
    }
    else
    {
        let rax_2: i64 = *var_cc[4];
        
        if rax_2 != 2
        {
            var_98 = rax_2;
            var_98 = var_cc;
            let var_88: i64;
            core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_d0, *var_98[8], var_88);
            let rcx_4: i64 = *var_cc[4];
            let rax_4: i64 = *var_cc[0xc];
            
            if var_d0 != 1
            {
                let mut var_28: i64 = rcx_4;
                let var_20_1: i64 = rax_4;
                var_38 = &var_28;
                *var_38[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdc64247fdccea966;
                var_d0 = &data_4ebc08;
                *var_cc[4] = 2;
                *var_bc[0xc] = 0;
                *var_cc[0xc] = &var_38;
                *var_bc[4] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::h347652f5a30ae63e(&var_98);
                *arg1 = 0x11;
            }
            else
            {
                *arg1 = 0xc;
                *arg1.byte_offset(8) = rcx_4;
                *arg1.byte_offset(0x10) = rax_4;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::h347652f5a30ae63e(&var_98);
            }
        }
        else
        {
            var_d0 = &data_4ebbe8;
            *var_cc[4] = 1;
            *var_cc[0xc] = 8;
            var_bc = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
            *arg1 = 0x11;
        }
    }
    core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
    arg1
}
