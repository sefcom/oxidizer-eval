
  int32_t* uu_runcon::get_plain_context::hdc7dc8eb3b1060b4(int32_t* arg1, char* arg2, uint64_t arg3)

{
    if (!uucore::features::selinux::is_selinux_enabled::h2d0474223322b7de())
        *arg1 = 0xb;
    else
    {
        int32_t var_60;
        uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_60, arg2, arg3);
        int32_t rax_1 = var_60;
        int128_t var_58;
        int128_t var_48;
        int128_t var_38;
        
        if (rax_1 != 0x11)
        {
            *(arg1 + 0x18) = var_48;
            *(arg1 + 0x28) = var_38;
            int128_t var_28;
            *(arg1 + 0x38) = var_28;
            *arg1 = rax_1;
            int32_t var_5c;
            arg1[1] = var_5c;
            *(arg1 + 8) = var_58;
        }
        else
        {
            char* r15_1 = var_58;
            selinux::OpaqueSecurityContext::from_c_str::h368aba2e3de4a508(&var_60, r15_1);
            
            if (var_60 != 0xa)
            {
                *(arg1 + 0x30) = *var_38[8];
                int128_t zmm0_2 = var_60;
                *(arg1 + 0x20) = var_48;
                *(arg1 + 0x10) = var_58;
                *arg1 = zmm0_2;
                *(arg1 + 0x38) = "Creating new contextSetting new …";
                *(arg1 + 0x40) = 0x14;
            }
            else
            {
                *(arg1 + 8) = var_58;
                *arg1 = 0x11;
            }
            
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(r15_1, 
                *var_58[8]);
        }
    }
    
    return arg1;
}
