long long fish::builtins::echo::echo(unsigned int a0, struct_0 *a1, unsigned long long a2[2], unsigned long long a3)
{
    char v0;  // [bp-0xba]
    char v1;  // [bp-0xb9]
    unsigned long v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    unsigned int v4;  // [bp-0xa8]
    void* v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    void* v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x87]
    char v10;  // [bp-0x86]
    unsigned int v11;  // [bp-0x84]
    unsigned long long v12;  // [bp-0x80]
    void* v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x58]
    void* v16;  // [bp-0x50]
    unsigned long long v22;  // rax
    unsigned long long v23[2];  // rdx
    unsigned int v24;  // r15d
    unsigned int v25;  // r15d
    unsigned int v34;  // eax
    unsigned long long v35;  // rax
    unsigned long long v36[2];  // rdx
    unsigned int v37;  // ebp
    unsigned int v38;  // ebp
    unsigned int v39;  // eax
    unsigned long long v40[2];  // rdx
    unsigned int v41;  // ebp
    unsigned int v42;  // ebp
    unsigned int v43;  // eax

    fish::builtins::echo::parse_options(&v8, a2, a3, a0, a1);
    if (v8 == 2)
        return v11 * 0x100000000 + 1;
    v0 = v9;
    v5 = 0;
    v6 = 4;
    v7 = 0;
    if (v12 > a3)
        core::slice::index::slice_start_index_len_fail(v12, a3, &g_14c8de8); /* do not return */
    v14 = &a2[v12];
    v15 = &a2[a3];
    v16 = 0;
    v1 = v8;
    if ((v10 & 1))
    {
        v0 = ~(v0);
        while (true)
        {
            v22 = v14.next();
            if (!v23)
                break;
            if (!((!v22 | v0) & 1))
                v5.push(32);
            v2 = v23[0];
            v3 = v23[0] + v23[1] * 4;
            v24 = 1114113;
            v4 = 1114113;
            v34 = v2.next();
            if (v34 != 2)
            {
                v34.unwrap((unsigned int)v23, &g_14bd1b0);
                v25 = (unsigned int)v23;
            }
        }
    }
    else if ((v0 & 1))
    {
        while (true)
        {
            v35 = v14.next();
            if (!v36)
                break;
            if (v35)
                v5.push(32);
            v2 = v36[0];
            v3 = v36[0] + v36[1] * 4;
            v37 = 1114113;
            v4 = 1114113;
            v39 = v2.next();
            if (v39 != 2)
            {
                v39.unwrap((unsigned int)v36, &g_14bd1b0);
                v38 = (unsigned int)v36;
            }
        }
    }
    else
    {
        while (true)
        {
            v14.next();
            if (!v40)
                break;
            v2 = v40[0];
            v3 = v40[0] + v40[1] * 4;
            v41 = 1114113;
            v4 = 1114113;
            v43 = v2.next();
            if (v43 != 2)
            {
                v43.unwrap((unsigned int)v40, &g_14bd1b0);
                v42 = (unsigned int)v40;
            }
        }
    }
    if ((v1 & 1))
        v5.push(10);
    if (v7)
    {
        v13 = v7;
        memcpy(&v8, &v5, 16);
        a1->field_8.append(&v8);
    }
    else
    {
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
    }
    return 0;
}
