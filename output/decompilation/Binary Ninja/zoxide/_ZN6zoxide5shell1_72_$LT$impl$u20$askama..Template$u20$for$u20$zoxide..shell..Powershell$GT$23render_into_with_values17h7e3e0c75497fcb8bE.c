
  int64_t zoxide::shell::_::_$LT$impl$u20$askama..Template$u20$for$u20$zoxide..shell..Powershell$GT$::render_into_with_values::h7e3e0c75497fcb8b(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t* var_40 = arg3;
    int64_t result_1;
    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
    int64_t result = result_1;
    int128_t var_30;
    
    if (result != 4)
        *(arg1 + 8) = var_30;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n# Utility functions for zoxide…", 0x4c7);
        
        if (askama::helpers::as_bool::h464cf54a5b8114ba(arg2 + 0x11))
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    Write-Output $dir.Path# Ho…", 0x1b);
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n}\n\nhelpNoneshimbashHOME\x1b[…", 4);
        var_40 = arg3;
        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
        result = result_1;
        
        if (result != 4)
            *(arg1 + 8) = var_30;
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Hook configuration for zoxid…", 0x25);
            char rbp_1 = arg2[2];
            result_1 = !rbp_1;
            
            if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
            {
                result_1 = rbp_1 == 1;
                
                if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
                {
                    result_1 = rbp_1 == 2;
                    
                    if (askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "# Hook to add new entries to the…", 0x13c);
                }
                else
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "# Hook to add new entries to the…", 0xaa);
                
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n# Initialize hook.\n$global:…", 0x183);
                goto label_4997ac;
            }
            
            var_40 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_40);
            result = result_1;
            
            if (result == 4)
            {
                label_4997ac:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                var_40 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
                result = result_1;
                
                if (result != 4)
                    *(arg1 + 8) = var_30;
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# When using zoxide with --no-…", 0x465);
                    var_40 = arg3;
                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
                    result = result_1;
                    
                    if (result != 4)
                        *(arg1 + 8) = var_30;
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Commands for zoxide. Disable…", 0x37);
                        
                        if (!*arg2)
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                            var_40 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_40);
                            result = result_1;
                            
                            if (result == 4)
                                goto label_499919;
                            
                            *(arg1 + 8) = var_30;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\nSet-Alias -Name  -Value __zo…", 0x12);
                            var_40 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                            result = result_1;
                            
                            if (result != 4)
                                *(arg1 + 8) = var_30;
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " -Value __zoxide_z -Option AllSc…", 0x49);
                                var_40 = arg3;
                                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                                result = result_1;
                                
                                if (result != 4)
                                    *(arg1 + 8) = var_30;
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i -Value __zoxide_zi -Option All…", 0x3a);
                                    label_499919:
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                    var_40 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
                                    result = result_1;
                                    
                                    if (result != 4)
                                        *(arg1 + 8) = var_30;
                                    else
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# To initialize zoxide, add th…", 0xb1);
                                        result = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
                *(arg1 + 8) = var_30;
        }
    }
    *arg1 = result;
    return result;
}
