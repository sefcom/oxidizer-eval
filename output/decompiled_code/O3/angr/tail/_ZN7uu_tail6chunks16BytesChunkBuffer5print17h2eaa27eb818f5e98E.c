long long uu_tail::chunks::BytesChunkBuffer::print::h2eaa27eb818f5e98(struct_2 *a0, unsigned long long a1[3], unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    struct_1 *v0;  // [sp-0x60]
    struct_1 *v1;  // [sp-0x58]
    unsigned long long v2;  // [sp-0x50]
    char v3;  // [bp-0x40]
    unsigned long long v4;  // [sp-0x38]
    unsigned long long v6;  // rdx
    void* v7;  // rcx
    unsigned long long v8;  // rax
    void* v9;  // rax
    void* v10;  // rsi
    unsigned long long v11;  // rcx
    unsigned long long v13;  // rsi
    struct_1 *v14;  // r12
    struct_1 *v15;  // rdx
    struct_1 *v16;  // rcx
    struct_1 *v17;  // r13
    struct_1 *v18;  // r12
    struct_1 *v19;  // rcx
    struct_1 *v21;  // rcx
    struct_1 *v22;  // rdx
    struct_0 *v25;  // rsi
    unsigned long v26;  // r15
    unsigned long long v27;  // rbx
    void* v28;  // rax
    int v29;  // xmm0
    unsigned long long v30;  // rsi
    struct_1 *v31;  // rdx

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
    v16 = (char *)v14 + 0x8 * v7;
    v17 = (char *)v14 + 0x8 * v10;
    v0 = 0;
    do
    {
        v18 = v14;
        v19 = v16;
        if (v15 != v19)
        {
            v1 = v17;
            v1 = v1;
        }
        else if (!(v18 != v1) || !((v1 = v19, v1 = v1, v21 = v1, v18)))
        {
            _ZN4core3ptr94drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$17h7b8260e4b2d327a9E.llvm.11775337101010531792(a1, v30, v31, v19, a4, a5);
            return v0;
        }
        v17 = v1;
        v25 = v22->field_0;
        v26 = v22->field_0->field_2000;
        if (v26 >= 8193)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v27 = a1[2];
        if (a1[0] - v27 > v26)
        {
            memcpy(a1[1] + v27, v25, v26);
            a1[2] = v27 + v26;
            v28 = 0;
        }
        else
        {
            v28 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h6dd7fac78385c334(a1, v25, v26, v19, a4, a5);
        }
        v15 = &v22->padding_8;
    } while (!v4);
    v2 = 0x8000000000000000;
    v4 = v28;
    v19 = __rust_alloc(32, 8);
    if (!v19)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v29 = *((int128_t *)&v2);
    v19->field_10 = *((int128_t *)&v3);
    v0 = v19;
    *((void*)&v19->field_0) = v29;
    _ZN4core3ptr94drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$17h7b8260e4b2d327a9E.llvm.11775337101010531792(a1, v30, v31, v19, a4, a5);
    return v0;
}
