long long fish::pager::Pager::render(unsigned long a0, unsigned long long a1[34])
{
    void* v0;  // [bp-0x1f0]
    unsigned long v1;  // [bp-0x1e8]
    unsigned long v2;  // [bp-0x1e0]
    unsigned long long v3;  // [bp-0x1d8]
    unsigned long v4;  // [bp-0x1d0]
    unsigned long long v5;  // [bp-0x1c8]
    unsigned long v6;  // [bp-0x1c0]
    void* v7;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long v8;  // [bp-0x1b0]
    void* v9;  // [bp-0x1a8]
    void* v10;  // [bp-0x198]
    unsigned long long v11;  // [bp-0x190]
    uint128_t v12;  // [bp-0x188]
    int v13;  // [bp-0x178]
    void* v14;  // [bp-0x160]
    void* v15;  // [bp-0x150]
    unsigned long long v16;  // [bp-0x148]
    uint128_t v17;  // [bp-0x140]
    unsigned long long v18;  // [bp-0x130]
    uint128_t v19;  // [bp-0x128]
    unsigned long long v20;  // [bp-0x118]
    uint128_t v21;  // [bp-0x110]
    unsigned short v22;  // [bp-0x100]
    uint128_t v23;  // [bp-0xf8]
    int v24;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long v25;  // [bp-0xe0]
    uint128_t v26;  // [bp-0xd8]
    void* v27;  // [bp-0xc8]
    char v28;  // [bp-0xc0]
    char v29;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0xb0]
    char v31;  // [bp-0xa8]
    unsigned long long v33;  // r13
    unsigned long v34;  // rdx
    unsigned long v35;  // r12
    unsigned long v36;  // r12
    unsigned long long v37;  // r15
    unsigned long long v38;  // rax

    v7 = 0;
    v9 = 0;
    v10 = 0;
    *((uint128_t *)&v24) = 0;
    v26 = 0;
    v11 = 8;
    v27 = 0;
    v28 = 0;
    v14 = 0;
    v15 = 0;
    v12 = 0;
    *((uint128_t *)&v13) = 0;
    v16 = 4;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v20 = 8;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v3 = 1;
    v4 = a1[31];
    v5 = 1;
    v6 = a1[32];
    v29.clone(&a1[2]);
    core::ptr::drop_in_place<fish::editable_line::EditableLine>(&(char)v13);
    memcpy(&(char)v13, &v29, 136);
    v29 = 1;
    v30 = 6;
    v31 = 0;
    if (((char)v29.spec_next_back() & 1))
    {
        v2 = a1[20];
        v33 = a1[21];
        v1 = a1[26];
        do
        {
            v36 = v35;
            v9.resize(0);
            v37 = fish::pager::divide_round_up(v33, v36);
            v38 = fish::pager::divide_round_up(v33, v37);
            if (v38 > v36)
                core::panicking::panic("assertion failed: min_cols_required_for_rows <= colsassertion failed: denom != 0assertion failed: comp_info.comp.last().unwrap().len() >= comp_info.colors.len()FISH_FAST_FAIL Debug PID %d or press Enter to exit\nsrc/panic.rssrc/parse_constants.rs", 52, &g_14dc650); /* do not return */
            if (!v36 <= v38 && !v36 < 2)
                continue;
            v25 = v36;
            v24 = v37;
            v7 = a1.visual_selected_completion_index(v37, v36);
            v8 = v34;
            if ((char)a1.completion_try_print(v36, v1, a1[27], v2, v33, &v3, a1[33]))
                break;
            continue;
            v35 = v34;
        } while (((char)v29.spec_next_back() & 1));
    }
    memcpy(v0, &v3, 288);
    return a0;
}
