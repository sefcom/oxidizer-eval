long long fish::highlight::highlight::parse_text_face_for_highlight(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    char v0;  // [bp-0x19], Other Possible Types: unsigned int
    char v1;  // [bp-0x15]
    char v2;  // [bp-0x14]
    unsigned short v3;  // [bp-0x13]
    char v4;  // [bp-0x11]
    char v5;  // [bp-0x10]
    unsigned short v6;  // [bp-0xf]
    char v7;  // [bp-0xd]
    char v8;  // [bp-0xc]
    unsigned short v9;  // [bp-0xb]
    char v10;  // [bp-0x9]
    unsigned long long v11;  // [bp-0x8]
    unsigned long long v13;  // rbx
    unsigned int v14;  // ecx
    unsigned int v15;  // esi
    unsigned int v16;  // edx

    v11 = v13;
    fish::text_face::parse_text_face(&v0, a1 + 16, a2);
    v14 = v2;
    v15 = v5;
    v16 = v8;
    a0->field_0 = v0;
    a0->field_4 = v1;
    *((int *)&(&a0->field_4)[1]) = (v14 == 4 ? 3 : v4 * &g_1000000 | v3 * 0x100 | v14);
    *((int *)((char *)&a0->field_5 + 1)) = (v15 == 4 ? 3 : v7 * &g_1000000 | v6 * 0x100 | v15);
    *((int *)((char *)&a0->field_9 + 1)) = (v16 != 4 ? v10 * &g_1000000 | v9 * 0x100 | v16 : 0);
    return (v14 == 4 ? 3 : v4 * &g_1000000 | v3 * 0x100 | v14);
}
