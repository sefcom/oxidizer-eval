long long uu_stat::precision_trunc(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    char v0;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xc8]
    char *v2;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xb8]
    void* v4;  // [bp-0xb0]
    char v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    int v8;  // [bp-0x88], Other Possible Types: char
    unsigned long long v9;  // [bp-0x78]
    char *v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    char *v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    int v14;  // [bp-0x48], Other Possible Types: char
    char v15;  // [bp-0x38]
    unsigned long long v17;  // r15
    unsigned long long v18;  // r14
    unsigned long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    int v26;  // xmm0

    v5.spec_to_string(&vvar_87{reg 224});
    v17 = v6;
    v18 = v7;
    if (((char)core::str::<impl str>::find(v17, v18) & 1))
    {
        if (!a1)
        {
            v25 = v21.get(v17, v18);
            if (!v25)
                core::str::slice_error_fail(v17, v18, 0, v21, &g_519ca0); /* do not return */
            (char)v0.to_vec(v25, a2);
        }
        else if (a1 == 1)
        {
            a0->field_10 = v7;
            a0->field_0 = *((int128_t *)&v5);
            return v7;
        }
        else if (a2)
        {
            v20 = v18 - v19;
            if (a2 >= v20)
            {
                alloc::slice::<impl [T]>::repeat(&v0, a2 - v20 + 1);
                v9 = v2;
                memcpy(&v8, &v0, 16);
                v10 = &v5;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v12 = &v8;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v0 = &g_41cfd0;
                v1 = 2;
                v4 = 0;
                v2 = &v10;
                v3 = 2;
                v14.map_or_else(&v0);
                core::ptr::drop_in_place<alloc::string::String>(&v8);
                a0->field_10 = *((long long *)&v15);
                v26 = v14;
                *((void*)&a0->field_0) = v26;
                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v5);
            }
            v21 = v19 + a2 + 1;
            v22 = v21.get(v17, v18);
            if (!v22)
                core::str::slice_error_fail(v17, v18, 0, v21, &g_519cd0); /* do not return */
            v0.to_vec(v22, a2);
        }
        else
        {
            v24 = v21.get(v17, v18);
            if (!v24)
                core::str::slice_error_fail(v17, v18, 0, v21, &g_519cb8); /* do not return */
            (char)v0.to_vec(v24, a2);
        }
        a0->field_10 = v2;
        v26 = *((int128_t *)&v0);
        a0->field_0 = *((int128_t *)&v0);
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v5);
    }
    else
    {
        if (a1 && a1 != 1 && a2)
        {
            alloc::slice::<impl [T]>::repeat(&(char)v0, a2);
            v9 = v2;
            memcpy(&v8, &v0, 16);
            v10 = &v5;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v12 = &v8;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_519c80;
            v1 = 2;
            v4 = 0;
            v2 = &v10;
            v3 = 2;
            v14.map_or_else(&v0);
            core::ptr::drop_in_place<alloc::string::String>(&v8);
            a0->field_10 = *((long long *)&v15);
            *((void*)&a0->field_0) = v26;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v5);
        }
        a0->field_10 = v7;
        a0->field_0 = *((int128_t *)&v5);
        return v7;
    }
}
