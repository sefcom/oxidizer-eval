long long uu_join::State::extend(unsigned long a0, struct_0 *a1, char *a2)
{
    void* v0;  // [bp-0x100]
    unsigned int v1;  // [bp-0xf4]
    unsigned long long v2;  // [bp-0xf0]
    int v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    int v7;  // [bp-0xb8], Other Possible Types: char
    int v8;  // [bp-0xa8]
    int v9;  // [bp-0x98], Other Possible Types: char
    unsigned long long v10;  // [bp-0x90]
    int v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    int v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    int v18;  // [bp-0x40]
    unsigned long long v20;  // rax
    void* v21;  // rax
    unsigned int v22;  // rdx
    int v23;  // xmm0
    int v24;  // xmm0

    v9.next_line(a1, a2);
    if (*((long long *)&v9) != 9223372036854775809)
    {
        v2 = 0x8000000000000000;
        v1 = *(a2);
        do
        {
            v4 = v12;
            memcpy(&v3, &v10, 16);
            v18 = v13;
            v17 = v4;
            memcpy(&v15, &v3, 16);
            v14 = v20;
            if (v20 == v2)
            {
                v14.drop_in_place<core::option::Option<uu_join::Line>>();
                *((unsigned long long *)v0) = v2;
                return a0;
            }
            memcpy(&v8, &v18, 16);
            memcpy(&v7, &v16, 16);
            v5 = v14;
            v6 = v15;
            v21 = a1.get_current_key();
            if ((char)v1.compare(v21, v22, v5.get_field(a1->field_40), v22))
            {
                v24 = *((int128_t *)&v5);
                v0[32] = v8;
                v0[16] = v7;
                *(v0) = v24;
                return a0;
            }
            v23 = *((int128_t *)&v5);
            v13 = v8;
            v11 = v7;
            v9 = v23;
            a1.push(&v9, &g_4fd360);
            v9.next_line(a1, a2);
            v20 = (long long)v9;
        } while (*((long long *)&v9) != 9223372036854775809);
    }
    v4 = v12;
    memcpy(&v3, &v10, 16);
    *((double *)&v0[8]) = v3.new();
    *((char **)&v0[16]) = &g_4fd398;
    *((unsigned long long *)v0) = 9223372036854775809;
    return 9223372036854775809;
}
