
  fn uu_split::handle_obsolete::he1565c7d7191f1a3(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut var_80: i64 = -0x8000000000000000;
    let mut var_82: i8 = 0;
    let mut var_81: i8 = 0;
    let mut var_68: *mut i64 = &var_80;
    let var_60: *mut i8 = &var_82;
    let var_58: *mut i8 = &var_81;
    let mut var_38: ();
    core::iter::traits::iterator::Iterator::filter_map::h713c6b1ad2f070aa(&var_38, arg2, arg3, 
        &var_68);
    let mut var_50: i128;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4cb8c89f733ed375(&var_50, &var_38);
    let var_70: i64;
    *arg1.byte_offset(0x28) = var_70;
    *arg1.byte_offset(0x18) = var_80;
    *arg1 = var_50;
    let result: i64;
    arg1[1] = result;
    result
}
