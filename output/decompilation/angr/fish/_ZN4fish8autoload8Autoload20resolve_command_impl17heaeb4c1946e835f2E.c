long long fish::autoload::Autoload::resolve_command_impl(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [bp-0x170]
    int v1;  // [bp-0x168], Other Possible Types: char
    int v2;  // [bp-0x158]
    int v3;  // [bp-0x148]
    char v4;  // [bp-0x138]
    char v5;  // [bp-0x128]
    int v6;  // [bp-0x118], Other Possible Types: char
    char v7;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    int v8;  // [bp-0xf8]
    char v9;  // [bp-0xe8]
    char v10;  // [bp-0xd8]
    int v11;  // [bp-0x88], Other Possible Types: char
    int v12;  // [bp-0x78], Other Possible Types: unsigned long long
    int v13;  // [bp-0x68]
    unsigned long v14;  // [bp-0x58]
    int v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x38]
    unsigned long v18;  // r15
    unsigned long long v19;  // rax
    unsigned long long v20[3];  // rbp
    unsigned long long v21;  // rbx
    struct_3 *v22;  // rbp
    unsigned long v23;  // r14
    unsigned long long v24;  // rax
    unsigned long v25;  // rcx

    v18 = &a1->padding_10[48];
    v19 = v18.get_inner(a2, a3);
    if (v19)
    {
        a0->field_0 = 3;
        return v19;
    }
    v0 = v18;
    v20 = a1->field_70;
    if (!(char)a4.equal(a5, v20[1], v20[2]))
    {
        v1.to_vec(a4, a5);
        v6.with_dirs(&v1);
        v20 = v6.new();
        core::ptr::drop_in_place<alloc::boxed::Box<fish::autoload::AutoloadFileCache>>(a1->field_70);
        a1->field_70 = v20;
    }
    v6.check(v20, a1->field_0, a1->field_8, a2, a3, 0);
    if ((long long)v6 == 9223372036854775809)
    {
        core::ptr::drop_in_place<core::option::Option<fish::autoload::AutoloadableFileInfo>>(&v6);
        a0->field_0 = 4;
        return a0;
    }
    memcpy(&v5, &v10, 16);
    memcpy(&v4, &v9, 16);
    v3 = v8;
    *((int128_t *)&v2) = *((int128_t *)&v7);
    v1 = v6;
    v21 = (long long)v1;
    v22 = (v21 != 0x8000000000000000 ? &(char)v2 : &g_9f9ad0);
    v23 = &a1->padding_10;
    v24 = v23.get_inner(a2, a3);
    if (v24 && v24 + 24.eq(v22))
    {
        a0->field_0 = 2;
        return (unsigned long long)core::ptr::drop_in_place<fish::autoload::AutoloadableFileInfo>(&v1);
    }
    v6.to_vec(a2, a3);
    v12 = v7;
    memcpy(&v11, &v6, 16);
    v0.insert(&v11);
    v6.to_vec(a2, a3);
    v16 = v7;
    v15 = v6;
    v14 = v22->field_30;
    *((uint128_t *)&v13) = v22->field_20;
    *((uint128_t *)&v12) = v22->field_10;
    *((uint128_t *)&v11) = v22->field_0;
    v6.insert(v23, &v15, &v11);
    v25 = v21 == 0x8000000000000000;
    v7 = *((long long *)&(&(char)v2)[8 * v25]);
    *((int128_t *)&v6) = *((int128_t *)((char *)&v1 + 8 * v25));
    a0->field_0 = v21 != 0x8000000000000000;
    *((void*)&(&a0->field_0)[1]) = v6;
    *((unsigned long *)((char *)&a0->field_8 + 8)) = v7;
    return v7;
}
