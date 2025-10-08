long long uu_sort::numeric_str_cmp::human_numeric_str_cmp(struct_1 *a0, struct_3 *a1)
{
    char v0;  // [sp-0x70], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68], Other Possible Types: unsigned long long
    struct_2 *v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    unsigned long v7;  // [bp-0x40]
    struct_0 *v8;  // [bp-0x38]
    unsigned long v10;  // r14
    unsigned long v11;  // rax
    unsigned long v12;  // r12
    unsigned int v13;  // edx
    char v14;  // r13b
    unsigned int v15[4];  // rax
    unsigned long long v16;  // rdx
    char v17;  // cc_dep2

    v10 = a0->field_10->field_8;
    v11 = a1->field_10->field_8;
    if ((char)v10 != (char)v11)
        return (v11 < v10) - (v10 < v11);
    v12 = a1->field_0;
    v4 = a1->field_8;
    v5 = a0->field_8;
    v2 = a0->field_0 + a0->field_8;
    if (((char)core::str::validations::next_code_point_reverse(&v0) & 1))
    {
        switch (v13)
        {
        case 69:
            v14 = 6;
            break;
        case 71:
            v14 = 3;
            break;
        case 75: case 107:
            v14 = 1;
            break;
        case 77:
            v14 = 2;
            break;
        case 80:
            v14 = 5;
            break;
        case 81:
            v14 = 10;
            break;
        case 82:
            v14 = 9;
            break;
        case 84:
            v14 = 4;
            break;
        case 89:
            v14 = 8;
            break;
        case 90:
            v14 = 7;
            break;
        }
        v0 = v12;
        v2 = v4 + v12;
        v15 = core::str::validations::next_code_point_reverse(&v0);
    }
    else
    {
        v1 = v12;
        v2 = v4 + v12;
        v15 = core::str::validations::next_code_point_reverse(&v1);
    }
    if (!((char)v15 & 1))
        goto LABEL_4cf78b;
    switch ((unsigned int)v16)
    {
    case 69:
        v17 = 6;
        if (v14 != 6)
            goto LABEL_4cf7d0;
        break;
    case 71:
        v17 = 3;
        if (v14 != 3)
            goto LABEL_4cf7d0;
        break;
    case 75: case 107:
        v17 = 1;
        if (v14 != 1)
            goto LABEL_4cf7d0;
        break;
    case 77:
        v17 = 2;
        if (v14 != 2)
            goto LABEL_4cf7d0;
        break;
    case 80:
        v17 = 5;
        if (v14 != 5)
            goto LABEL_4cf7d0;
        break;
    case 81:
        v17 = 10;
        if (v14 != 10)
            goto LABEL_4cf7d0;
        break;
    case 82:
        v17 = 9;
        goto LABEL_4cf78b;
    case 84:
        v17 = 4;
        if (v14 != 4)
            goto LABEL_4cf7d0;
        break;
    case 89:
        v17 = 8;
        if (v14 != 8)
        {
LABEL_4cf7d0:
            return v15 & 0xffffffffffffff00 | (v14 > v17) - 0 - (v14 < v17);
        }
        break;
    case 90:
        v17 = 7;
        if (v14 != 7)
            goto LABEL_4cf7d0;
        break;
    default:
LABEL_4cf78b:
        if (v14 != v17)
            goto LABEL_4cf7d0;
        break;
    }
    v6 = a0->field_0;
    v7 = v5;
    v8 = a0->field_10;
    v0 = v12;
    v2 = v4;
    v3 = a1->field_10;
    return uu_sort::numeric_str_cmp::numeric_str_cmp(&v6, &v0);
}
