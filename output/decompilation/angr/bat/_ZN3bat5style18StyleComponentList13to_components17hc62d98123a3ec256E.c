void bat::style::StyleComponentList::to_components(unsigned long long a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0xa9]
    int v1;  // [bp-0xa8]
    int v2;  // [bp-0x98]
    char v3;  // [bp-0x88]
    int v4;  // [bp-0x78], Other Possible Types: char
    int v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    char v7;  // [bp-0x40]
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx

    v0 = a2;
    v4.default();
    memcpy(&v3, &v6, 16);
    v2 = v5;
    v1 = v4;
    v9 = (unsigned long long)0.components();
    v1.extend(v9, v10 + v9);
    v7.into_iter(a1);
    memcpy(&v6, &v3, 16);
    v5 = v2;
    v4 = v1;
    a0.fold(&v7, &v4, &v0);
    return;
}
