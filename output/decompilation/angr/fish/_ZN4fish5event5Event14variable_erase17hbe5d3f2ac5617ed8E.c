long long fish::event::Event::variable_erase(struct_3 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    unsigned long long v1;  // [bp-0x58]
    unsigned int v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    int v6;  // [bp-0x30], Other Possible Types: char
    char v7;  // [bp-0x20]
    struct_1 *v9;  // rax
    struct_1 *v10;  // r15
    int v11;  // xmm0

    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a1->field_0[1], a1->field_8);
    v5 = v1;
    memcpy(&v3, &v0, 16);
    v2 = 2;
    v9 = 8.alloc_impl(72, 0);
    if (!v9)
        alloc::alloc::handle_alloc_error(8, 72); /* do not return */
    v10 = v9;
    v6.from_str("VARIABLE<", 8);
    v0.from_str("ERASEPROCESS_EXITsrc/event.rs", 5);
    v10->field_10 = *((long long *)&v7);
    *((void*)&v10->field_0) = v6;
    *((unsigned long long *)((char *)&v10->field_18 + 8)) = v1;
    *((void*)&(&v10->field_10)[1]) = v0;
    *((unsigned long long *)&v10->field_30) = a1->field_8;
    *((unsigned long long [2])&v10->field_28) = a1->field_0;
    v11 = *((int128_t *)&v2);
    *((int128_t *)((char *)&a0->field_18 + 8)) = *((int128_t *)&v4);
    *((void*)&(&a0->field_10)[1]) = v11;
    a0->field_0 = 3;
    a0->field_8 = v10;
    a0->field_10 = 3;
    return a0;
}
