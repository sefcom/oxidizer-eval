long long fish::key::<impl core::convert::From<fish::key::Key> for widestring::utfstring::Utf32String>::from(struct_0 *a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x60]
    char v1;  // [bp-0x5c]
    char v2;  // [bp-0x5b]
    char v3;  // [bp-0x5a]
    char v4;  // [bp-0x59]
    int v5;  // [bp-0x58]
    char v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    int v10;  // [bp-0x30], Other Possible Types: char
    char v11;  // [bp-0x20]

    v0 = a1;
    v8 = "-";
    v9 = &g_14c7740;
    v6.find_map(&v8, &(char)v0);
    v10.or_else(&v6, a1 & 4294967295);
    if ((char)(((0 ^ *((long long *)&v10)) & (0 ^ -(*((long long *)&v10)))) >> 63))
    {
        fish::key::char_to_symbol(&v6, (unsigned int)v0, !(*((int *)((char *)&v0 + 4)) & &g_1010101));
        if (v3)
            goto LABEL_13d58ba;
    }
    else
    {
        v7 = *((long long *)&v11);
        v5 = v10;
        if (v3)
        {
LABEL_13d58ba:
            v6.insert_slice(0, "s", 6);
        }
    }
    if (v2)
        v6.insert_slice(0, "a", 4);
    if (v1)
        v6.insert_slice(0, "c", 5);
    if (v4)
        v6.insert_slice(0, "s", 6);
    a0->field_10 = v7;
    *((void*)&a0->field_0) = v5;
    return a0;
}
