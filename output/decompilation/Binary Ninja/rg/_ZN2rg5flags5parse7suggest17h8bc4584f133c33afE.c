
  int64_t rg::flags::parse::suggest::h8bc4584f133c33af(int128_t* arg1)

{
    int64_t var_70;
    rg::flags::parse::find_similar_names::hae5f1ed6e0368f47(&var_70);
    int64_t var_60;
    
    if (!var_60)
    {
        *arg1 = -0x8000000000000000;
        int64_t var_68;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hc0c276afa06f1591(
            var_70, var_68);
    }
    
    int128_t var_58;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h63de973468f81233(&var_58, &var_70);
    int128_t* var_a0;
    core::iter::traits::iterator::Iterator::collect::h3297feb4f9d7756d(&var_a0, &var_58);
    int64_t var_98;
    int64_t var_90;
    alloc::str::join_generic_copy::h51bc700a0c907f5e(&var_58, var_98, var_90, 
        ", invalid hyperlink formatiglobI…", 2);
    int64_t var_48;
    int64_t var_78 = var_48;
    int128_t var_88 = var_58;
    uint64_t rdx_1 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(&var_a0);
    var_a0 = &var_88;
    int64_t (* var_98_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_58 = &data_7eb640;
    *var_58[8] = 1;
    int64_t var_38 = 0;
    int128_t** var_48_1 = &var_a0;
    int64_t var_40 = 1;
    int128_t var_28;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_28, 0, rdx_1, &var_58);
    int64_t var_18;
    arg1[1] = var_18;
    *arg1 = var_28;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88);
}
