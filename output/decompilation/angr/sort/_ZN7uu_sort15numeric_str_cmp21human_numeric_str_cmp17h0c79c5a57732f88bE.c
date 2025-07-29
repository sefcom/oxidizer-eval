long long uu_sort::numeric_str_cmp::human_numeric_str_cmp(struct_1 *a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x70]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68], Other Possible Types: unsigned long long
    struct_0 *v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    unsigned long v7;  // [bp-0x40]
    struct_0 *v8;  // [bp-0x38]
    unsigned long v10;  // rbp
    unsigned long v11;  // rcx
    unsigned long v12;  // r13
    unsigned long v13;  // r15
    unsigned int v14;  // edx
    char v15;  // r12b
    unsigned int v16;  // eax
    unsigned long long v17;  // rdx
    char v18;  // al
    unsigned long v19;  // rax

    v10 = a0->field_10->field_8;
    v11 = a1->field_10->field_8;
    if ((char)v10 != (char)v11)
    {
        v19 = -((v10 & 255) < (v11 & 255));
        return v19 & 0xffffff00 | (char)v19 | 1;
    }
    v12 = a0->field_0;
    v13 = a1->field_0;
    v4 = a1->field_8;
    v5 = a0->field_8;
    v0 = v12;
    v2 = v12 + a0->field_8;
    if ((int)::0x5434e0::core::str::validations::next_code_point_reverse(&v0))
    {
        switch (v14)
        {
        case 69:
            v15 = 6;
            break;
        case 71:
            v15 = 3;
            break;
        case 75: case 107:
            v15 = 1;
            break;
        case 77:
            v15 = 2;
            break;
        case 80:
            v15 = 5;
            break;
        case 81:
            v15 = 10;
            break;
        case 82:
            v15 = 9;
            break;
        case 84:
            v15 = 4;
            break;
        case 89:
            v15 = 8;
            break;
        case 90:
            v15 = 7;
            break;
        }
        v0 = v13;
        v2 = v4 + v13;
        v16 = ::0x5434e0::core::str::validations::next_code_point_reverse(&v0);
    }
    else
    {
        v1 = v13;
        v2 = v4 + v13;
        v16 = ::0x5434e0::core::str::validations::next_code_point_reverse(&v1);
    }
    if (v16)
    {
        switch ((unsigned int)v17)
        {
        case 69:
            v18 = 6;
            break;
        case 71:
            v18 = 3;
            break;
        case 75: case 107:
            v18 = 1;
            break;
        case 77:
            v18 = 2;
            break;
        case 80:
            v18 = 5;
            break;
        case 81:
            v18 = 10;
            break;
        case 82:
            v18 = 9;
            break;
        case 84:
            v18 = 4;
            break;
        case 89:
            v18 = 8;
            break;
        case 90:
            v18 = 7;
            break;
        }
    }
    if (!(char)(v18 <= v15 ? 255 : v15 != v18))
    {
        v6 = v12;
        v7 = v5;
        v8 = a0->field_10;
        v0 = v13;
        v2 = v4;
        v3 = a1->field_10;
        return ::0x545e00::uu_sort::numeric_str_cmp::numeric_str_cmp(&v6, &v0);
    }
    return ((v10 & 255) ? -((char)(v18 <= v15 ? 255 : v15 != v18)) : (v18 <= v15 ? 255 : v15 != v18) & 4294967295);
}
