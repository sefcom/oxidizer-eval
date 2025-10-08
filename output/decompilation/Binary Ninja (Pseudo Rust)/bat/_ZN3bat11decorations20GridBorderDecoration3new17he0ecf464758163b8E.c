
  fn bat::decorations::GridBorderDecoration::new::he0ecf464758163b8(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let var_10: i8 = arg2[1];
    let var_20: i128 = *arg2;
    let mut var_50: i64 = -0x8000000000000000;
    let var_48: *mut c_void = &data_5a2896;
    let var_40: i64 = 3;
    let var_38: i64 = -0x7ffffffffffffffe;
    let mut var_68: i128;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(&var_68, 
        &var_50);
    let var_58: i64;
    arg1[1] = var_58;
    *arg1 = var_68;
    *arg1.byte_offset(0x18) = 1;
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_50)
}
