long long just::recipe::Recipe<D>::working_directory(void* a0, unsigned long long a1[30], void* a2, unsigned int a3)
{
    char v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long v2;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x88]
    void* v4;  // [bp-0x80]
    unsigned long v5;  // [bp-0x78]
    unsigned long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    void* v8;  // [bp-0x60]
    unsigned long v9;  // [bp-0x58]
    unsigned long v10;  // [bp-0x50]
    unsigned long v11;  // [bp-0x48]
    int v12;  // [bp-0x40], Other Possible Types: char
    char v13;  // [bp-0x30]
    unsigned long long v15;  // rax
    unsigned long v16;  // rax
    unsigned long v17;  // rax
    unsigned long long *v19;  // rax

    v15 = a1[27].contains(9);
    if ((char)v15)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v15;
    }
    v0.working_directory(a2, a3);
    v16 = a1[27];
    v17 = v16;
    if (v17)
        v17 = a1[29];
    v3 = v16;
    v4 = 0;
    v5 = v16;
    v6 = a1[28];
    v7 = v3;
    v8 = 0;
    v9 = v16;
    v10 = a1[28];
    v11 = v17;
    while (true)
    {
        v19 = v3.next();
        if (!v19)
        {
            *((unsigned long *)&a0[16]) = v2;
            *((int128_t *)a0) = *((int128_t *)&v0);
            return v2;
        }
        else if (*(v19) + 9223372036854775807 == 19)
        {
            v12.join(v1, v2, v19 + 1);
            *((long long *)&a0[16]) = *((long long *)&v13);
            *(a0) = v12;
            return core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        }
    }
}
