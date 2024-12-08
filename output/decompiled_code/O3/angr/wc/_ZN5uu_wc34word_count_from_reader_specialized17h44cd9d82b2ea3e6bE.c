long long uu_wc::word_count_from_reader_specialized::h44cd9d82b2ea3e6b(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0xa9]
    unsigned long long v1[5];  // [bp-0xa8]
    int v2;  // [sp-0x98]
    void* v3;  // [sp-0x88]
    char v4;  // [bp-0x80]
    char v5;  // [bp-0x78]
    char v6;  // [bp-0x70]
    char v7;  // [bp-0x68]
    void* v8;  // [sp-0x38]
    unsigned int v9;  // [sp-0x30]
    char v10;  // [sp-0x2c]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rdx
    int v15;  // xmm0
    int v16;  // xmm0

    *((int128_t *)&v2) = 0;
    *((int128_t *)v1) = 0;
    v3 = 0;
    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hf9e8d18d273c6b5f(&v7, a1);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v0 = 0;
    while (true)
    {
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h0cd3a6993e301cab(&v4, &v7);
        v12 = *((long long *)&v4);
        if (v12 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::hd4393c47d3478dce(&v4);
            a0->field_20 = v3;
            v16 = *((int128_t *)&v1[0]);
            *((void*)&a0->field_10) = v2;
            *((void*)&a0->field_0) = v16;
            a0->field_28 = 0;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hb973e82f622ef268(&v7);
        }
        v13 = *((long long *)&v5);
        v14 = *((long long *)&v6);
        if (!v12)
        {
            uu_wc::process_chunk::h4f8c5ce8a84c0a9d(v1, v13, v14, &v0);
        }
        else if (v13)
        {
            *((unsigned long long *)v1) = v1[0] + v14;
        }
        else if (v14)
        {
            a0->field_20 = v3;
            v15 = *((int128_t *)&v1[0]);
            *((void*)&a0->field_10) = v2;
            *((void*)&a0->field_0) = v15;
            a0->field_28 = v14;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hb973e82f622ef268(&v7);
        }
    }
}
