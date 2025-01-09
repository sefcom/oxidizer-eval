int uu_head::find_nth_line_from_end::h5c4d4ddf46229ebf()
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
    unsigned long long v14;  // r12
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rbx
    char *v17;  // rax
    unsigned long long v18;  // r14
    unsigned long long v19;  // r13
    unsigned long v20;  // rsi

    do
    {
        v5 = 0;
    } while (&v5 != &v4);
    if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v7, 1, 0))
        return;
    v8 = 0;
    memset(&v4, 0, 0x10000);
    v1 = ::0x4b6e00::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hd5561b86696466f7(::0x4b72a0::core::cmp::min_by::h2078b6bb6ba69746(v9), &v4);
    v0 = v1 + v9;
    v10 = 0;
    do
    {
        v14 = v11;
        v15 = v7;
        if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v15, 2, -(core::cmp::min_by::hae32659e1ae087e7(v14, v12 - v8))))
            goto LABEL_4b9e11;
        v16 = v1;
        if (std::io::Read::read_exact::h4f03c53f641b4de7(v15, v16, v14))
            goto LABEL_4b9e11;
        v2 = v16;
        v3 = v0;
        v17 = ::0x4b6e30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(&v2);
        if (v17)
        {
            do
            {
                v10 = (-0x100 | *(v17) == (char)v9) + v18;
                if (v10 == v20 + 1)
                {
                    if (std::io::Seek::rewind::hc8a3d0d593dc2463(v7))
                        goto LABEL_4b9e11;
                    else
                        goto LABEL_4b9e11;
                }
            } while ((v8 = v19 + 1, v17 = ::0x4b6e30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(&v2), v17));
        }
    } while (v8 != v9);
    std::io::Seek::rewind::hc8a3d0d593dc2463(v7);
LABEL_4b9e11:
    goto LABEL_4b9e11;
}
