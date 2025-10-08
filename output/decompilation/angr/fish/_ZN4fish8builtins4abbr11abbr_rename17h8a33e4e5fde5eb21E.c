long long fish::builtins::abbr::abbr_rename(void* a0, unsigned long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    unsigned long long v3[3];  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    void* v6;  // [bp-0x88], Other Possible Types: char
    unsigned long long v7;  // [bp-0x80]
    void* v8;  // [bp-0x78], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    char v12;  // [bp-0x48]
    int v13;  // [bp-0x40]
    char v14;  // [bp-0x28]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // r14
    unsigned long long v19;  // rax
    unsigned long long v20;  // rcx
    void* v21;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v25;  // rdx

    if (a1 != 2)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 40;
        *(v3) = 0x8000000000000000;
        v6 = 1;
        v7 = "a";
        v8 = 4;
        v9 = 1;
        v10 = "-";
        v11 = 8;
        fish_printf::printf_impl::sprintf_locale(&v14, &v0, v3.localize(), v25, ".", &v6, 2);
        v14.unwrap(&g_14c6450);
        goto LABEL_1334ff4;
    }
    if (!((long long)a0[16] && (long long)a0[40]))
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 30;
        *(v3) = 0x8000000000000000;
        v6 = 1;
        v7 = "a";
        v8 = 4;
        v9 = 1;
        v10 = "-";
        v11 = 8;
        fish_printf::printf_impl::sprintf_locale(&v14, &v0, v3.localize(), v23, ".", &v6, 2);
        v14.unwrap(&g_14c6420);
LABEL_1334ff4:
        v18 = 0x200000000;
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v6);
        goto LABEL_1335008;
    }
    else if (fish::builtins::abbr::contains_whitespace((long long)a0[32], (long long)a0[40]))
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v4 = "%";
        v5 = 59;
        *(v3) = 0x8000000000000000;
        v16 = v3.localize();
        v6 = 1;
        v7 = "a";
        v8 = 4;
        v9 = 1;
        v10 = "-";
        v11 = 8;
        v12 = 1;
        *((int128_t *)&v13) = (int128_t)a0[32];
        fish_printf::printf_impl::sprintf_locale(&v14, &v0, v16, v17, ".", &v6, 3);
        v14.unwrap(&g_14c6438);
        v18 = 0x200000000;
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v6);
LABEL_1335008:
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
        memcpy(&v6, &v0, 16);
        v8 = 0;
        a2.append(&v6);
        v20 = 1;
        v21 = 0;
    }
    else
    {
        v6 = a0;
        v7 = a2;
        v8 = a0 + 24;
        v19 = fish::abbrs::with_abbrs_mut(&v6);
        v18 = 0x300000000 & v19;
        v20 = v19 & 4294967295;
        v21 = (unsigned int)v19 & 0xffffff00;
    }
    return v21 | v18 | v20;
}
