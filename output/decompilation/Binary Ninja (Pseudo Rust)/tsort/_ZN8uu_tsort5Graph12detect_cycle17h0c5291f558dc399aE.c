
  fn uu_tsort::Graph::detect_cycle::h0c5291f558dc399a(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut var_60: ();
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h4998c0ffd20ae47a(&var_60);
    let mut var_b0: i64;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h22ab93a426132a55(&var_b0, arg2[3], 0);
    let var_a8: i64;
    
    if var_b0 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_a8);
        /* no return */
    }
    
    let mut var_d0: i64 = var_a8;
    let var_a0: i64;
    let var_c8: i64 = var_a0;
    let var_c0: i64 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hc8089db10f6b491b(&var_b0, arg2);
    let var_90: i64;
    let var_68: i64 = var_90;
    let var_78: i128 = var_a0;
    let mut var_88: i128 = var_b0;
    
    loop
    {
        let rax_2: *mut *mut i64 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc5c7a3920db9fcf3(&var_88);
        
        if rax_2 == 0
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        let rbp_1: *mut i64 = *rax_2;
        let rbx_1: i64 = rax_2[1];
        
        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hc8a189156979c911(&var_60, 
            rbp_1, rbx_1) == 0
            && uu_tsort::Graph::dfs::h6d3ff1788ece85a8(arg2, rbp_1, rbx_1, &var_60, &var_d0) != 0
        {
            break;
        }
    }
    
    arg1[1] = var_c0;
    *arg1 = var_d0;
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$$RF$str$GT$$GT$::h784233dee5191ff5(&var_60)
}
