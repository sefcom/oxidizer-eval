
  int64_t zoxide::shell::_::_$LT$impl$u20$askama..Template$u20$for$u20$zoxide..shell..Posix$GT$::render_into_with_values::ha0c2001e3fc8aa5b(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, 
        "# shellcheck shell=sh\n\n\n# Uti…", 0x17);
    int64_t* var_38 = arg3;
    int64_t result_1;
    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_38);
    int64_t result = result_1;
    int128_t var_28;
    
    if (result != 4)
        *(arg1 + 8) = var_28;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n# Utility functions for zoxide…", 0x66);
        int64_t rdx;
        char const* const rsi;
        
        if (!askama::helpers::as_bool::h464cf54a5b8114ba(&data_419dac))
        {
            if (!askama::helpers::as_bool::h464cf54a5b8114ba(arg2 + 0x12))
                rsi = "\n    \command pwd -L\n    \comm…";
            else
                rsi = "\n    \command pwd -P\n}\n\n# cd…";
            
            rdx = 0x14;
        }
        else
        {
            rsi = "\n    \command cygpath -w "$(\bu…";
            rdx = 0x2d;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, rsi, rdx);
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n}\n\n# cd + custom logic based…", 0x7c);
        
        if (askama::helpers::as_bool::h464cf54a5b8114ba(arg2 + 0x11))
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " && __zoxide_pwdhost unreachable…", 0x10);
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n}\n\nhelpNoneshimbashHOME\x1b[…", 4);
        var_38 = arg3;
        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_38);
        result = result_1;
        
        if (result != 4)
            *(arg1 + 8) = var_28;
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Hook configuration for zoxid…", 0x25);
            uint32_t rax_3 = arg2[2];
            
            if (rax_3)
            {
                int64_t rdx_2;
                char const* const rsi_2;
                
                if (rax_3 != 1)
                {
                    rsi_2 = "\command printf "%s\n%s\n" \\n  …";
                    rdx_2 = 0x96;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "# Hook to add new entries to the…", 0x118);
                    result_1 = arg2[2] != 1;
                    int64_t rdx_1;
                    char const* const rsi_1;
                    
                    if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
                    {
                        rsi_1 = "\n    [ "${_ZO_DOCTOR:-1}" -eq 0…";
                        rdx_1 = 0x228;
                    }
                    else
                    {
                        rsi_1 = "\n    return 0\n# When using zox…";
                        rdx_1 = 0xd;
                    }
                    
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, rsi_1, rdx_1);
                    rsi_2 = "\n}\n# When using zoxide with --…";
                    rdx_2 = 2;
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, rsi_2, rdx_2);
                goto label_4993f1;
            }
            
            var_38 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_38);
            result = result_1;
            
            if (result == 4)
            {
                label_4993f1:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                var_38 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_38);
                result = result_1;
                
                if (result != 4)
                    *(arg1 + 8) = var_28;
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# When using zoxide with --no-…", 0x38a);
                    var_38 = arg3;
                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_38);
                    result = result_1;
                    
                    if (result != 4)
                        *(arg1 + 8) = var_28;
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Commands for zoxide. Disable…", 0x37);
                        
                        if (!*arg2)
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                            var_38 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_38);
                            result = result_1;
                            
                            if (result == 4)
                                goto label_4995bd;
                            
                            *(arg1 + 8) = var_28;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\command unalias  >/dev/null…", 0x13);
                            var_38 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_38);
                            result = result_1;
                            
                            if (result != 4)
                                *(arg1 + 8) = var_28;
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " >/dev/null 2>&1 || \true\n() {\n…", 0x1a);
                                var_38 = arg3;
                                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_38);
                                result = result_1;
                                
                                if (result != 4)
                                    *(arg1 + 8) = var_28;
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "() {\n    __zoxide_z "$@"\n}\n\n…", 0x2d);
                                    var_38 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_38);
                                    result = result_1;
                                    
                                    if (result != 4)
                                        *(arg1 + 8) = var_28;
                                    else
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i >/dev/null 2>&1 || \true\ni() …", 0x1b);
                                        var_38 = arg3;
                                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_38);
                                        result = result_1;
                                        
                                        if (result != 4)
                                            *(arg1 + 8) = var_28;
                                        else
                                        {
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i() {\n    __zoxide_zi "$@"\n}\n…", 0x1c);
                                            label_4995bd:
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                            var_38 = arg3;
                                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, 
                                                &var_38);
                                            result = result_1;
                                            
                                            if (result != 4)
                                                *(arg1 + 8) = var_28;
                                            else
                                            {
                                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# To initialize zoxide, add th…", 0x66);
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
            else
                *(arg1 + 8) = var_28;
        }
    }
    *arg1 = result;
    return result;
}
