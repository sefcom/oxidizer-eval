long long uu_csplit::SplitWriter::delete_all_splits::h68fcd42a935145a0(unsigned long long a0[6])
{
    void* v0;  // [sp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    unsigned long long v3;  // r15
    void* v5;  // r12
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
    v5 = 0;
    do
    {
        v8 = 0;
        v9 = ::0x5be0a0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v8);
        uu_csplit::split_name::SplitName::get::hd93090bb0e049b88(&v1, a0[4], v8);
        v12 = std::fs::remove_file::hfb34e691c4eb4c2f(&v1, v10, v11);
        if (v12)
        {
            ::0x5beb40::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc92d16922f59bb61(&v0);
            v0 = v12;
        }
    } while (v9 < v3);
    return v7;
}
