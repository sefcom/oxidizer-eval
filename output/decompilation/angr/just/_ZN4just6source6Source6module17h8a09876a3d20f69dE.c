char just::source::Source::module(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3[3])
{
    unsigned int v0;  // [bp-0xc4]
    int v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xa8]
    int v3;  // [bp-0xa0], Other Possible Types: char
    char v4;  // [bp-0x90]
    int v5;  // [bp-0x68], Other Possible Types: char
    unsigned long long v6;  // [bp-0x58]
    int v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x38]
    unsigned long long v10;  // r15
    unsigned long long v11;  // r12
    unsigned long v12;  // rsi
    unsigned long long v13;  // rax

    v0 = a1->field_78;
    v3.clone(a1->field_8, a1->field_10);
    v5.into_iter(&v3);
    v10 = a3[1];
    v11 = a3[2];
    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v3, v10, v11);
    v2 = *((long long *)&v4);
    v1 = v3;
    v3.chain(&v5, &v1);
    v7.collect(&v3);
    v12 = &a1->field_60;
    if ((char)(((0 ^ a1->field_60) & (0 ^ -(a1->field_60))) >> 63))
        v12 = 0;
    v3.map_or_else(v12, a2, a2);
    v2 = *((long long *)&v4);
    v1 = v3;
    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v3, v10, v11);
    v6 = *((long long *)&v4);
    memcpy(&v5, &v3, 16);
    v13 = v10.parent(v11);
    if (!v13)
        core::option::unwrap_failed(&g_831008); /* do not return */
    v3.to_vec(v13, a2);
    *((long long *)((char *)&a0->field_48 + 8)) = *((long long *)&v4);
    *((void*)&(&a0->field_40)[1]) = v3;
    *((unsigned int *)((char *)&a0->field_60 + 8)) = v0 + 1;
    *((void*)&a0->field_0) = v7;
    a0->field_10 = *((long long *)&v8);
    a0->field_18 = 0;
    a0->field_20 = 8;
    a0->field_28 = 0;
    *((void*)&a0->field_58) = v1;
    *((unsigned long long *)&a0->field_60) = v2;
    *((void*)&a0->field_30) = v5;
    a0->field_40 = v6;
    return core::ptr::drop_in_place<std::path::PathBuf>(a3);
}
