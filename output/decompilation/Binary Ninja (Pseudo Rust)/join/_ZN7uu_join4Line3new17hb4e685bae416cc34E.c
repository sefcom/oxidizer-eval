
  fn uu_join::Line::new::hb4e685bae416cc34(arg1: *mut i128, arg2: *mut i128, arg3: i64) -> i64

{
    let mut var_28: i128;
    _$LT$uu_join..LineSep$u20$as$u20$uu_join..Separator$GT$::field_ranges::h7b622413381a5249(
        &var_28, arg3, *arg2.byte_offset(8), arg2[1]);
    *arg1.byte_offset(0x28) = arg2[1];
    *arg1.byte_offset(0x18) = *arg2;
    *arg1 = var_28;
    let result: i64;
    arg1[1] = result;
    result
}
