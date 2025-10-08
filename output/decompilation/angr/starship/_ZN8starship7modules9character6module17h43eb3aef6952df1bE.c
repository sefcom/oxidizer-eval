long long starship::modules::character::module(void* a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0x348]
    char v1;  // [bp-0x228]
    unsigned long long v2;  // [bp-0x218]
    char v3;  // [bp-0x210]
    char v4;  // [bp-0x208]
    unsigned long long v5;  // [bp-0x1f8]
    char v6;  // [bp-0x1f0], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x1e8], Other Possible Types: unsigned long long
    char v8;  // [bp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x1d8]
    char v10;  // [bp-0x1d0], Other Possible Types: unsigned long long
    int v11;  // [bp-0x1c0]
    unsigned long long v12;  // [bp-0x1b0]
    char *v13;  // [bp-0x1a8]
    unsigned long long v14;  // [bp-0x1a0]
    char v15;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x190]
    unsigned long long v17;  // [bp-0x188]
    unsigned long long v18;  // [bp-0x180]
    unsigned long long v19;  // [bp-0x178]
    unsigned long long v20;  // [bp-0x170]
    char v21;  // [bp-0x130]
    int v22;  // [bp-0x120], Other Possible Types: char
    int v23;  // [bp-0x110]
    int v24;  // [bp-0x100]
    int v25;  // [bp-0xf0]
    int v26;  // [bp-0xe0]
    char v27;  // [bp-0xd0]
    unsigned long long v28;  // [bp-0xc8]
    char v29;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0xb8]
    char *v31;  // [bp-0xb0]
    unsigned long long v32;  // [bp-0xa8]
    void* v33;  // [bp-0xa0]
    char v34;  // [bp-0x78]
    char v35;  // [bp-0x68]
    char v36;  // [bp-0x58]
    int v37;  // [bp-0x48]
    unsigned long long v38;  // [bp-0x38]
    unsigned long long v40;  // rax
    void* v41;  // rdi
    void* v43;  // rdi
    void* v44;  // rdi
    unsigned long long v45;  // r12
    unsigned long long v46;  // r15
    char v47;  // bpl
    unsigned int v48;  // r13d
    unsigned long long v49;  // r15
    unsigned long long *v50;  // rdx
    unsigned long long *v51;  // rsi
    unsigned long long v52;  // r12
    unsigned long long v53;  // rax

    v22.new_module(a1, "characterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 9);
    v40 = v15.try_load(v28);
    v41 = 0;
    if (!((char)(((0 ^ a1->field_28) & (0 ^ -(a1->field_28))) >> 63)))
    {
        v41 = a1->field_30;
        v40 = a1->field_38;
    }
    if (!v41)
        v43 = "0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs";
    else
        v43 = v41;
    v44 = v43;
    if (!v41)
        v40 = 1;
    v45 = a1->field_18;
    v46 = a1->field_20;
    v47 = v44.equal(v40, "0viinssrc/formatter/parser.rssrc/formatter/string_formatter.rs", 1);
    v48 = a1->field_6c8;
    switch (v48)
    {
    case 1:
        if ((char)v45.equal(v46, "defaultdriverrecursivemergeshowUntrackedFilesrenamesstatusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR", 7))
            goto LABEL_b872f4;
        if (!(char)v45.equal(v46, "viPWDReceived completed pipestatus of src/context.rs", 2))
            goto LABEL_b87313;
        break;
    case 5:
        if ((char)v45.equal(v46, "vicmdvisualreplacereplace_oneError in module `character`:\nsrc/modules/character.rs", 5))
            goto LABEL_b872f4;
        break;
    default:
        if ((char)v45.equal(v46, "viPWDReceived completed pipestatus of src/context.rs", 2))
        {
            if (v48 <= 10)
            {
                v0 = 1048;
                if ((*((char *)&v0 + ((v48 & 31) >> 3)) >> ((char)v48 & 31 & 7) & 1))
                {
LABEL_b872f4:
                    goto LABEL_b873ce;
                }
            }
        }
        else
        {
            if (v48 == 1)
            {
LABEL_b87313:
                if ((char)v45.equal(v46, "visualreplacereplace_oneError in module `character`:\nsrc/modules/character.rs", 6))
                    goto LABEL_b873ce;
                if ((char)v45.equal(v46, "replacereplace_oneError in module `character`:\nsrc/modules/character.rs", 7))
                    goto LABEL_b873ce;
                if ((char)v45.equal(v46, "replace_oneError in module `character`:\nsrc/modules/character.rs", 11))
                {
                    v49 = *((long long *)&v21);
                    goto LABEL_b873ce;
                }
            }
        }
    }
    v50 = &v19;
    v51 = &v20;
    if (v47)
        v51 = &v18;
    v49 = *(v51);
    if (v47)
        v50 = &v17;
    v52 = *(v50);
LABEL_b873ce:
    v6.new(v15, v16);
    if (v6 == 0x8000000000000000)
    {
        v5 = v9;
        memcpy(&v4, &v7, 16);
    }
    else
    {
        v38 = v12;
        v37 = v11;
        memcpy(&v36, &v10, 16);
        memcpy(&v35, &v8, 16);
        memcpy(&v34, &v6, 16);
        v29.map_meta(&v34, v52, v49);
        v1 = 2;
        v3.parse(&v29, &v1, a1);
        if (*((int *)&v3) != 1)
        {
            v53 = v22.set_segments(&v4);
            *((int128_t *)&a0[80]) = *((int128_t *)&v27);
            a0[64] = v26;
            a0[48] = v25;
            a0[32] = v24;
            a0[16] = v23;
            *(a0) = v22;
            return v53;
        }
    }
    v2 = v5;
    memcpy(&v1, &v4, 16);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
    {
        v13 = &v1;
        v14 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v29 = &g_11f3cc0;
        v30 = 1;
        v33 = 0;
        v31 = &v13;
        v32 = 1;
        v6 = "starship::modules::characterError in module `cmake`: \nsrc/modules/cmake.rs";
        v7 = 28;
        v8 = "starship::modules::characterError in module `cmake`: \nsrc/modules/cmake.rs";
        v9 = 28;
        v10 = log::__private_api::loc(&g_11f3cd0);
        log::__private_api::log(&v29, 2, &v6);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v1);
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v22);
}
