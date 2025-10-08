long long just::loader::Loader::load(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x138]
    unsigned long long v2;  // [bp-0x130]
    char v3;  // [bp-0x128]
    char v4;  // [bp-0x119]
    unsigned long long v5;  // [bp-0x118]
    unsigned long v6;  // [bp-0x108]
    char v7;  // [bp-0x100]
    char v8;  // [bp-0xf0], Other Possible Types: unsigned long
    char v9;  // [bp-0xe8]
    char v10;  // [bp-0xd8]
    char v11;  // [bp-0xc9]
    char v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xa8]
    char v14;  // [bp-0x98]
    char v15;  // [bp-0x97]
    char v16;  // [bp-0x88]
    int v17;  // [bp-0x78]
    int v18;  // [bp-0x68]
    int v19;  // [bp-0x58]
    int v20;  // [bp-0x48]
    char v21;  // [bp-0x38]
    unsigned long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned long long v30[3];  // rax
    unsigned long long v31;  // r13
    unsigned long v32;  // r14
    struct_0 *v33;  // rax
    int v34;  // xmm0

    std::fs::read_to_string(&v0, a4, a5);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        just::loader::Loader::load::{{closure}}(&v14, a4, a5, v1);
        v23 = v14;
        memcpy(&v3, &v15, 16);
        memcpy(&v4, &v16, 16);
        *((long long *)&a0[96]) = *((long long *)&v21);
        a0[80] = v20;
        a0[64] = v19;
        a0[48] = v18;
        a0[32] = v17;
        memcpy(&v10, &v3, 16);
        memcpy(&v11, &v4, 16);
        *((int128_t *)&a0[16]) = *((int128_t *)&v11);
        *((int128_t *)&a0[1]) = *((int128_t *)&v10);
        *((char *)a0) = v23;
        return v23;
    }
    memcpy(&v12, &v0, 16);
    v13 = v2;
    v24 = a2.parent(a3);
    if (!v24)
        core::option::unwrap_failed(&g_8305a0); /* do not return */
    v26 = a4.strip_prefix(a5, v24, v25);
    if (!v26)
    {
        v27 = a5;
        if (!v26)
            goto LABEL_67532c;
LABEL_67532b:
        v28 = v26;
    }
    else
    {
        v27 = v25;
        if (v26)
            goto LABEL_67532b;
LABEL_67532c:
        v28 = a4;
    }
    v14.to_vec(v28, v27);
    v5 = *((long long *)&v16);
    memcpy(&v3, &v14, 16);
    (char)v6.alloc_fast_path(a1, &v3);
    v30 = (v6 == 0x8000000000000000 ? *((long long *)&v7) : a1.alloc_slow_path(&(char)v6));
    v31 = v30[2];
    v32 = a1 + 56;
    v8.alloc_fast_path(v32, &v0);
    v33 = (v8 == 0x8000000000000000 ? *((long long *)&v9) : v32.alloc_slow_path(&v8));
    v34 = *((int128_t *)&(&v33->padding_0)[1]);
    *((unsigned long long *)&a0[8]) = v30[1];
    *((unsigned long long *)&a0[16]) = v31;
    a0[24] = v34;
    *((char *)a0) = 56;
    return v33;
}
