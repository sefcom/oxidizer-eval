
  int32_t* uu_runcon::set_next_exec_context::h3c5444e4c838f269(int32_t* arg1)

{
    int32_t var_68;
    int64_t* rsi;
    selinux::OpaqueSecurityContext::to_c_string::h430491ec1faf4b27(&var_68, rsi);
    int32_t rax = var_68;
    int128_t var_60;
    int128_t var_50;
    int128_t var_40;
    
    if (rax != 0xa)
    {
        *(arg1 + 0x18) = var_50;
        *(arg1 + 0x28) = var_40;
        *arg1 = rax;
        int32_t var_64;
        arg1[1] = var_64;
        *(arg1 + 8) = var_60;
        *(arg1 + 0x38) = "Creating new contextSetting new …";
        *(arg1 + 0x40) = 0x14;
    }
    else
    {
        char* r15_1 = var_60;
        int64_t r14_1 = *var_60[8];
        char* var_78_1 = r15_1;
        int64_t var_88 = 1;
        int64_t var_80_1 = r14_1 - 1;
        int16_t var_70_1 = 0;
        char rax_1 = selinux::SecurityContext::check::he42cb34df3f2af54(&var_88);
        
        if (rax_1 == 2 || !(rax_1 & 1))
        {
            uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(&var_68, 
                "Checking security contextGetting…", 0x19, r15_1, r14_1 - 1, 0x1400000003);
            int64_t var_28;
            *(arg1 + 0x40) = var_28;
            int128_t zmm0_3 = var_68;
            *(arg1 + 0x30) = var_40;
            *(arg1 + 0x20) = var_50;
            *(arg1 + 0x10) = var_60;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
        }
        else
        {
            selinux::SecurityContext::set_for_next_exec::hf9f24e15c430b405(&var_68, &var_88);
            
            if (var_68 != 0xa)
            {
                *(arg1 + 0x30) = *var_40[8];
                int128_t zmm0_2 = var_68;
                *(arg1 + 0x20) = var_50;
                *(arg1 + 0x10) = var_60;
                *arg1 = zmm0_2;
                *(arg1 + 0x38) = "Setting new security contextChec…";
                *(arg1 + 0x40) = 0x1c;
            }
            else
                *arg1 = 0x11;
            
            core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h1515c5d0d295c3c5();
        }
        
        core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(r15_1, r14_1);
    }
    return arg1;
}
