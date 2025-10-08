
  fn ruff_python_formatter::string::_$LT$impl$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$u20$for$u20$ruff_python_ast..str_prefix..AnyStringPrefix$GT$::fmt::hdba1f41182d334b4(arg1: *mut i32, arg2: *mut i8, arg3: *mut i64) -> *mut i32

{
    let r14: *mut i64 = arg3;
    let rax: i8 = *arg2;
    let rcx: i8 = arg2[1];
    arg3 = rax != 3;
    arg2 = rcx < 2;
    arg2 |= arg3;
    
    if arg2 == 1
    {
        let mut rax_1: *mut c_void;
        let mut rdx: i64;
        rax_1 = ruff_python_ast::str_prefix::AnyStringPrefix::as_str::hfc265adb6e4a05ea(rax, rcx);
        let var_20_1: *mut c_void = rax_1;
        let var_18_1: i64 = rdx;
        let mut var_28: i8 = 4;
        (*(r14[1] + 0x18))(*r14, &var_28);
    }
    
    *arg1 = 4;
    arg1
}
