long long uu_tr::operation::Sequence::solve_set_characters(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7)
{
    unsigned long long v0;  // [bp-0x190]
    int v1;  // [bp-0x188], Other Possible Types: char, unsigned long long
    unsigned int v2;  // [bp-0x184]
    void* v3;  // [bp-0x180], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x178], Other Possible Types: void*, unsigned long long
    int v5;  // [bp-0x170], Other Possible Types: char
    void* v6;  // [bp-0x168]
    void* v7;  // [bp-0x160]
    char v8;  // [bp-0x151]
    char *v9;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned short v10;  // [bp-0x148]
    void* v11;  // [bp-0x148]
    char v12;  // [bp-0x146]
    void* v13;  // [bp-0x140], Other Possible Types: unsigned long long
    char *v14;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x130]
    int v16;  // [bp-0x128], Other Possible Types: char
    unsigned long long v17;  // [bp-0x120]
    void* v18;  // [bp-0x118]
    void* v19;  // [bp-0x110]
    unsigned long long v20;  // [bp-0x108]
    void* v21;  // [bp-0x100]
    char v22;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0xf0]
    void* v24;  // [bp-0xe8]
    unsigned long long v25;  // [bp-0xe0]
    unsigned long v26;  // [bp-0xd8]
    void* v27;  // [bp-0xd0], Other Possible Types: char
    void* v28;  // [bp-0xc0]
    unsigned long long v29;  // [bp-0xb0]
    void* v30;  // [bp-0xa8]
    unsigned long long v31;  // [bp-0xa0]
    void* v32;  // [bp-0x98]
    void* v33;  // [bp-0x88]
    unsigned long long v34;  // [bp-0x78]
    unsigned long long v35;  // [bp-0x70]
    unsigned long long v36;  // [bp-0x68]
    unsigned long long v37;  // [bp-0x60]
    unsigned long long v38;  // [bp-0x58]
    void* v39;  // [bp-0x50]
    void* v40;  // [bp-0x40]
    unsigned long long v41;  // rbx
    unsigned long long v42;  // r13
    unsigned long long v43;  // r12
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    char *v47;  // rdx
    char *v48;  // r14
    char *v49;  // rdx
    void* v50;  // r14
    unsigned long long v51;  // rax
    void* v52;  // rax
    unsigned int v53;  // edx
    unsigned int v54;  // esi
    int v55;  // xmm0
    char v56;  // sil
    char v57;  // dil
    int v58;  // xmm0
    unsigned long long v59;  // rdx
    int v60;  // xmm0
    unsigned long long v61;  // rdx

    v1.from_str(a1, a2);
    if (*((int *)&v1) != 12)
    {
        v60 = *((int128_t *)&v3);
        v61 = (long long)v5;
        *((int *)&a0[8]) = *((int *)&v1);
        *((unsigned int *)&a0[12]) = v2;
        a0[16] = v60;
        *((unsigned long long *)&a0[32]) = v61;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    v20 = v3;
    v41 = v4;
    v42 = *((long long *)&v5) * 16 + v41;
    if (v41.fold(v42))
    {
        *((unsigned int *)&a0[8]) = 3;
        goto LABEL_470acc;
    }
    else
    {
        v1.from_str(a3, a4);
        if (*((int *)&v1) == 12)
        {
            v14 = v3;
            v43 = *((long long *)&v5) * 16 + v4;
            v0 = v4;
            if (v4.fold(v43) > 1)
            {
                *((unsigned int *)&a0[8]) = 2;
                goto LABEL_470a9b;
            }
            else if (a7)
            {
                v1 = v0;
                v3 = v43;
                if (!v1.any())
                    goto LABEL_470b32;
                *((unsigned int *)&a0[8]) = 6;
LABEL_470a9b:
                *((unsigned long long *)a0) = 0x8000000000000000;
                goto LABEL_470e91;
            }
            else
            {
LABEL_470b32:
                v1 = v41;
                v3 = v42;
                v4 = 0;
                v6 = 0;
                v16.collect(&v1);
                if (a5)
                {
                    v10 = 0;
                    v12 = 255;
                    v9 = &v16;
                    v1.collect(&v9);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*((long long *)&v16), v17);
                    v18 = 0;
                    *((int128_t *)&v16) = *((int128_t *)&v1);
                }
                v21 = v18;
                v37 = v0;
                v38 = v43;
                v39 = 0;
                v40 = 0;
                v44 = v37.iter_fold();
                *((int *)&v26) = (v44 <= v21 ? v21 - v44 : 0);
                v1 = v0;
                v3 = v43;
                v4 = &v26;
                v9.collect(&v1);
                core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v14, v0);
                v14 = v9;
                v45 = *((long long *)&v10);
                v25 = v13;
                v0 = v45;
                v9 = v45;
                v15 = v25 * 16 + v45;
                v11 = v15;
                v13 = 0;
                v46 = v9.next();
                if (v47)
                {
                    v48 = &v27;
                    do
                    {
                        if (*(v49) != 4)
                            continue;
                        if (v46)
                        {
                            v29 = v0;
                            v30 = v15;
                            v31 = v46;
                            v27 = 0;
                            v28 = 0;
                            v50 = v48.iter_fold();
                        }
                        else
                        {
                            v50 = 0;
                        }
                        v1 = v41;
                        v3 = v42;
                        v4 = 0;
                        do
                        {
                            do
                            {
                                v51 = v1.next();
                                if (!v47)
                                {
                                    *((unsigned int *)&a0[8]) = 7;
                                    *((unsigned long long *)a0) = 0x8000000000000000;
                                    goto LABEL_470e82;
                                }
                            } while (*(v47) != 4);
                            if (!v51)
                            {
                                v52 = 0;
                            }
                            else
                            {
                                v34 = v41;
                                v35 = v42;
                                v36 = v51;
                                v32 = 0;
                                v33 = 0;
                                v52 = v32.iter_fold();
                            }
                        } while (v52 != v50);
                        v48 = &v27;
                        v46 = v9.next();
                        v47 = v47;
                    } while (v47);
                }
                v1 = v0;
                v3 = v15;
                v4 = 0;
                v6 = 0;
                v22.collect(&v1);
                v9.clone(v23, v24);
                if (v13 >= 2)
                {
                    v19 = v11;
                    if (v13 < 21)
                        core::slice::sort::shared::smallsort::insertion_sort_shift_left(v19, v13, 1);
                    else
                        core::slice::sort::unstable::ipnsort(v19, v13, &v8);
                }
                v9.dedup_by();
                v1 = v41;
                v3 = v42;
                if ((a5 & a7 & v1.any()))
                {
                    v53 = 9;
                    if (v13 > 1 || v24 > v21)
                        goto LABEL_470e52;
                }
                if (!v18 <= v24 && !a6 && !!v15 - 16 && !!v25 && (char)v15[16] == 4)
                {
                    v54 = (char)v15[15];
                    v53 = 8;
                    if (v54 != 10 && v54 != 6)
                        goto LABEL_470f03;
LABEL_470e52:
                    *((unsigned int *)&a0[8]) = v53;
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v9, v11);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v22, v23);
LABEL_470e82:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>((long long)v16, v17);
LABEL_470e91:
                }
                else
                {
LABEL_470f03:
                    if ((v24 <= v18 & a6))
                        v18 = v24;
                    v4 = v18;
                    v55 = (int128_t)v16;
                    v1 = v55;
                    v7 = v24;
                    *((int128_t *)&v5) = *((int128_t *)&v22);
                    *((unsigned long long *)&a0[32]) = 0;
                    *((void* *)&a0[40]) = v7;
                    *((void* *)&a0[16]) = v4;
                    *((long long *)&a0[24]) = (long long)v5;
                    *(a0) = v55;
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v9, v11);
                }
            }
            core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v57, v56);
        }
        else
        {
            v58 = *((int128_t *)&v3);
            v59 = *((long long *)&v5);
            *((int *)&a0[8]) = *((int *)&v1);
            *((unsigned int *)&a0[12]) = v2;
            a0[16] = v58;
            *((unsigned long long *)&a0[32]) = v59;
LABEL_470acc:
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v20, v41);
    return a0;
}
