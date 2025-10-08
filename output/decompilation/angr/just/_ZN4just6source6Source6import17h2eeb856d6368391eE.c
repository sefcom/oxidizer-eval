long long just::source::Source::import(struct_2 *a0, struct_0 *a1, struct_1 *a2, unsigned long long a3)
{
    int v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xb8]
    int v2;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0x98]
    int v5;  // [bp-0x80], Other Possible Types: char
    char v6;  // [bp-0x70]
    int v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x38]
    unsigned int v10;  // ebp
    unsigned long long v11;  // rax

    v10 = a1->field_78;
    v5.clone(a1->field_8, a1->field_10);
    v2.into_iter(&v5);
    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v5, a2->field_0[1], a2->field_8);
    v1 = *((long long *)&v6);
    v0 = v5;
    v5.chain(&v2, &v0);
    v7.collect(&v5);
    v5.chain(a1->field_20, a1->field_20 + a1->field_28 * 8, a3);
    v0.collect(&v5);
    if ((char)(((0 ^ a1->field_60) & (0 ^ -(a1->field_60))) >> 63))
    {
        v3 = 0x8000000000000000;
    }
    else
    {
        v5.clone(a1->field_68, a1->field_70);
        v4 = *((long long *)&v6);
        v2 = v5;
    }
    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v5, a1->field_50, a1->field_58);
    (&a0->field_40)[1] = *((long long *)&v6);
    *((void*)((char *)&a0->field_30 + 8)) = v5;
    *((unsigned int *)&(&a0->field_58)[1]) = v10 + 1;
    a0->field_10 = *((long long *)&v8);
    *((void*)&a0->field_0) = v7;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v1;
    *((void*)&(&a0->field_10)[1]) = v0;
    *((void*)&a0->field_48) = v2;
    a0->field_58 = v4;
    *((unsigned long long [2])&a0->field_28) = a2->field_0;
    v11 = a2->field_8;
    *((unsigned long long *)&a0->field_30) = v11;
    return v11;
}
