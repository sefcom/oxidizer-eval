
  fn bat::decorations::LineChangesDecoration::generate_cached::hecb1c1000ca73811(arg1: *mut i128, arg2: *mut i128, arg3: *mut i8, arg4: *mut c_void) -> i64

{
    let var_20: i8 = arg2[1];
    let var_30: i128 = *arg2;
    let mut var_60: i64 = -0x8000000000000000;
    let var_58: *mut i8 = arg3;
    let var_50: *mut c_void = arg4;
    let var_48: i64 = -0x7ffffffffffffffe;
    let mut var_78: i128;
    *arg1.byte_offset(0x18) = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg3, arg4.byte_offset(arg3), 
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(
            &var_78, &var_60));
    *arg1 = var_78;
    let var_68: i64;
    arg1[1] = var_68;
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_60)
}
