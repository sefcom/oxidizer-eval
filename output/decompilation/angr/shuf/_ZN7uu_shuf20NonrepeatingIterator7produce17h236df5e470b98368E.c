long long uu_shuf::NonrepeatingIterator::produce(struct_1 *a0)
{
    char v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x68]
    struct_0 *v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    unsigned long v8;  // r12
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    if (a0->field_0)
    {
        v8 = &a0->field_40;
        do
        {
            v3.clone(v8);
            v9 = a0->field_38.random_range(&v3, &g_58f458);
        } while (a0.insert(v9));
        if (a0->field_18 < ((char)amd64g_calculate_condition(5, 24, a0->field_48 - a0->field_40 + 1, 0, (unsigned long long)(char)(a0->field_48 < a0->field_40)) ? a0->field_48 - a0->field_40 + 1 : 18446744073709551615) >> 2)
            return v9;
        v6.clone(v8);
        v5 = &a0->field_0;
        v0.from_iter(&v5, &g_58f440);
        if (v2 < a0->field_30)
            core::panicking::panic("assertion failed: remaining.len() >= self.remaining_countshuf-error-start-exceeds-endshuf-error-missing-dash", 57, &g_58f470); /* do not return */
        v3.partial_shuffle(v1, v2, &a0->field_38, a0->field_30);
        v0.truncate(a0->field_30);
        v4 = v2;
        memcpy(&v3, &v0, 16);
        core::ptr::drop_in_place<uu_shuf::NumberSet>(a0);
        a0->field_0 = 0;
        *((void*)&a0->field_8) = v3;
        a0->field_18 = v4;
        return v9;
    }
    else
    {
        v10 = a0->field_18;
        if (!v10)
            core::option::unwrap_failed(&g_58f488); /* do not return */
        a0->field_18 = v10 - 1;
        return *((long long *)(*((long long *)&a0->padding_9[7]) + v10 * 8 - 8));
    }
}
