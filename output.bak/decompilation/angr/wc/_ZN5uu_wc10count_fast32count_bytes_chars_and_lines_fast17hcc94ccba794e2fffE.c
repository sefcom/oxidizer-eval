long long uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcc94ccba794e2fff(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x4038], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2030]
    void* v4;  // [sp-0x1030]
    unsigned long v6;  // rax
    void* v7;  // r13
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

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
            if ((char)::0x4be3e0::std::io::error::Error::kind::hb2ff5fa058639b3d(v8) == 35)
            {
                ::0x4be580::core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21();
            }
            else
            {
                a0->field_0 = 0;
                a0->field_8 = v0;
                a0->field_10 = v7;
                *((int128_t *)&(&a0->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
                return a0;
            }
        }
        else
        {
            if (v8)
            {
                v9 = ::0x4be270::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(v8, &v1, &g_531300);
                v0 += _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h98e65a9848a5588f(v9, v8 + v9);
                v7 += bytecount::count::h11a8399421fb62fe(::0x4be270::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(v8, &v1, &g_5312e8), v8, 10);
            }
            else
            {
                a0->field_0 = 0;
                a0->field_8 = v0;
                a0->field_10 = v7;
                *((int128_t *)&(&a0->field_10)[1]) = 0;
                *((long long *)((char *)&a0->field_18 + 8)) = 0;
                return a0;
            }
        }
    }
}
