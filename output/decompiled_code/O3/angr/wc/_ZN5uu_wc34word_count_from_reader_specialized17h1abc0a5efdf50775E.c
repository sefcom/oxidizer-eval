long long uu_wc::word_count_from_reader_specialized::h1abc0a5efdf50775(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0xb9]
    unsigned long long v1[5];  // [bp-0xb8]
    int v2;  // [sp-0xa8]
    void* v3;  // [sp-0x98]
    void* v4;  // [sp-0x90]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    char v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    void* v9;  // [sp-0x40]
    unsigned int v10;  // [sp-0x38]
    char v11;  // [sp-0x34]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx
    int v16;  // xmm0
    int v17;  // xmm0

    *((int128_t *)&v2) = 0;
    *((int128_t *)v1) = 0;
    v3 = 0;
    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hf9e8d18d273c6b5f(&v8, a1);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v0 = 0;
    v4 = 0;
    while (true)
    {
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h0cd3a6993e301cab(&v5, &v8);
        v13 = *((long long *)&v5);
        if (v13 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::hd4393c47d3478dce(&v5);
            a0->field_20 = v3;
            v17 = *((int128_t *)&v1[0]);
            *((void*)&a0->field_10) = v2;
            *((void*)&a0->field_0) = v17;
            a0->field_28 = 0;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hb973e82f622ef268(&v8);
        }
        v14 = *((long long *)&v6);
        v15 = *((long long *)&v7);
        if (!v13)
        {
            uu_wc::process_chunk::h6309464e98f81f05(v1, v14, v15, &v4, &v0);
        }
        else if (v14)
        {
            *((unsigned long long *)v1) = v1[0] + v15;
        }
        else if (v15)
        {
            a0->field_20 = v3;
            v16 = *((int128_t *)&v1[0]);
            *((void*)&a0->field_10) = v2;
            *((void*)&a0->field_0) = v16;
            a0->field_28 = v15;
            return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hb973e82f622ef268(&v8);
        }
    }
}
