long long fish::input::InputMappingSet::get_names(unsigned long long a0, unsigned long long a1[6], unsigned int a2)
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long v5;  // rax
    unsigned long v6;  // rcx
    unsigned long v7;  // rdi
    unsigned long v8;  // rsi
    unsigned long v9;  // rcx
    unsigned long v10;  // rdi

    v5 = &a1[4];
    v6 = &a1[1];
    v7 = &a1[5];
    v8 = &a1[2];
    if (a2)
        v9 = v6;
    else
        v9 = v5;
    if (!a2)
        v10 = v7;
    else
        v10 = v8;
    v0.clone(*((long long *)v9), *((long long *)v10));
    core::slice::<impl [T]>::sort_unstable_by_key(v1, v2);
    v3.into_iter(&v0);
    a0.collect(&v3);
    return a0;
}
