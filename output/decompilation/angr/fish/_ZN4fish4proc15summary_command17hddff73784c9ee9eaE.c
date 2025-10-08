long long fish::proc::summary_command(struct_2 *a0, unsigned long long a1[5], struct_0 *a2)
{
    int v0;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned short
    int v1;  // [bp-0xb8], Other Possible Types: char
    char v2;  // [bp-0xb8]
    int v3;  // [bp-0xb0], Other Possible Types: unsigned long, unsigned long long
    void* v4;  // [bp-0xa8]
    unsigned int v5;  // [bp-0x8c]
    void* v6;  // [bp-0x88], Other Possible Types: char
    unsigned int v7;  // [bp-0x88]
    void* v8;  // [bp-0x88]
    char v9;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x78]
    int v11;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x60]
    void* v13;  // [bp-0x58]
    int v14;  // [bp-0x50], Other Possible Types: char
    unsigned long v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    int v17;  // [bp-0x38]
    unsigned long long v18;  // [bp-0x30]
    void* v19;  // [bp-0x28]
    unsigned long long v21;  // rax
    unsigned long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned int v25;  // eax
    unsigned long long v27;  // rax
    unsigned long long v29;  // rax
    unsigned int *v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax

    v14.to_vec("f", 16);
    v11 = 0;
    v12 = 4;
    v13 = 0;
    v5 = a1.job_id();
    v6.to_wstring(&v5);
    v2 = 1;
    *((int128_t *)&v3) = *((int128_t *)&v9);
    fish_printf::printf_impl::sprintf_locale(&v16, &v11, " %s %d", 3, &v2, 1);
    v16.unwrap(&g_14df800);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
    v4 = v13;
    *((int128_t *)&v0) = *((int128_t *)&v11);
    v21 = v3.index(v13, &g_14df818);
    v14.spec_extend(v21, v21 + v22 * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
    v6 = 0;
    v9 = 4;
    v10 = 0;
    v0 = 8197;
    v3 = a1.is_foreground();
    fish_printf::printf_impl::sprintf_locale(&v11, &v6, " %d", 3, &v0, 1);
    v11.unwrap(&g_14df830);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
    v4 = v10;
    *((int128_t *)&v1) = *((int128_t *)&v6);
    v23 = v3.index(v10, &g_14df848);
    v14.spec_extend(v23, v23 + v22 * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    v14.push(32);
    fish::common::escape(&v0, a1[1], a1[2]);
    v24 = v3.index(v4, &g_14df860);
    v14.spec_extend(v24, v24 + v22 * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    if (a2)
    {
        v0 = a2->field_a8;
        v25 = v0.signal_code();
        v25.new();
        v5 = v25;
        v14.push(32);
        fish::common::escape(&v0, v5.name(), a2);
        v27 = v3.index(v4, &g_14df878);
        v14.spec_extend(v27, v27 + v22 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        v14.push(32);
        fish::common::escape(&v0, v5.desc(), a2);
        v29 = v3.index(v4, &g_14df890);
        v14.spec_extend(v29, v29 + v22 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        if (a1[3].fold(a1[4] * 224 + a1[3]) >= 2)
        {
            v30 = a2->padding_60[48].get();
            if (v30)
            {
                v7 = *(v30);
                v0.spec_to_string(&v7);
                *((int128_t *)&v11) = (int128_t)v1;
                v13 = v4;
                v6 = v8;
            }
            else
            {
                v11 = 0x8000000000000000;
            }
            v0.to_vec("-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1);
            v10 = v4;
            memcpy(&v6, &v0, 16);
            if (v11 == 0x8000000000000000)
            {
                v19 = v10;
                *((int128_t *)&v17) = *((int128_t *)&v6);
            }
            else
            {
                v19 = v13;
                *((int128_t *)&v17) = (int128_t)v11;
                core::ptr::drop_in_place<alloc::string::String>(&v6);
            }
            v6 = 0;
            v9 = 4;
            v10 = 0;
            v1 = 0;
            v3 = v18;
            v4 = v19;
            fish_printf::printf_impl::sprintf_locale(&v11, &v6, " %s %d", 3, &v1, 1);
            v11.unwrap(&g_14df8a8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
            v4 = v10;
            memcpy(&v1, &v6, 16);
            v31 = v3.index(v10, &g_14df8c0);
            v14.spec_extend(v31, v31 + v22 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            v14.push(32);
            if (!a2->field_58)
                core::option::unwrap_failed(&g_14df8d8); /* do not return */
            fish::common::escape(&v1, a2->field_50->field_8, a2->field_50->field_10);
            v32 = v3.index(v4, &g_14df8f0);
            v14.spec_extend(v32, v32 + v22 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            core::ptr::drop_in_place<alloc::string::String>(&v16);
        }
    }
    else
    {
        v14.spec_extend(((a1.is_stopped() & 255) ? " " : " "), ((a1.is_stopped() & 255) ? " " : " ") + (a1.is_stopped() & 255 & 4294967295) * 8 + 24);
    }
    a0->field_10 = v15;
    *((void*)&a0->field_0) = v14;
    return v15;
}
