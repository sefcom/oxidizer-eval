long long uu_join::get_field_number(struct_0 *a0, char a1, unsigned long long a2, char a3, unsigned long long a4)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    unsigned long v5;  // [bp-0xd8]
    unsigned long v6;  // [bp-0xd0]
    int v7;  // [bp-0xc8], Other Possible Types: char
    int v8;  // [bp-0xb8], Other Possible Types: char
    unsigned int v9;  // [bp-0xb0]
    int v10;  // [bp-0xa8]
    int v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    int v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x58]
    int v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x38]
    int v20;  // [bp-0x30]
    unsigned long long v21;  // [bp-0x20]
    unsigned long v23;  // rax
    int v24;  // xmm3

    if ((a1 & 1))
    {
        a4 = v23 & 0xffffffffffffff00 | a2 != a4;
        if ((a2 != a4 & a3))
        {
            v0.to_vec("field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 6);
            v5 = a2 + 1;
            v7.spec_to_string(&v5);
            v19 = v1;
            v18 = v0;
            v20 = v7;
            v21 = *((long long *)&v8);
            v7.to_vec("field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 6);
            v17 = *((long long *)&v8);
            v16 = v7;
            v6 = a4 + 1;
            v7.spec_to_string(&v6);
            v1 = v17;
            v0 = v16;
            v2 = v7;
            v4 = *((long long *)&v8);
            v24 = (int128_t)(&v20)[8];
            memcpy(&v7, &v18, 16);
            *((int128_t *)&v8) = *((int128_t *)&v19);
            v10 = v24;
            v14 = v3;
            v15 = v4;
            v12 = v1;
            v13 = (long long)v2;
            v11 = v0;
            v0.from_iter(&v7);
            uucore::mods::locale::get_message_with_args(&v7, "join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 30, &v0);
            v9 = 1;
            *((double *)&a0->field_0) = v7.new();
            a0->field_8 = &g_594360;
            return &g_594360;
        }
        a0->field_8 = a2;
    }
    else
    {
        if (!(a3 & 1))
            a4 = 0;
        a0->field_8 = a4;
    }
    a0->field_0 = 0;
    return a4;
}
