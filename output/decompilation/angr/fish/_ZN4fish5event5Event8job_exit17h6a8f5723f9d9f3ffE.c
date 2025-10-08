long long fish::event::Event::job_exit(struct_2 *a0, unsigned int a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x7c]
    int v1;  // [bp-0x78], Other Possible Types: char
    unsigned long v2;  // [bp-0x68]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x5c]
    unsigned long long v5;  // [bp-0x58]
    int v6;  // [bp-0x50]
    int v7;  // [bp-0x40], Other Possible Types: char
    unsigned long v8;  // [bp-0x30]
    int v9;  // [bp-0x28], Other Possible Types: char
    char v10;  // [bp-0x18]
    struct_0 *v12;  // rax
    struct_0 *v13;  // rbx
    int v14;  // xmm0

    v0 = a1;
    v4 = a1;
    v5 = a2;
    v3 = 4;
    v12 = 8.alloc_impl(72, 0);
    if (!v12)
        alloc::alloc::handle_alloc_error(8, 72); /* do not return */
    v13 = v12;
    v7.from_str("JOB_EXITCommand\n", 8);
    v1.spec_to_string(&v0);
    v9.from(&v1);
    v1.from_str("0", 1);
    v13->field_10 = v8;
    *((void*)&v13->field_0) = v7;
    *((long long *)((char *)&v13->field_18 + 8)) = *((long long *)&v10);
    *((void*)&(&v13->field_10)[1]) = v9;
    *((unsigned long *)&v13->field_30) = v2;
    *((void*)&v13->field_28) = v1;
    v14 = *((int128_t *)&v3);
    *((void*)((char *)&a0->field_18 + 8)) = v6;
    *((void*)&(&a0->field_10)[1]) = v14;
    a0->field_0 = 3;
    a0->field_8 = v13;
    a0->field_10 = 3;
    return a0;
}
