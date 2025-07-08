
  fn uu_join::Line::new::hf82a54a2b0e9a927(arg1: *mut i128, arg2: *mut i128, arg3: *mut c_void, arg4: i64) -> i64

{
    let mut var_28: i128;
    _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::field_ranges::h5eca3175ca486e69(
        &var_28, arg3, *arg2.byte_offset(8), arg2[1], arg4);
    *arg1.byte_offset(0x28) = arg2[1];
    *arg1.byte_offset(0x18) = *arg2;
    *arg1 = var_28;
    let result: i64;
    arg1[1] = result;
    result
}
