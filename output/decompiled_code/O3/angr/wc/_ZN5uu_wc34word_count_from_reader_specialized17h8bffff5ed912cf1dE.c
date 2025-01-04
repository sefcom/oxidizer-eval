long long uu_wc::word_count_from_reader_specialized::h8bffff5ed912cf1d(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    char v0;  // [sp-0x99]
    unsigned long v1;  // [sp-0x98], Other Possible Types: unsigned long long
    char v2;  // [sp-0x90]
    void* v3;  // [sp-0x88]
    unsigned int v4;  // [sp-0x80]
    char v5;  // [sp-0x7c]
    unsigned long long v6[5];  // [bp-0x78]
    int v7;  // [sp-0x68]
    void* v8;  // [sp-0x58]
    void* v9;  // [sp-0x50]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    char v14;  // dl
    unsigned long long v15;  // rax
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdx
    int v18;  // xmm0
    int v19;  // xmm0

    *((int128_t *)&v7) = 0;
    *((int128_t *)v6) = 0;
    v8 = 0;
    v1 = _$LT$std..io..stdio..StdinLock$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hb512afc42aa1d06a(a1, a2);
    v2 = v14 & 1;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v9 = 0;
    while (true)
    {
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(&v10, &v1);
        v15 = *((long long *)&v10);
        if (v15 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&v10);
            a0->field_20 = v8;
            v19 = *((int128_t *)&v6[0]);
            *((void*)&a0->field_10) = v7;
            *((void*)&a0->field_0) = v19;
            a0->field_28 = 0;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f(v1, *((int *)&v2));
        }
        v16 = *((long long *)&v11);
        v17 = *((long long *)&v12);
        if (!v15)
        {
            uu_wc::process_chunk::h254e168771af4227(v6, v16, v17, &v9, &v0);
        }
        else if (v16)
        {
            *((unsigned long long *)v6) = v6[0] + v17;
        }
        else if (v17)
        {
            a0->field_20 = v8;
            v18 = *((int128_t *)&v6[0]);
            *((void*)&a0->field_10) = v7;
            *((void*)&a0->field_0) = v18;
            a0->field_28 = v17;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f(v1, *((int *)&v2));
        }
    }
}
