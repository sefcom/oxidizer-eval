long long uu_shuf::NonrepeatingIterator::produce(struct_0 *a0)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    struct_0 *v3;  // [bp-0x50], Other Possible Types: unsigned long long
    char v4;  // [bp-0x48]
    unsigned long v6;  // r12
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    if (a0->field_0)
    {
        v6 = &a0->field_38;
        do
        {
            v3.clone(v6);
            v7 = a0->field_30.random_range(&v3, &g_4fa0c8);
        } while ((char)a0.insert(v7));
        if (*((long long *)&a0->field_10) < ((char)_ccall(5, 24, a0->field_40 - a0->field_38 + 1, 0, (unsigned long long)(char)(a0->field_40 < a0->field_38)) ? a0->field_40 - a0->field_38 + 1 : 18446744073709551615) >> 2)
            return v7;
        v4.clone(v6);
        v3 = a0;
        v0.collect(&v3);
        if (v2 < *((long long *)&a0->padding_20[8]))
            core::panicking::panic("assertion failed: remaining.len() >= self.remaining_countstart exceeds endmissing '-'", 57, &g_4fa0e0); /* do not return */
        v3.partial_shuffle(v1, v2, &a0->field_30, *((long long *)&a0->padding_20[8]));
        if (*((long long *)&a0->padding_20[8]) <= v2)
            v2 = *((long long *)&a0->padding_20[8]);
        core::ptr::drop_in_place<uu_shuf::NumberSet>(a0);
        a0->field_0 = 0;
        *((int128_t *)&a0->field_8[0]) = *((int128_t *)&v0);
        *((unsigned long long *)&a0->field_10) = v2;
        return v7;
    }
    else
    {
        v8 = *((long long *)&a0->field_10);
        if (!v8)
            core::option::unwrap_failed(&g_4fa0f8); /* do not return */
        *((unsigned long long *)&a0->field_10) = v8 - 1;
        return *((long long *)(a0->field_8[1] + v8 * 8 - 8));
    }
}
