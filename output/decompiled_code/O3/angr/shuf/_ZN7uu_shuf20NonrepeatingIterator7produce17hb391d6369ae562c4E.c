long long uu_shuf::NonrepeatingIterator::produce::hb391d6369ae562c4(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3)
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
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    if (a0->field_0)
    {
        v8 = &a0->field_38;
        do
        {
            ::0x4c0870::_$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h81f1cfe36fe63b5f(&v3, v8);
            v13 = rand::rng::Rng::gen_range::h35e80320f7451337(a0->field_30, &v3, v11, v12);
        } while ((char)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h771bd27b65b70b27(a0, v13));
        v14 = a0->field_40;
        v15 = v14 - a0->field_38;
        v16 = v15 + 1;
        if (!((char)amd64g_calculate_condition(5, 24, v15 + 1, 0, (unsigned long long)(char)(v14 < a0->field_38))))
            v16 = -1;
        if (*((long long *)((char *)&a0->field_8 + 8)) < v16 >> 2)
            return v13;
        ::0x4c0870::_$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h81f1cfe36fe63b5f(&v6, v8);
        v5 = a0;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0e48297faf1b94bd(&v0, &v5, v11);
        if (*((long long *)&v2) >= *((long long *)&a0->padding_20[8]))
        {
            _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::partial_shuffle::haee9446580d02d0f(&v3, *((long long *)&v1), *((long long *)&v2), &a0->field_30, *((long long *)&a0->padding_20[8]));
            alloc::vec::Vec$LT$T$C$A$GT$::truncate::h9111bd78b126027d(&v0, *((long long *)&a0->padding_20[8]));
            v4 = *((long long *)&v2);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            core::ptr::drop_in_place$LT$uu_shuf..NumberSet$GT$::hda07bc6bade1b452(a0);
            a0->field_0 = 0;
            *((void*)&(&a0->field_0)[1]) = v3;
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
            return v13;
        }
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else
    {
        v9 = *((long long *)((char *)&a0->field_8 + 8));
        if (v9)
        {
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v9 - 1;
            v13 = *((long long *)((long long)a0->field_8 + v9 * 8 - 8));
            return v13;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
}
