long long uu_hashsum::create_algorithm_from_flags::_$u7b$$u7b$closure$u7d$$u7d$::h6821a51a28c90d4b(struct_3 *a0, struct_2 *a1)
{
    unsigned long long *v1;  // rax
    int v2;  // xmm0
    unsigned long long *v3;  // rbx
    unsigned long long v4;  // r15
    struct_1 *v5;  // r14
    struct struct_0 **v6;  // rax

    if (!a0->field_0)
    {
        a0->field_20 = a1->field_20;
        v2 = a1->field_0;
        a0->field_10 = *((int128_t *)&a1->field_10);
        *((void*)&a0->field_0) = v2;
        return 0;
    }
    v1 = __rust_alloc(24, 8);
    if (!v1)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v3 = v1;
    *(v3) = 9223372036854775821;
    v4 = a1->field_10;
    v5 = a1->padding_18;
    if (v5->field_0)
        v6(v4);
    if (v5->field_8)
    {
        __rust_dealloc(v4);
        return v3;
    }
    return v3;
}
