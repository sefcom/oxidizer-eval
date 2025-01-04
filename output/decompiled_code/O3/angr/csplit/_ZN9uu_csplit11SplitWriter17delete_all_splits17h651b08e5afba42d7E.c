long long uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(unsigned long long a0[6])
{
    void* v0;  // [sp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    unsigned long long v3;  // r15
    void* v6;  // rbp
    void* v7;  // r12
    unsigned long long v8;  // rbp
    unsigned long long v9;  // r13
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbp

    v0 = 0;
    v3 = a0[5];
    if (!v3)
        return 0;
    v6 = 0;
    do
    {
        v8 = v6;
        v9 = ::0x5bc0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v8);
        uu_csplit::split_name::SplitName::get::h6978abebafad78db(&v1, a0[4], v8);
        v12 = std::fs::remove_file::he9a77943a534f5d9(&v1, v10, v11);
        v7 = 0;
        if (v12)
        {
            ::0x5bcb40::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6090d7ef5efdac7e(&v0);
            v0 = v12;
            v7 = v12;
        }
    } while ((v6 = v9, v9 < v3));
    return v7;
}
