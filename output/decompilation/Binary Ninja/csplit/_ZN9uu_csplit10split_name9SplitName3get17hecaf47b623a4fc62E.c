
  int64_t uu_csplit::split_name::SplitName::get::hecaf47b623a4fc62(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_50;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h071fea547baf72c1(
        &var_50, *(arg2 + 8), *(arg2 + 0x10));
    core::result::Result$LT$T$C$E$GT$::unwrap::hea7664b4dd43a581(
        uucore::features::format::Format$LT$F$C$T$GT$::fmt::h95af2ae3f28a52fd(arg2 + 0x18, &var_50, 
        arg3));
    int64_t var_48;
    uint64_t var_40;
    int64_t var_38;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_38, var_48, var_40);
    int64_t var_30;
    uint64_t var_28;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h071fea547baf72c1(
        arg1, var_30, var_28);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h1bdf49e9c9d1531d(var_38, 
        var_30);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hae916db8ab8e17f0(var_50, 
        var_48);
}
