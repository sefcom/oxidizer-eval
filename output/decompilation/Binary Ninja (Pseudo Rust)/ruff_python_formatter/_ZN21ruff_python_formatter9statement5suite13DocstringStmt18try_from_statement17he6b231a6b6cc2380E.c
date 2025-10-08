
  fn ruff_python_formatter::statement::suite::DocstringStmt::try_from_statement::he6b231a6b6cc2380(arg1: *mut i64, arg2: i8, arg3: *mut c_void) -> *mut i64

{
    let rcx_1: *mut c_void = arg3;
    arg3 = 5;
    
    if (arg2 == 2 && *rcx_1.byte_offset(0x33) == 2) || *arg1 != -0x7fffffffffffffed
    {
        return arg1;
    }
    
    let var_18: *mut i64 = arg1;
    ruff_python_formatter::statement::suite::DocstringStmt::is_docstring_statement::hda5ab48f7045a830(arg1[1], rcx_1);
    arg1
}
