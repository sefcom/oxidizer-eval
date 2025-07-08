
  fn uu_env::EnvAppData::process_all_string_arguments::h37f9f42a31d85940(arg1: *mut i64, arg2: *mut i16, arg3: *mut c_void) -> *mut i64

{
    let mut var_78: i64 = 0;
    let var_70: i64 = 8;
    let var_68: i64 = 0;
    let rax: i64 = *arg3.byte_offset(8);
    let rcx: i64 = *arg3.byte_offset(0x10);
    let mut var_58: i64 = rax;
    let var_50: i64 = rax + rcx * 0x18;
    let rax_1: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h318b604434d12f7c(&var_58);
    let mut result: *mut i64;
    
    if rax_1 == 0
    {
        'label_4cde59:
        result = arg1;
        result[2] = var_68;
        *result = var_78;
    }
    else
    {
        let mut rbx_1: *mut c_void = rax_1;
        
        loop
        {
            let mut var_98: i64;
            uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, *rbx_1.byte_offset(8), 
                *rbx_1.byte_offset(0x10), "--split-string-S-vSargv0:     ex…", 0xe, &var_78, 
                nullptr);
            let mut rax_2: i64 = var_98;
            let var_90: i64;
            
            if rax_2 == 0
            {
                if var_90 != 0
                {
                    'label_4cdd76:
                    *arg2.byte_offset(1) = 1;
                    'label_4cdd7e:
                    let rax_3: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h318b604434d12f7c(&var_58);
                    rbx_1 = rax_3;
                    
                    if rax_3 == 0
                    {
                        goto 'label_4cde59;
                    }
                    
                    continue;
                }
                else
                {
                    uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, 
                        *rbx_1.byte_offset(8), *rbx_1.byte_offset(0x10), 
                        "-S-vSargv0:     executing: [0]= …", 2, &var_78, nullptr);
                    rax_2 = var_98;
                    
                    if rax_2 == 0
                    {
                        if var_90 != 0
                        {
                            goto 'label_4cdd76;
                        }
                        
                        uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, 
                            *rbx_1.byte_offset(8), *rbx_1.byte_offset(0x10), 
                            "-vSargv0:     executing: [0]= []…", 3, &var_78, nullptr);
                        rax_2 = var_98;
                        
                        if rax_2 == 0
                        {
                            if var_90 != 0
                            {
                                *arg2 = 0x101;
                                goto 'label_4cdd7e;
                            }
                            
                            uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(&var_98, 
                                *rbx_1.byte_offset(8), *rbx_1.byte_offset(0x10), 
                                "-vvSAutonullXCPUBOLDBlue]", 4, &var_78, arg3);
                            rax_2 = var_98;
                            
                            if rax_2 == 0
                            {
                                if var_90 == 0
                                {
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h220e028d5ab62681(&var_98, rbx_1);
                                    let var_88: i64;
                                    let var_38_1: i64 = var_88;
                                    let mut var_48: i128 = var_98;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc5b0859d542897ba(&var_78, 
                                        &var_48);
                                }
                                else
                                {
                                    *arg2 = 0x101;
                                    arg2[1] = 0;
                                }
                                
                                goto 'label_4cdd7e;
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
    
    result
}
