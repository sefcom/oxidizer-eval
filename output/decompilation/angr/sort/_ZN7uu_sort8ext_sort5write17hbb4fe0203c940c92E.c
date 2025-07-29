long long uu_sort::ext_sort::write(unsigned long long a0[3], unsigned long long a1[6], unsigned long long a2, unsigned long a3, unsigned long a4, unsigned int a5)
{
    int v0;  // [bp-0x98], Other Possible Types: char
    unsigned long long v1;  // [bp-0x90]
    int v2;  // [bp-0x88], Other Possible Types: char
    int v3;  // [bp-0x80]
    char v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    int v9;  // [bp-0x40]
    int v10;  // [bp-0x30]
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rax
    int v15;  // xmm0

    (char)v0.create(a2);
    v12 = *((long long *)&v0);
    v13 = *((long long *)&v2);
    if (!((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63)))
    {
        *((int128_t *)&v10) = *((int128_t *)&v4);
        v9 = v3;
        v6 = v12;
        v7 = v1;
        v8 = v13;
        v14 = v6.as_write();
        uu_sort::ext_sort::write_lines(a1[4], a1[5], v14, a5);
        v5 = (long long)(&v10)[8];
        v15 = *((int128_t *)&v6);
        memcpy(&(char)v3, &(char)v9, 16);
        *((int128_t *)&v2) = *((int128_t *)&v8);
        v0 = v15;
        return a0.finished_writing(&(char)v0);
    }
    a0[1] = v7;
    a0[2] = v8;
    a0[0] = 0x8000000000000000;
    return v1;
}
