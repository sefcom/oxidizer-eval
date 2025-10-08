long long uu_join::State::finalize(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xd8]
    int v1;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    int v5;  // [bp-0xb8]
    int v6;  // [bp-0x98], Other Possible Types: char
    char v7;  // [bp-0x90]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    int v10;  // [bp-0x78]
    int v11;  // [bp-0x68], Other Possible Types: char
    unsigned long long v12;  // [bp-0x58]
    int v13;  // [bp-0x48], Other Possible Types: char
    unsigned long long v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    char *v18;  // rdi
    unsigned long long v19;  // rax
    int v20;  // xmm0
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    if (!a0->field_10)
        return 0;
    if (a0->field_59)
    {
        v16 = a0.print_first_line(a1, a3);
        if (v16)
            return v16.from();
    }
    (char)v6.next_line(a0, a2);
    v17 = *((long long *)&v6);
    memcpy(&v11, &v7, 16);
    v12 = v9;
    if (v17 == 9223372036854775809)
    {
        v18 = &v11;
        return v18.new();
    }
    v5 = v10;
    v1 = v11;
    v4 = v12;
    v0 = v17;
    if (v0 != 0x8000000000000000)
    {
        do
        {
            if (a0->field_59)
            {
                v19 = a0.print_line(a1, &v0, a3);
                if (v19)
                {
                    v22 = v19.from();
                    v0.drop_in_place<core::option::Option<uu_join::Line>>();
                    return v22;
                }
            }
            v20 = *((int128_t *)&v0);
            v10 = v5;
            *((int128_t *)&v8) = *((int128_t *)&v3);
            v6 = v20;
            a0.reset(&(char)v6);
            (char)v6.next_line(a0, a2);
            v21 = (long long)v6;
            memcpy(&v13, &v7, 16);
            v14 = v9;
            if (v21 == 9223372036854775809)
            {
                v18 = &v13;
                return v13.new();
            }
            v5 = v10;
            v4 = v14;
            v1 = v13;
            v0 = v21;
        } while (v0 != 0x8000000000000000);
    }
    v0.drop_in_place<core::option::Option<uu_join::Line>>();
    return 0;
}
