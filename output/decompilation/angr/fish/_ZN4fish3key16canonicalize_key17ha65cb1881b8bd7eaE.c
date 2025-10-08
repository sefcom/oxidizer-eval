long long fish::key::canonicalize_key(void* a0, unsigned long a1)
{
    void* v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    unsigned long long v3[3];  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    int v6;  // [bp-0x68]
    char v7;  // [bp-0x58]
    int v8;  // [bp-0x48], Other Possible Types: char
    char v9;  // [bp-0x38]
    unsigned int v11;  // ebp
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    char v15;  // r12b
    unsigned long long v16;  // r14

    v11 = 27;
    if ((unsigned int)a1 != 27)
    {
        v12 = fish::key::canonicalize_keyed_control_char(a1);
        v11 = v12;
        if ((unsigned int)v12 < 32)
        {
            0.unwrap(&g_14dbb90);
            v12 = fish::key::canonicalize_unkeyed_control_char(v11);
            v11 = v12;
            if (((char)(a1 >> 32) & 1))
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v4 = "C";
                v5 = 53;
                *(v3) = 0x8000000000000000;
                v13 = v3.localize();
                v8.to_arg(v11 | a1 & 0x1ffffff00000000);
                memcpy(&v7, &v9, 16);
                v6 = v8;
                fish_printf::printf_impl::sprintf_locale(&v8, &v0, v13, v14, ".", &v6, 1);
                v8.unwrap(&g_14dbba8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v6);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                *((unsigned long long *)&a0[16]) = 0;
                *((int128_t *)a0) = *((int128_t *)&v0);
                return 0;
            }
            v15 = 1;
        }
    }
    v16 = a1 >> 40;
    *((unsigned int *)&a0[8]) = v11;
    *((char *)&a0[12]) = v15;
    *((unsigned short *)&a0[13]) = v16;
    *((char *)&a0[15]) = (v16 & 4294967295) >> 16;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v12;
}
