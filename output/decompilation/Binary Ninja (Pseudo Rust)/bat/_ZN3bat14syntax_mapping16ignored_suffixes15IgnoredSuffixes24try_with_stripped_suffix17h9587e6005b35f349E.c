
  fn bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::h9587e6005b35f349(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i8, arg4: i64, arg5: *mut c_void) -> *mut i64

{
    let mut var_30: i32;
    let mut result: *mut i64 =
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, arg3, arg4);
    
    if var_30 != 1
    {
        let var_28: i64;
        let var_20: i64;
        let mut rdx_2: i64;
        result =
            bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix::h54db9f7a9094d832(
            arg2, var_28, var_20);
        
        if result != 0
        {
            /* tailcall */
            return bat::syntax_mapping::SyntaxMapping::get_syntax_for::_$u7b$$u7b$closure$u7d$$u7d$::h5422123a2beb415c(arg1, arg5, result);
        }
    }
    
    *arg1.byte_offset(8) = 3;
    *arg1 = 0xd;
    result
}
