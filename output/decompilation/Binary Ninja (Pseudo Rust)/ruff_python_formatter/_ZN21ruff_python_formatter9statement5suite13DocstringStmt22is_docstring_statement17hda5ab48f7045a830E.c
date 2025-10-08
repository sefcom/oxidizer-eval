
  fn ruff_python_formatter::statement::suite::DocstringStmt::is_docstring_statement::hda5ab48f7045a830(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    if *arg1 != 0x13
    {
        return 0;
    }
    
    if 0 + -(*arg1.byte_offset(8))
    {
        return 1;
    }
    
    let mut rax_1: *mut c_void;
    let mut rdx_1: i64;
    rax_1 = ruff_python_ast::nodes::StringLiteralValue::iter::ha28899f15c0efce0(&arg1[2]);
    let mut var_18: *mut c_void = rax_1;
    let var_10_1: i64 = rdx_1;
    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::he15b6d8c4ae7a33c(&var_18, arg2) ^ 1
}
