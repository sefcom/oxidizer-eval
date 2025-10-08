double fish::ast::TokenStream::new(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x48], Other Possible Types: char
    char v2;  // [bp-0x38]
    char v4;  // al

    v2.new(1);
    memcpy(&v0, &v2, 16);
    memcpy(&v1, &v2, 16);
    v4 = a3.from();
    *((void*)((char *)&a0->field_18 + 8)) = v1;
    *((void*)&(&a0->field_10)[1]) = v0;
    *((uint128_t *)&a0->field_80) = 0;
    *((unsigned long *)&a0->field_70) = a1;
    a0->field_78 = a2;
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = 0;
    *((unsigned long *)&a0->padding_40[0]) = a1;
    a0->field_48 = a2;
    a0->field_50 = 0;
    *((char *)&a0->field_58) = a4 + 1;
    *((unsigned long long *)&a0->field_60) = 0;
    *((char *)&a0->field_68) = 1;
    *((char *)&a0->field_68 + 1) = v4 & 1;
    *((char *)&a0->field_68 + 2) = v4 >> 1 & 1;
    *((char *)&a0->field_68 + 3) = v4 >> 2 & 1;
    *((char *)&a0->field_68 + 4) = v4 >> 3;
    *((char *)&a0->field_68 + 5) = 0;
    a0->field_0 = 0;
    a0->field_8 = 4;
    a0->field_10 = 0;
    return 0;
}
