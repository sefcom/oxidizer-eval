long long uu_split::handle_obsolete(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x82]
    char v1;  // [bp-0x81]
    unsigned long long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x70]
    char *v4;  // [bp-0x68]
    char *v5;  // [bp-0x60]
    char *v6;  // [bp-0x58]
    int v7;  // [bp-0x50], Other Possible Types: char
    unsigned long v8;  // [bp-0x40]
    char v9;  // [bp-0x38]

    v2 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v4 = &v2;
    v5 = &v0;
    v6 = &v1;
    v9.filter_map(a1, a2, &v4);
    v7.collect(&v9);
    *((unsigned long *)((char *)&a0->field_18 + 8)) = v3;
    *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v7;
    a0->field_10 = v8;
    return v8;
}
