
  fn ruff_python_formatter::string::docstring::CodeExampleMarkdown::push::hb519fb4818d6dac7(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let rbx: *mut i128 = arg2;
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    rax = ruff_python_formatter::string::docstring::Indentation::trim_start_str::hc370b9ca7c92b427(
        &arg1[3], *arg2, *rbx.byte_offset(8));
    let var_28: i64 = rbx[2];
    let var_38: i128 = rbx[1];
    let mut var_48: i128 = *rbx;
    let var_20: *mut i8 = rax;
    let var_18: i64 = rdx_1;
    alloc::vec::Vec$LT$T$C$A$GT$::push::hdd3e9f5ed333529e(arg1, &var_48)
}
