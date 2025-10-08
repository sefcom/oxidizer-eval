
  fn bat::assets::build_assets::print_unlinked_contexts::hfe9c6fb076e98778(arg1: *mut c_void) -> i64

{
    let mut var_f0: ();
    syntect::parsing::syntax_set::SyntaxSet::find_unlinked_contexts::haed14f5d8be33492(&var_f0, 
        arg1);
    let var_e0: i64;
    
    if var_e0 == 0
    {
        return core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..string..String$GT$$GT$::hb258e5946c886ef4(&var_f0);
    }
    
    let mut var_78: *mut *mut c_void = &data_ace0a8;
    let var_70_1: i64 = 1;
    let var_68_1: i64 = 8;
    let var_60_1: i128 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0144c99ce290211b(&var_78, &var_f0);
    
    loop
    {
        let mut var_d8: *mut *mut c_void;
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b55b84182edccc4(&var_d8, &var_78);
        
        if 0 + -(var_d8)
        {
            break;
        }
        
        let mut var_c8: *mut *mut i128;
        let var_88_1: *mut *mut i128 = var_c8;
        let mut var_98: i128 = var_d8;
        let mut var_a8: *mut i128 = &var_98;
        let var_a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_d8 = &data_ace0b8;
        let var_d0_1: i64 = 2;
        let var_b8_1: i64 = 0;
        var_c8 = &var_a8;
        let var_c0_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_98);
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..btree..set..IntoIter$LT$alloc..string..String$GT$$GT$::hd41112b42428ca09(&var_78)
}
