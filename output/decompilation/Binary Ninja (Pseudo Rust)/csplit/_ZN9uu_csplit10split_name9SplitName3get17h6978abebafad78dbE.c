
  fn uu_csplit::split_name::SplitName::get::h6978abebafad78db(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> *mut i64

{
    let mut var_50: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h74fbf09aad9a8f46(
        &var_50, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::hce29fca315d99298(
        uucore::features::format::Format$LT$F$GT$::fmt::h5a5778834d3b2be7(arg2.byte_offset(0x18), 
        &var_50, arg3));
    let var_48: i64;
    let var_40: size_t;
    let mut var_38: ();
    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_38, var_48, var_40);
    let var_30: i64;
    let var_28: u64;
    _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(arg1, var_30, var_28);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h726eeb2c4de024cd(&var_50);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb357b3c0ea91e7c1(&var_38);
    arg1
}
