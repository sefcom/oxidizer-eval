
  fn uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    if arg4 != 0
    {
        if arg4 >= arg3
        {
            if arg4 != arg3
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg4);
                /* no return */
            }
        }
        else if *arg2.byte_offset(arg4) <= 0xbf
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg4);
            /* no return */
        }
    }
    
    let mut var_28: i8;
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u64$GT$::from_str::h29411471c0770b67(&var_28, arg2, arg4);
    let mut result: i64;
    
    if var_28 == 0
    {
        let var_20: i64;
        arg1[1] = var_20;
        result = 0xe;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&arg1[1], 
            arg2, arg3);
        result = 7;
    }
    
    *arg1 = result;
    result
}
