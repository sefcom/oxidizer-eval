long long uu_sort::KeySettings::check_compatibility(unsigned long long *a0, char a1, unsigned long long a2, char a3)
{
    unsigned int v0;  // [bp-0xfc]
    int v1;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v2;  // [bp-0xe8]
    int v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xb8]
    int v8;  // [bp-0xa8], Other Possible Types: char
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x88]
    char v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    int v16;  // [bp-0x48]
    unsigned long v17;  // [bp-0x38], Other Possible Types: unsigned long long
    int v18;  // [bp-0x30]
    unsigned long long v19;  // [bp-0x20]
    unsigned long long *v21;  // rbx

    if (a1 > 3)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    if (a3)
    {
        v21 = a0;
        v1.to_vec("opt1opt2i128", 4);
        v8.to_vec("disort-options-incompatiblesrc/uu/sort/src/sort.rs\n", 1);
        v19 = *((long long *)&v9);
        v18 = v8;
        v16 = v1;
        v17 = v2;
        v8.to_vec("opt2i128", 4);
        v7 = *((long long *)&v9);
        memcpy(&v6, &v8, 16);
        v0 = 0;
        v8.to_vec(::0x507c00::core::char::methods::encode_utf8_raw(*((int *)(4463424 + 4 * a1)), &v0), a2);
    }
    else if (a2)
    {
        v21 = a0;
        v1.to_vec("opt1opt2i128", 4);
        (char)v8.to_vec("isort-options-incompatiblesrc/uu/sort/src/sort.rs\n", 1);
        v19 = *((long long *)&v9);
        v18 = v8;
        v16 = v1;
        v17 = v2;
        (char)v8.to_vec("opt2i128", 4);
        v7 = *((long long *)&v9);
        memcpy(&v6, &(char)v8, 16);
        v0 = 0;
        (char)v8.to_vec(::0x507c00::core::char::methods::encode_utf8_raw(*((int *)(4463424 + 4 * a1)), &v0), a2);
    }
    else
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v5 = *((long long *)&v9);
    v3 = v8;
    v2 = v7;
    memcpy(&v1, &v6, 16);
    v8 = v16;
    memcpy(&v9, &v17, 16);
    memcpy(&v10, &v18, 16);
    v14 = v4;
    v15 = v5;
    v12 = v2;
    v13 = (long long)v3;
    memcpy(&v11, &v1, 16);
    v1.from_iter(&v8);
    return uucore::mods::locale::get_message_with_args(v21, "sort-options-incompatiblesrc/uu/sort/src/sort.rs\n", 25, &v1);
}
