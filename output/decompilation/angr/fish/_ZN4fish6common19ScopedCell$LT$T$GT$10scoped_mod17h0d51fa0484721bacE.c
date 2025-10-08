double fish::common::ScopedCell<T>::scoped_mod(long long a0, long long a1)
{
    char v0;  // [bp-0x38]
    int v2;  // xmm0
    int v3;  // xmm0
    int v4;  // xmm1

    fish::reader::expand_replacer::{{closure}}(&v0);
    v2 = a1[0];
    *((uint128_t *)((char *)&a0->field_8 + 8)) = a1[1];
    *((void*)&(&a0->field_0)[1]) = v2;
    *((void*)&a1[0]) = v3;
    *((void*)&a1[1]) = v4;
    a0->field_0 = a1;
    return (unsigned long long)v3;
}
