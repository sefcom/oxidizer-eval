long long uu_join::State::finalize(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xb8]
    int v2;  // [bp-0xa8], Other Possible Types: char
    int v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    int v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x70]
    int v8;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    int v12;  // [bp-0x50]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    int v17;  // xmm0
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // [bp-0x98]

    if (!a0->field_10)
        return 0;
    if (a0->field_59)
    {
        v14 = a0.print_first_line(a1, a3);
        if (v14)
            return v14.from();
    }
    (char)v2.next_line(a0, a2);
    v15 = *((long long *)&v2);
    memcpy(&v0, &(char)v2, 16);
    v1 = v5;
    if (v15 != 9223372036854775809)
    {
        v12 = v6;
        v8 = v0;
        v11 = v1;
        v7 = v15;
        if (v7 == 0x8000000000000000)
        {
            v7.drop_in_place<core::option::Option<uu_join::Line>>();
            return 0;
        }
        while (true)
        {
            if (a0->field_59)
            {
                v16 = a0.print_line(a1, &v7, a3);
                if (v16)
                {
                    v19 = v16.from();
                    v7.drop_in_place<core::option::Option<uu_join::Line>>();
                    return v19;
                }
            }
            v17 = *((int128_t *)&v7);
            v6 = v12;
            *((int128_t *)&v4) = *((int128_t *)&v10);
            v2 = v17;
            a0.reset(&(char)v2);
            (char)v2.next_line(a0, a2);
            v18 = (long long)v2;
            memcpy(&v0, &(char)v2, 16);
            v1 = v5;
            if (v18 == 9223372036854775809)
                break;
            v12 = v6;
            v11 = v1;
            v8 = v0;
            v7 = v18;
            if (v7 == 0x8000000000000000)
            {
                v7.drop_in_place<core::option::Option<uu_join::Line>>();
                return 0;
            }
        }
    }
    v20 = v1;
    memcpy(&(char)v2, &v0, 16);
    return (char)v2.new();
}
