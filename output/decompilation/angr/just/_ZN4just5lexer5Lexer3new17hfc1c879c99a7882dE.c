long long just::lexer::Lexer::new(struct_1 *a0, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // r13
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbx
    char v13;  // al
    struct_0 *v14;  // rax
    unsigned int v15;  // ecx

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = a3;
    v1 = a3 + a4;
    v13 = core::str::validations::next_code_point(&v0);
    v14 = 8.alloc_impl(16);
    if (!v14)
        alloc::alloc::handle_alloc_error(8, 16); /* do not return */
    if (!(v13 & 1))
        v15 = 0x110000;
    v14->field_0 = 1;
    v14->field_8 = 0;
    *((int128_t *)&a0->field_50) = *((int128_t *)&v0);
    a0->field_0 = 1;
    a0->field_8 = v14;
    a0->field_10 = 1;
    a0->field_18 = 0;
    a0->field_20 = 8;
    *((uint128_t *)&(&a0->field_20)[1]) = 0;
    *((unsigned int *)&a0->field_b0) = v15;
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = 8;
    *((uint128_t *)&a0->field_38) = 0;
    *((unsigned long *)&a0->field_60) = a1;
    *((unsigned long *)((char *)&a0->field_60 + 8)) = a2;
    *((unsigned short *)((char *)&a0->field_b0 + 4)) = 0;
    a0->field_70 = a3;
    a0->field_78 = a4;
    *((uint128_t *)&a0->field_80) = 0;
    a0->field_90 = 0;
    a0->field_a0 = 0;
    *((unsigned long long *)&a0->field_40) = 8;
    *((unsigned long long *)((char *)&a0->field_40 + 8)) = 0;
    return a2;
}
