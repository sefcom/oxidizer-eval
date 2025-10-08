
  int32_t* uu_runcon::get_custom_context::hfc7b7c6ca4bc17a5(int32_t* arg1, char arg2, char* arg3, uint64_t arg4, char* arg5, uint64_t arg6, char* arg7, uint64_t arg8, char* arg9, uint64_t arg10, int64_t arg11, int64_t arg12)

{
    if (!uucore::features::selinux::is_selinux_enabled::h2d0474223322b7de())
        *arg1 = 0xb;
    else
    {
        int32_t var_78;
        uu_runcon::get_initial_custom_opaque_context::h39145ef6673c12ef(&var_78, arg2, arg11, 
            arg12);
        int32_t rax_1 = var_78;
        int32_t var_74;
        char* var_70;
        int128_t var_68;
        int128_t var_58;
        int128_t var_48;
        
        if (rax_1 != 0x11)
        {
            int64_t var_38;
            *(arg1 + 0x40) = var_38;
            *(arg1 + 0x30) = var_48;
            *(arg1 + 0x20) = var_58;
            *(arg1 + 0x10) = var_68;
            *arg1 = rax_1;
            arg1[1] = var_74;
            *(arg1 + 8) = var_70;
        }
        else
        {
            char* var_80 = var_70;
            
            if (!arg3)
                goto label_461c8c;
            
            uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_78, arg3, arg4);
            int32_t rax_3 = var_78;
            
            if (rax_3 != 0x11)
            {
                label_461e16:
                *(arg1 + 0x18) = var_68;
                *(arg1 + 0x28) = var_58;
                *(arg1 + 0x38) = var_48;
                *arg1 = rax_3;
                arg1[1] = var_74;
                *(arg1 + 8) = var_70;
                core::ptr::drop_in_place$LT$selinux..OpaqueSecurityContext$GT$::hc820fdfb3036263f();
            }
            else
            {
                char* r15_1 = var_70;
                int64_t r14_1 = var_68;
                selinux::OpaqueSecurityContext::set_user::hedb81d8385ad715a(&var_78, &var_80, 
                    r15_1);
                int32_t rax_4 = var_78;
                int64_t rcx_3;
                void* const rdx_10;
                
                if (rax_4 != 0xa)
                {
                    rcx_3 = 0x1d;
                    rdx_10 = "Setting security context userSet…";
                    label_461e71:
                    arg1[0xd] = *var_48[4];
                    *(arg1 + 0x24) = var_58;
                    *(arg1 + 0x14) = var_68;
                    *(arg1 + 4) = var_74;
                    *arg1 = rax_4;
                    *(arg1 + 0x38) = rdx_10;
                    *(arg1 + 0x40) = rcx_3;
                    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(
                        r15_1, r14_1);
                    core::ptr::drop_in_place$LT$selinux..OpaqueSecurityContext$GT$::hc820fdfb3036263f();
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(
                        r15_1, r14_1);
                    label_461c8c:
                    
                    if (!arg5)
                        goto label_461cee;
                    
                    uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_78, arg5, arg6);
                    rax_3 = var_78;
                    
                    if (rax_3 != 0x11)
                        goto label_461e16;
                    
                    r15_1 = var_70;
                    r14_1 = var_68;
                    selinux::OpaqueSecurityContext::set_role::hd7572ed457b85c0d(&var_78, &var_80, 
                        r15_1);
                    rax_4 = var_78;
                    
                    if (rax_4 != 0xa)
                    {
                        rcx_3 = 0x1d;
                        rdx_10 = "Setting security context roleSet…";
                        goto label_461e71;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(
                        r15_1, r14_1);
                    label_461cee:
                    
                    if (!arg7)
                        goto label_461d52;
                    
                    uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_78, arg7, arg8);
                    rax_3 = var_78;
                    
                    if (rax_3 != 0x11)
                        goto label_461e16;
                    
                    r15_1 = var_70;
                    r14_1 = var_68;
                    selinux::OpaqueSecurityContext::set_type::h1115d79b3e28ec42(&var_78, &var_80, 
                        r15_1);
                    rax_4 = var_78;
                    
                    if (rax_4 != 0xa)
                    {
                        rcx_3 = 0x1d;
                        rdx_10 = "Setting security context typeSet…";
                        goto label_461e71;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(
                        r15_1, r14_1);
                    label_461d52:
                    
                    if (!arg9)
                    {
                        *(arg1 + 8) = var_80;
                        *arg1 = 0x11;
                    }
                    else
                    {
                        uu_runcon::os_str_to_c_string::h048fb3727ae8a25a(&var_78, arg9, arg10);
                        rax_3 = var_78;
                        
                        if (rax_3 != 0x11)
                            goto label_461e16;
                        
                        r15_1 = var_70;
                        r14_1 = var_68;
                        selinux::OpaqueSecurityContext::set_range::h55d2baed979040b1(&var_78, 
                            &var_80, r15_1);
                        rax_4 = var_78;
                        
                        if (rax_4 != 0xa)
                        {
                            rcx_3 = 0x1e;
                            rdx_10 = "Setting security context rangesr…";
                            goto label_461e71;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h9db586c62cff4b59(r15_1, r14_1);
                        *(arg1 + 8) = var_80;
                        *arg1 = 0x11;
                    }
                }
            }
        }
    }
    
    return arg1;
}
