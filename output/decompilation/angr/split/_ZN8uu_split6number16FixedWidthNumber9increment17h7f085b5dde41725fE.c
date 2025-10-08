long long uu_split::number::FixedWidthNumber::increment(struct_0 *a0)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // r14
    char v5;  // al
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rcx
    char v9;  // dl
    unsigned int v11;  // eax

    v4 = a0->field_8;
    if (a0->field_10)
    {
        v5 = a0->field_18;
        v6 = a0->field_10;
        v7 = v6;
        while (true)
        {
            v8 = v7;
            v9 = *((char *)(v4 + v8 - 1));
            *((char *)(v4 + v8 - 1)) = v9 + 1;
            if (v9 + 1 != v5)
                break;
            *((char *)(v4 + v8 - 1)) = 0;
            v7 = v8 - 1;
            if (v8 == 1)
                break;
        }
    }
    v0.from_elem(v6, &g_50abd8);
    v11 = v4.eq(v6, v1, *((long long *)&v2));
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
    return v11;
}
