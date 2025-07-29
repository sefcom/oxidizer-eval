long long uu_split::number::FixedWidthNumber::new(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x38]
    char *v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // r14
    unsigned long v5;  // rbp
    char *v6;  // rdi
    unsigned long long v7;  // r15
    unsigned long long v9;  // rax
    char v10;  // dl

    v4 = a3;
    v5 = a1;
    v0.from_elem(a2, &g_5a8670);
    v6 = *((long long *)&v2);
    if ((char)v5)
    {
        v7 = v5 & 4294967295;
        while (true)
        {
            v4 = a3;
            if (!v6)
                break;
            v6 = v6.backward_unchecked();
            if (v6 >= *((long long *)&v2))
                core::panicking::panic_bounds_check(v6, *((long long *)&v2), &g_5a86a0); /* do not return */
            if (v4 >> 32)
            {
                v9 = (unsigned long long)((0 CONCAT v4) % v7) CONCAT (unsigned long long)((0 CONCAT v4) / v7);
                v10 = ((unsigned long long)((0 CONCAT v4) % v7) CONCAT (unsigned long long)((0 CONCAT v4) / v7)) >> 64;
            }
            else
            {
                v9 = ((unsigned int)((0 CONCAT (unsigned int)v4) % (v7 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v4) / (v7 & 4294967295))) & 4294967295;
                v10 = ((unsigned int)((0 CONCAT (unsigned int)v4) % (v7 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v4) / (v7 & 4294967295))) >> 32;
            }
            *((char *)(v1 + v6)) = v10;
            a3 = v9;
            if (v4 < v7)
            {
                a0->field_10 = *((long long *)&v2);
                *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
                a0->field_18 = v5;
                return a0;
            }
        }
    }
    else if (v6)
    {
        core::panicking::panic_const::panic_const_rem_by_zero(&g_5a8688); /* do not return */
    }
    if (!v4)
    {
        a0->field_10 = *((long long *)&v2);
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        a0->field_18 = v5;
        return a0;
    }
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    ::0x4c6950::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
    return a0;
}
