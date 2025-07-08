
  int64_t* uu_env::EnvAppData::process_all_string_arguments::h37f9f42a31d85940(int64_t* arg1, int16_t* arg2, void* arg3)

{
    int64_t var_78 = 0;
    int64_t var_70 = 8;
    int64_t var_68 = 0;
    int64_t rax = *(arg3 + 8);
    int64_t rcx = *(arg3 + 0x10);
    int64_t var_58 = rax;
    int64_t var_50 = rax + rcx * 0x18;
    void* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h318b604434d12f7c(&var_58);
    int64_t* result;
    
    if (!rax_1)
    {
        label_4cde59:
        result = arg1;
        result[2] = var_68;
        *result = var_78;
    }
    else
    {
        void* rbx_1 = rax_1;
        
        while (true)
        {
            int64_t var_98;
            uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, *(rbx_1 + 8), 
                *(rbx_1 + 0x10), "--split-string-S-vSargv0:     ex…", 0xe, &var_78, nullptr);
            int64_t rax_2 = var_98;
            int64_t var_90;
            
            if (!rax_2)
            {
                if (var_90)
                {
                    label_4cdd76:
                    *(arg2 + 1) = 1;
                    label_4cdd7e:
                    void* rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h318b604434d12f7c(&var_58);
                    rbx_1 = rax_3;
                    
                    if (!rax_3)
                        goto label_4cde59;
                    
                    continue;
                }
                else
                {
                    uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, *(rbx_1 + 8), 
                        *(rbx_1 + 0x10), "-S-vSargv0:     executing: [0]= …", 2, &var_78, nullptr);
                    rax_2 = var_98;
                    
                    if (!rax_2)
                    {
                        if (var_90)
                            goto label_4cdd76;
                        
                        uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, 
                            *(rbx_1 + 8), *(rbx_1 + 0x10), "-vSargv0:     executing: [0]= []…", 3, 
                            &var_78, nullptr);
                        rax_2 = var_98;
                        
                        if (!rax_2)
                        {
                            if (var_90)
                            {
                                *arg2 = 0x101;
                                goto label_4cdd7e;
                            }
                            
                            uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, 
                                *(rbx_1 + 8), *(rbx_1 + 0x10), "-vvSAutonullXCPUBOLDBlue]", 4, 
                                &var_78, arg3);
                            rax_2 = var_98;
                            
                            if (!rax_2)
                            {
                                if (!var_90)
                                {
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h220e028d5ab62681(&var_98, rbx_1);
                                    int64_t var_88;
                                    int64_t var_38_1 = var_88;
                                    int128_t var_48 = var_98;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc5b0859d542897ba(&var_78, 
                                        &var_48);
                                }
                                else
                                {
                                    *arg2 = 0x101;
                                    arg2[1] = 0;
                                }
                                
                                goto label_4cdd7e;
                            }
                        }
                    }
                }
            }
            
            result = arg1;
            result[1] = rax_2;
            result[2] = var_90;
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he51afd1c6657a772(&var_78);
            break;
        }
    }
    
    return result;
}
