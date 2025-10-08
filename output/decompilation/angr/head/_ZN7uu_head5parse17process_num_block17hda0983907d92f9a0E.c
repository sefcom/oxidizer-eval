long long uu_head::parse::process_num_block(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0xec]
    int v1;  // [bp-0xe8], Other Possible Types: char *, unsigned long long
    int v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    void* v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    void* v7;  // [bp-0xc0]
    char v8;  // [bp-0xb8]
    unsigned long v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    char *v11;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xa0]
    void* v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    unsigned long long v16;  // [bp-0x70]
    unsigned long v17;  // [bp-0x68]
    char v18;  // [bp-0x60]
    char v19;  // [bp-0x48]
    unsigned long long v21;  // rax
    unsigned int v22;  // 4096
    char v23;  // bl
    char v24;  // r13b
    char v25;  // bpl
    unsigned int v26;  // r12d
    unsigned long v27;  // rax
    unsigned int v28;  // edx
    unsigned long long v29;  // r14
    unsigned long long v30;  // rax
    unsigned long long v31;  // 4098
    unsigned long v32;  // rax
    unsigned long v33;  // cc_ndep

    ::0x461cb0::core::num::<impl usize>::from_ascii_radix(&v8, a1, a2);
    if (v8 == 1)
    {
        v21 = 18446744073709551615;
        if (v8 != 2)
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    v15 = v21;
    v16 = v21;
    v0 = 0;
    v22 = a3;
    do
    {
        v26 = v22;
        v27 = v26 - 98;
        switch ((unsigned int)v27)
        {
        case 0:
            v25 = 1;
            v14 = 0x200;
            continue;
        case 1:
            v25 = 1;
            v14 = 1;
            continue;
        case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 10: case 12: case 13: case 14: case 16: case 17: case 18: case 19: case 21: case 22: case 23:
LABEL_465674:
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        case 9:
            v25 = 1;
            v14 = 0x400;
            continue;
        case 11:
            v25 = 1;
            v14 = 0x100000;
            continue;
        case 15:
            a4.next();
            v24 = 1;
            v22 = v28;
            if (v22 != 0x110000)
                continue;
            v5 = 0;
            v6 = 8;
            v7 = 0;
            goto LABEL_4656cd;
        case 20:
            a4.next();
            v23 = 1;
            v22 = v28;
            if (v22 != 0x110000)
                continue;
            v5 = 0;
            v6 = 8;
            v7 = 0;
            v29 = v15;
            goto LABEL_465717;
        case 24:
            *((unsigned long *)&v0) = g_41a68c[v27] + (char *)&g_41a68c[0] & 0xffffffffffffff00 | 1;
            continue;
        default:
            if (v26)
                goto LABEL_465674;
            break;
        }
        a4.next();
        v22 = v28;
    } while (v22 != 0x110000);
    v5 = 0;
    v6 = 8;
    v7 = 0;
    if (!(v24 & 1))
    {
        v29 = v15;
        if (!(v23 & 1))
            goto LABEL_465757;
        goto LABEL_465717;
    }
LABEL_4656cd:
    v29 = v15;
    v8.to_vec("-q-v-z-c-nsrc/uu/head/src/take.rs", 2);
    v4 = v11;
    *((int128_t *)&v1) = *((int128_t *)&v8);
    v5.push(&(char)v1, &g_4f7a40);
    if (!(v23 & 1))
        goto LABEL_465757;
LABEL_465717:
    v8.to_vec("-v-z-c-nsrc/uu/head/src/take.rs", 2);
    v4 = v11;
    *((int128_t *)&v2) = *((int128_t *)&v8);
    v5.push(&(unsigned long long)v2, &g_4f7a58);
LABEL_465757:
    if (((char)v0 & 1))
    {
        v8.to_vec("-z-c-nsrc/uu/head/src/take.rs", 2);
        v4 = v11;
        *((int128_t *)&v2) = *((int128_t *)&v8);
        v5.push(&(unsigned long long)v2, &g_4f7a70);
    }
    if ((v25 & 1))
    {
        v8.to_vec("-c-nsrc/uu/head/src/take.rs", 2);
        v4 = v11;
        memcpy(&v1, &v8, 16);
        v5.push(&v1, &g_4f7a88);
        v30 = v29;
        v31 = v14;
        v32 = v30 * v31;
        if ((char)_ccall(0, 48, v30, v31, v33))
            v32 = 18446744073709551615;
        v17 = v32;
        v1 = &v17;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v9 = &g_418a90;
        v10 = 1;
        v13 = 0;
        v11 = &v1;
        v12 = 1;
        v18.map_or_else(&v8);
        v5.push(&v18, &g_4f7aa0);
    }
    else
    {
        v8.to_vec("-nsrc/uu/head/src/take.rs", 2);
        v4 = v11;
        memcpy(&v1, &v8, 16);
        v5.push(&v1, &g_4f7ab8);
        v1 = &v16;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v9 = &g_418a90;
        v10 = 1;
        v13 = 0;
        v11 = &v1;
        v12 = 1;
        v19.map_or_else(&v8);
        v5.push(&v19, &g_4f7ad0);
    }
    *((unsigned long long *)&a0[16]) = 0;
    *((int128_t *)a0) = *((int128_t *)&v5);
    return 0;
}
