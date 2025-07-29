long long uu_tr::operation::Sequence::solve_set_characters(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7)
{
    char v0;  // [bp-0x229]
    int v1;  // [bp-0x228]
    unsigned long long v2;  // [bp-0x220]
    unsigned long long v3;  // [bp-0x218]
    int v4;  // [bp-0x208], Other Possible Types: char, unsigned long long
    char v5;  // [bp-0x200], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v7;  // [bp-0x1f0], Other Possible Types: char
    unsigned long v8;  // [bp-0x1e8]
    unsigned long long v9;  // [bp-0x1e0]
    int v10;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x1d0]
    int v12;  // [bp-0x1cc]
    void* v13;  // [bp-0x1c8]
    int v14;  // [bp-0x1b8]
    unsigned long long v15;  // [bp-0x1b0]
    unsigned long long v16;  // [bp-0x1a8]
    char v17;  // [bp-0x198]
    int v18;  // [bp-0x198]
    unsigned long long v19;  // [bp-0x188]
    int v20;  // [bp-0x180], Other Possible Types: char
    unsigned long long v21;  // [bp-0x170]
    unsigned long long v22;  // [bp-0x168]
    char *v23;  // [bp-0x160]
    unsigned short v24;  // [bp-0x158]
    char v25;  // [bp-0x156]
    unsigned long v26;  // [bp-0x150]
    unsigned long long v27;  // [bp-0x148]
    unsigned long long v28;  // [bp-0x140]
    char *v29;  // [bp-0x138]
    void* v30;  // [bp-0x130]
    void* v31;  // [bp-0x120]
    unsigned long long v32;  // [bp-0x110]
    unsigned long long v33;  // [bp-0x108]
    unsigned long long v34;  // [bp-0x100]
    void* v35;  // [bp-0xf8]
    void* v36;  // [bp-0xe8]
    unsigned long long v37;  // [bp-0xd8]
    unsigned long long v38;  // [bp-0xd0]
    unsigned long long v39;  // [bp-0xc8]
    unsigned long long v40;  // [bp-0xc0]
    unsigned long long v41;  // [bp-0xb8]
    void* v42;  // [bp-0xb0]
    void* v43;  // [bp-0xa0]
    unsigned long long v44;  // [bp-0x90]
    unsigned long long v45;  // [bp-0x88]
    void* v46;  // [bp-0x80]
    void* v47;  // [bp-0x70]
    unsigned long long v48;  // [bp-0x60]
    unsigned long long v49;  // [bp-0x58]
    void* v50;  // [bp-0x50]
    void* v51;  // [bp-0x40]
    unsigned int v52;  // eax
    unsigned long long v53;  // rsi
    unsigned int v54;  // eax
    unsigned long long v55;  // r14
    unsigned long long v56;  // r14
    unsigned long long v57;  // rax
    unsigned long long v58;  // r14
    unsigned long long v59;  // r15
    unsigned long long v60;  // rax
    char *v61;  // rdx
    char *v62;  // rdx
    void* v63;  // r12
    unsigned long long v64;  // rax
    void* v65;  // rax
    unsigned long long v66;  // r13
    unsigned long long v67;  // r12
    unsigned int v68;  // ecx
    void* v69;  // rdx
    unsigned int v70;  // edx
    int v71;  // xmm0

    v4.from_str(a1, a2);
    v52 = *((int *)&v4);
    if (v52 != 12)
    {
        memcpy(&(char)v12, &(char)v6, 16);
        *((int128_t *)&v10) = (int128_t)v4;
        *((int128_t *)&a0->field_18[0]) = (int128_t)v12;
        *((int128_t *)&a0->field_c) = (int128_t)v10;
        *((unsigned int *)&a0->padding_1[7]) = v52;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return a0;
    }
    v53 = *((long long *)&v7);
    *((int128_t *)&v14) = *((int128_t *)&v5);
    v16 = v53;
    if (v15.fold(v16 * 16 + v15))
    {
        *((unsigned int *)&a0->padding_1[7]) = 3;
        goto LABEL_4b2126;
    }
    else
    {
        v4.from_str(a3, a4);
        v54 = *((int *)&v4);
        if (v54 == 12)
        {
            v55 = *((long long *)&v7);
            *((int128_t *)&v1) = *((int128_t *)&v5);
            v3 = v55;
            v56 = v3 * 16 + v2;
            if (v2.fold(v56) > 1)
            {
                *((unsigned int *)&a0->padding_1[7]) = 2;
                goto LABEL_4b20eb;
            }
            else
            {
                v67 = a7;
                if ((char)v67)
                {
                    v4 = v2;
                    v5 = v56;
                    if (!v4.any())
                        goto LABEL_4b2187;
                    *((unsigned int *)&a0->padding_1[7]) = 6;
LABEL_4b20eb:
                    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                    goto LABEL_4b2598;
                }
                else
                {
LABEL_4b2187:
                    v40 = v15;
                    v41 = v16 * 16 + v15;
                    v42 = 0;
                    v43 = 0;
                    (char)v18.from_iter(&v40, &g_5912f0);
                    if (a5)
                    {
                        v24 = 0;
                        v25 = 255;
                        v23 = &(char)v18;
                        v4.from_iter(&v23, &g_5912f0);
                        ::0x4ad730::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v18);
                        v19 = v6;
                        memcpy(&v17, &v4, 16);
                    }
                    v66 = v19;
                    v48 = v2;
                    v49 = v3 * 16 + v2;
                    v50 = 0;
                    v51 = 0;
                    v57 = v48.iter_fold();
                    *((int *)&v26) = (v57 <= v66 ? v66 - v57 : 0);
                    v27 = v2;
                    v28 = v3 * 16 + v2;
                    v29 = &v26;
                    v4.from_iter(&v27, &g_5912f0);
                    ::0x4ad830::core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&(char)v1);
                    v58 = v6;
                    v3 = v58;
                    *((int128_t *)&v1) = *((int128_t *)&v4);
                    v59 = v2;
                    v10 = v59;
                    v11 = v3 * 16 + v10;
                    v13 = 0;
                    v60 = v10.next();
                    if (v61)
                    {
                        v22 = v66;
                        do
                        {
                            if (!(*(v62) == 4))
                                continue;
                            if (v60)
                            {
                                v32 = v2;
                                v33 = v3 * 16 + v2;
                                v34 = v60;
                                v30 = 0;
                                v31 = 0;
                                v63 = v30.iter_fold();
                            }
                            else
                            {
                                v63 = 0;
                            }
                            v4 = v15;
                            v5 = v16 * 16 + v15;
                            v6 = 0;
                            do
                            {
                                do
                                {
                                    v64 = v4.next();
                                    if (!v61)
                                    {
                                        *((unsigned int *)&a0->padding_1[7]) = 7;
                                        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                                        goto LABEL_4b258b;
                                    }
                                } while (*(v61) != 4);
                                if (!v64)
                                {
                                    v65 = 0;
                                }
                                else
                                {
                                    v37 = v15;
                                    v38 = v16 * 16 + v15;
                                    v39 = v64;
                                    v35 = 0;
                                    v36 = 0;
                                    v65 = v35.iter_fold();
                                }
                            } while (v65 != v63);
                            v67 &= 4294967295;
                            v66 = v22;
                            v60 = v10.next();
                            v62 = v61;
                        } while (v61);
                        v59 = v2;
                        v58 = v3;
                    }
                    v44 = v59;
                    v45 = v58 * 16 + v59;
                    v46 = 0;
                    v47 = 0;
                    v20.from_iter(&v44, &g_5912f0);
                    v10.clone(&v20);
                    if (v13 >= 2)
                    {
                        if (v13 < 21)
                            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v11, v13, 1);
                        else
                            core::slice::sort::unstable::ipnsort(v11, v13, &v0);
                    }
                    v10.dedup_by();
                    v4 = v15;
                    v5 = v16 * 16 + v15;
                    if ((a5 & v4.any() & (char)v67))
                    {
                        v68 = 9;
                        if (!(v13 > 1 || v21 > v66))
                            goto LABEL_4b25a7;
LABEL_4b2564:
                        *((unsigned int *)&a0->padding_1[7]) = v68;
                        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                        ::0x4ad730::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
                        ::0x4ad730::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20);
LABEL_4b258b:
                        ::0x4ad730::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v18);
