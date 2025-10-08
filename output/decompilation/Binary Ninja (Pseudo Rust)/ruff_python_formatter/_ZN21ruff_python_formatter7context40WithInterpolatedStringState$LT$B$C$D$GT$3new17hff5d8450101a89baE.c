
  fn ruff_python_formatter::context::WithInterpolatedStringState$LT$B$C$D$GT$::new::hff5d8450101a89ba(arg1: *mut i64, arg2: i8, arg3: i8, arg4: *mut i64) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let result: *mut c_void = _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::state_mut::h7cd8bbe615791599(arg4);
    let rcx: i16 = *result.byte_offset(0x2a);
    *result.byte_offset(0x2a) = arg2;
    *result.byte_offset(0x2b) = arg3;
    *arg1 = arg4;
    arg1[1] = rcx;
    result
}
