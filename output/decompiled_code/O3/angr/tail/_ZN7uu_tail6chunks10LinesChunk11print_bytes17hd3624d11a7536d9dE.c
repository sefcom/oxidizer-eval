long long uu_tail::chunks::LinesChunk::print_bytes::hd3624d11a7536d9d(struct_0 *a0, unsigned long long a1[3], unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x38]
    char v1;  // [bp-0x28]
    unsigned long long v2;  // [sp-0x20]
    unsigned long long v4;  // r14
    unsigned long v5;  // r14
    void* v6;  // rsi
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax
    uint128_t v9[2];  // rax
    int v10;  // xmm0

    v4 = a0->field_2000;
    v5 = v4 - a2;
    if (v4 < a2)
    {
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    }
    else if (v4 > 0x2000)
    {
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
    else
    {
        v6 = &a0->padding_0[a2];
        v7 = a1[2];
        if (a1[0] - v7 > v5)
        {
            memcpy(a1[1] + v7, v6, v5);
            a1[2] = v7 + v5;
        }
        else
        {
            v8 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h6dd7fac78385c334(a1, v6, v5, a3, a4, a5);
            if (v8)
            {
                v0 = 0x8000000000000000;
                v2 = v8;
                v9 = __rust_alloc(32, 8);
                if (v9)
                {
                    v10 = *((int128_t *)&v0);
                    v9[1] = *((int128_t *)&v1);
                    *((void*)&v9[0]) = v10;
                    return v9;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
        return 0;
    }
}
