int uu_head::find_nth_line_from_end::h8a549a046930a13b()
{
    unsigned long long v0;  // [sp-0x10058]
    unsigned long long v1;  // [sp-0x10048]
    unsigned long v2;  // [sp-0x10040], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10038]
    char v4;  // [bp-0x10030]
    void* v5;  // [sp-0x2030]
    unsigned long long v7;  // rdi
    void* v8;  // r13
    unsigned long long v9;  // rdx
    void* v10;  // r14
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rdx
    char *v13;  // rax
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long v16;  // rsi

    do
    {
        v5 = 0;
    } while (&v5 != &v4);
    if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v7, 1))
        return;
    v8 = 0;
    memset(&v4, 0, 0x10000);
    v1 = ::0x4b6f90::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h6bf9e1521280ffa4(::0x4b7450::core::cmp::min_by::hc90fe98968987b50(v9), &v4);
    v0 = v1 + v9;
    v10 = 0;
    do
    {
        core::cmp::min_by::h8592bc942a9ec0cf(v11, v12 - v10);
        if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v7, 2))
            goto LABEL_4b9fa1;
        if (std::io::Read::read_exact::h2ec4eccb9c68dd40())
            goto LABEL_4b9fa1;
        v2 = v1;
        v3 = v0;
        v13 = ::0x4b6fc0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h8547c29cd2e3da89(&v2);
        if (v13)
        {
            do
            {
                v8 = (-0x100 | *(v13) == (char)v9) + v15;
                if (v8 == v16 + 1)
                {
                    if (std::io::Seek::rewind::h9291d882e4ec955b(v7))
                        goto LABEL_4b9fa1;
                    else
                        goto LABEL_4b9fa1;
                }
            } while ((v10 = v14 + 1, v13 = ::0x4b6fc0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h8547c29cd2e3da89(&v2), v13));
        }
    } while (v10 != v9);
    std::io::Seek::rewind::h9291d882e4ec955b(v7);
LABEL_4b9fa1:
}
