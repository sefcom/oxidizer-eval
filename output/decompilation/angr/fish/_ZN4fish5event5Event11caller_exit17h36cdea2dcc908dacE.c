long long fish::event::Event::caller_exit(struct_2 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x7c]
    int v1;  // [bp-0x78], Other Possible Types: char
    unsigned long v2;  // [bp-0x68]
    int v3;  // [bp-0x60], Other Possible Types: char
    unsigned long v4;  // [bp-0x50]
    unsigned int v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    int v7;  // [bp-0x38]
    int v8;  // [bp-0x28], Other Possible Types: char
    char v9;  // [bp-0x18]
    struct_0 *v11;  // rax
    struct_0 *v12;  // rbx
    int v13;  // xmm0

    v0 = a2;
    v6 = a1;
    v5 = 5;
    v11 = 8.alloc_impl(72, 0);
    if (!v11)
        alloc::alloc::handle_alloc_error(8, 72); /* do not return */
    v12 = v11;
    v1.from_str("JOB_EXITCommand\n", 8);
    v3.to_wstring(&v0);
    v8.from_str("0", 1);
    v12->field_10 = v2;
    *((void*)&v12->field_0) = v1;
    *((unsigned long *)((char *)&v12->field_18 + 8)) = v4;
    *((void*)&(&v12->field_10)[1]) = v3;
    *((long long *)&v12->field_30) = *((long long *)&v9);
    *((void*)&v12->field_28) = v8;
    v13 = *((int128_t *)&v5);
    *((void*)((char *)&a0->field_18 + 8)) = v7;
    *((void*)&(&a0->field_10)[1]) = v13;
    a0->field_0 = 3;
    a0->field_8 = v12;
    a0->field_10 = 3;
    return a0;
}
