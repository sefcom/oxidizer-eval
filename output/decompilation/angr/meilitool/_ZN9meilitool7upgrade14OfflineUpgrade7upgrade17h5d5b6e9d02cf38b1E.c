long long meilitool::upgrade::OfflineUpgrade::upgrade(struct_0 *a0)
{
    unsigned int v0;  // [bp-0x188]
    unsigned int v1;  // [bp-0x184]
    unsigned int v2;  // [bp-0x180]
    unsigned int v3;  // [bp-0x17c]
    unsigned int v4;  // [bp-0x178]
    unsigned int v5;  // [bp-0x174]
    char *v6;  // [bp-0x170], Other Possible Types: unsigned long, unsigned long long
    char *v7;  // [bp-0x170]
    unsigned long long v8;  // [bp-0x168]
    char *v9;  // [bp-0x160], Other Possible Types: unsigned long, unsigned long long
    int v10;  // [bp-0x158], Other Possible Types: unsigned long long
    int v11;  // [bp-0x158]
    int v12;  // [bp-0x158]
    char *v13;  // [bp-0x150], Other Possible Types: unsigned long
    unsigned long long v14;  // [bp-0x148]
    char *v15;  // [bp-0x140], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v16;  // [bp-0x138]
    char *v17;  // [bp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v18;  // [bp-0x128]
    char *v19;  // [bp-0x120], Other Possible Types: unsigned long
    unsigned long long v20;  // [bp-0x118]
    unsigned int v21;  // [bp-0x10c]
    unsigned long long v22;  // [bp-0x108]
    unsigned long long v23;  // [bp-0x108]
    unsigned long long v24;  // [bp-0x100]
    char *v25;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v26;  // [bp-0xf0]
    void* v27;  // [bp-0xe8]
    unsigned long long v28;  // [bp-0xd8]
    unsigned long long v29;  // [sp-0xd0]
    char *v30;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned long long v31;  // [sp-0xc0]
    void* v32;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned int v33;  // [bp-0xb0]
    unsigned long long v34;  // [bp-0xa8]
    unsigned long long v35;  // [bp-0xa0]
    unsigned int v36;  // [bp-0x98]
    unsigned long long v37;  // [bp-0x90]
    unsigned long long v38;  // [bp-0x88]
    unsigned int v39;  // [bp-0x80]
    char v40;  // [bp-0x78]
    char v41;  // [bp-0x60]
    char v42;  // [bp-0x48]
    unsigned long v44;  // r15
    unsigned long v45;  // r14
    unsigned int v47[4];  // rdx
    unsigned long long v48;  // r14
    char v49;  // r15b
    unsigned long long v50;  // r12
    void* v51;  // r12
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rax
    unsigned int v54;  // ebp
    unsigned int v55;  // r13d
    unsigned long v56;  // r15
    unsigned long v57;  // r14
    unsigned int v58;  // [bp-0xcc]

    v44 = &a0->field_18;
    v45 = &a0->field_24;
    if ((char)v44.eq(v45))
    {
        v6 = &g_9266c8;
        v8 = 1;
        v9 = 8;
        *((uint128_t *)&v10) = 0;
        std::io::stdio::_print(&v6);
        goto LABEL_75a49c;
    }
    if ((char)v44.gt(v45))
    {
        v6 = v44;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v9 = &a0->field_1c;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v13 = &a0->field_20;
        v14 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v15 = v45;
        v16 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v17 = &a0->field_28;
        v18 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v19 = &a0->field_2c;
        v20 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v28 = &g_9266d8;
        v29 = 7;
        v32 = 0;
        v30 = &v6;
        v31 = 6;
        v40.map_or_else(0, &a0->field_28, &v28);
        v40.msg();
        goto LABEL_75a863;
    }
    v28 = meilitool::upgrade::v1_10::v1_9_to_v1_10;
    v29 = 42949672961;
    v30 = 0;
    v31 = meilitool::upgrade::v1_11::v1_10_to_v1_11;
    v32 = 47244640257;
    v33 = 0;
    v34 = meilitool::upgrade::v1_12::v1_11_to_v1_12;
    v35 = 51539607553;
    v36 = 0;
    v37 = meilitool::upgrade::v1_12::v1_12_to_v1_12_3;
    v38 = 51539607553;
    v39 = 3;
    v47 = a0->field_18;
    v0 = (unsigned int)v47;
    v1 = a0->field_1c;
    v2 = a0->field_20;
    if (v0 == 1)
    {
        switch (v1)
        {
        case 9:
            v48 = 0;
            goto LABEL_75a67c;
        case 10:
            v48 = 1;
LABEL_75a679:
            goto LABEL_75a67c;
        case 11:
            v48 = 2;
            goto LABEL_75a679;
        case 12:
            if (v2 <= 2)
            {
                v48 = 3;
                goto LABEL_75a679;
            }
            else
            {
                if (v2 >= 8)
                    goto LABEL_75a7a4;
                v48 = 4;
                v49 = 1;
LABEL_75a67c:
                v3 = a0->field_24;
                v4 = a0->field_28;
                v5 = a0->field_2c;
                if (v3 == 1)
                {
                    if (v4 == 10)
                    {
                        v50 = 0;
                        break;
                    }
                    else if (v4 != 11)
                    {
                        if (v4 != 12)
                            goto LABEL_75a6cb;
                        v50 = 2;
                        if (v5 > 2)
                        {
                            v50 = 3;
                            if (v5 >= 8)
                                goto LABEL_75a6cb;
                            break;
                        }
                    }
                    else
                    {
                        v50 = 1;
                        break;
                    }
                    v6 = &v0;
                    v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v9 = &v1;
                    v10 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v13 = &v2;
                    v14 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v15 = &v3;
                    v16 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v17 = &v4;
                    v18 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v19 = &v5;
                    v20 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v22 = &g_926808;
                    v24 = 7;
                    v27 = 0;
                    v25 = &v6;
                    v26 = 6;
                    std::io::stdio::_print(&v22);
                    if (v49)
                    {
                        v6 = &g_926878;
                        v8 = 1;
                        v9 = 8;
                        *((uint128_t *)&v11) = 0;
                        std::io::stdio::_print(&v6);
                        v51 = meilisearch_types::versioning::create_version_file(a0->field_8, a0->field_10, v3, v4, v5).context();
                        if (!v51)
                        {
                            v6 = &g_926888;
                            v8 = 1;
                            v9 = 8;
                            *((uint128_t *)&v10) = 0;
                            std::io::stdio::_print(&v6);
LABEL_75a49c:
                            goto LABEL_0x75a866;
                        }
                    }
                    else
                    {
                        v22 = v48;
                        v24 = v50;
                        v25 = 0;
                        do
                        {
                            if (!((char)v22.spec_next() & 1))
                            {
                                v6 = &g_926888;
                                v8 = 1;
                                v9 = 8;
                                *((uint128_t *)&v10) = 0;
                                std::io::stdio::_print(&v6);
                                goto LABEL_75a49c;
                            }
                            if (v52 >= 4)
                                core::panicking::panic_bounds_check(v52, 4, &g_9268b8); /* do not return */
                            v53 = v52 * 3;
                            v54 = *((int *)&(&(char)v29)[8 * v53]);
                            v55 = (&v58)[2 * v53];
                            v21 = (&v30)[v53];
                            v56 = a0->field_8;
                            v57 = a0->field_10;
                            if ((&v28)[v53](v56, v57, v0, v1, v2))
                                break;
                            v6 = &g_926898;
                            v8 = 1;
                            v9 = 8;
                            *((uint128_t *)&v11) = 0;
                            std::io::stdio::_print(&v6);
                            v6 = &g_9268a8;
                            v8 = 1;
                            v9 = 8;
                            *((uint128_t *)&v12) = 0;
                            std::io::stdio::_print(&v6);
                            v51 = meilisearch_types::versioning::create_version_file(v56, v57, v54, v55, v21).context();
                        } while (!v51);
                    }
                }
                else
                {
LABEL_75a6cb:
                    v6 = &v3;
                    v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v9 = &v4;
                    v10 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v13 = &v5;
                    v14 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                    v15 = &g_9268d0;
                    v16 = <&T as core::fmt::Display>::fmt;
                    v17 = &g_9268e0;
                    v18 = <&T as core::fmt::Display>::fmt;
                    v22 = &g_9267a8;
                    v24 = 6;
                    v27 = 0;
                    v25 = &v6;
                    v26 = 5;
                    v42.map_or_else(0, v3, &v22);
                    v42.msg();
                    goto LABEL_75a863;
                }
            }
        default:
LABEL_75a7a4:
            v6 = &v0;
            v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v9 = &v1;
            v10 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v13 = &v2;
            v14 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v15 = &g_9268f0;
            v16 = <&T as core::fmt::Display>::fmt;
            v17 = &g_9268e0;
            v18 = <&T as core::fmt::Display>::fmt;
            v22 = &g_926748;
            v24 = 6;
            v27 = 0;
            v25 = &v6;
            v26 = 5;
            v41.map_or_else(0, v47, &v22);
LABEL_75a856:
            v41.msg();
LABEL_75a863:
            goto LABEL_0x75a866;
        }
    }
    else
    {
LABEL_75a7a4:
        v7 = &v0;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v9 = &v1;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v13 = &v2;
        v14 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v15 = &g_9268f0;
        v16 = <&T as core::fmt::Display>::fmt;
        v17 = &g_9268e0;
        v18 = <&T as core::fmt::Display>::fmt;
        v23 = &g_926748;
        v24 = 6;
        v27 = 0;
        v25 = &v7;
        v26 = 5;
        v41.map_or_else(0, v0, &v23);
        goto LABEL_75a856;
    }
    core::ptr::drop_in_place<meilitool::upgrade::OfflineUpgrade>(a0);
    return v51;
}
