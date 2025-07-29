void uu_numfmt::parse_unit_size(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    char v5;  // [bp-0xc8]
    int v6;  // [bp-0xa8], Other Possible Types: void*
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    char v9;  // [bp-0x90]
    int v10;  // [bp-0x88], Other Possible Types: char
    unsigned long long v11;  // [bp-0x78]
    int v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x40]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rdx

    v3 = a1;
    v4 = a1 + a2;
    v5 = 0;
    v0.from_iter(&v3);
    v17 = v2.get(a1, a2);
    if (!v17)
        core::str::slice_error_fail(a1, a2, v2, a2, &g_58e068); /* do not return */
    if (v2)
    {
        alloc::slice::<impl [T]>::repeat(&v3, "0src/uu/numfmt/src/numfmt.rs", 1, v2);
        v8 = *((long long *)&v5);
        *((int128_t *)&v6) = *((int128_t *)&v3);
        if ((char)v7.equal(v8, v1.index(v2), v18))
        {
            ::0x4a7850::core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
            goto LABEL_4a9178;
        }
        else
        {
            ::0x4a7850::core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
            goto LABEL_4a9134;
        }
    }
    else
    {
LABEL_4a9134:
        if (!(uu_numfmt::parse_unit_size_suffix(v17, v18) == 1))
            goto LABEL_4a9178;
        if (v2)
        {
            ::0x4a7580::core::num::<impl u64>::from_str_radix(&v3, v1, v2);
            if (!(char)v3)
            {
                v19 = v4 * v18;
                goto LABEL_4a9252;
            }
LABEL_4a9178:
            v3.to_vec("sizemodei128", 4);
            v11 = *((long long *)&v5);
            memcpy(&v10, &v3, 16);
            v6 = 0;
            v7 = a1;
            v8 = a2;
            v9 = 1;
            v3.spec_to_string(&v6);
            v13 = v11;
            v12 = v10;
            memcpy(&v14, &v3, 16);
            v15 = *((long long *)&v5);
            v3.from_iter(&v12);
            uucore::mods::locale::get_message_with_args(&v10, "numfmt-error-invalid-unit-size", 30, &v3);
            a0->field_10 = v11;
            *((void*)&a0->field_0) = v10;
        }
        else
        {
LABEL_4a9252:
            *((unsigned long long *)&a0->padding_1[7]) = v19;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        }
    }
    ::0x4a7850::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
