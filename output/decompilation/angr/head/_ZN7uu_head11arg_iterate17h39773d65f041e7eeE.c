long long uu_head::arg_iterate(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x178]
    int v3;  // [bp-0x168], Other Possible Types: char
    unsigned long long v4;  // [bp-0x158]
    char v5;  // [bp-0x148], Other Possible Types: unsigned long long
    struct_0 *v6;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x138]
    int v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    void* v11;  // [bp-0xc8], Other Possible Types: unsigned long long
    struct_1 *v12;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xb8]
    char v14;  // [bp-0xb0]
    int v15;  // [bp-0x88], Other Possible Types: char
    unsigned long long v16;  // [bp-0x78]
    int v17;  // [bp-0x70], Other Possible Types: char
    unsigned long long v18;  // [bp-0x60]
    int v19;  // [bp-0x58]
    unsigned long long v20;  // [bp-0x48]
    char v21;  // [bp-0x40]
    unsigned long long v22;  // [bp-0x30]
    struct_1 *v25;  // rax
    unsigned long long v26;  // rax
    struct_0 *v27;  // rax
    struct_1 *v28;  // rax

    v2 = a1;
    v5.next(&v2);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        core::option::unwrap_failed(&g_5928c8); /* do not return */
    v4 = v7;
    memcpy(&v3, &v5, 16);
    v15.next(&v2);
    if (*((long long *)&v15) == 0x8000000000000000)
    {
        ::0x4a37a0::core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v15);
        v25 = 24.alloc_impl();
        if (!v25)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v25->field_10 = v4;
        *((void*)&v25->field_0) = v3;
        v11 = 1;
        v12 = v25;
        v13 = 1;
        v5.into_iter(&v11);
        *((double *)&a0->field_8) = v5.new();
        v26 = &g_592950;
    }
    else
    {
        v8 = v15;
        v10 = v16;
        v5.try_from(v9, v16);
        if ((v5 & 1))
        {
            a0->field_0 = 9223372036854775809;
            ::0x4a30f0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v8);
            return (unsigned long long)::0x4a30f0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v3);
        }
        uu_head::parse::parse_obsolete(&v17, v6, v7);
        if ((char)(((0 ^ *((long long *)&v17)) & (0 ^ -(*((long long *)&v17)))) >> 63))
        {
            v5.to_vec();
            v1 = v7;
            memcpy(&(char)v0, &v5, 16);
            v11 = 0;
            v12 = v6;
            v13 = v7;
            v14 = 1;
            v5.spec_to_string(&v11);
            v20 = v1;
            v19 = v0;
            memcpy(&v21, &v5, 16);
            v22 = v7;
            v5.from_iter(&v19);
            uucore::mods::locale::get_message_with_args(&(char)v0, "head-error-bad-argument-format", 30, &v5);
            a0->field_18 = v1;
            *((void*)&a0->field_8) = v0;
            a0->field_0 = 0x8000000000000000;
            ::0x4a30f0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v8);
            return (unsigned long long)::0x4a30f0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v3);
        }
        else if (*((long long *)&v17) == 9223372036854775809)
        {
            v27 = 48.alloc_impl();
            if (!v27)
                alloc::alloc::handle_alloc_error(8, 48); /* do not return */
            v7 = v10;
            memcpy(&v5, &(char)v8, 16);
            v27->field_10 = v4;
            *((void*)&v27->field_0) = v3;
            *((unsigned long long *)((char *)&v27->field_18 + 8)) = v7;
            *((int128_t *)&(&v27->field_10)[1]) = *((int128_t *)&v5);
            v5 = 2;
            v6 = v27;
            v7 = 2;
            (char)v11.into_iter(&v5);
            v5.chain(&(char)v11, v2, a2);
            *((double *)&a0->field_8) = v5.new();
            v26 = &g_5928e0;
        }
        else
        {
            v1 = v18;
            v0 = v17;
            v28 = 24.alloc_impl();
            if (!v28)
                alloc::alloc::handle_alloc_error(8, 24); /* do not return */
            v28->field_10 = v4;
            *((void*)&v28->field_0) = v3;
            v11 = 1;
            v12 = v28;
            v13 = 1;
            v5.into_iter(&v11);
            v11.chain(&v5, &v0);
            v5.chain(&v11, v2, a2);
            *((double *)&a0->field_8) = v5.new();
            *((char **)&a0->padding_9[7]) = &g_592918;
            a0->field_0 = 9223372036854775813;
            ::0x4a30f0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v8);
            return (unsigned long long)::0x4a30f0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v3);
        }
    }
    *((unsigned long long *)&a0->padding_9[7]) = v26;
    a0->field_0 = 9223372036854775813;
    return v26;
}
