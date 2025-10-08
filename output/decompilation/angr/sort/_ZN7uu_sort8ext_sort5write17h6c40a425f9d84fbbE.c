long long uu_sort::ext_sort::write(unsigned long long a0[3], unsigned long long a1[6], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    unsigned long long v1;  // [bp-0x100]
    int v2;  // [bp-0xf8], Other Possible Types: char
    char v3;  // [bp-0xf0]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xe0]
    char v6;  // [bp-0xd0]
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xc0]
    char v9;  // [bp-0xb0]
    int v10;  // [bp-0xa8]
    char v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    int v15;  // [bp-0x78]
    int v16;  // [bp-0x68]
    int v17;  // [bp-0x58]
    int v18;  // [bp-0x48]
    int v19;  // [bp-0x38]
    unsigned long long v20;  // [bp-0x28]
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rcx
    int v24;  // xmm0
    int v25;  // xmm2
    unsigned long long v26;  // rax
    int v27;  // xmm0
    int v28;  // xmm1

    (char)v0.create(a2, a3, a4);
    v22 = *((long long *)&v0);
    v23 = *((long long *)&v2);
    if (!((char)(((0 ^ v22) & (0 ^ -(v22))) >> 63)))
    {
        v20 = *((long long *)&v11);
        *((int128_t *)&v19) = *((int128_t *)&v9);
        v24 = *((int128_t *)&v3);
        v25 = *((int128_t *)&v6);
        v18 = v8;
        v17 = v25;
        v16 = v5;
        v15 = v24;
        v12 = v22;
        v13 = v1;
        v14 = v23;
        v26 = v12.as_write();
        uu_sort::ext_sort::write_lines(a1[4], a1[5], v26, a5);
        *((int128_t *)&v10) = (int128_t)(&v19)[8];
        memcpy(&(char)v8, &(char)v18, 16);
        *((int128_t *)&v7) = (int128_t)(&v17)[8];
        v27 = *((int128_t *)&v12);
        v28 = *((int128_t *)&v14);
        memcpy(&(char)v5, &(char)v16, 16);
        *((int128_t *)&v4) = (int128_t)(&v15)[8];
        v2 = v28;
        v0 = v27;
        return a0.finished_writing(&(char)v0);
    }
    a0[1] = v13;
    a0[2] = v14;
    a0[0] = 0x8000000000000000;
    return v1;
}
