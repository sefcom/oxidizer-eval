long long fd::build_pattern_regex(void* a0, unsigned long long a1, unsigned long long a2, char a3, char a4)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    int v1;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v2;  // [bp-0xd8], Other Possible Types: char
    int v3;  // [bp-0xc8], Other Possible Types: char
    char v4;  // [bp-0xc0]
    int v5;  // [bp-0xb8], Other Possible Types: char
    int v6;  // [bp-0xb0]
    char v7;  // [bp-0xa0]
    int v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned int v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    int v14;  // [bp-0x58]
    char v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    int v17;  // [bp-0x38]
    int v18;  // [bp-0x28]
    unsigned long long v19;  // [bp-0x18]
    unsigned long long v21;  // rax
    char *v22;  // rdi

    if ((a3 & a2))
    {
        v10 = a1;
        v11 = a2;
        v12 = 0x10100;
        v3.build(&v10);
        memcpy(&v0, &v4, 16);
        v1 = v6;
        memcpy(&v2, &v7, 16);
        if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
        {
            memcpy(&(char)v6, &v2, 16);
            v5 = v1;
            v3 = v0;
            v21 = v3.from();
            *((unsigned long long *)&a0[8]) = v21;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return v21;
        }
        v19 = v9;
        v18 = v8;
        memcpy(&v15, &v1, 16);
        v14 = v0;
        v17 = v2;
        v13 = *((long long *)&v3);
        v3.to_vec(v16, (long long)v17);
        v1 = *((long long *)&v5);
        memcpy(&v0, &v3, 16);
        core::ptr::drop_in_place<globset::glob::Glob>(&v13);
    }
    else
    {
        v22 = &(char)v0;
        if ((a4 & 1))
            regex::escape(v22, a1, a2);
        else
            v22.to_vec(a1, a2);
    }
    *((unsigned long long *)&a0[16]) = v1;
    *(a0) = v0;
    return v1;
}
