long long uu_join::State::extend(unsigned long a0, struct_1 *a1, char *a2)
{
    struct_0 *v0;  // [bp-0x100]
    unsigned int v1;  // [bp-0xf4]
    unsigned long long v2;  // [bp-0xf0]
    int v3;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v4;  // [bp-0xe0]
    int v5;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xd0]
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    int v13;  // [bp-0x88], Other Possible Types: char
    int v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x58]
    char v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    int v19;  // [bp-0x40]
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    int v24;  // xmm0
    int v25;  // xmm0

    (char)v3.next_line(a1, a2);
    if (*((long long *)&v3) != 9223372036854775809)
    {
        v2 = 0x8000000000000000;
        v1 = *(a2);
        do
        {
            v10 = v6;
            memcpy(&v9, &v4, 16);
            v19 = v8;
            v18 = v10;
            memcpy(&v16, &v9, 16);
            v15 = v21;
            if (v21 == v2)
            {
                v15.drop_in_place<core::option::Option<uu_join::Line>>();
                *((unsigned long long *)&v0->field_0) = v2;
                return a0;
            }
            memcpy(&v14, &v19, 16);
            memcpy(&v13, &v17, 16);
            v11 = v15;
            v12 = v16;
            v22 = a1.get_current_key();
            if ((char)v1.compare(v22, v23, v11.get_field(a1->field_40), v23))
            {
                v25 = *((int128_t *)&v11);
                v0->field_20 = (int128_t)v14;
                *((void*)&v0->field_10) = v13;
                *((void*)&v0->field_0) = v25;
                return a0;
            }
            v24 = *((int128_t *)&v11);
            memcpy(&v8, &v14, 16);
            v5 = v13;
            v3 = v24;
            a1.push(&(char)v3, &g_593b20);
            (char)v3.next_line(a1, a2);
            v21 = (long long)v3;
            v8 = v7;
        } while (*((long long *)&v3) != 9223372036854775809);
    }
    v10 = v6;
    memcpy(&v9, &v4, 16);
    v5 = v10;
    *((int128_t *)&v3) = *((int128_t *)&v4);
    *((double *)&v0->padding_1[7]) = (char)v3.new();
    *((char **)&v0->field_10) = &g_593b58;
    *((unsigned long long *)&v0->field_0) = 9223372036854775809;
    return 9223372036854775809;
}
