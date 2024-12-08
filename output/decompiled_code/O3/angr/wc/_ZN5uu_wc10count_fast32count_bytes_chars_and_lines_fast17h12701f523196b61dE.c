long long uu_wc::count_fast::count_bytes_chars_and_lines_fast::h12701f523196b61d(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x4038], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2030]
    void* v4;  // [sp-0x1030]
    unsigned long v6;  // rax
    void* v7;  // rbp
    unsigned long long v8;  // rdx

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v6;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    v7 = 0;
    while (true)
    {
        if (_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(a1, &v1, 0x4000))
        {
            if ((char)::0x4be7b0::std::io::error::Error::kind::hb2ff5fa058639b3d(v8) == 35)
            {
                ::0x4be950::core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::ha70bf477e8fdc7ee(v8);
            }
            else
            {
                a0->field_0 = v7;
                a0->field_8 = 0;
                a0->field_10 = v0;
                *((int128_t *)&(&a0->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
                return a0;
            }
        }
        else
        {
            if (v8)
            {
                v7 += v8;
                v0 += bytecount::count::haa5dea3f1ae6a63e(::0x4be640::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hec1ace9852cd0dd7(v8, &v1), v8, 10);
            }
            else
            {
                a0->field_0 = v7;
                a0->field_8 = 0;
                a0->field_10 = v0;
                *((int128_t *)&(&a0->field_10)[1]) = 0;
                *((long long *)((char *)&a0->field_18 + 8)) = 0;
                return a0;
            }
        }
    }
}
