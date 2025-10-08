long long fish::builtins::complete::builtin_complete_add2(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3, unsigned long a4, unsigned long long *a5, unsigned long a6, unsigned long long *a7, unsigned long a8, unsigned int a9, unsigned long long a10, unsigned long long a11, unsigned long long a12, unsigned long long a13, unsigned long long a14, unsigned long long a15, unsigned short a16)
{
    int v0;  // [bp-0x110]
    unsigned long long v1;  // [bp-0x100]
    void* v2;  // [bp-0xf8], Other Possible Types: int
    unsigned long long v3;  // [bp-0xf0]
    void* v4;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xc8]
    int v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long *v9;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned int v10;  // [bp-0x84]
    int v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    int v15;  // [bp-0x48]
    unsigned int v16;  // eax
    unsigned int v17;  // edx
    unsigned int v18;  // r15d
    unsigned int v19;  // r15d
    unsigned long long *v20;  // r15
    unsigned long long *v21;  // r15

    v9 = a5;
    v13 = a3;
    v14 = a3 + a4 * 4;
    if ((int)v13.next() != 2)
    {
        do
        {
            v19 = v18;
            v16.unwrap(v19, &g_14bd1b0);
            v15.to_vec(a0, a1);
            v10 = v19;
            v0.to_vec(&v10, 1);
            v4 = v1;
            v2 = v0;
            v11.to_vec(a10, a11);
            v0.to_vec(a12, a13);
            v6 = v1;
            v5 = v0;
            v0.to_vec(a14, a15);
            v8 = v1;
            v7 = v0;
            fish::complete::complete_add(&v15, a2, &(unsigned long long)v2, 1, a9, &v11, &v5, &v7, a16);
            v16 = v13.next();
            v18 = v17;
        } while (v16 != 2);
    }
    if (a6)
    {
        v12 = a6 * 16;
        v20 = 0;
        do
        {
            v15.to_vec(a0, a1);
            v0.to_vec(*((long long *)(v9 + v20)), *((long long *)(v9 + v20 + 8)));
            v4 = v1;
            v2 = v0;
            v11.to_vec(a10, a11);
            v0.to_vec(a12, a13);
            v6 = v1;
            v5 = v0;
            v0.to_vec(a14, a15);
            v8 = v1;
            v7 = v0;
            fish::complete::complete_add(&v15, a2, &(unsigned long long)v2, 3, a9, &v11, &v5, &v7, a16);
            v20 += 2;
        } while (v12 != v20);
    }
    if (a8)
    {
        v9 = a8 * 16;
        v21 = 0;
        do
        {
            v15.to_vec(a0, a1);
            v0.to_vec(*((long long *)(a7 + v21)), *((long long *)(a7 + v21 + 8)));
            v4 = v1;
            v2 = v0;
            v11.to_vec(a10, a11);
            v0.to_vec(a12, a13);
            v6 = v1;
            v5 = v0;
            v0.to_vec(a14, a15);
            v8 = v1;
            v7 = v0;
            fish::complete::complete_add(&v15, a2, &(unsigned long long)v2, 2, a9, &v11, &v5, &v7, a16);
            v21 += 2;
        } while (v9 != v21);
    }
    if (a6 || a4 || a8)
        return a6 | a4 | a8;
    v15.to_vec(a0, a1);
    v2 = 0;
    v3 = 4;
    v4 = 0;
    v11.to_vec(a10, a11);
    v0.to_vec(a12, a13);
    v6 = v1;
    v5 = v0;
    v0.to_vec(a14, a15);
    v8 = v1;
    memcpy(&v7, &v0, 16);
    return fish::complete::complete_add(&v15, a2, &v2, 0, a9, &v11, &v5, &v7, a16);
}
