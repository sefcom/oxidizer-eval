
  fn zoxide::shell::_::_$LT$impl$u20$askama..Template$u20$for$u20$zoxide..shell..Tcsh$GT$::render_into_with_values::h7a9ee968d9db603b(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut r12: *const i8 = "pwd -Lpwd -P\nset __zoxide_pwd_o…";
    
    if askama::helpers::as_bool::h464cf54a5b8114ba(arg2.byte_offset(0x12)) != 0
    {
        r12 = "pwd -P\nset __zoxide_pwd_old = `…";
    }
    
    let mut var_48: *mut i64 = arg3;
    let mut result_1: i64;
    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_48);
    let mut result: i64 = result_1;
    let var_38: i128;
    
    if result != 4
    {
        *arg1.byte_offset(8) = var_38;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n# Hook configuration for zoxid…", 0x23);
        result_1 = arg2[2] != 0;
        
        if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
        {
            goto 'label_499b5a;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n\n# Hook to add new entries to…", 0x2c);
        let rbp_1: i8 = arg2[2];
        result_1 = rbp_1 == 1;
        let mut rdx: i64;
        let mut rsi_1: *const i8;
        
        if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
        {
            result_1 = rbp_1 == 2;
            
            if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
            {
                goto 'label_499b46;
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nset __zoxide_pwd_old = ``\nali…", 0x19);
            var_48 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
            result = result_1;
            
            if result != 4
            {
                *arg1.byte_offset(8) = var_38;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "`\nalias __zoxide_hook 'set __zo…", 0x30);
                var_48 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
                result = result_1;
                
                if result == 4
                {
                    rsi_1 = "`"; test "$__zoxide_pwd_tmp" != …";
                    rdx = 0x85;
                    goto 'label_499a89;
                }
                
                *arg1.byte_offset(8) = var_38;
            }
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nalias __zoxide_hook 'zoxide ad…", 0x26);
            var_48 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
            result = result_1;
            
            if result != 4
            {
                *arg1.byte_offset(8) = var_38;
            }
            else
            {
                rsi_1 = "`"'\n\n# Initialize hook.\nalias…";
                rdx = 3;
                'label_499a89:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, rsi_1, rdx);
                'label_499b46:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n# Initialize hook.\nalias pr…", 0x32);
                'label_499b5a:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                var_48 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_48);
                result = result_1;
                
                if result != 4
                {
                    *arg1.byte_offset(8) = var_38;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# When using zoxide with --no-…", 0x1b9);
                    var_48 = arg3;
                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
                    result = result_1;
                    
                    if result != 4
                    {
                        *arg1.byte_offset(8) = var_38;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "`\\n        set __zoxide_result …", 0x105);
                        var_48 = arg3;
                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
                        result = result_1;
                        
                        if result != 4
                        {
                            *arg1.byte_offset(8) = var_38;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "`\\nset __zoxide_result = "`zoxi…", 0x87);
                            var_48 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_48);
                            result = result_1;
                            
                            if result != 4
                            {
                                *arg1.byte_offset(8) = var_38;
                            }
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Commands for zoxide. Disable…", 0x37);
                                
                                if *arg2 == 0
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                    var_48 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_48);
                                    result = result_1;
                                    
                                    if result == 4
                                    {
                                        goto 'label_499d30;
                                    }
                                    
                                    *arg1.byte_offset(8) = var_38;
                                }
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\nalias Excluded, found '; onl…", 8);
                                    var_48 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_48);
                                    result = result_1;
                                    
                                    if result != 4
                                    {
                                        *arg1.byte_offset(8) = var_38;
                                    }
                                    else
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " __zoxide_z\nalias i __zoxide_zi…", 0x12);
                                        var_48 = arg3;
                                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_48);
                                        result = result_1;
                                        
                                        if result != 4
                                        {
                                            *arg1.byte_offset(8) = var_38;
                                        }
                                        else
                                        {
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i __zoxide_zi\n# To initialize z…", 0xd);
                                            'label_499d30:
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                            var_48 = arg3;
                                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, 
                                                &var_48);
                                            result = result_1;
                                            
                                            if result != 4
                                            {
                                                *arg1.byte_offset(8) = var_38;
                                            }
                                            else
                                            {
                                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# To initialize zoxide, add th…", 0x9d);
                                                result = 4;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *arg1 = result;
    result
}
