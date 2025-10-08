long long fish::event::Event::process_exit(struct_2 *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x9c]
    int v1;  // [bp-0x98], Other Possible Types: char
    unsigned long v2;  // [bp-0x88]
    int v3;  // [bp-0x80], Other Possible Types: char
    unsigned long v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x50]
    unsigned int v7;  // [bp-0x4c]
    int v8;  // [bp-0x40]
    int v9;  // [bp-0x30], Other Possible Types: char
    char v10;  // [bp-0x20]
    struct_0 *v12;  // rax
    struct_0 *v13;  // rbx
    int v14;  // xmm0

    v0 = a1;
    v7 = a1;
    v6 = 3;
    v12 = 8.alloc_impl(72, 0);
    if (!v12)
        alloc::alloc::handle_alloc_error(8, 72); /* do not return */
    v13 = v12;
    v1.from_str("PROCESS_EXITsrc/event.rs", 12);
    v5.spec_to_string(&v0);
    v3.from(&v5);
    v5.spec_to_string(a2);
    v9.from(&v5);
    v13->field_10 = v2;
    *((void*)&v13->field_0) = v1;
    *((unsigned long *)((char *)&v13->field_18 + 8)) = v4;
    *((void*)&(&v13->field_10)[1]) = v3;
    *((long long *)&v13->field_30) = *((long long *)&v10);
    *((void*)&v13->field_28) = v9;
    v14 = *((int128_t *)&v6);
    *((void*)((char *)&a0->field_18 + 8)) = v8;
    *((void*)&(&a0->field_10)[1]) = v14;
    a0->field_0 = 3;
    a0->field_8 = v13;
    a0->field_10 = 3;
    return a0;
}
