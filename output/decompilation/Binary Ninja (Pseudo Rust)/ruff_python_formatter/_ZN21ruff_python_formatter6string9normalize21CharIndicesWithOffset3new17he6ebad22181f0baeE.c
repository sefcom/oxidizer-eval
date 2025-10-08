
  fn ruff_python_formatter::string::normalize::CharIndicesWithOffset::new::he6ebad22181f0bae(arg1: *mut *mut c_void, arg2: *mut i8, arg3: i64, arg4: i64) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: *mut c_void;
    let mut rdx: *mut c_void;
    result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(arg4, arg2, arg3);
    
    if result == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, arg4, arg3);
        /* no return */
    }
    
    *arg1 = result;
    arg1[1] = rdx.byte_offset(result);
    arg1[2] = arg4;
    result
}
