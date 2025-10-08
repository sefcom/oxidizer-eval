
  fn uu_csplit::split_name::SplitName::get::hecaf47b623a4fc62(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_50: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h071fea547baf72c1(
        &var_50, *arg2.byte_offset(8), *arg2.byte_offset(0x10));
    core::result::Result$LT$T$C$E$GT$::unwrap::hea7664b4dd43a581(
        uucore::features::format::Format$LT$F$C$T$GT$::fmt::h95af2ae3f28a52fd(
        arg2.byte_offset(0x18), &var_50, arg3));
    let var_48: i64;
    let var_40: u64;
    let mut var_38: i64;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_38, var_48, var_40);
    let var_30: i64;
    let var_28: u64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h071fea547baf72c1(
        arg1, var_30, var_28);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h1bdf49e9c9d1531d(var_38, 
        var_30);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hae916db8ab8e17f0(var_50, var_48)
}
