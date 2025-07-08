
  fn uu_join::Line::new::h02ef48ed6c67e147(arg1: *mut i128, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> i64

{
    let mut var_28: i128;
    _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::field_ranges::h3c251400a43cf3bf(
        &var_28, arg3, *arg2.byte_offset(8), arg2[1], arg4);
    *arg1.byte_offset(0x28) = arg2[1];
    *arg1.byte_offset(0x18) = *arg2;
    *arg1 = var_28;
    let result: i64;
    arg1[1] = result;
    result
}
