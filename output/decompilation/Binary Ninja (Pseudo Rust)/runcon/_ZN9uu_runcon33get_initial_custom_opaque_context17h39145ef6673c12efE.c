
  fn uu_runcon::get_initial_custom_opaque_context::h39145ef6673c12ef(arg1: *mut i32, arg2: i32, arg3: i64, arg4: i64) -> i64

{
    let mut var_b0: i32;
    let rdi: *mut i32 = &var_b0;
    let mut var_d8: i128;
    let var_ac: i128;
    let var_9c: i128;
    let var_88: i128;
    let var_8c: i32;
    let mut zmm0: i128;
    
    if arg2 == 0
    {
        selinux::SecurityContext::current::h79d84b1b82db0947(rdi, 0);
        let rax_1: i32 = var_b0;
        
        if rax_1 != 0xa
        {
            var_d8 = var_ac;
            *arg1.byte_offset(0x28) = var_88;
            zmm0 = var_d8;
            let var_38_1: i128 = zmm0;
            let var_28: i128 = var_9c;
            let var_18: i32 = var_8c;
            arg1[9] = var_8c;
            *arg1.byte_offset(0x14) = var_9c;
            *arg1.byte_offset(4) = zmm0;
            *arg1 = rax_1;
            *arg1.byte_offset(0x38) = "Getting security context of the …";
            *arg1.byte_offset(0x40) = 0x2f;
            return rax_1;
        }
    }
    else
    {
        uu_runcon::get_transition_context::h61b6643746ed6c81(rdi, arg3, arg4);
        let rax: i32 = var_b0;
        
        if rax != 0x11
        {
            var_d8 = var_ac;
            let var_78: i128;
            *arg1.byte_offset(0x38) = var_78;
            *arg1.byte_offset(0x28) = var_88;
            arg1[9] = var_8c;
            zmm0 = var_d8;
            *arg1.byte_offset(0x14) = var_9c;
            *arg1.byte_offset(4) = zmm0;
            *arg1 = rax;
            return rax;
        }
    }
    let mut var_68: i128 = var_ac;
    let var_58: i128 = var_9c;
    selinux::SecurityContext::to_c_string::h0c9c9ed290d135c6(&var_b0, &var_68);
    let rax_2: i32 = var_b0;
    
    if rax_2 != 0xa
    {
        *arg1.byte_offset(0x30) = *var_88[8];
        *arg1.byte_offset(0x20) = var_9c;
        let var_48_1: i128 = var_ac;
        *arg1.byte_offset(0x10) = var_ac;
        *arg1 = rax_2;
        arg1[1] = var_ac;
        *arg1.byte_offset(8) = *var_ac[4];
        *arg1.byte_offset(0x38) = "Getting security contextSetting …";
        *arg1.byte_offset(0x40) = 0x18;
    }
    else
    {
        let rax_3: i64 = *var_ac[4];
        let mut rsi_2: *mut i8;
        
        if rax_3 != 2
        {
            var_d8 = var_ac;
            var_d8 = rax_3;
            rsi_2 = *var_d8[8];
        }
        else
        {
            let rax_4: *mut i8 = _$LT$alloc..ffi..c_str..CString$u20$as$u20$core..default..Default$GT$::default::h715230eacb8601c0();
            rsi_2 = rax_4;
            *var_d8[8] = rax_4;
            let var_c8: i64 = 1;
            var_d8 = 1;
        }
        
        selinux::OpaqueSecurityContext::from_c_str::h368aba2e3de4a508(&var_b0, rsi_2);
        
        if var_b0 != 0xa
        {
            *arg1.byte_offset(0x30) = *var_88[8];
            let zmm0_2: i128 = var_b0;
            *arg1.byte_offset(0x20) = var_9c;
            *arg1.byte_offset(0x10) = var_ac;
            *arg1 = zmm0_2;
            *arg1.byte_offset(0x38) = "Creating new contextSetting new …";
            *arg1.byte_offset(0x40) = 0x14;
        }
        else
        {
            *arg1.byte_offset(8) = *var_ac[4];
            *arg1 = 0x11;
        }
        
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$core..ffi..c_str..CStr$GT$$GT$::h347652f5a30ae63e(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5()
}
