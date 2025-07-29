long long uu_join::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x588]
    unsigned long long v1;  // [bp-0x580]
    unsigned long long v2;  // [bp-0x578]
    int v3;  // [bp-0x570]
    int v4;  // [bp-0x560]
    unsigned long long v5;  // [bp-0x558]
    int v6;  // [bp-0x550]
    int v7;  // [bp-0x540]
    unsigned long long v8;  // [bp-0x530]
    unsigned long long v9;  // [bp-0x500]
    unsigned long long v10;  // [bp-0x4f8]
    int v11;  // [bp-0x4f0]
    int v12;  // [bp-0x4e0]
    unsigned long long v13;  // [bp-0x4d0]
    int v14;  // [bp-0x4c8], Other Possible Types: char
    char v15;  // [bp-0x4b8]
    int v16;  // [bp-0x450], Other Possible Types: char
    unsigned long long v17;  // [bp-0x448]
    unsigned long long v18;  // [bp-0x440]
    char v19;  // [bp-0x438], Other Possible Types: unsigned int
    int v20;  // [bp-0x428]
    int v21;  // [bp-0x418]
    int v22;  // [bp-0x408]
    char v23;  // [bp-0x3f8]
    char v24;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x168]
    int v26;  // [bp-0x160]
    int v27;  // [bp-0x150]
    char v28;  // [bp-0x140]
    unsigned long long v30;  // rax
    int v31;  // xmm0
    unsigned long long v32[3];  // rbx
    unsigned long long v33[3];  // r14
    unsigned long long v34;  // rax

    uu_join::uu_app(&v16);
    v24.try_get_matches_from(&v16, a0, a1);
    if ((char)(((0 ^ v24) & (0 ^ -(v24))) >> 63))
        return v10.from();
    v13 = *((long long *)&v28);
    v12 = v27;
    v11 = v26;
    v9 = v24;
    v10 = v25;
    uu_join::parse_settings(&v16, &v9);
    v30 = *((long long *)&v16);
    if (v30 != 0x8000000000000000)
    {
        v8 = *((long long *)&v23);
        v31 = *((int128_t *)&v19);
        v7 = v22;
        v6 = v21;
        v4 = v20;
        v3 = v31;
        v0 = v30;
        v1 = v17;
        v2 = v18;
        v16.try_get_one(&v9, "file1file2-join-error-both-files-stdin", 5);
        v32 = "file1file2-join-error-both-files-stdin".unwrap(5, &v16);
        if (!v32)
            core::option::unwrap_failed(&g_593c38); /* do not return */
        v16.try_get_one(&v9, "file2-join-error-both-files-stdin", 5);
        v33 = "file2-join-error-both-files-stdin".unwrap(5, &v16);
        if (!v33)
        {
            core::option::unwrap_failed(&g_593c50); /* do not return */
        }
        else if ((char)v32[1].equal(v32[2], "-join-error-both-files-stdin", 1) && (char)v33[1].equal(v33[2], "-join-error-both-files-stdin", 1))
        {
            uucore::mods::locale::get_message(&v14, "join-error-both-files-stdin", 27);
            v19 = 1;
            v16 = v14;
            v18 = *((long long *)&v15);
            v1 = v16.new();
            core::ptr::drop_in_place<uu_join::Settings>(&v0);
        }
        else
        {
            v34 = v5 ^ 0x8000000000000000;
            if (4 <= v34)
                v34 = 1;
            goto (long long)(g_414e90[v34] + (char *)&g_414e90[0]);
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    return v1;
}
