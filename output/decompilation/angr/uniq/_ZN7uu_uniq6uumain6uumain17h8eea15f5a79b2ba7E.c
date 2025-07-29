long long uu_uniq::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x443]
    char v1;  // [bp-0x442]
    char v2;  // [bp-0x441]
    char v3;  // [bp-0x440], Other Possible Types: unsigned long long
    char v4;  // [bp-0x440]
    unsigned long long v5;  // [bp-0x438]
    unsigned long long v6;  // [bp-0x430]
    int v7;  // [bp-0x428], Other Possible Types: char
    unsigned long long v8;  // [bp-0x420]
    unsigned long long v9;  // [bp-0x418]
    char v10;  // [bp-0x410], Other Possible Types: unsigned int
    char v11;  // [bp-0x400]
    unsigned long long v12;  // [bp-0x3e8]
    unsigned long long v13;  // [bp-0x3e0]
    unsigned long long v14;  // [bp-0x3d8]
    char v15;  // [bp-0x3d0]
    char v16;  // [bp-0x3c0]
    unsigned long long v17;  // [bp-0x3b0]
    unsigned long long v18;  // [bp-0x3a8]
    unsigned long long v19;  // [bp-0x3a0]
    unsigned long long v20;  // [bp-0x398]
    unsigned long long v21;  // [bp-0x390]
    char v22;  // [bp-0x388]
    unsigned long long v23;  // [bp-0x378]
    char v24;  // [bp-0x368]
    unsigned long long v25;  // [bp-0x358]
    int v26;  // [bp-0x350], Other Possible Types: char
    unsigned long long v27;  // [bp-0x340]
    char v28;  // [bp-0x338], Other Possible Types: unsigned long long
    int v29;  // [bp-0x330]
    int v30;  // [bp-0x320]
    int v31;  // [bp-0x310]
    unsigned long long v32;  // [bp-0x300]
    char v33[55];  // [bp-0x2f8]
    int v34;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v35;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    int v36;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v37;  // [bp-0x2d8]
    int v38;  // [bp-0x2d0], Other Possible Types: unsigned long long
    char v39;  // [bp-0x2c8]
    char v40;  // [bp-0x2c7]
    char v41;  // [bp-0x2c6]
    char v42;  // [bp-0x2c5]
    char v43;  // [bp-0x2c4]
    char v44;  // [bp-0x2c3]
    char v45;  // [bp-0x2c2]
    unsigned long long v46;  // [bp-0x2c0]
    unsigned long long v48;  // r12
    unsigned long long v49;  // r15
    int v50;  // xmm1
    char v51;  // r14b
    unsigned long long v52;  // r13
    unsigned long long v53;  // r13
    unsigned long long v54;  // r13
    unsigned long long v55;  // r13

    uu_uniq::handle_obsolete(&v33, a0, a1);
    v23 = v37;
    memcpy(&v22, &v35, 16);
    v48 = v33;
    v49 = v34;
    uu_uniq::uu_app(&v33);
    v25 = v23;
    memcpy(&v24, &v22, 16);
    (char)v7.try_get_matches_from(&v33, &v24);
    if ((char)(((0 ^ *((long long *)&v7)) & (0 ^ -(*((long long *)&v7)))) >> 63))
        return v13.call_once();
    v5 = *((long long *)&v39);
    v6 = v38;
    memcpy(&v15, &v10, 16);
    memcpy(&v16, &v11, 16);
    v12 = *((long long *)&v7);
    v13 = v8;
    v14 = v9;
    v33.try_get_many(&v12, _ZN7uu_uniq9ARG_FILES17hd20225a12ff23e33E, g_58bc38);
    v28.unwrap(_ZN7uu_uniq9ARG_FILES17hd20225a12ff23e33E, g_58bc38, &v33);
    if (v28)
    {
        v46 = v32;
        v38 = v31;
        v36 = v30;
        v34 = v29;
        *((unsigned long long *)&v33[0]) = v28;
        uu_uniq::uumain::uumain::{{closure}}(&(char)v7, &v33);
        v50 = *((int128_t *)&v9);
        *((int128_t *)&v33[0]) = *((int128_t *)&v7);
        v35 = v50;
    }
    else
    {
        v33.default();
    }
    *((char [55])&v21) = v33;
    v20 = v34;
    v19 = v35;
    v18 = v36;
    uu_uniq::opt_parsed(&v33, _ZN7uu_uniq7options11SKIP_FIELDS17h9bdd8e0819f91776E, g_58c550, &v12);
    if (!(v33[0] & 1))
    {
        uu_uniq::opt_parsed(&v33, _ZN7uu_uniq7options10SKIP_CHARS17hc7963560e8db47ceE, g_58c560, &v12);
        if (!(!(v33[0] & 1)))
            goto LABEL_4a17aa;
        v17 = v34;
        v3 = v35;
        v0 = 1;
        if (!(char)v12.get_flag(_ZN7uu_uniq7options8REPEATED17h35965832d783769eE, g_58c540))
            v0 = v12.contains_id(_ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E, g_58c500);
        v2 = v12.get_flag(_ZN7uu_uniq7options6UNIQUE17h6963093fe3050939E, g_58c570);
        if (!(char)v12.contains_id(_ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E, g_58c500))
            v12.contains_id(_ZN7uu_uniq7options5GROUP17hb84543885041a53aE, g_58c590);
        v1 = uu_uniq::get_delimiter(&v12);
        v51 = v12.get_flag(_ZN7uu_uniq7options5COUNT17hfdb54eb62c4501a6E, g_58c520);
        if (v34)
            v49 = v35;
        if (v34)
            v48 = 1;
        if (v17)
            v3 = v3;
        else
            v3 = v5;
        v5 = v3;
        if (v17)
            v6 = 1;
        uu_uniq::opt_parsed(&(char)v7, _ZN7uu_uniq7options11CHECK_CHARS17he6a6d54814012578E, g_58c510, &v12);
        v52 = v8;
        v53 = v52;
        if (!(v7 & 1))
        {
            v3 = v12.get_flag(_ZN7uu_uniq7options11IGNORE_CASE17h92139d62e74c348bE, g_58c530);
            v39 = v0;
            v40 = v2;
            v41 = 1;
            v45 = v1;
            v42 = v51;
            *((unsigned long long *)&v33[0]) = v48;
            v34 = v49;
            v35 = v6;
            v36 = v5;
            v37 = v52;
            v38 = v9;
            v43 = v4;
            v44 = v12.get_flag(_ZN7uu_uniq7options15ZERO_TERMINATED17h38aced8be2edf1e2E, g_58c580);
            if ((v51 & 1))
            {
                uucore::mods::locale::get_message(&v26, "uniq-error-counts-and-repeated-meaningless", 42);
                v10 = 1;
                v7 = v26;
                v9 = v27;
                v53 = (char)v7.new();
            }
            else
            {
                uu_uniq::open_input_file(&(char)v7, v21, v20);
                if ((v7 & 1))
                {
                    v54 = v8;
                    v53 = v54;
                }
                else
                {
                    uu_uniq::open_output_file(&(char)v7, v19, v18);
                    v55 = v8;
                    if ((v7 & 1))
                    {
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v54, v9);
                        v53 = v55;
                    }
                    else
                    {
                        v53 = v33.print_uniq(v54, v9, v55, v9);
                    }
                }
            }
        }
    }
    else
    {
LABEL_4a17aa:
        v53 = v34;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v12);
    return v53;
}
