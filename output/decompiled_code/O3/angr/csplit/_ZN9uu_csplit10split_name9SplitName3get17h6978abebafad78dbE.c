long long uu_csplit::split_name::SplitName::get::h6978abebafad78db(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x28]

    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h74fbf09aad9a8f46(&v0, a1);
    core::result::Result$LT$T$C$E$GT$::unwrap::hce29fca315d99298(uucore::features::format::Format$LT$F$GT$::fmt::h5a5778834d3b2be7(a1 + 24, &v0, a2));
    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v3, *((long long *)&v1), *((long long *)&v2));
    ::0x5ba340::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(a0, *((long long *)&v4), *((long long *)&v5));
    ::0x5b9fe0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h726eeb2c4de024cd(&v0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb357b3c0ea91e7c1(&v3);
    return a0;
}
