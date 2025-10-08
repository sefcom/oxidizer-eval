
  int64_t zoxide::shell::_::_$LT$impl$u20$askama..Template$u20$for$u20$zoxide..shell..Fish$GT$::render_into_with_values::hc475419b3c4203b5(int64_t* arg1, int64_t* arg2, int64_t* arg3)

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
            arg3, "\n# Utility functions for zoxide…", 0x6b);
        int64_t rdx;
        char const* const rsi;
        
        if (!askama::helpers::as_bool::h464cf54a5b8114ba(&data_419dac))
        {
            if (!askama::helpers::as_bool::h464cf54a5b8114ba(arg2 + 0x12))
                rsi = "\n    builtin pwd -L\n    builti…";
            else
                rsi = "\n    builtin pwd -P\n    comman…";
            
            rdx = 0x13;
        }
        else
        {
            rsi = "\n    command cygpath -w (builti…";
            rdx = 0x28;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, rsi, rdx);
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\nend\n\n# A copy of fish's inte…", 0x24b);
        int64_t rdx_1;
        char const* const rsi_1;
        
        if (!askama::helpers::as_bool::h464cf54a5b8114ba(&data_419dac))
        {
            rsi_1 = "\n    __zoxide_loop=1 __zoxide_c…";
            rdx_1 = 0x2f;
        }
        else
        {
            rsi_1 = "\n    __zoxide_loop=1 __zoxide_c…";
            rdx_1 = 0x3c;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, rsi_1, rdx_1);
        
        if (askama::helpers::as_bool::h464cf54a5b8114ba(arg2 + 0x11))
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    and __zoxide_pwd\nend\n\n\n…", 0x15);
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\nend\n\n\n# Hook configuration …", 6);
        var_40 = arg3;
        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
        result = result_1;
        
        if (result != 4)
            *(arg1 + 8) = var_30;
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Hook configuration for zoxid…", 0x25);
            result_1 = !arg2[2];
            
            if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
            {
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "# Initialize hook to add new ent…", 0x35);
                char rbp_1 = arg2[2];
                result_1 = rbp_1 == 1;
                
                if (!askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
                {
                    result_1 = rbp_1 == 2;
                    
                    if (askama::helpers::as_bool::h464cf54a5b8114ba(&result_1))
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nfunction __zoxide_hook --on-va…", 0x29);
                }
                else
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nfunction __zoxide_hook --on-ev…", 0x2e);
                
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    test -z "$fish_private_mod…", 0x52);
                goto label_498c44;
            }
            
            var_40 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_40);
            result = result_1;
            
            if (result == 4)
            {
                label_498c44:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                var_40 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
                result = result_1;
                
                if (result != 4)
                    *(arg1 + 8) = var_30;
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# When using zoxide with --no-…", 0x681);
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
                                goto label_498e25;
                            
                            *(arg1 + 8) = var_30;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\nabbr --erase  &>/dev/null\na…", 0xf);
                            var_40 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                            result = result_1;
                            
                            if (result != 4)
                                *(arg1 + 8) = var_30;
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " &>/dev/null\nalias =__zoxide_z\n…", 0x13);
                                var_40 = arg3;
                                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                                result = result_1;
                                
                                if (result != 4)
                                    *(arg1 + 8) = var_30;
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "=__zoxide_z\n\nabbr --erase i &>…", 0x1a);
                                    var_40 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                                    result = result_1;
                                    
                                    if (result != 4)
                                        *(arg1 + 8) = var_30;
                                    else
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i &>/dev/null\nalias i=__zoxide_…", 0x14);
                                        var_40 = arg3;
                                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                                        result = result_1;
                                        
                                        if (result != 4)
                                            *(arg1 + 8) = var_30;
                                        else
                                        {
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i=__zoxide_zi\n# To initialize z…", 0xd);
                                            label_498e25:
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                            var_40 = arg3;
                                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, 
                                                &var_40);
                                            result = result_1;
                                            
                                            if (result != 4)
                                                *(arg1 + 8) = var_30;
                                            else
                                            {
                                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# To initialize zoxide, add th…", 0x7f);
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
                *(arg1 + 8) = var_30;
        }
    }
    *arg1 = result;
    return result;
}
