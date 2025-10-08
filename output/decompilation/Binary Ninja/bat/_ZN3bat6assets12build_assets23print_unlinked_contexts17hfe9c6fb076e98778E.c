
  int64_t bat::assets::build_assets::print_unlinked_contexts::hfe9c6fb076e98778(void* arg1)

{
    void var_f0;
    syntect::parsing::syntax_set::SyntaxSet::find_unlinked_contexts::haed14f5d8be33492(&var_f0, 
        arg1);
    int64_t var_e0;
    
    if (!var_e0)
        return core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..string..String$GT$$GT$::hb258e5946c886ef4(&var_f0);
    
    void** const var_78 = &data_ace0a8;
    int64_t var_70_1 = 1;
    int64_t var_68_1 = 8;
    int128_t var_60_1 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0144c99ce290211b(&var_78, &var_f0);
    
    while (true)
    {
        void** const var_d8;
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b55b84182edccc4(&var_d8, &var_78);
        
        if (0 + -(var_d8))
            break;
        
        int128_t** var_c8;
        int128_t** var_88_1 = var_c8;
        int128_t var_98 = var_d8;
        int128_t* var_a8 = &var_98;
        int64_t (* var_a0_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_d8 = &data_ace0b8;
        int64_t var_d0_1 = 2;
        int64_t var_b8_1 = 0;
        var_c8 = &var_a8;
        int64_t var_c0_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_98);
    }
    
    return core::ptr::drop_in_place$LT$alloc..collections..btree..set..IntoIter$LT$alloc..string..String$GT$$GT$::hd41112b42428ca09(&var_78);
}
