
  int64_t zoxide::shell::_::_$LT$impl$u20$askama..Template$u20$for$u20$zoxide..shell..Tcsh$GT$::render_into_with_values::h7a9ee968d9db603b(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    char const* const r12 = "pwd -Lpwd -P\nset __zoxide_pwd_o…";
    
    if (askama::helpers::as_bool::h464cf54a5b8114ba(arg2 + 0x12))
        r12 = "pwd -P\nset __zoxide_pwd_old = `…";
    
    int64_t* var_48 = arg3;
    int64_t result_1;
    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_48);
    int64_t result = result_1;
    int128_t var_38;
    
    if (result != 4)
        *(arg1 + 8) = var_38;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n# Hook configuration for zoxid…", 0x23);
        result_1 = arg2[2];
        
        if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
            goto label_499b5a;
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n\n# Hook to add new entries to…", 0x2c);
        char rbp_1 = arg2[2];
        result_1 = rbp_1 == 1;
        int64_t rdx;
        char const* const rsi_1;
        
        if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
        {
            result_1 = rbp_1 == 2;
            
            if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
                goto label_499b46;
            
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nset __zoxide_pwd_old = ``\nali…", 0x19);
            var_48 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
            result = result_1;
            
            if (result != 4)
                *(arg1 + 8) = var_38;
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "`\nalias __zoxide_hook 'set __zo…", 0x30);
                var_48 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
                result = result_1;
                
                if (result == 4)
                {
                    rsi_1 = "`"; test "$__zoxide_pwd_tmp" != …";
                    rdx = 0x85;
                    goto label_499a89;
                }
                
                *(arg1 + 8) = var_38;
            }
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nalias __zoxide_hook 'zoxide ad…", 0x26);
            var_48 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
            result = result_1;
            
            if (result != 4)
                *(arg1 + 8) = var_38;
            else
            {
                rsi_1 = "`"'\n\n# Initialize hook.\nalias…";
                rdx = 3;
                label_499a89:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, rsi_1, rdx);
                label_499b46:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n# Initialize hook.\nalias pr…", 0x32);
                label_499b5a:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                var_48 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_48);
                result = result_1;
                
                if (result != 4)
                    *(arg1 + 8) = var_38;
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# When using zoxide with --no-…", 0x1b9);
                    var_48 = arg3;
                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
                    result = result_1;
                    
                    if (result != 4)
                        *(arg1 + 8) = var_38;
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "`\\n        set __zoxide_result …", 0x105);
                        var_48 = arg3;
                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, r12, 6, &var_48);
                        result = result_1;
                        
                        if (result != 4)
                            *(arg1 + 8) = var_38;
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "`\\nset __zoxide_result = "`zoxi…", 0x87);
                            var_48 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_48);
                            result = result_1;
                            
                            if (result != 4)
                                *(arg1 + 8) = var_38;
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Commands for zoxide. Disable…", 0x37);
                                
                                if (!*arg2)
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                    var_48 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_48);
                                    result = result_1;
                                    
                                    if (result == 4)
                                        goto label_499d30;
                                    
                                    *(arg1 + 8) = var_38;
                                }
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\nalias Excluded, found '; onl…", 8);
                                    var_48 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_48);
                                    result = result_1;
                                    
                                    if (result != 4)
                                        *(arg1 + 8) = var_38;
                                    else
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " __zoxide_z\nalias i __zoxide_zi…", 0x12);
                                        var_48 = arg3;
                                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_48);
                                        result = result_1;
                                        
                                        if (result != 4)
                                            *(arg1 + 8) = var_38;
                                        else
                                        {
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i __zoxide_zi\n# To initialize z…", 0xd);
                                            label_499d30:
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                            var_48 = arg3;
                                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, 
                                                &var_48);
                                            result = result_1;
                                            
                                            if (result != 4)
                                                *(arg1 + 8) = var_38;
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
    return result;
}
