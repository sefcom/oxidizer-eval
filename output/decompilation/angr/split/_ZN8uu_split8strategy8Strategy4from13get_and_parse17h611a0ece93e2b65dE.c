long long uu_split::strategy::Strategy::from::get_and_parse(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 **a4, struct_1 **a5)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    char v1;  // [bp-0x70]
    int v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    unsigned long long v7[3];  // rax
    unsigned long long v8;  // rax

    v0.try_get_one(a1, a2, a3);
    v7 = a2.unwrap(a3, &v0);
    if (!v7)
        core::option::unwrap_failed(&g_5a7c48); /* do not return */
    uucore::features::parser::parse_size::parse_size_u64_max(&v4, v7[1], v7[2]);
    if (*((int *)&v4) != 4)
    {
        v0.call_once(a5, &v4);
        a0->field_20 = v3;
        *((void*)&a0->field_10) = v2;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        return v3;
    }
    else if (*((long long *)&v5))
    {
        v8 = a4(&a0->padding_1[7]);
        *((unsigned long long *)&a0->field_0) = 4;
        return v8;
    }
    else
    {
        v1.clone(v7);
        v0 = 1;
        return a5(a0, &v0);
    }
}
