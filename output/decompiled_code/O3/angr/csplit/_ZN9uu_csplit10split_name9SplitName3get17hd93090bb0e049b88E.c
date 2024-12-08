long long uu_csplit::split_name::SplitName::get::hd93090bb0e049b88(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x28]

    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbc316beb80b0f78d(&v0, a1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h6f98e80b4c2ac3d8(uucore::features::format::Format$LT$F$GT$::fmt::h230c4c11c94be1eb(a1 + 24, &v0, a2));
    alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v3, *((long long *)&v1), *((long long *)&v2));
    ::0x5bc340::_$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(a0, *((long long *)&v4), *((long long *)&v5));
    ::0x5bbfe0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hdec4ac40437c3c0c(&v0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h274f0eea847e706a(&v3);
    return a0;
}
