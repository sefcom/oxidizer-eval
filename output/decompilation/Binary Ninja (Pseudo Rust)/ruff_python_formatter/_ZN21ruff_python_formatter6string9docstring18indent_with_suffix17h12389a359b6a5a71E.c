
  fn ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = _$LT$str$u20$as$u20$ruff_python_trivia..whitespace..PythonWhitespace$GT$::trim_whitespace_start::h664fc8ac076cf662(arg2, arg3);
    let rbp_1: i64 = arg3 - rdx;
    
    if arg3 < rdx
    {
        core::option::expect_failed::h3f620cfb8545dc61("suffix <= lineassertion failed: …");
        /* no return */
    }
    
    let mut result: i64;
    let mut rdx_2: i64;
    result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rbp_1, arg2, arg3);
    
    if result == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, rbp_1);
        /* no return */
    }
    
    *arg1 = result;
    arg1[1] = rdx_2;
    arg1[2] = rax_1;
    arg1[3] = rdx;
    result
}
