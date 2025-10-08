
  fn zoxide::shell::_::_$LT$impl$u20$askama..Template$u20$for$u20$zoxide..shell..Xonsh$GT$::render_into_with_values::h4d509fed89ee2704(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, 
        "# pylint: disable=missing-module…", 0x12c);
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
            arg3, "\n# Utility functions for zoxide…", 0x207);
        let mut rdx: i64;
        let mut rsi: *const i8;
        
        if askama::helpers::as_bool::h464cf54a5b8114ba(arg2.byte_offset(0x12)) == 0
        {
            rsi = "\n    pwd = __zoxide_env().get("…";
            rdx = 0x65;
        }
        else
        {
            rsi = "\n    pwd = os.getcwd()\n    ret…";
            rdx = 0x16;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, rsi, rdx);
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n    return pwd\n\n\ndef __zoxi…", 0x176);
        
        if askama::helpers::as_bool::h464cf54a5b8114ba(arg2.byte_offset(0x11)) != 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    print(__zoxide_pwd())\n\n\n…", 0x1a);
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(
            arg3, "\n\n\nclass ZoxideSilentExceptio…", 0x235);
        var_40 = arg3;
        askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
        result = result_1;
        
        if result != 4
        {
            *arg1.byte_offset(8) = var_30;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# Hook configuration for zoxid…", 0x25);
            result_1 = arg2[2] == 0;
            
            if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "# Initialize hook to add new ent…", 0x5b);
                let rbp_1: i8 = arg2[2];
                result_1 = rbp_1 == 1;
                
                if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) == 0
                {
                    result_1 = rbp_1 == 2;
                    
                    if askama::helpers::as_bool::h464cf54a5b8114ba(&result_1) != 0
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    @builtins.events.on_chdir …", 0x4a);
                    }
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    @builtins.events.on_post_p…", 0x50);
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n    def __zoxide_hook(**_kwarg…", 0x12e);
                goto 'label_499f9d;
            }
            
            var_40 = arg3;
            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# -- not configured --# shellche…", 0x16, &var_40);
            result = result_1;
            
            if result == 4
            {
                'label_499f9d:
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                var_40 = arg3;
                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
                result = result_1;
                
                if result != 4
                {
                    *arg1.byte_offset(8) = var_30;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# When using zoxide with --no-…", 0x525);
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
                                goto 'label_49a10a;
                            }
                            
                            *arg1.byte_offset(8) = var_30;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\nbuiltins.aliases[""] = __zox…", 0x14);
                            var_40 = arg3;
                            askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                            result = result_1;
                            
                            if result != 4
                            {
                                *arg1.byte_offset(8) = var_30;
                            }
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, ""] = __zoxide_z  # type: ignore …", 0x4e);
                                var_40 = arg3;
                                askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::h9943a0e6cd37435b(&result_1, arg2, &var_40);
                                result = result_1;
                                
                                if result != 4
                                {
                                    *arg1.byte_offset(8) = var_30;
                                }
                                else
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "i"] = __zoxide_zi  # type: ignor…", 0x3d);
                                    'label_49a10a:
                                    _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n\n\n\n\builtin unalias  &>/dev…", 2);
                                    var_40 = arg3;
                                    askama::_::_::_$LT$impl$u20$askama..FastWritable$u20$for$u20$$RF$T$GT$::write_into::hdcf8716372c7333a(&result_1, "# ==============================…", 0x51, &var_40);
                                    result = result_1;
                                    
                                    if result != 4
                                    {
                                        *arg1.byte_offset(8) = var_30;
                                    }
                                    else
                                    {
                                        _$LT$alloc..string..String$u20$as$u20$core..fmt..Write$GT$::write_str::h33a540353a43564d(arg3, "\n# To initialize zoxide, add th…", 0x97);
                                        result = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                *arg1.byte_offset(8) = var_30;
            }
        }
    }
    *arg1 = result;
    result
}
