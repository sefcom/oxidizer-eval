long long uu_shuf::NonrepeatingIterator::produce::h8504e8cc74b07c5c(struct_0 *a0)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: char
    unsigned long long v4;  // [sp-0x58]
    struct_0 *v5;  // [sp-0x48]
    char v6;  // [bp-0x40]
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    if (a0->field_0)
    {
        v8 = &a0->field_38;
        do
        {
            ::0x4c0cf0::_$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h9f1d5fa88ae4bf9d(&v3, v8);
            v11 = rand::rng::Rng::gen_range::h870d3f4f62006495(a0->field_30, &v3);
        } while (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h02d9e5528042f514(a0, v11));
        v12 = a0->field_40;
        v13 = v12 - a0->field_38;
        v14 = v13 + 1;
        if (!((char)amd64g_calculate_condition(5, 24, v13 + 1, 0, (unsigned long long)(char)(v12 < a0->field_38))))
            v14 = -1;
        if (*((long long *)((char *)&a0->field_8 + 8)) < v14 >> 2)
            return v11;
        ::0x4c0cf0::_$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h9f1d5fa88ae4bf9d(&v6, v8);
        v5 = a0;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd81dd14c50db9414(&v0, &v5);
        if (*((long long *)&v2) >= *((long long *)&a0->padding_20[8]))
        {
            _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::partial_shuffle::h688065f2043dca7f(&v3, *((long long *)&v1), *((long long *)&v2), &a0->field_30, *((long long *)&a0->padding_20[8]));
            alloc::vec::Vec$LT$T$C$A$GT$::truncate::h95449713c67fbf2a(&v0, *((long long *)&a0->padding_20[8]));
            v4 = *((long long *)&v2);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            core::ptr::drop_in_place$LT$uu_shuf..NumberSet$GT$::h0fd53ab59fb65b39(a0);
            a0->field_0 = 0;
            *((void*)&(&a0->field_0)[1]) = v3;
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
            return v11;
        }
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: remaining.len() >= self.remaining_countinvalid input range: invalid line count: ", 57, &g_537d08); /* do not return */
    }
    else
    {
        v9 = *((long long *)((char *)&a0->field_8 + 8));
        if (v9)
        {
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v9 - 1;
            v11 = *((long long *)((long long)a0->field_8 + v9 * 8 - 8));
            return v11;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(&g_537d20); /* do not return */
    }
}
