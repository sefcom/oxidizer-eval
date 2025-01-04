long long uu_split::platform::unix::paths_refer_to_same_file::h083a83a0b2f9c23e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x150]
    unsigned long v1;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v3;  // rdx

    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(a0, a1, "-", 1))
    {
        uucore::features::fs::FileInformation::from_path::h686b487309c4fcb4(&v0, a0, a1, 1);
    }
    else
    {
        v1 = std::io::stdio::stdin::h7215cc131abb55d8();
        uucore::features::fs::FileInformation::from_file::h236d795e60a1b5ff(&v0, &v1, v3);
    }
    uucore::features::fs::FileInformation::from_path::h686b487309c4fcb4(&v1, a2, a3, 1);
    return uucore::features::fs::infos_refer_to_same_file::hac0be2843bccd14e(&v0, &v1);
}
