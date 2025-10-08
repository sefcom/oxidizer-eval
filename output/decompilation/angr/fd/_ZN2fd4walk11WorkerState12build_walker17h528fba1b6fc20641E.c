long long fd::walk::WorkerState::build_walker(void* a0, struct_0 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x358], Other Possible Types: char *, unsigned long long
    unsigned long long v1;  // [bp-0x350]
    unsigned long long v2;  // [bp-0x348]
    char v3;  // [sp-0x330], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x330]
    unsigned long long v5;  // [bp-0x330]
    unsigned long long v6;  // [bp-0x328]
    char v7;  // [bp-0x320]
    int v8;  // [bp-0x320]
    int v9;  // [bp-0x310]
    unsigned long long v10;  // [bp-0x300]
    int v11;  // [sp-0x2f8]
    unsigned long long v12;  // [bp-0x2f0]
    int v13;  // [sp-0x2e8]
    int v14;  // [sp-0x2d8]
    int v15;  // [bp-0x2c8], Other Possible Types: unsigned long long
    int v16;  // [bp-0x2b8]
    int v17;  // [bp-0x2a8]
    unsigned long long v18;  // [bp-0x298]
    char v19;  // [bp-0x280], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x278]
    unsigned long long v21;  // [bp-0x270]
    unsigned long long v22;  // [bp-0x268]
    unsigned long long v23;  // [sp-0x260]
    char *v24;  // [sp-0x258]
    unsigned long long v25;  // [sp-0x250]
    void* v26;  // [sp-0x248]
    char *v27;  // [bp-0x238]
    unsigned long long v28;  // [bp-0x230]
    int v29;  // [bp-0x228], Other Possible Types: char
    unsigned long long v30;  // [bp-0x218]
    unsigned long long v31;  // [bp-0x210]
    unsigned long long v32;  // [bp-0x208]
    int v33;  // [bp-0x200]
    int v34;  // [bp-0x1f0]
    int v35;  // [bp-0x1e0]
    int v36;  // [bp-0x1d0]
    int v37;  // [bp-0x1c0]
    unsigned long long v38;  // [bp-0x1b0]
    char v39;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x1a0]
    int v41;  // [bp-0x198]
    int v42;  // [bp-0x188]
    int v43;  // [bp-0x178]
    int v44;  // [bp-0x168]
    int v45;  // [bp-0x158]
    char v46;  // [bp-0x148]
    char v47;  // [bp-0x110]
    char v48;  // [bp-0x10f]
    char v49;  // [bp-0x10e]
    char v50;  // [bp-0x10d]
    char v51;  // [bp-0x10c]
    char v52;  // [bp-0x10b]
    char v53;  // [bp-0x109]
    unsigned long v54;  // [bp-0xf8]
    char v55;  // [bp-0xd0]
    int v56;  // [bp-0xb8], Other Possible Types: char
    int v57;  // [bp-0xa8]
    int v58;  // [bp-0x98]
    int v59;  // [bp-0x88]
    int v60;  // [bp-0x78]
    int v61;  // [bp-0x68]
    int v62;  // [bp-0x58]
    char v63;  // [bp-0x48]
    unsigned long v65;  // rcx
    char v66;  // al
    char v67;  // al
    struct_1 *v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // r14
    unsigned long long v71;  // r14
    unsigned long v72;  // r14
    unsigned long long v73;  // r14
    unsigned long v74;  // r15

    if (!v65)
        core::panicking::panic_bounds_check(0, 0, &g_802688); /* do not return */
    v39.build_overrides(a1->field_58, a1->field_60, a2);
    if ((char)(((0 ^ v39) & (0 ^ -(v39))) >> 63))
    {
        *((unsigned long long *)&a0[8]) = v32;
        *((unsigned long long *)a0) = 2;
        return v40;
    }
    v38 = *((long long *)&v46);
    v37 = v45;
    v36 = v44;
    v35 = v43;
    v34 = v42;
    v33 = v41;
    v31 = v39;
    v32 = v40;
    v39.new(a2);
    v47 = a1->field_1da;
    v48 = a1->field_1db;
    if (a1->field_1dc == 1)
        v66 = 1;
    v49 = v66;
    v67 = a1->field_1dd;
    v51 = v67;
    v50 = v67;
    v52 = v67;
    v53 = a1->field_1de;
    v18 = v38;
    v17 = v37;
    v16 = v36;
    v15 = v35;
    v14 = v34;
    v13 = v33;
    *((int128_t *)&v11) = *((int128_t *)&v31);
    v68 = v39.overrides(&(char)v11);
    v68->field_d0 = a1->field_1e0;
    v68->field_d1 = a1->field_1e1;
    v68->field_0 = a1->field_0;
    if (v48)
        v45.add_custom_ignore_filename();
    if (a1->field_1df)
    {
        etcetera::base_strategy::choose_native_strategy(&v29);
        if (*((long long *)&v29) != 0x8000000000000000)
        {
            v2 = v30;
            v0 = v29;
            (char)v11.config_dir(&(char)v0);
            v3.join(v12, (long long)v13, "fdignorefailed to spawn thread/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/scoped.rsinternal error: entered unreachable code: Encountered file system entry without a file name. This should only happen for paths like 'foo/bar/..' o", 2);
            v19.join(v6, *((long long *)&v7), "ignorefailed to spawn thread/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/scoped.rsinternal error: entered unreachable code: Encountered file system entry without a file name. This should only happen for paths like 'foo/bar/..' or ", 6);
            core::mem::drop(v3, v6);
            core::mem::drop((long long)v11, v12);
            if ((char)v20.is_file(v21))
            {
                v3.add_ignore(&v39, &v19);
                v4 = v3;
                v5 = v3;
                if (v4 != 9)
                {
                    v4 = v3;
                    v5 = v3;
                    if (v4)
                    {
                        v15 = v10;
                        v14 = v9;
                        v13 = v8;
                        *((int128_t *)&v11) = *((int128_t *)&v5);
                        v27 = &(char)v11;
                        v28 = <ignore::Error as core::fmt::Display>::fmt;
                        v22 = &g_802648;
                        v23 = 2;
                        v26 = 0;
                        v24 = &v27;
                        v25 = 1;
                        v55.map_or_else(0, a2, &v22);
                        fd::error::print_error(&v55);
                        core::ptr::drop_in_place<ignore::Error>(&(char)v11);
                        v4 = v3;
                        v5 = v3;
                    }
                }
                if (v5 != 9 && (!v3 || (unsigned int)v3 == 9))
                    core::ptr::drop_in_place<ignore::Error>(&v3);
            }
            else
            {
                core::mem::drop(v19, v20);
                v4 = v3;
            }
            v3 = v4;
            core::ptr::drop_in_place<fd::hyperlink::PathUrl>(v0, v1);
        }
    }
    if (a1->field_78)
    {
        v69 = a1->field_70;
        v70 = a1->field_78 * 24;
        do
        {
            v71 = v70;
            v3.add_ignore(&v39, v69);
            v4 = v3;
            if (v4 != 9)
            {
                v4 = v3;
                if (v4)
                {
                    v15 = v10;
                    v14 = v9;
                    v13 = v8;
                    *((int128_t *)&v11) = *((int128_t *)&v4);
                    v0 = &(char)v11;
                    v1 = <ignore::Error as core::fmt::Display>::fmt;
                    v22 = &g_802668;
                    v23 = 2;
                    v26 = 0;
                    v24 = &v0;
                    v25 = 1;
                    v63.map_or_else(0, a2, &v22);
                    fd::error::print_error(&v63);
                    core::ptr::drop_in_place<ignore::Error>(&(char)v11);
                    v4 = v3;
                }
            }
            if (v4 != 9 && (!v3 || (unsigned int)v3 == 9))
                core::ptr::drop_in_place<ignore::Error>(&v3);
            v69 += 24;
            v72 = v71 - 24;
            v70 = v72;
        } while (v71 != 24);
    }
    v73 = v65 * 24 - 24;
    for (v74 = a2 + 24; v73; v74 += 24)
    {
        v73 -= 24;
        v39.add(v74);
    }
    v54 = a1->field_1a0;
    v56.build_parallel(&v39);
    a0[96] = v62;
    a0[80] = v61;
    a0[64] = v60;
    a0[48] = v59;
    a0[32] = v58;
    a0[16] = v57;
    *(a0) = v56;
    return core::ptr::drop_in_place<ignore::walk::WalkBuilder>(&v39);
}
