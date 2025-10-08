long long fish::history::HistorySearch::new_with(void* a0, unsigned long long a1, struct_0 *a2, char a3, unsigned int a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x1a0]
    int v1;  // [bp-0x198]
    unsigned long long v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x178]
    int v4;  // [bp-0x168]
    int v5;  // [bp-0x158]
    int v6;  // [bp-0x148]
    int v7;  // [bp-0x138]
    int v8;  // [bp-0x128], Other Possible Types: char
    unsigned long long v9;  // [bp-0x118]
    int v10;  // [bp-0x110]
    unsigned long long v11;  // [bp-0x108]
    unsigned long v12;  // [bp-0x100], Other Possible Types: unsigned long long
    char v13;  // [bp-0xf8]
    int v14;  // [bp-0xe8]
    int v15;  // [bp-0xd8]
    int v16;  // [bp-0xc8]
    int v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0xa8]
    int v19;  // [bp-0xa0]
    int v20;  // [bp-0x90]
    char v21;  // [bp-0x80]
    unsigned long long v22;  // [bp-0x70]
    unsigned int v23;  // [bp-0x68]
    char v24;  // [bp-0x64]
    int v25;  // [bp-0x60], Other Possible Types: char
    int v26;  // [bp-0x50]
    char v27;  // [bp-0x40]
    unsigned long v29;  // rbp

    v29 = a4;
    v0 = a1;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v8, a2->field_0[1], a2->field_8);
    v2 = v9;
    v1 = v8;
    v3 = 0x8000000000000000;
    v25.default();
    memcpy(&v21, &v27, 16);
    v20 = v26;
    v19 = v25;
    v18 = a1;
    v8 = v1;
    v9 = v2;
    *((unsigned long long [2])&v10) = a2->field_0;
    v12 = a2->field_8;
    v24 = a3;
    v23 = v29;
    memcpy(&v13, &v3, 16);
    v14 = v4;
    v15 = v5;
    v16 = v6;
    v17 = v7;
    v22 = a5;
    if (((char)v29 & 1))
    {
        v3.to_lowercase(v11, v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v10);
        v12 = (long long)v4;
        *((int128_t *)&v10) = *((int128_t *)&v3);
    }
    memcpy(a0, &v8, 200);
    return a0;
}
