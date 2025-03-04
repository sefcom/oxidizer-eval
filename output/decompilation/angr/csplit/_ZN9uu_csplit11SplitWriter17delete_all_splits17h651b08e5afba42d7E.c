long long uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(unsigned long long a0[6])
{
    void* v0;  // [sp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    unsigned long long v3;  // r15
    void* v5;  // r12
    void* v6;  // rbp
    unsigned long long v7;  // r13
    unsigned long long v8;  // rbp

    v0 = 0;
    v3 = a0[5];
    if (!v3)
        return 0;
    v5 = 0;
    v6 = 0;
    do
    {
        v7 = ::0x5bc0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v6);
        uu_csplit::split_name::SplitName::get::h6978abebafad78db(&v1, a0[4], v6);
        v8 = std::fs::remove_file::he9a77943a534f5d9(&v1);
        if (v8)
        {
            ::0x5bcb40::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6090d7ef5efdac7e(&v0);
            v0 = v8;
            v5 = v8;
        }
    } while ((v6 = v7, v7 < v3));
    return v5;
}
