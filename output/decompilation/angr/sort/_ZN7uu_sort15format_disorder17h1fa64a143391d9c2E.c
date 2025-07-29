long long uu_sort::format_disorder(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [bp-0x188], Other Possible Types: char
    unsigned long long v1;  // [bp-0x178]
    int v2;  // [bp-0x170]
    unsigned long long v3;  // [bp-0x168]
    unsigned long long v4;  // [bp-0x160]
    int v5;  // [bp-0x158]
    unsigned long long v6;  // [bp-0x148]
    int v7;  // [bp-0x138], Other Possible Types: char
    char v8;  // [bp-0x128]
    char v9;  // [bp-0x118]
    int v10;  // [bp-0x108]
    char v11;  // [bp-0xf8]
    char v12;  // [bp-0xe8]
    int v13;  // [bp-0xd8]
    char v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    int v17;  // [bp-0xa8]
    unsigned long long v18;  // [bp-0x98]
    int v19;  // [bp-0x90]
    unsigned long long v20;  // [bp-0x80]
    int v21;  // [bp-0x78]
    unsigned long long v22;  // [bp-0x68]
    int v23;  // [bp-0x60]
    unsigned long long v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x48]
    unsigned long long v26;  // [bp-0x40]
    unsigned long long v27;  // [bp-0x38]
    char v28;  // [bp-0x30]
    unsigned long v30;  // rax

    if (!(a5 & 1))
    {
        v0.to_vec("fileEDOMsizeopt1opt2i128", 4);
        v25 = 1;
        v26 = a1;
        v27 = a2;
        v28 = 0;
        v7.spec_to_string(&v25);
        v18 = v1;
        v17 = v0;
        v19 = v7;
        v20 = *((long long *)&v8);
        v7.to_vec("line_numbersort-error-disorderKbkmMgGtTPEZYRQ%", 11);
        v1 = *((long long *)&v8);
        v0 = v7;
        v7.spec_to_string(a3);
        v22 = v1;
        v21 = v0;
        v23 = v7;
        v24 = *((long long *)&v8);
        v7.to_vec("lineNoneshimname", 4);
        v6 = *((long long *)&v8);
        v5 = v7;
        v7.clone(a4);
        v1 = v6;
        memcpy(&v0, &v5, 16);
        v2 = v7;
        v4 = *((long long *)&v8);
        memcpy(&v7, &v17, 16);
        memcpy(&v8, &v18, 16);
        memcpy(&v9, &v19, 16);
        memcpy(&v12, &(char)v23, 16);
        memcpy(&v11, &v22, 16);
        v10 = v21;
        v15 = v3;
        v16 = v4;
        memcpy(&v14, &v1, 16);
        v13 = v0;
        v0.from_iter(&v7);
        return uucore::mods::locale::get_message_with_args(a0, "sort-error-disorderKbkmMgGtTPEZYRQ%", 19, &v0);
    }
    a0->field_0 = 0;
    a0->field_8 = 1;
    a0->field_10 = 0;
    return v30;
}
