long long uu_ptx::create_word_set(unsigned long a0, struct_2 *a1, struct_0 *a2, unsigned long long a3)
{
    char v0;  // [bp-0x24c]
    char v1;  // [bp-0x24b]
    char v2;  // [bp-0x24a]
    char v3;  // [bp-0x249]
    int v4;  // [bp-0x248]
    unsigned long long v5;  // [bp-0x240]
    unsigned long long v6;  // [bp-0x238]
    void* v7;  // [bp-0x228]
    unsigned long long v8;  // [bp-0x220]
    unsigned long long v9;  // [bp-0x218]
    unsigned long long v10;  // [bp-0x210]
    struct_1 *v11;  // [bp-0x208]
    unsigned long long v12;  // [bp-0x200]
    unsigned long v13;  // [bp-0x1f8]
    unsigned long long v14[3];  // [bp-0x1f0]
    unsigned long v15;  // [bp-0x1e8]
    unsigned long v16;  // [bp-0x1e0]
    unsigned long long v17;  // [bp-0x1d8]
    void* v18;  // [bp-0x1d0]
    void* v19;  // [bp-0x1c0]
    int v20;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v21;  // [bp-0x1b0]
    unsigned long long v22;  // [bp-0x1a8]
    int v23;  // [bp-0x1a0]
    char v24;  // [bp-0x198]
    unsigned long long v25;  // [bp-0x190]
    char v26;  // [bp-0x188], Other Possible Types: unsigned long long
    void* v27;  // [bp-0x180]
    char v28;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x170]
    int v30;  // [bp-0x168]
    int v31;  // [bp-0x158]
    int v32;  // [bp-0x148]
    unsigned long long v33;  // [bp-0x138]
    char v34;  // [bp-0x128]
    int v35;  // [bp-0x128]
    int v36;  // [bp-0x118]
    unsigned long long v37;  // [bp-0x110]
    char v38;  // [bp-0x108]
    char v39;  // [bp-0xf8]
    char v40;  // [bp-0xe8]
    char v41;  // [bp-0xd8]
    unsigned long long v42;  // [bp-0xc8]
    unsigned long v43;  // [bp-0xc0]
    unsigned long v44;  // [bp-0xb8]
    unsigned long long v45;  // [bp-0xb0]
    char v46;  // [bp-0xb0]
    int v47;  // [bp-0xa8]
    char v48;  // [bp-0x90]
    int v49;  // [bp-0x70]
    unsigned long long v50;  // [bp-0x60]
    char v51;  // [bp-0x58]
    struct_3 *v53;  // rdx
    unsigned long long v54[3];  // r14
    unsigned long long v55[3];  // rax
    unsigned long v56;  // r15
    unsigned long v57;  // r13
    int v58;  // xmm0
    unsigned long long v59;  // r15
    unsigned long long v60;  // r13
    unsigned long long v61;  // rax

    v34.new(a2->field_8, a2->field_10);
    v48.unwrap(&v34, &g_651878);
    v34.new(a1->field_38, a1->field_40);
    v46.unwrap(&v34, &g_651890);
    v18 = 0;
    v19 = 0;
    v51.iter(a3);
    v8 = v51.next();
    if (v8)
    {
        v3 = a1->field_5a;
        v0 = a1->field_5c;
        v2 = a2->field_78;
        v1 = a2->field_79;
        v16 = &a2->padding_18;
        v15 = &a2->padding_18[48];
        do
        {
            if (v53->field_10)
            {
                v13 = v53->field_30;
                v54 = v53->field_8;
                v12 = &v54[v53->field_10];
                v55 = v54 + 1;
                v7 = 0;
                while (true)
                {
                    v14[0] = v55;
                    v34.find_at(v45, (long long)v47, v54[1], v54[2]);
                    v9 = (long long)v35;
                    v10 = v9;
                    if (v9)
                    {
                        v10 = (long long)v36;
                        v9 = v37;
                    }
                    v56 = v54[1];
                    v57 = v54[2];
                    v20.find_iter(&v48, v56, v57);
                    v42 = (long long)v31;
                    memcpy(&v41, &v30, 16);
                    memcpy(&v40, &v28, 16);
                    v58 = (int128_t)v20;
                    memcpy(&v39, &v26, 16);
                    memcpy(&v38, &v24, 16);
                    *((int128_t *)&v36) = *((int128_t *)&v22);
                    v35 = v58;
                    v43 = v56;
                    v44 = v57;
                    v17 = v13 + v7;
                    while (true)
                    {
                        v20.advance(&v38, v42, &v35);
                        if ((int)v20 != 1)
                            break;
                        v59 = v21;
                        v60 = v22;
                        if ((v3 & 1) && v59 == v10 && v60 == v9)
                            continue;
                        v61 = v59.get(v60, v54[1], v54[2]);
                        if (!v61)
                            core::str::slice_error_fail(v54[1], v54[2], v59, v60, &g_6518a8); /* do not return */
                        v20.to_vec(v61, a2);
                        v6 = v22;
                        *((int128_t *)&v4) = (int128_t)v20;
                        if ((v2 & 1) && !v16.get_inner(&(char)v4) || (v1 & 1) && v15.get_inner(&(char)v4))
                        {
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                        }
                        else
                        {
                            if ((v0 & 1))
                            {
                                alloc::str::<impl str>::to_uppercase(&v20, v5, v6);
                                core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                                v6 = v22;
                                memcpy(&(char)v4, &v20, 16);
                            }
                            v33 = v6;
                            memcpy(&v32, &(char)v4, 16);
                            v49.clone(v8);
                            v22 = v33;
                            v20 = v32;
                            v26 = v17;
                            v27 = v7;
                            v28 = v59;
                            v29 = v60;
                            v25 = v50;
                            v23 = v49;
                            v18.insert(&v20);
                        }
                    }
                    core::ptr::drop_in_place<regex::regex::string::Matches>(&v35);
                    v7 += 1;
                    v54 = v14;
                    v55 = v54 + 1;
                    if (v54 == v12)
                    {
                        v55 = v54;
                        if (v54 == v12)
                            break;
                    }
                    else if (v54 == v12)
                    {
                        break;
                    }
                }
            }
            v8 = v51.next();
        } while (v8);
    }
    v11->field_10 = 0;
    v11->field_0 = *((int128_t *)&v18);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v46);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v48);
    return v11;
}
