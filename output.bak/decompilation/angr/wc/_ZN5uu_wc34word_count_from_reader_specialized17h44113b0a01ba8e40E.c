long long uu_wc::word_count_from_reader_specialized::h44113b0a01ba8e40(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    char v1;  // [sp-0x90]
    void* v2;  // [sp-0x88]
    unsigned int v3;  // [sp-0x80]
    char v4;  // [sp-0x7c]
    unsigned long long v5[5];  // [bp-0x78]
    int v6;  // [sp-0x68]
    void* v7;  // [sp-0x58]
    void* v8;  // [sp-0x48]
    char v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x30]
    char v13;  // dl
    unsigned long long v14;  // rax
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx
    int v17;  // xmm0
    int v18;  // xmm0

    *((int128_t *)&v6) = 0;
    *((int128_t *)v5) = 0;
    v7 = 0;
    v0 = _$LT$std..io..stdio..StdinLock$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hb512afc42aa1d06a(a1, a2);
    v1 = v13 & 1;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v8 = 0;
    while (true)
    {
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(&v9, &v0);
        v14 = *((long long *)&v9);
        if (v14 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&v9);
            a0->field_20 = v7;
            v18 = *((int128_t *)&v5[0]);
            *((void*)&a0->field_10) = v6;
            *((void*)&a0->field_0) = v18;
            a0->field_28 = 0;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f();
        }
        v15 = *((long long *)&v10);
        v16 = *((long long *)&v11);
        if (!v14)
        {
            uu_wc::process_chunk::h2524f594f70d5b17(v5, v15, v16, &v8);
        }
        else if (v15)
        {
            *((unsigned long long *)v5) = v5[0] + v16;
        }
        else if (v16)
        {
            a0->field_20 = v7;
            v17 = *((int128_t *)&v5[0]);
            *((void*)&a0->field_10) = v6;
            *((void*)&a0->field_0) = v17;
            a0->field_28 = v16;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f();
        }
    }
}
