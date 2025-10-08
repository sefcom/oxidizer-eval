long long fish::highlight::highlight::Highlighter::new(struct_1 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, struct_0 *a6, char a7)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    char v1;  // [bp-0x38]
    unsigned long long v2;  // rax

    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a6->field_0[1], a6->field_8);
    *((long long *)((char *)&a0->field_28 + 8)) = *((long long *)&v1);
    *((void*)&(&a0->field_20)[1]) = v0;
    a0->field_70 = a1;
    a0->field_78 = a2;
    a0->field_0 = a3;
    a0->field_8 = a4;
    a0->field_80 = a5;
    *((char *)&a0->field_88) = a7;
    *((unsigned long long [2])&a0->field_10) = a6->field_0;
    v2 = a6->field_8;
    a0->field_20 = v2;
    a0->field_38 = a5;
    a0->field_40 = 0;
    a0->field_48 = 1;
    *((uint128_t *)&a0->field_50) = 0;
    *((unsigned long long *)((char *)&a0->field_58 + 8)) = 8;
    a0->field_68 = 0;
    *((char *)&a0->field_88 + 1) = 0;
    return v2;
}
