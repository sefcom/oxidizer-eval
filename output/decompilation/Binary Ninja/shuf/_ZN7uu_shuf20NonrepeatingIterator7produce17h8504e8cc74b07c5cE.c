
  int64_t uu_shuf::NonrepeatingIterator::produce::h8504e8cc74b07c5c(int64_t* arg1)

{
    if (!*arg1)
    {
        int64_t rax_6 = arg1[3];
        
        if (rax_6)
        {
            arg1[3] = rax_6 - 1;
            return *(arg1[2] + (rax_6 << 3) - 8);
        }
        
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int128_t var_68;
    int64_t result;
    char i;
    
    do
    {
        int32_t* r14_1 = arg1[7];
        _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h9f1d5fa88ae4bf9d(&var_68, &arg1[8]);
        result = rand::rng::Rng::gen_range::h870d3f4f62006495(r14_1, &var_68);
        i = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h02d9e5528042f514(arg1, result);
    } while (i);
    int64_t rax_2 = arg1[9] - arg1[8];
    int64_t rcx = -1;
    
    if (rax_2 != -1)
        rcx = rax_2 + 1;
    
    if (arg1[3] >= rcx >> 2)
    {
        void var_40;
        _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h9f1d5fa88ae4bf9d(&var_40, &arg1[8]);
        int64_t* var_48 = arg1;
        int128_t var_80;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd81dd14c50db9414(&var_80, &var_48);
        int64_t r8_1 = arg1[6];
        int64_t var_70;
        
        if (var_70 < r8_1)
        {
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: remaining.len(…");
            /* no return */
        }
        
        int64_t var_78;
        _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::partial_shuffle::h688065f2043dca7f(
            &var_68, var_78, var_70, &arg1[7], r8_1);
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::h95449713c67fbf2a(&var_80, arg1[6]);
        var_68 = var_80;
        core::ptr::drop_in_place$LT$uu_shuf..NumberSet$GT$::h0fd53ab59fb65b39(arg1);
        *arg1 = 0;
        *(arg1 + 8) = var_68;
        arg1[3] = var_70;
    }
    
    return result;
}
