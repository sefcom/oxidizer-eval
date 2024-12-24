long long uu_sort::numeric_str_cmp::human_numeric_str_cmp::hdca8be58aaadbbd6(struct_1 *a0, struct_1 *a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x68]
    struct_0 *v2;  // [sp-0x60]
    unsigned long long v3;  // [sp-0x58]
    unsigned long long v4;  // [sp-0x50]
    unsigned long v5;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x40]
    struct_0 *v7;  // [sp-0x38]
    struct_0 *v9;  // r14
    struct_0 *v10;  // rbx
    char v11;  // bpl
    char v12;  // cl
    unsigned long long v13;  // r13
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax
    char v16;  // r12b
    unsigned int v17;  // edx
    unsigned int v18;  // eax
    unsigned long long v19;  // rdx
    char v20;  // al
    unsigned long long v21;  // rax

    v9 = a0->field_10;
    v10 = a1->field_10;
    v11 = v9->field_8;
    v12 = v10->field_8;
    if (v11 != v12)
    {
        v15 = -(v11 < v12) | -0x100 | (char)-(v11 < v12) | 1;
        return v15;
    }
    v13 = a0->field_0;
    v14 = a1->field_0;
    v3 = a1->field_8;
    v4 = a0->field_8;
    v0 = v13;
    v1 = v13 + v4;
    v16 = 0;
    if (!(int)::0x55d950::core::str::validations::next_code_point_reverse::ha43ee09bfa85e48e(&v0))
    {
        v0 = v14;
        v1 = v3 + v14;
        v18 = ::0x55d950::core::str::validations::next_code_point_reverse::ha43ee09bfa85e48e(&v0);
    }
    else
    {
        switch (v17)
        {
        case 69:
            v16 = 6;
            break;
        case 71:
            v16 = 3;
            break;
        case 75: case 107:
            v16 = 1;
            break;
        case 77:
            v16 = 2;
            break;
        case 80:
            v16 = 5;
            break;
        case 84:
            v16 = 4;
            break;
        case 89:
            v16 = 8;
            break;
        case 90:
            v16 = 7;
            break;
        }
        v0 = v14;
        v1 = v3 + v14;
        v18 = ::0x55d950::core::str::validations::next_code_point_reverse::ha43ee09bfa85e48e(&v0);
    }
    if (!v18)
    {
        v20 = 0;
    }
    else
    {
        v20 = 0;
        switch ((unsigned int)v19)
        {
        case 69:
            v20 = 6;
            break;
        case 71:
            v20 = 3;
            break;
        case 75: case 107:
            v20 = 1;
            break;
        case 77:
            v20 = 2;
            break;
        case 80:
            v20 = 5;
            break;
        case 84:
            v20 = 4;
            break;
        case 89:
            v20 = 8;
            break;
        case 90:
            v20 = 7;
            break;
        }
    }
    v21 = (v20 <= v16 ? (-0x100 | v16 != v20) & 4294967295 & 4294967295 : 255);
    if (!(char)v21)
    {
        v5 = v13;
        v6 = v4;
        v7 = v9;
        v0 = v14;
        v1 = v3;
        v2 = v10;
        v15 = ::0x560780::uu_sort::numeric_str_cmp::numeric_str_cmp::h525b5c98b6b0704a(&v5, &v0);
        return v15;
    }
    v15 = (v11 ? v21 & 4294967295 & 4294967295 : -((char)v21));
    return v15;
}
