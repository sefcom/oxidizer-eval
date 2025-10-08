
  fn ruff_python_formatter::context::WithIndentLevel$LT$B$C$D$GT$::new::hdff497fb90141998(arg1: *mut i128, arg2: i16, arg3: *mut i128) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let result: *mut c_void = _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::state_mut::h7cd8bbe615791599(*arg3.byte_offset(8));
    let rcx: i16 = *result.byte_offset(0x28);
    *result.byte_offset(0x28) = arg2;
    *arg1 = *arg3;
    arg1[1] = rcx;
    result
}
