
  fn uu_join::Line::new::h4d6d45b3b26be861(arg1: *mut i128, arg2: *mut i128, arg3: i64, arg4: i64) -> i64

{
    let mut var_30: i128;
    _$LT$uu_join..WhitespaceSep$u20$as$u20$uu_join..Separator$GT$::field_ranges::ha0a819e7a031115a(
        &var_30, arg3, *arg2.byte_offset(8), arg2[1], arg4);
    let var_20: i64;
    arg1[1] = var_20;
    *arg1 = var_30;
    *arg1.byte_offset(0x18) = *arg2;
    let result: i64 = arg2[1];
    *arg1.byte_offset(0x28) = result;
    result
}
