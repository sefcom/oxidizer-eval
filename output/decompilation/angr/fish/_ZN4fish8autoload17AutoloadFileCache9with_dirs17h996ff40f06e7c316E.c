double fish::autoload::AutoloadFileCache::with_dirs(long long a0, long long a1)
{
    int v0;  // [bp-0x50], Other Possible Types: char
    int v1;  // [bp-0x40]
    int v2;  // [bp-0x30]
    char v3;  // [bp-0x20]
    unsigned long long v5;  // rax
    int v6;  // xmm3
    unsigned long v7;  // rdx

    v0.new();
    v5 = std::thread::local::LocalKey<T>::with();
    a0->field_10 = a1->field_10;
    a0->field_0 = a1->field_0;
    v6 = *((int128_t *)&v3);
    *((void*)&(&a0->field_10)[1]) = v0;
    *((void*)((char *)&a0->field_18 + 8)) = v1;
    *((void*)((char *)&a0->field_28 + 8)) = v2;
    *((void*)((char *)&a0->field_38 + 8)) = v6;
    *((uint128_t *)((char *)&a0->field_48 + 8)) = g_14bd810;
    *((uint128_t *)((char *)&a0->field_58 + 8)) = g_14bd820;
    *((unsigned long long *)((char *)&a0->field_68 + 8)) = v5;
    a0->field_78 = v7;
    return (unsigned long long)g_14bd820;
}
