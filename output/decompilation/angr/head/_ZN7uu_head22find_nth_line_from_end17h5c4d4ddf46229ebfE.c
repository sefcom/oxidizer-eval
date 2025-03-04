int uu_head::find_nth_line_from_end::h5c4d4ddf46229ebf()
{
    unsigned long long v0;  // [sp-0x10058]
    unsigned long long v1;  // [sp-0x10050]
    unsigned long long v2;  // [sp-0x10048]
    unsigned long v3;  // [sp-0x10040]
    unsigned long long v4;  // [sp-0x10038]
    char v5;  // [bp-0x10030]
    void* v6;  // [sp-0x2030]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r12
    void* v12;  // r14, Other Possible Types: unsigned long long
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx
    char *v15;  // rax
    void* v16;  // r13, Other Possible Types: unsigned long long
    unsigned long v17;  // rsi

    do
    {
        v6 = 0;
    } while (&v6 != &v5);
    v9 = v8;
    if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v10, 1, 0))
        return;
    v16 = 0;
    memset(&v5, 0, 0x10000);
    v11 = v8;
    v2 = ::0x4b6e00::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hd5561b86696466f7(::0x4b72a0::core::cmp::min_by::h2078b6bb6ba69746(v8), &v5);
    v0 = v2 + v8;
    v12 = 0;
    v1 = v8;
    do
    {
        v13 = v10;
        if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v13, 2, -(core::cmp::min_by::hae32659e1ae087e7(v11, v9 - v16))))
            goto LABEL_4b9e11;
        v14 = v2;
        if (std::io::Read::read_exact::h4f03c53f641b4de7(v13, v14, v11))
            goto LABEL_4b9e11;
        v3 = v14;
        v4 = v0;
        v15 = ::0x4b6e30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(&v3);
        v9 = v1;
        if (v15)
        {
            do
            {
                v12 += *(v15) == (char)v8;
                if (v12 == v17 + 1)
                {
                    if (!std::io::Seek::rewind::hc8a3d0d593dc2463(v10))
                        goto LABEL_4b9e11;
                    else
                        goto LABEL_4b9e11;
                }
            } while ((v16 += 1, v15 = ::0x4b6e30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(&v3), v15));
        }
        v11 = v8;
    } while (v16 != v9);
    std::io::Seek::rewind::hc8a3d0d593dc2463(v10);
LABEL_4b9e11:
    goto LABEL_4b9e11;
}
