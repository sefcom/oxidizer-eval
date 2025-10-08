
  int64_t uu_tsort::Graph::detect_cycle::he977b3591bc78cb9(int128_t* arg1, void* arg2)

{
    int64_t var_c8 = 0;
    int64_t* var_c0 = 8;
    int64_t var_b8 = 0;
    int128_t var_60;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h2e9a564f7dfa53c1(&var_60, arg2 + 0x18);
    
    while (true)
    {
        int64_t rax_1 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h781c599668cd142a(&var_60);
        
        if (!rax_1)
            break;
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::he0bb8203879665a3(&var_c8, rax_1);
    }
    
    if (var_b8 >= 2)
    {
        void var_c9;
        
        if (var_b8 >= 0x15)
            core::slice::sort::unstable::ipnsort::h2f1712faeb7eb0ee(var_c0, var_b8, &var_c9);
        else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::hcb7b59225195c5b3(
                var_c0, var_b8, 1);
    }
    
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::ha19d1886ac477c4c(&var_60);
    int128_t var_40;
    int128_t var_78 = var_40;
    int128_t var_50;
    int128_t var_88 = var_50;
    int128_t var_98 = var_60;
    int64_t rax_2;
    int64_t rdx_1;
    rax_2 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h71d8534b57e79723(
        *(arg2 + 0x30), 8, 0x10);
    int64_t var_b0 = rax_2;
    int64_t var_a8 = rdx_1;
    int64_t var_a0 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h07e54bea6521bd7b(&var_60, &var_c8);
    int64_t** i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45888b6cb6b61f5b(&var_60);
    
    if (i_2)
    {
        int64_t** i_1 = i_2;
        int64_t** i;
        
        do
        {
            if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0d0bb528157eeff4(
                &var_98, i_1)
                && uu_tsort::Graph::dfs::h69e8652cb4211fe8(arg2, *i_1, i_1[1], &var_98, &var_b0))
            {
                arg1[1] = var_a0;
                *arg1 = var_b0;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$$RF$str$GT$$GT$::h0b68fb3399b74d1a(&var_60);
                return core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$str$GT$$GT$::h67c827c73ff2c6a7(var_98, *var_98[8]);
            }
            
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45888b6cb6b61f5b(&var_60);
            i_1 = i;
        } while (i);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$$RF$str$GT$$GT$::h0b68fb3399b74d1a(&var_60);
    core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
    /* no return */
}
