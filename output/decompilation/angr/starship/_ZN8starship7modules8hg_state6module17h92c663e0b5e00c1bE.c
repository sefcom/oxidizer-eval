void starship::modules::hg_state::module(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x250], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x248]
    unsigned long long v2;  // [bp-0x240]
    unsigned long long v3;  // [bp-0x238]
    char v4;  // [bp-0x230], Other Possible Types: unsigned long long
    int v5;  // [bp-0x220]
    unsigned long long v6;  // [bp-0x210]
    int v7;  // [bp-0x208]
    unsigned long long v8;  // [bp-0x200]
    unsigned long long v9;  // [bp-0x1f8]
    unsigned long long v10[6];  // [bp-0x1e8]
    unsigned long long v11;  // [bp-0x1e0]
    int v12;  // [bp-0x1d8], Other Possible Types: char *, unsigned long long
    void* v13;  // [bp-0x1d0], Other Possible Types: unsigned long long
    int v14;  // [bp-0x1c8], Other Possible Types: void*, unsigned long long
    unsigned long long v15;  // [bp-0x1c0]
    int v16;  // [bp-0x1b8]
    unsigned long long v17;  // [bp-0x1a8]
    char v18;  // [bp-0x198]
    int v19;  // [bp-0x190], Other Possible Types: char
    unsigned long long v20;  // [bp-0x180]
    int v21;  // [bp-0x178]
    unsigned long long v22;  // [bp-0x168]
    char *v23;  // [bp-0x160]
    unsigned long long v24;  // [bp-0x158]
    unsigned long long v25;  // [bp-0x150]
    unsigned long long v26;  // [bp-0x148]
    char *v27;  // [bp-0x140]
    struct_0 *v28;  // [bp-0x138]
    int v29;  // [bp-0x130], Other Possible Types: char
    int v30;  // [bp-0x120]
    int v31;  // [bp-0x110]
    int v32;  // [bp-0x100]
    int v33;  // [bp-0xf0]
    char v34;  // [bp-0xe0]
    unsigned long long v35;  // [bp-0xd8]
    char v36;  // [bp-0xd0]
    char v37;  // [bp-0x50]
    unsigned long long v38;  // [bp-0x40]
    unsigned long long v39;  // [bp-0x38]
    char v40;  // [bp-0x30]
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdx
    int v44;  // xmm0
    int v45;  // xmm1

    v29.new_module(a1, "hg_state ]\n  }\n\nskipHashCharging$symbol histedit", 8);
    v36.try_load(v35);
    if (v40)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        *((int128_t *)&v10) = *((int128_t *)&(&a1->padding_0)[1]);
        v12 = 8;
        v13 = 0;
        v14 = &g_11f4f38;
        v15 = 1;
        v0.scan(&(char)v10);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v9 = v2;
            *((int128_t *)&v7) = *((int128_t *)&v0);
            v42 = starship::modules::hg_state::get_state_description(v8, v2, &v36);
            if (v42)
            {
                v0.new(v38, v39);
                v25 = v42;
                v26 = v43;
                v27 = &v37;
                v28 = a1;
                if (v0 == 0x8000000000000000)
                {
                    v20 = v3;
                    memcpy(&v19, &v0, 16);
                }
                else
                {
                    v17 = v6;
                    v44 = *((int128_t *)&v0);
                    v45 = *((int128_t *)&v2);
                    v16 = v5;
                    *((int128_t *)&v14) = *((int128_t *)&v4);
                    v12 = v45;
                    *((void*)v10) = v44;
                    starship::modules::hg_state::module::{{closure}}(&v18, &v25, &(char)v10);
                    if (*((int *)&v18) != 1)
                    {
                        v29.set_segments(&v19);
                        *((int128_t *)&a0[80]) = *((int128_t *)&v34);
                        a0[64] = v33;
                        a0[48] = v32;
                        a0[32] = v31;
                        a0[16] = v30;
                        *(a0) = v29;
                        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v7);
                        return;
                    }
                }
                v22 = v20;
                v21 = v19;
                if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
                {
                    v23 = &v21;
                    v24 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                    *(v10) = &g_11f4f60;
                    v11 = 1;
                    v14 = 0;
                    v12 = &v23;
                    v13 = 1;
                    v0 = "starship::modules::hg_staterebasestateupdatestatebisect.stategraftstatetransplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs";
                    v1 = 27;
                    v2 = "starship::modules::hg_staterebasestateupdatestatebisect.stategraftstatetransplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs";
                    v3 = 27;
                    v4 = log::__private_api::loc(&g_11f4f70);
                    log::__private_api::log(&v10, 2, &v0);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v21);
            }
            else
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&(char)v7);
        }
    }
    core::ptr::drop_in_place<starship::module::Module>(&v29);
    return;
}
