
  fn zoxide::shell::_::_$LT$impl$u20$askama..Template$u20$for$u20$zoxide..shell..Zsh$GT$::render_into_with_values::h0efbde2a8c7cc377(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, 
        "# shellcheck shell=bash\n\n\n# U…", 0x19);
    let mut var_40: *mut i64 = arg3;
    let mut result_1: i64;
    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
    let mut result: i64 = result_1;
    let var_30: i128;
    
    if result != 4
    {
        *arg1.byte_offset(8) = var_30;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n# Utility functions for zoxide…", 0x6f);
        let mut rdx: i64;
        let mut rsi: *const i8;
        
        if askama::helpers::as_bool::h464cf54a5b8114ba(&data_419dac) == 0
        {
            if askama::helpers::as_bool::h464cf54a5b8114ba(arg2.byte_offset(0x12)) == 0
            {
                rsi = "\n    \builtin pwd -L\n    \buil…";
            }
            else
            {
                rsi = "\n    \builtin pwd -P\n    \comm…";
            }
            
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
            arg3, "\n}\n\n# cd + custom logic based…", 0x88);
        
        if askama::helpers::as_bool::h464cf54a5b8114ba(arg2.byte_offset(0x11)) != 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " && __zoxide_pwdhost unreachable…", 0x10);
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n}\n\nhelpNoneshimbashHOME\x1b[…", 4);
        var_40 = arg3;
        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
        result = result_1;
        
        if result != 4
        {
            *arg1.byte_offset(8) = var_30;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Hook configuration for zoxid…", 0x1d2);
            let rbp_1: i8 = arg2[2];
            result_1 = rbp_1 == 1;
            
            if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
            {
                result_1 = rbp_1 == 2;
                
                if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) != 0
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nchpwd_functions+=(__zoxide_hoo…", 0x21);
                }
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nprecmd_functions+=(__zoxide_ho…", 0x22);
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n# Report common issues.\nfun…", 0x36);
            result_1 = arg2[2] == 0;
            let mut rdx_2: i64;
            let mut rsi_2: *const i8;
            
            if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    [[ ${_ZO_DOCTOR:-1} -ne 0 …", 0x2d);
                let rbp_2: i8 = arg2[2];
                result_1 = rbp_2 == 1;
                
                if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
                {
                    result_1 = rbp_2 == 2;
                    
                    if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) != 0
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    [[ ${chpwd_functions[(Ie)_…", 0x44);
                    }
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    [[ ${precmd_functions[(Ie)…", 0x45);
                }
                
                rsi_2 = "\n\n    _ZO_DOCTOR=0\n    \built…";
                rdx_2 = 0x1c3;
            }
            else
            {
                rsi_2 = "\n    return 0\n# When using zox…";
                rdx_2 = 0xd;
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, rsi_2, rdx_2);
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n}\n\nhelpNoneshimbashHOME\x1b[…", 4);
            var_40 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
            result = result_1;
            
            if result != 4
            {
                *arg1.byte_offset(8) = var_30;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# When using zoxide with --no-…", 0x33b);
                var_40 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
                result = result_1;
                
                if result != 4
                {
                    *arg1.byte_offset(8) = var_30;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Commands for zoxide. Disable…", 0x37);
                    
                    if *arg2 == 0
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                        var_40 = arg3;
                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_40);
                        result = result_1;
                        
                        if result == 4
                        {
                            goto 'label_49a53a;
                        }
                        
                        *arg1.byte_offset(8) = var_30;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\nfunction () {\n    __zoxide_…", 0xb);
                        var_40 = arg3;
                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                        result = result_1;
                        
                        if result != 4
                        {
                            *arg1.byte_offset(8) = var_30;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "() {\n    __zoxide_z "$@"\n}\n\n…", 0x25);
                            var_40 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                            result = result_1;
                            
                            if result != 4
                            {
                                *arg1.byte_offset(8) = var_30;
                            }
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i() {\n    __zoxide_zi "$@"\n}\n…", 0x1c);
                                'label_49a53a:
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n# Completions.\nif [[ -o zle…", 0x540);
                                let mut rsi_6: *const i8 = *arg2;
                                let mut rdx_6: i64;
                                
                                if rsi_6 == 0
                                {
                                    rdx_6 = 2;
                                    rsi_6 = "cd\n# Hook configuration for zox…";
                                }
                                else
                                {
                                    rdx_6 = arg2[1];
                                }
                                
                                var_40 = arg3;
                                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, rsi_6, rdx_6, &var_40);
                                result = result_1;
                                
                                if result != 4
                                {
                                    *arg1.byte_offset(8) = var_30;
                                }
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, " ${(q-)__zoxide_result}"\n      …", 0xf5);
                                    
                                    if *arg2 != 0
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n    [[ "${+functions[compdef…", 0x4b);
                                        var_40 = arg3;
                                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                                        result = result_1;
                                    }
                                    
                                    if *arg2 != 0 && result != 4
                                    {
                                        *arg1.byte_offset(8) = var_30;
                                    }
                                    else
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\nfi\n\n\n# To initialize zoxide…", 5);
                                        var_40 = arg3;
                                        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, 
                                            &var_40);
                                        result = result_1;
                                        
                                        if result != 4
                                        {
                                            *arg1.byte_offset(8) = var_30;
                                        }
                                        else
                                        {
                                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# To initialize zoxide, add th…", 0x74);
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
    *arg1 = result;
    result
}
