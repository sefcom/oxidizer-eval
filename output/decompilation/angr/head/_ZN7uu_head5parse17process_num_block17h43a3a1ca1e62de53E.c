long long uu_head::parse::process_num_block(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4)
{
    void* v5;  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    void* v7;  // [bp-0xd0]
    char v8;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    unsigned long long v18;  // [bp-0x70]
    unsigned long long v25;  // rbp
    unsigned int v26;  // 4096
    char v27;  // bl
    char v28;  // r13b
    unsigned int v29;  // r12d
    unsigned long v30;  // rax
    unsigned int v31;  // edx

    ::0x4baf40::core::num::<impl u64>::from_str_radix(&v8, a1, a2);
    if (v8 == 1)
    {
        v16 = 18446744073709551615;
        if (!(v8 == 2))
            goto LABEL_4bb570;
    }
    else
    {
        v16 = v10;
    }
    v18 = v16;
    v25 = 0;
    v15 = 0;
    v26 = a3;
    v29 = v26;
    v30 = v29 - 98;
    switch ((unsigned int)v30)
    {
    case 0:
        v25 = 1;
        v14 = 0x200;
        continue;
    case 1:
        v14 = 1;
        v25 = 1;
        continue;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 10: case 12: case 13: case 14: case 16: case 17: case 18: case 19: case 21: case 22: case 23:
        goto LABEL_4bb570;
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
        v28 = 1;
        v26 = v31;
        if (!(v26 == 0x110000))
            continue;
        v5 = 0;
        v6 = 8;
        v7 = 0;
    case 20:
        a4.next();
        v27 = 1;
        v26 = v31;
        if (!(v26 == 0x110000))
            continue;
        v5 = 0;
        v6 = 8;
        v7 = 0;
    case 24:
        v15 = g_43379c[v30] + (char *)&g_43379c[0] & 0xffffffffffffff00 | 1;
        continue;
    default:
        if (v29)
            goto LABEL_4bb570;
        else
            break;
    }
LABEL_4bb570:
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
