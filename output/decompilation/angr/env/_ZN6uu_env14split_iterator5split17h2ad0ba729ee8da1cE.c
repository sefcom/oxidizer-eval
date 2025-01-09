long long uu_env::split_iterator::split::h2ad0ba729ee8da1c(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xb8]
    int v1;  // [bp-0xb4]
    int v2;  // [bp-0xac]
    unsigned long long v3;  // [sp-0xa4]
    char v4;  // [bp-0x90]
    char v5;  // [bp-0x8c]
    char v6;  // [bp-0x88]
    int v7;  // [bp-0x80]
    char v8;  // [bp-0x78]
    char v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned int v12;  // eax
    int v13;  // xmm0
    int v14;  // xmm0
    unsigned long long v15;  // rcx

    uu_env::split_iterator::SplitIterator::new::hd02f70765700e24e(&v10, a1, a2);
    uu_env::split_iterator::SplitIterator::split::hbd91db14676a9a59(&v4, &v10);
    v12 = *((int *)&v4);
    if (v12 != 8)
    {
        v14 = *((int128_t *)&v5);
        *((int128_t *)&v2) = (int128_t)v7;
        v0 = v14;
        v15 = *((long long *)&v9);
        a0->field_4 = (int128_t)(&v0)[12];
        *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v0;
        *((unsigned long long *)&a0->field_10) = v15;
    }
    else
    {
        v3 = *((long long *)&v8);
        v13 = *((int128_t *)&v6);
        v1 = v13;
        *((unsigned long long *)((char *)&a0->field_4 + 8)) = v3;
        *((void*)&(&a0->field_0)[2]) = v13;
    }
    a0->field_0 = v12;
    return a0;
}
