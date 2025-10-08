long long starship::modules::ocaml::parse_opam_switch(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    char v4;  // [bp-0x69]
    char v5;  // [bp-0x61]
    char v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x59]
    char v8;  // [bp-0x36]
    char v9;  // [bp-0x30]
    char v10;  // [bp-0x20]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    if (a2)
    {
        v3.components(a1, a2);
        if (!v8 && v6 - 5 < 2)
        {
            v0.to_vec(a1, a2);
            v7 = v2;
            memcpy(&v4, &v0, 16);
            a0->field_0 = 0;
            v13 = *((long long *)&v5);
            *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v3);
            *((unsigned long long *)&a0->field_1[15]) = v13;
            a0->field_8 = v7;
            return v13;
        }
        v12 = a1.file_name(a2);
        if (v12)
        {
            core::str::converts::from_utf8(&v0, v12, a2);
            if (!(v0 & 1))
            {
                v9.to_vec(v1, v2);
                v7 = *((long long *)&v10);
                memcpy(&v4, &v9, 16);
                a0->field_0 = 1;
                v13 = *((long long *)&v5);
                *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v3);
                *((unsigned long long *)&a0->field_1[15]) = v13;
                a0->field_8 = v7;
                return v13;
            }
        }
    }
    *((unsigned long long *)&a0->field_1[7]) = 0x8000000000000000;
    return 0x8000000000000000;
}
