long long fish::exec::function_prepare_environment(unsigned long long a0, struct_0 *a1, struct_1 *a2)
{
    int v0;  // [bp-0xc8]
    int v1;  // [bp-0xc8]
    void* v2;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xa8], Other Possible Types: void*
    unsigned long long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    int v8;  // [bp-0x68], Other Possible Types: char
    unsigned long long v9;  // [bp-0x58]
    unsigned long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    void* v12;  // [bp-0x38]
    void* v14;  // r13
    unsigned long long v15;  // rbp
    unsigned long v16;  // r14
    unsigned long long v17;  // rax
    unsigned long long v18[3];  // rdx
    unsigned long long v19;  // r13
    void* v20;  // r14

    v3 = 0;
    v4 = 4;
    v5 = 0;
    if (a1->field_8)
    {
        (char)v1.remove(a1, 0, &g_14d7ce8);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
        v5 = v2;
        v3 = v1;
        v14 = a1->field_8;
    }
    else
    {
        v14 = 0;
    }
    (char)v1.clone(a1->field_0[1], v14);
    v8.function_block(&v3, &(char)v1, a2->field_64);
    v7 = a0.push_block(&v8);
    v16 = a0 + 472;
    v10 = a2->field_8;
    v11 = a2->field_8 + a2->field_10 * 24;
    v12 = 0;
    while (true)
    {
        v17 = v10.next();
        if (!v18)
            break;
        if (v17 >= v14)
        {
            v16.set_empty(v18[1], v18[2], 257);
        }
        else
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v1, *((long long *)(v15 + v17 * 24 + 8)), *((long long *)(v15 + v17 * 24 + 16)));
            v9 = v2;
            v8 = v1;
            v16.set_one(v18[1], v18[2], 257, &v8);
        }
    }
    v6 = v16;
    if (a2->field_48)
    {
        v19 = a2->field_40;
        v20 = 0;
        do
        {
            (char)v1.clone(*((long long *)(32 + v19 + (char *)v20)), *((long long *)(40 + v19 + (char *)v20)));
            v6.set(*((long long *)(8 + v19 + (char *)v20)), *((long long *)(16 + v19 + (char *)v20)), 257, &(char)v1);
            v20 += 48;
        } while (a2->field_48 * 48 != v20);
    }
    v2 = a1->field_8;
    *((unsigned long long [2])&v0) = a1->field_0;
    v6.set_argv(&v0);
    return v7;
}
