
  fn uu_runcon::set_next_exec_context::h3c5444e4c838f269(arg1: *mut i32) -> *mut i32

{
    let mut var_68: i32;
    let rsi: *mut i64;
    selinux::OpaqueSecurityContext::to_c_string::h430491ec1faf4b27(&var_68, rsi);
    let rax: i32 = var_68;
    let var_60: i128;
    let var_50: i128;
    let var_40: i128;
    
    if rax != 0xa
    {
        *arg1.byte_offset(0x18) = var_50;
        *arg1.byte_offset(0x28) = var_40;
        *arg1 = rax;
        let var_64: i32;
        arg1[1] = var_64;
        *arg1.byte_offset(8) = var_60;
        *arg1.byte_offset(0x38) = "Creating new contextSetting new …";
        *arg1.byte_offset(0x40) = 0x14;
    }
    else
    {
        let r15_1: *mut i8 = var_60;
        let r14_1: i64 = *var_60[8];
        let var_78_1: *mut i8 = r15_1;
        let mut var_88: i64 = 1;
        let var_80_1: i64 = r14_1 - 1;
        let var_70_1: i16 = 0;
        let rax_1: i8 = selinux::SecurityContext::check::he42cb34df3f2af54(&var_88);
        
        if rax_1 == 2 || (rax_1 & 1) == 0
        {
            uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(&var_68, 
                "Checking security contextGetting…", 0x19, r15_1, r14_1 - 1, 0x1400000003);
            let var_28: i64;
            *arg1.byte_offset(0x40) = var_28;
            let zmm0_3: i128 = var_68;
            *arg1.byte_offset(0x30) = var_40;
            *arg1.byte_offset(0x20) = var_50;
            *arg1.byte_offset(0x10) = var_60;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
        }
        else
        {
            selinux::SecurityContext::set_for_next_exec::hf9f24e15c430b405(&var_68, &var_88);
            
            if var_68 != 0xa
            {
                *arg1.byte_offset(0x30) = *var_40[8];
                let zmm0_2: i128 = var_68;
                *arg1.byte_offset(0x20) = var_50;
                *arg1.byte_offset(0x10) = var_60;
                *arg1 = zmm0_2;
                *arg1.byte_offset(0x38) = "Setting new security contextChec…";
                *arg1.byte_offset(0x40) = 0x1c;
            }
            else
            {
                *arg1 = 0x11;
            }
            
            core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
        }
        
        core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(r15_1, r14_1);
    }
    arg1
}
