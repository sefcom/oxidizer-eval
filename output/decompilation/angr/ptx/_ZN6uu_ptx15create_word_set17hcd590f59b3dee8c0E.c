long long uu_ptx::create_word_set(unsigned long a0, struct_3 *a1, struct_0 *a2, unsigned long long a3)
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
    struct_2 *v11;  // [bp-0x208]
    unsigned long v12;  // [bp-0x200]
    unsigned long v13;  // [bp-0x1f8]
    unsigned long v14;  // [bp-0x1f0]
    unsigned long long v15;  // [bp-0x1e8]
    void* v16;  // [bp-0x1e0]
    void* v17;  // [bp-0x1d0]
    unsigned long long v18;  // [bp-0x1c8]
    struct_1 *v19;  // [bp-0x1c0]
    int v20;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v21;  // [bp-0x1b0]
    unsigned long long v22;  // [bp-0x1a8]
    int v23;  // [bp-0x1a0]
    char v24;  // [bp-0x198]
    unsigned long long v25;  // [bp-0x190]
    char v26;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x180]
    char v28;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x170]
    int v30;  // [bp-0x168]
    int v31;  // [bp-0x158]
    int v32;  // [bp-0x148], Other Possible Types: char
    int v33;  // [bp-0x148]
    int v34;  // [bp-0x138], Other Possible Types: char
    unsigned long long v35;  // [bp-0x130]
    char v36;  // [bp-0x128]
    char v37;  // [bp-0x118]
    char v38;  // [bp-0x108]
    char v39;  // [bp-0xf8]
    unsigned long long v40;  // [bp-0xe8]
    unsigned long v41;  // [bp-0xe0]
    unsigned long v42;  // [bp-0xd8]
    int v43;  // [bp-0xc8]
    unsigned long long v44;  // [bp-0xb8]
    unsigned long long v45;  // [bp-0xb0]
    int v47;  // [bp-0xa8]
    char v48;  // [bp-0x90]
    int v49;  // [bp-0x70]
    unsigned long long v50;  // [bp-0x60]
    int v51;  // [bp-0x58]
    char v52;  // [bp-0x48]
    unsigned long long v53;  // [bp-0x38]
    struct_1 *v55;  // rdx
    unsigned long long v56[3];  // rax
    unsigned long long v57[3];  // r12
    unsigned long v58;  // rbx
    unsigned long v59;  // r15
    int v60;  // xmm0
    unsigned long long v61;  // rbx
    unsigned long long v62;  // r15
    unsigned long long v63;  // rax

    v32.new(a2->field_8, a2->field_10);
    v48.unwrap(&v32, &g_73b640);
    v32.new(a1->field_38, a1->field_40);
    (char)v45.unwrap(&v32, &g_73b658);
    v16 = 0;
    v17 = 0;
    v32.iter(a3);
    v53 = *((long long *)&v36);
    memcpy(&v52, &v34, 16);
    v51 = v32;
    v3 = a1->field_5a;
    v0 = a1->field_5c;
    v2 = a2->field_78;
    v1 = a2->field_79;
    v14 = &a2->padding_18;
    v13 = &a2->padding_18[48];
    while (true)
    {
        v8 = v51.next();
        if (!v8)
        {
            v11->field_10 = 0;
            v11->field_0 = *((int128_t *)&v16);
            core::ptr::drop_in_place<regex::regex::string::Regex>(&(char)v45);
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v48);
            return v11;
        }
        v12 = v55->field_30;
        v18 = v55.into_iter();
        v19 = v55;
        v56 = v18.next();
        if (v56)
        {
            v57 = v56;
            v7 = 0;
            do
            {
                v32.find_at(v45, (long long)v47, v57[1], v57[2]);
                v9 = (long long)v32;
                v10 = v9;
                if (v9)
                {
                    v10 = (long long)v34;
                    v9 = v35;
                }
                v58 = v57[1];
                v59 = v57[2];
                v20.find_iter(&v48, v58, v59);
                v40 = (long long)v31;
                memcpy(&v39, &v30, 16);
                memcpy(&v38, &v28, 16);
                v60 = *((int128_t *)&v20);
                memcpy(&v37, &v26, 16);
                memcpy(&v36, &v24, 16);
                *((int128_t *)&v34) = *((int128_t *)&v22);
                v33 = v60;
                v41 = v58;
                v42 = v59;
                v15 = v12 + v7;
                while (true)
                {
                    v20.advance(&v36, v40, &v33);
                    if (!(v20 & 1))
                        break;
                    v61 = v21;
                    v62 = v22;
                    if (!(!((v3 & 1)) || v61 != v10 || !v62.eq(v9)))
                        continue;
                    v63 = v61.get(v62, v57[1], v57[2]);
                    if (!v63)
                        core::str::slice_error_fail(v57[1], v57[2], v61, v62, &g_73b670); /* do not return */
                    v20.to_vec(v63, a2);
                    v6 = v22;
                    *((int128_t *)&v4) = *((int128_t *)&v20);
                    if ((v2 & 1) && !v14.get_inner(&(char)v4) || (v1 & 1) && v13.get_inner(&(char)v4))
                    {
                        ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                    }
                    else
                    {
                        if ((v0 & 1))
                        {
                            alloc::str::<impl str>::to_uppercase(&v20, v5, v6);
                            ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                            v6 = v22;
                            memcpy(&(char)v4, &v20, 16);
                        }
                        v44 = v6;
                        memcpy(&v43, &(char)v4, 16);
                        v49.clone(v8);
                        v22 = v44;
                        v20 = v43;
                        v26 = v15;
                        v27 = v7;
                        v28 = v61;
                        v29 = v62;
                        v25 = v50;
                        v23 = v49;
                        v16.insert(&v20);
                    }
                }
                core::ptr::drop_in_place<regex::regex::string::Matches>(&v33);
                v7 += 1;
                v57 = v18.next();
            } while (v57);
        }
    }
}
