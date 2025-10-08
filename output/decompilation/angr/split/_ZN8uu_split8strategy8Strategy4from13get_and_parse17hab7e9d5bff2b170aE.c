long long uu_split::strategy::Strategy::from::get_and_parse(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 **a4, struct_0 **a5)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xa0]
    int v2;  // [bp-0x98]
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x48]
    unsigned long long v10[3];  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    v0.try_get_one(a1, a2, a3);
    v10 = a2.unwrap(a3, &v0);
    if (!v10)
        core::option::unwrap_failed(&g_50ae18); /* do not return */
    uucore::features::parser::parse_size::parse_size_u64_max(&v4, v10[1], v10[2]);
    if (*((int *)&v4) != 4)
    {
        memcpy(&v8, &v6, 16);
        memcpy(&v7, &v4, 16);
        a5(&v0, &v7);
        v12 = *((long long *)&v3);
        *((unsigned long long *)&a0[32]) = v12;
        a0[16] = v2;
        *((int128_t *)a0) = *((int128_t *)&v0);
        return v12;
    }
    else if (v5)
    {
        v11 = a4(a0 + 8);
        *((unsigned long long *)a0) = 4;
        return v11;
    }
    else
    {
        v1.clone(v10);
        v0 = 1;
        return a5(a0, &v0);
    }
}
