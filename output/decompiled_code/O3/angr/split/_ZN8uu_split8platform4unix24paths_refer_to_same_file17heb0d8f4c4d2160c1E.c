long long uu_split::platform::unix::paths_refer_to_same_file::heb0d8f4c4d2160c1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x150]
    unsigned long v1;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v3;  // rdx

    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h799d22e267aaebaa(a0, a1, "-", 1))
    {
        uucore::features::fs::FileInformation::from_path::h3cab84f5a867eb8f(&v0, a0, a1, 1);
    }
    else
    {
        v1 = std::io::stdio::stdin::h7215cc131abb55d8();
        uucore::features::fs::FileInformation::from_file::h668c696b4c7f45d5(&v0, &v1, v3);
    }
    uucore::features::fs::FileInformation::from_path::h3cab84f5a867eb8f(&v1, a2, a3, 1);
    return uucore::features::fs::infos_refer_to_same_file::he5efe2a509a9caee(&v0, &v1);
}
