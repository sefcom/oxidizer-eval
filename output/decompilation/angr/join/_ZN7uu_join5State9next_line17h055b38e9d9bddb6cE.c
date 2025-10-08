long long uu_join::State::next_line(void* a0, struct_0 *a1, char a2[2])
{
    char v0;  // [bp-0x169]
    char v1;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x158]
    char *v4;  // [bp-0x148], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x140]
    char *v6;  // [bp-0x138], Other Possible Types: char, unsigned long
    unsigned long long v7;  // [bp-0x130]
    void* v8;  // [bp-0x128], Other Possible Types: char *, char
    unsigned long long v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    unsigned long long v11;  // [bp-0x110]
    int v12;  // [bp-0x108]
    char v13;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0xf0]
    void* v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xe0]
    unsigned long long v17;  // [bp-0xd8]
    int v18;  // [bp-0xd0], Other Possible Types: char
    int v19;  // [bp-0xc0], Other Possible Types: char
    char *v20;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0xa8]
    char *v22;  // [bp-0xa0]
    unsigned long long v23;  // [bp-0x98]
    void* v24;  // [bp-0x90]
    char v25;  // [bp-0x80], Other Possible Types: unsigned long long
    char v26;  // [bp-0x78]
    void* v27;  // [bp-0x68], Other Possible Types: unsigned long long
    int v28;  // [bp-0x60], Other Possible Types: unsigned long
    char v29;  // [bp-0x50]
    char v30;  // [bp-0x48]
    char v31;  // [bp-0x38]
    unsigned long long v33;  // rax
    unsigned long v34;  // rax
    int v35;  // xmm0
    int v36;  // xmm2
    void* v37;  // rax
    unsigned long v38;  // rdx

    v4.read_line(a1, a2 + 1);
    if (v4 == 9223372036854775809)
    {
        *((unsigned long long *)&a0[8]) = 0x8000000000000000;
        *((unsigned long long *)&a0[16]) = v17;
        *((unsigned long long *)a0) = 9223372036854775809;
        return v5;
    }
    memcpy(&v19, &v8, 16);
    memcpy(&v18, &v6, 16);
    v16 = v4;
    v17 = v5;
    if (v4 == 0x8000000000000000)
    {
        v33 = (unsigned long long)v16.drop_in_place<core::option::Option<uu_join::Line>>();
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v33;
    }
    memcpy(&v13, &v19, 16);
    v12 = v18;
    v10 = v16;
    v11 = v17;
    v34 = a2[1];
    v0 = v34;
    if (v0 == 1)
    {
        v35 = *((int128_t *)&v16);
        v36 = v19;
    }
    else
    {
        v15 = a1.get_current_key();
        v37 = v10.get_field(*((long long *)&a1->padding_28[16]));
        v34 = a2[0].compare(v15, v38, v37, v38);
        if ((char)v34 == 1 && (v0 == 2 || a1->padding_48[11] && !a1->padding_48[10]))
        {
            v27 = 0;
            *((int128_t *)&v28) = *((int128_t *)&(&a1->padding_0)[1]);
            v29 = 0;
            v25.from_utf8_lossy(v13, v14);
            v4 = &v27;
            v5 = <os_display::Quoted as core::fmt::Display>::fmt;
            v6 = &a1->padding_48;
            v7 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v8 = &v25;
            v9 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v20 = &g_4fd400;
            v21 = 3;
            v24 = 0;
            v22 = &v4;
            v23 = 3;
            v30.map_or_else(&v20);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v25, *((long long *)&v26));
            memcpy(&v1, &v30, 16);
            v3 = *((long long *)&v31);
            if (v0 == 2)
            {
                *((unsigned long long *)&a0[24]) = v3;
                *((int128_t *)&a0[8]) = *((int128_t *)&v1);
                *((unsigned long long *)a0) = 9223372036854775809;
                return (unsigned long long)core::ptr::drop_in_place<uu_join::Line>(&v10);
            }
            v27 = uucore::execution_phrase();
            v28 = v38;
            v20 = &v27;
            v21 = <&T as core::fmt::Display>::fmt;
            v22 = &v1;
            v23 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = &g_4fd430;
            v5 = 3;
            v8 = 0;
            v6 = &v20;
            v7 = 2;
            std::io::stdio::_eprint(&v4);
            a1->padding_48[10] = 1;
            v34 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(v1, v2);
        }
        v35 = *((int128_t *)&v10);
        v36 = *((int128_t *)&v13);
        v18 = v12;
    }
    a0[32] = v36;
    a0[16] = v18;
    *(a0) = v35;
    return v34;
}
