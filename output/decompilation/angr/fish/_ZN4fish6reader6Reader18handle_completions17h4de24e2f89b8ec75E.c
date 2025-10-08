long long fish::reader::Reader::handle_completions(struct_1 *a0, unsigned long a1, void* a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x18c]
    void* v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x180]
    void* v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x170], Other Possible Types: unsigned int
    unsigned long long v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x170]
    int v7;  // [bp-0x168]
    unsigned int *v9;  // [bp-0x160]
    void* v10;  // [bp-0x158]
    unsigned long long v12;  // [bp-0x150], Other Possible Types: unsigned int
    unsigned int v13;  // [bp-0x150]
    unsigned long v14;  // [bp-0x140]
    char v15;  // [bp-0x138]
    unsigned long long v16;  // [bp-0x130]
    unsigned long v17;  // [bp-0x128]
    void* v18;  // [bp-0x120]
    unsigned long long v19;  // [bp-0x118]
    void* v20;  // [bp-0x110]
    int v21;  // [bp-0x108]
    unsigned long long v22;  // [bp-0x100]
    void* v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xf0]
    int v25;  // [bp-0xd8], Other Possible Types: char
    void* v26;  // [bp-0xd0]
    void* v27;  // [bp-0xc8], Other Possible Types: unsigned long
    char v28;  // [bp-0x98]
    unsigned long long v29;  // [bp-0x90]
    unsigned long long v30;  // [bp-0x88]
    unsigned long long v31;  // [bp-0x80]
    unsigned long long v32;  // [bp-0x78]
    unsigned int v33;  // [bp-0x70]
    int v34;  // [bp-0x68]
    int v35;  // [bp-0x58]
    int v36;  // [bp-0x48]
    unsigned long v37;  // [bp-0x38]
    unsigned long long v39;  // rbx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    void* v42;  // rax
    unsigned long v43;  // r15
    unsigned int v44;  // ebx
    struct_2 *v45;  // r12
    unsigned int v46;  // ebp
    unsigned long long v47;  // r14
    void* v48;  // r15
    unsigned int v49;  // eax
    unsigned long v50;  // rax
    struct_2 *v51;  // r14
    unsigned long v52;  // r12
    unsigned long v53;  // rdx
    unsigned int v55;  // eax
    unsigned long v56;  // rax
    unsigned long v57;  // rax
    void* v58;  // r14
    struct_3 *v59;  // rax
    struct_1 *v60;  // r13
    struct_0 *v61;  // rbx
    unsigned long long v62;  // r15
    struct_0 *v63;  // rbp
    struct_0 *v64;  // rax
    unsigned long v65;  // r13
    struct_0 *v66;  // r12
    unsigned short v71;  // ax
    void* v72;  // rcx
    char v73;  // cl
    unsigned long long v74;  // r15
    unsigned long v75;  // r15
    unsigned long long v78;  // r14
    unsigned long long v79;  // r12
    unsigned long long v80;  // rdx
    unsigned long v81;  // r14

    v39 = a0->field_30;
    v40 = a2.clone(a3);
    if (v41 >= v40 && v41 <= v39)
    {
        v15.to_vec(v40 * 4 + a0->field_28, v41 - v40);
        v42 = a0.rls();
        v43 = (long long)v42[16];
        if (v43 == 1)
        {
            (char)v25.clone((long long)v42[8]);
            a0.try_insert(a1, &(char)v25, v16, v17, a3);
            goto LABEL_14090fc;
        }
        if (!v43)
        {
            if (a2 >= a3)
            {
                a3 = a0->field_30;
                a2 = 0;
            }
            a0.flash(a1, a2, a3);
            v44 = 0;
        }
        else
        {
            v45 = (long long)v42[8];
            v46 = fish::reader::get_best_rank(v45, v43);
            v47 = v43 * 56;
            v39 = &v45->padding_0[v47];
            v48 = 0;
            do
            {
                v49 = v45 + v48.rank();
                if (v49 <= v46 && !(*((char *)(v45 + v48 + 50)) & 2))
                {
                    v0 = 0;
                    goto LABEL_1408f5c;
                }
                v48 += 56;
            } while (v47 != v48);
            v0 = v49 & 0xffffff00 | 1;
LABEL_1408f5c:
            v18 = 0;
            v19 = 8;
            v20 = 0;
            v50 = &v45[1].padding_0[4];
            v12 = v16;
            v14 = v17;
            v4 = (unsigned int)v14 & 0xffffff00 | 1;
            while (true)
            {
                v51 = v45;
                v52 = v50;
                if ((int)v51.rank() > v46)
                {
LABEL_1408fa0:
                    v45 = v52;
                    v50 = v52 + 56;
                    if (v45 == v39)
                        break;
                }
                else
                {
                    v53 = v51->field_32;
                    if ((char)v0 != (char)(((unsigned int)v53 & 65535 & 2) >> 1) || ((char)v53 & 2) && !fish::reader::reader_can_replace(v12, v14, v53))
                        goto LABEL_1408fa0;
                    v25.clone(v51);
                    v55 = v18.push(&v25, &g_14e1340);
                    if (((char)v5 & 1))
                    {
                        v4 = v55 & 0xffffff00 | v51->field_31 < 2;
                        v56 = v52 + 56;
                        if (v52 == v39)
                        {
                            v5 = v6;
                            v45 = v52;
                            v50 = v52;
                            if (v45 == v39)
                                break;
                        }
                        else
                        {
                            v5 = v6;
                            v45 = v52;
                            v50 = v56;
                            if (v45 == v39)
                                break;
                        }
                    }
                    else
                    {
                        v4 = 0;
                        v57 = v52 + 56;
                        if (v52 == v39)
                        {
                            v5 = v6;
                            v45 = v52;
                            v50 = v52;
                            if (v45 == v39)
                                break;
                        }
                        else
                        {
                            v5 = v6;
                            v45 = v52;
                            v50 = v57;
                            if (v45 == v39)
                                break;
                        }
                    }
                }
            }
            v4 = v5;
            v58 = v20;
            if (v58 == 1)
            {
                v59 = v19;
                *((uint128_t *)&v34) = v59->field_0;
                v37 = v59->field_30;
                *((uint128_t *)&v36) = v59->field_20;
                *((uint128_t *)&v35) = v59->field_10;
                *((unsigned long long *)&v59->field_0) = 0;
                *((unsigned long long *)((char *)&v59->field_0 + 8)) = 4;
                v59->field_10 = 0;
                *((unsigned long long *)&v59->field_20) = 4;
                *((unsigned int *)&v59->field_30) = 0;
                *((unsigned long long *)((char *)&v59->field_20 + 8)) = 0;
                a0.try_insert(a1, &v34, v16, v17, a3);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v18);
LABEL_14090fc:
                v44 = (unsigned int)v39 & 0xffffff00 | 1;
            }
            else
            {
                (char)v25.to_vec(4, 0);
                v60 = a0;
                v10 = v27;
                *((int128_t *)&v7) = *((int128_t *)&v25);
                if (((char)v4 & 1))
                {
                    v61 = v19;
                    v62 = v58 * 56;
                    if (v58)
                    {
                        v14 = v58;
                        v4 = v62;
                        v63 = &v61->padding_0[v62];
                        v64 = &v61[1].padding_0[4];
                        v24 = &g_14e12b0;
                        v65 = v61;
                        v12 = 0;
                        while (true)
                        {
                            v66 = v65;
                            v65 = v64;
                            fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v25, v66->field_8, v66->field_10);
                            v23 = v27;
                            *((int128_t *)&v21) = *((int128_t *)&v25);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
                            v10 = v23;
                            *((int128_t *)&v7) = (int128_t)v21;
                            v13 = v66->field_32;
                            v64 = v65 + 56;
                            if (v65 == v63)
                            {
                                v64 = v65;
                                if (v65 == v63)
                                    break;
                            }
                            else if (v65 == v63)
                            {
                                break;
                            }
                        }
                        v60 = a0;
                        v58 = v14;
                        v62 = v4;
                        v72 = v10;
                        if ((char)v0)
                            goto LABEL_1409324;
LABEL_14092d7:
                        if (!v72)
                        {
                            v1 = 0;
                            v2 = 4;
                            v3 = 0;
                            goto LABEL_14094ea;
                        }
                    }
                    else
                    {
                        v12 = 0;
                        v72 = v10;
                        if (!(char)v0)
                            goto LABEL_14092d7;
LABEL_1409324:
                        if (v72 <= v17)
                            goto LABEL_1409459;
                    }
                    v60.completion_insert(a1, v9, v73, a3, v71 | v12, 0);
                    (char)v25.to_vec(v60->field_28, v60->field_30);
                    v23 = v27;
                    *((int128_t *)&v21) = *((int128_t *)&v25);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(&v60->padding_80)[1]);
                    *((void* *)((char *)&v60->field_758 + 8)) = v23;
                    *((int128_t *)&(&v60->padding_80)[1]) = (int128_t)v21;
                    *((unsigned long long *)&v60->padding_770[192]) = v60->field_78;
                    if (v58)
                    {
                        do
                        {
                            v74 = v62;
                            v61->field_32 = v61->field_32 & 1021;
                            (char)v25.splice(v61, 0, v10, 4, 4);
                            core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&(char)v25);
                            v61 = &v61[1].padding_0[4];
                            v75 = v74 - 56;
                            v62 = v75;
                        } while (v74 != 56);
                    }
                    v1 = 0;
                    v2 = 4;
                    v3 = 0;
                    if ((char)v0)
                    {
                        v1.spec_extend(v9, (char *)v9 + 0x4 * v10);
                        goto LABEL_1409477;
                    }
                    else
                    {
LABEL_14094ea:
                        if (v10 + v17 < 10)
                        {
                            v1.spec_extend(v16, v16 + v17 * 4);
                            v1.spec_extend(v9, (char *)v9 + 0x4 * v10);
                            goto LABEL_1409477;
                        }
                        else
                        {
                            v1.push((unsigned int)fish::common::get_ellipsis_char());
                            v27 = v17;
                            *((int128_t *)&v25) = *((int128_t *)&v15);
                            v28.add(&(char)v25, v9.index(v10, &g_14e12e0), v41);
                            if (v30 < 9)
                                core::panicking::panic_const::panic_const_sub_overflow(&g_14e12f8); /* do not return */
                            v78 = v29.index(v30, v30 - 9, &g_14e1310);
                            v33 = 47;
                            v31 = v78;
                            v32 = v41;
                            v26 = 0;
                            (char)v21.fold(&v31, &(char)v25);
                            v79 = v22;
                            if (!v79)
                                core::option::unwrap_failed(&g_14e1328); /* do not return */
                            if ((long long)v21)
                            {
                                v1.push(47);
                                v80 = v79 + v23 * 4;
                            }
                            else
                            {
                                v80 = v78 + v41 * 4;
                                v79 = v78;
                            }
                            v1.spec_extend(v79, v80);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v28);
                            goto LABEL_1409477;
                        }
                    }
                }
                else
                {
LABEL_1409459:
                    v1 = 0;
                    v2 = 4;
                    v3 = 0;
LABEL_1409477:
                    v81 = &v60->padding_80[224];
                    v81.set_prefix(4, 0, 1);
                    v81.set_completions(v19, v20, 1);
                    v60.pager_selection_changed();
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v18);
                    v44 = 0;
                }
            }
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v15);
        return v44;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e1298); /* do not return */
}
