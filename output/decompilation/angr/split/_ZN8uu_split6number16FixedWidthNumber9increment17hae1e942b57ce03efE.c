long long uu_split::number::FixedWidthNumber::increment(struct_0 *a0)
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // r14
    char v5;  // bpl
    char *v6;  // rax
    char *v7;  // rax
    char *v8;  // rax
    char v9;  // cl
    unsigned long long v10;  // rdx
    unsigned int v11;  // eax

    v4 = a0->field_8;
    if (a0->field_10)
    {
        v5 = a0->field_18;
        v6 = a0->field_10;
        v7 = v6;
        while (true)
        {
            v8 = v7.backward_unchecked();
            if (v8 >= v6)
                core::panicking::panic_bounds_check(v8, v6, &g_5a86b8); /* do not return */
            v9 = v8[v4];
            v8[v4] = v9 + 1;
            if (v9 + 1 != v5)
                break;
            v8[v4] = 0;
            v7 = v8;
            if (!v7)
                break;
        }
    }
    v0.from_elem(v6, &g_5a86d0);
    v11 = v4.equal(v6, v1.index(*((long long *)&v2)), v10);
    ::0x4c6950::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
    return v11;
}
