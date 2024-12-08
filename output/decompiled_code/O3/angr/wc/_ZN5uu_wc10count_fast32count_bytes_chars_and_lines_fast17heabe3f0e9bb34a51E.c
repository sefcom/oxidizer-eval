long long uu_wc::count_fast::count_bytes_chars_and_lines_fast::heabe3f0e9bb34a51(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x4040]
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2030]
    void* v4;  // [sp-0x1030]
    void* v6;  // r12
    void* v7;  // rbx
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    struct_0 *v10;  // rax

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    v6 = 0;
    v7 = 0;
    while (true)
    {
        if (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(a1, &v1, 0x4000))
        {
            if ((char)::0x4be7b0::std::io::error::Error::kind::hb2ff5fa058639b3d(v8) == 35)
            {
                ::0x4be950::core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::ha70bf477e8fdc7ee(v8);
            }
            else
            {
                v10 = a0;
                v10->field_0 = v7;
                v10->field_8 = v6;
                v10->field_10 = v0;
                *((int128_t *)&(&v10->field_10)[1]) = 0;
                *((unsigned long long *)((char *)&v10->field_18 + 8)) = v8;
                return v10;
            }
        }
        else
        {
            if (v8)
            {
                v7 += v8;
                v9 = ::0x4be640::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hec1ace9852cd0dd7(v8, &v1);
                v6 += _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hfb648e8502e9d79d(v9, v8 + v9);
                v0 += bytecount::count::haa5dea3f1ae6a63e(::0x4be640::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hec1ace9852cd0dd7(v8, &v1), v8, 10);
            }
            else
            {
                v10 = a0;
                v10->field_0 = v7;
                v10->field_8 = v6;
                v10->field_10 = v0;
                *((int128_t *)&(&v10->field_10)[1]) = 0;
                *((long long *)((char *)&v10->field_18 + 8)) = 0;
                return v10;
            }
        }
    }
}