LABEL_4b2598:
                        ::0x4ad830::core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&(char)v1);
                    }
                    else
                    {
LABEL_4b25a7:
                        if (!v19 <= v21 && !a6)
                        {
                            v69 = v3 * 16 + v2;
                            if (!!v69 - 16 && !!v3 && (char)v69[16] == 4)
                            {
                                v70 = (char)v69[15];
                                v68 = 8;
                                if (v70 == 10 || v70 == 6)
                                    goto LABEL_4b2564;
                            }
                        }
                        if (a6)
                            (char)v18.truncate(v21);
                        v6 = v19;
                        v4 = v18;
                        v9 = v21;
                        v7 = v20;
                        *((void*)&a0->field_0) = v18;
                        a0->field_18[1] = v8;
                        a0->field_28 = v9;
                        *((unsigned long long *)&a0->padding_d[3]) = v6;
                        a0->field_18[0] = (long long)v7;
                        ::0x4ad730::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
                        ::0x4ad830::core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&(char)v1);
                    }
                }
            }
        }
        else
        {
            v71 = (int128_t)v4;
            *((int128_t *)&v12) = (int128_t)(&v4)[16];
            v10 = v71;
            *((int128_t *)&a0->field_18[0]) = (int128_t)(&v10)[12];
            *((int128_t *)&a0->field_c) = (int128_t)v10;
            *((unsigned int *)&a0->padding_1[7]) = v54;
LABEL_4b2126:
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        }
    }
    ::0x4ad830::core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&(char)v14);
    return a0;
}
