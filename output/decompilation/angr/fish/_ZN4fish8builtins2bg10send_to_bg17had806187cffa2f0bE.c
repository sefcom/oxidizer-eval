long long fish::builtins::bg::send_to_bg(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x118]
    unsigned int v1;  // [bp-0x10c]
    unsigned long long v2[3];  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    void* v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v5[3];  // [bp-0xf0]
    unsigned long long v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe0]
    void* v8;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v9;  // [bp-0xc8]
    void* v10;  // [bp-0xc0]
    char v11;  // [bp-0xb8]
    char v12;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xa8]
    int v14;  // [bp-0x98]
    int v16;  // [bp-0x90]
    int v17;  // [bp-0x88], Other Possible Types: void*
    char v18;  // [bp-0x78]
    int v19;  // [bp-0x70]
    char v20;  // [bp-0x58]
    int v21;  // [bp-0x50]
    unsigned long long v23[3];  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r15
    unsigned long v26;  // rsi
    unsigned long long v27[3];  // rbp
    char v28;  // al
    unsigned long long v29;  // rbp
    unsigned long long v30;  // rax
    int v31;  // xmm1
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm3

    v23 = a0.jobs();
    v25 = v24;
    v26 = v23[2];
    if (a4 < v23[2])
    {
        v27 = v23;
        v28 = *((long long *)(v23[1] + a4 * 8)) + 16.wants_job_control();
        v26 = v27[2];
        if (!v28)
        {
            v0 = v24;
            if (a4 < v26)
            {
                v8 = 0;
                v9 = 4;
                v10 = 0;
                v3 = "%";
                v4 = 79;
                *(v2) = 0x8000000000000000;
                v34 = v2.localize();
                v12 = a2;
                v13 = a3;
                v11 = 1;
                v1 = *((long long *)(v27[1] + a4 * 8)) + 16.job_id();
                (char)v5.to_wstring(&v1);
                v35 = *((int128_t *)&v6);
                v36 = *((int128_t *)(*((long long *)(v27[1] + a4 * 8)) + 24));
                v37 = *((int128_t *)&v13);
                *((int128_t *)&v14) = *((int128_t *)&v11);
                v17 = v37;
                v18 = 1;
                v19 = v35;
                v20 = 1;
                v21 = v36;
                fish_printf::printf_impl::sprintf_locale(&v11, &v8, v34, v24, ".", &(char)v14, 3);
                v11.unwrap(&g_14c7448);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(char)v14);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v5);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
                *((int128_t *)&v14) = *((int128_t *)&v8);
                v17 = 0;
                v25 = v0;
                a1.append(&(char)v14);
LABEL_133c927:
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v25);
                return 4294967297;
            }
            v33 = &g_14c7430;
        }
        else if (a4 < v26)
        {
            v29 = v27[1];
            *(v2) = 0;
            v3 = 4;
            v4 = 0;
            v6 = "S";
            v7 = 32;
            *(v5) = 0x8000000000000000;
            v30 = v5.localize();
            v1 = *((long long *)(v29 + a4 * 8)) + 16.job_id();
            v11.to_wstring(&v1);
            v31 = *((int128_t *)(*((long long *)(v29 + a4 * 8)) + 24));
            *((char *)&v14) = 1;
            *((int128_t *)&v16) = *((int128_t *)&v12);
            v18 = 1;
            v19 = v31;
            fish_printf::printf_impl::sprintf_locale(&v8, &v2, v30, v24, ".", &(char)v14, 2);
            v8.unwrap(&g_14c7478);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v14);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
            *((int128_t *)&v14) = *((int128_t *)&v2[0]);
            v17 = 0;
            a1.append(&(char)v14);
            *((long long *)(v29 + a4 * 8)) + 16.group().set_is_foreground(0);
            if ((char)*((long long *)(v29 + a4 * 8)) + 16.resume())
            {
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v24);
                a0.job_promote_at(a4);
                return 0x100000000;
            }
            goto LABEL_133c927;
        }
        else
        {
            v0 = v24;
            v33 = &g_14c7460;
        }
    }
    else
    {
        v0 = v24;
        v33 = &g_14c7418;
    }
    core::panicking::panic_bounds_check(a4, v26, v33); /* do not return */
}
