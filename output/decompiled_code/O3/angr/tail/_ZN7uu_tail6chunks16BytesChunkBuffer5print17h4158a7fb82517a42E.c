long long uu_tail::chunks::BytesChunkBuffer::print::h4158a7fb82517a42(struct_1 *a0, unsigned long long a1[3], unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    uint128_t v0[2];  // [sp-0x60]
    struct struct_0 **v1;  // [sp-0x58]
    unsigned long long v2;  // [sp-0x50]
    char v3;  // [bp-0x40]
    unsigned long long v4;  // [sp-0x38]
    unsigned long long v6;  // rcx
    void* v7;  // rdx
    unsigned long long v8;  // rax
    void* v9;  // rax
    void* v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned long long v13;  // rsi
    struct struct_0 **v14;  // r12
    struct struct_0 **v15;  // rcx
    struct struct_0 **v16;  // rdx
    struct struct_0 **v17;  // r12
    struct struct_0 **v19;  // rcx
    struct struct_0 **v20;  // r12
    struct_0 *v22;  // rsi
    unsigned long v23;  // r15
    unsigned long long v24;  // rbp
    void* v25;  // rax
    uint128_t v26[2];  // rax
    int v27;  // xmm0

    v6 = a0->field_18;
    if (!v6)
    {
        v9 = 0;
        v7 = 0;
        v10 = 0;
    }
    else
    {
        v7 = a0->field_0;
        v8 = a0->field_10;
        v9 = v8 - v11;
        a4 = v7 - v9;
        v13 = v6;
        v10 = v13 - a4;
        if (v13 <= a4)
        {
            v7 = v6 + v9;
            v10 = 0;
        }
    }
    v14 = a0->field_8;
    v15 = (char *)v14 + 0x8 * v9;
    v1 = (char *)v14 + 0x8 * v7;
    v16 = (char *)v14 + 0x8 * v10;
    *((long long *)&v0[0]) = 0;
    do
    {
        v17 = v14;
        if (v15 == v1 && (!(v17 != v16) || !((v1 = v16, v17))))
            return v0;
        v20 = v19;
        v22 = *(v20);
        v23 = *(v20)->field_2000;
        if (v23 >= 8193)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v24 = a1[2];
        if (a1[0] - v24 <= v23)
        {
            v25 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h6dd7fac78385c334(a1, v22, v23, v15, a4, a5);
        }
        else
        {
            memcpy(a1[1] + v24, v22, v23);
            a1[2] = v24 + v23;
            v25 = 0;
        }
        v15 = v20 + 1;
    } while (!v4);
    v2 = 0x8000000000000000;
    v4 = v25;
    v26 = __rust_alloc(32, 8);
    if (!v26)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v27 = *((int128_t *)&v2);
    v26[1] = *((int128_t *)&v3);
    *((uint128_t *[2])&v0[0]) = v26;
    *((void*)&v26[0]) = v27;
    return v0;
}
