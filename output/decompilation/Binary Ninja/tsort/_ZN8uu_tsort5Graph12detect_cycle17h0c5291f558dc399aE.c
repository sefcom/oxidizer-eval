
  int64_t uu_tsort::Graph::detect_cycle::h0c5291f558dc399a(int128_t* arg1, int64_t* arg2)

{
    void var_60;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h4998c0ffd20ae47a(&var_60);
    int64_t var_b0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h22ab93a426132a55(&var_b0, arg2[3], 0);
    int64_t var_a8;
    
    if (var_b0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_a8);
        /* no return */
    }
    
    int64_t var_d0 = var_a8;
    int64_t var_a0;
    int64_t var_c8 = var_a0;
    int64_t var_c0 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hc8089db10f6b491b(&var_b0, arg2);
    int64_t var_90;
    int64_t var_68 = var_90;
    int128_t var_78 = var_a0;
    int128_t var_88 = var_b0;
    
    while (true)
    {
        int64_t** rax_2 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc5c7a3920db9fcf3(&var_88);
        
        if (!rax_2)
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        int64_t* rbp_1 = *rax_2;
        int64_t rbx_1 = rax_2[1];
        
        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hc8a189156979c911(&var_60, 
                rbp_1, rbx_1)
                && uu_tsort::Graph::dfs::h6d3ff1788ece85a8(arg2, rbp_1, rbx_1, &var_60, &var_d0))
            break;
    }
    
    arg1[1] = var_c0;
    *arg1 = var_d0;
    return core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$str$GT$$GT$::h784233dee5191ff5(&var_60);
}
