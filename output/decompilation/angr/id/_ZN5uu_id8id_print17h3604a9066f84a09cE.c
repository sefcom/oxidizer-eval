void uu_id::id_print(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v1;  // [bp-0x1d8]
    unsigned long long v2;  // [bp-0x1d0]
    unsigned long long v3;  // [bp-0x1d0]
    unsigned long long v4;  // [bp-0x1d0]
    unsigned long long v5;  // [bp-0x1d0]
    char *v6;  // [bp-0x1c8], Other Possible Types: unsigned long long
    char v7;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x1b0]
    char *v9;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x1a0]
    void* v11;  // [bp-0x198]
    unsigned int v12;  // [bp-0x184]
    unsigned int v13;  // [bp-0x180]
    unsigned int v14;  // [bp-0x17c]
    unsigned int v15;  // [bp-0x178]
    unsigned int v16;  // [bp-0x174]
    char *v17;  // [bp-0x170]
    unsigned long long v18;  // [bp-0x168]
    char *v19;  // [bp-0x160]
    unsigned long long v20;  // [bp-0x158]
    char *v21;  // [bp-0x140]
    unsigned long long v22;  // [bp-0x138]
    char v23;  // [bp-0x130], Other Possible Types: unsigned long long
    char v24;  // [bp-0x128]
    char v25;  // [bp-0xb0], Other Possible Types: unsigned long
    char v26;  // [bp-0xa8]
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rdx

    if (!(a0->field_0 & 1))
        core::option::unwrap_failed(&g_4e8f98); /* do not return */
    v12 = a0->field_4;
    v13 = a0->field_8;
    v15 = a0->field_c;
    v14 = a0->field_10;
    v16 = a0->field_10;
    v23.locate(a0->field_4);
    if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
    {
        v28 = *((long long *)&v24);
LABEL_45ded3:
        uu_id::id_print::{{closure}}(&(char)v1, &v12, v28);
    }
    else
    {
        uucore::features::entries::uid2usr::{{closure}}(&v7, &v23);
        v28 = v8;
        if (v7 == 0x8000000000000000)
            goto LABEL_45ded3;
        v1 = v7;
        v2 = v28;
        v6 = v9;
    }
    v17 = &v12;
    v18 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v19 = &(char)v1;
    v20 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &g_4e8ec8;
    v8 = 3;
    v11 = 0;
    v9 = &v17;
    v10 = 2;
    std::io::stdio::_print(&v7);
    core::ptr::drop_in_place<alloc::string::String>(v1, v2);
    v7.locate(a0->field_8);
    if (v7 == 0x8000000000000000)
    {
        uu_id::id_print::{{closure}}(&(char)v1, &v13, v3);
        v4 = v2;
    }
    else
    {
        v1 = v7;
        v3 = 3;
        v6 = v9;
        v4 = v3;
    }
    v17 = &v13;
    v18 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v19 = &(char)v1;
    v20 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &g_4e8ef8;
    v8 = 3;
    v11 = 0;
    v9 = &v17;
    v10 = 2;
    std::io::stdio::_print(&v7);
    core::ptr::drop_in_place<alloc::string::String>(v1, v4);
    if (!a0->field_1c)
    {
        if (v15 != v12)
        {
            v25.locate(v15);
            if (v25 == 0x8000000000000000)
            {
                v29 = *((long long *)&v26);
LABEL_45e080:
                uu_id::id_print::{{closure}}(&(char)v1, &v15, v29);
            }
            else
            {
                uucore::features::entries::uid2usr::{{closure}}(&v7, &v25);
                v29 = 3;
                if (v7 == 0x8000000000000000)
                    goto LABEL_45e080;
                v1 = v7;
                v4 = 3;
                v6 = v9;
            }
            v17 = &v15;
            v18 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v19 = &(char)v1;
            v20 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = &g_4e8f28;
            v8 = 3;
            v11 = 0;
            v9 = &v17;
            v10 = 2;
            std::io::stdio::_print(&v7);
            core::ptr::drop_in_place<alloc::string::String>(v1, v4);
        }
        if (v14 != v13)
        {
            v7.locate(v14);
            if (v7 == 0x8000000000000000)
            {
                uu_id::id_print::{{closure}}(&(char)v1, &v16, v5);
                v4 = v4;
            }
            else
            {
                v1 = v7;
                v5 = 3;
                v6 = v9;
                v4 = v5;
            }
            v17 = &v16;
            v18 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v19 = &(char)v1;
            v20 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = &g_4e8f58;
            v8 = 3;
            v11 = 0;
            v9 = &v17;
            v10 = 2;
            std::io::stdio::_print(&v7);
            core::ptr::drop_in_place<alloc::string::String>(v1, v4);
        }
    }
    v17.collect(a1, a1 + a2 * 4);
    alloc::str::join_generic_copy(&v7, core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt, v19, ",: cannot find name for user ID cannot find name for group ID ");
    v6 = v9;
    memcpy(&(char)v1, &v7, 16);
    v21 = &(char)v1;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &g_4e8f88;
    v8 = 1;
    v11 = 0;
    v9 = &v21;
    v10 = 1;
    std::io::stdio::_print(&v7);
    core::ptr::drop_in_place<alloc::string::String>(v1, v4);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v17);
    return;
}
