
  fn bat::decorations::LineNumberDecoration::new::h91e05e55b8444121(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_60: ();
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_60, 
        " \s +Failed to load one or more …", 1, 4);
    let var_20: i8 = *arg2.byte_offset(0x76);
    let var_30: i128 = *arg2.byte_offset(0x66);
    let var_48: i64 = -0x7ffffffffffffffe;
    let mut var_78: i128;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(&var_78, 
        &var_60);
    let var_68: i64;
    arg1[1] = var_68;
    *arg1 = var_78;
    *arg1.byte_offset(0x38) = *arg2.byte_offset(0x76);
    *arg1.byte_offset(0x28) = *arg2.byte_offset(0x66);
    *arg1.byte_offset(0x18) = 4;
    arg1[2] = 0x2710;
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_60)
}
