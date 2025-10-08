
  fn uu_runcon::get_plain_context::hdc7dc8eb3b1060b4(arg1: *mut i32, arg2: *mut i8, arg3: u64) -> *mut i32

{
    if uucore::features::selinux::is_selinux_enabled::h2d0474223322b7de() == 0
    {
        *arg1 = 0xb;
    }
    else
    {
        let mut var_60: i32;
        uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_60, arg2, arg3);
        let rax_1: i32 = var_60;
        let var_58: i128;
        let var_48: i128;
        let var_38: i128;
        
        if rax_1 != 0x11
        {
            *arg1.byte_offset(0x18) = var_48;
            *arg1.byte_offset(0x28) = var_38;
            let var_28: i128;
            *arg1.byte_offset(0x38) = var_28;
            *arg1 = rax_1;
            let var_5c: i32;
            arg1[1] = var_5c;
            *arg1.byte_offset(8) = var_58;
        }
        else
        {
            let r15_1: *mut i8 = var_58;
            selinux::OpaqueSecurityContext::from_c_str::h368aba2e3de4a508(&var_60, r15_1);
            
            if var_60 != 0xa
            {
                *arg1.byte_offset(0x30) = *var_38[8];
                let zmm0_2: i128 = var_60;
                *arg1.byte_offset(0x20) = var_48;
                *arg1.byte_offset(0x10) = var_58;
                *arg1 = zmm0_2;
                *arg1.byte_offset(0x38) = "Creating new contextSetting new …";
                *arg1.byte_offset(0x40) = 0x14;
            }
            else
            {
                *arg1.byte_offset(8) = var_58;
                *arg1 = 0x11;
            }
            
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(r15_1, 
                *var_58[8]);
        }
    }
    
    arg1
}
