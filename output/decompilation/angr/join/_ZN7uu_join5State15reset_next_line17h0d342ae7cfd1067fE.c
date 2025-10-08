long long uu_join::State::reset_next_line(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x98], Other Possible Types: char
    unsigned long long v1;  // [bp-0x88]
    char v2;  // [bp-0x78], Other Possible Types: unsigned long long
    char v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x60]
    int v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x30]
    int v9;  // [bp-0x28]
    unsigned long long v11;  // rax

    v2.next_line(a1, a2);
    memcpy(&v0, &v3, 16);
    v1 = v4;
    if (v2 != 9223372036854775809)
    {
        v9 = v5;
        v6 = v2;
        memcpy(&v7, &v0, 16);
        v8 = v1;
        v11 = a1.reset(&v6);
        *((unsigned long long *)a0) = 9223372036854775809;
        return v11;
    }
    *((unsigned long long *)&a0[16]) = v1;
    *(a0) = v0;
    return v1;
}
