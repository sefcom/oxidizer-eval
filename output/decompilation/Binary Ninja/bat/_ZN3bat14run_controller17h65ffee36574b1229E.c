
  int64_t bat::run_controller::h65ffee36574b1229(int128_t* arg1, int64_t* arg2, void* arg3, int64_t arg4, uint64_t arg5)

{
    int64_t var_138;
    bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(&var_138, *(arg3 + 0x127), arg4, 
        arg5);
    int64_t rax = var_138;
    int128_t var_130;
    int128_t var_188 = var_130;
    int128_t var_120;
    int128_t var_110;
    int128_t var_100;
    int128_t var_f0;
    
    if (rax == -0x7fffffffffffffff)
    {
        arg1[4] = var_f0;
        int128_t zmm0 = var_188;
        arg1[3] = var_100;
        arg1[2] = var_110;
        arg1[1] = var_120;
        *arg1 = zmm0;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::ha5b8727e1c389dbc(arg2);
    }
    
    int64_t var_b0;
    int64_t var_20 = var_b0;
    int128_t var_c0;
    int128_t var_30 = var_c0;
    int128_t var_d0;
    int128_t var_40 = var_d0;
    int128_t var_e0;
    int128_t var_50 = var_e0;
    int128_t var_a0 = var_188;
    int128_t var_90 = var_120;
    int128_t var_80 = var_110;
    int128_t var_70 = var_100;
    int128_t var_60 = var_f0;
    int64_t var_a8 = rax;
    var_188 = arg3;
    *var_188[8] = &var_a8;
    
    if (*(arg3 + 0x12a) != 2 && *(arg3 + 0x128))
    {
        void* r15;
        r15 = 1;
        bat::get_new_terminal_title::h8b51db7900522cfa(&var_138, arg2[1], arg2[2]);
        bat::set_terminal_title_to::h432aeef32092f2a4(&var_138);
    }
    
    *var_130[8] = arg2[2];
    var_138 = *arg2;
    bat::controller::Controller::run::h2c1d1acaa272306e(arg1, &var_188, &var_138, 0);
    return core::ptr::drop_in_place$LT$bat..assets..HighlightingAssets$GT$::h6be43cd2c3f1f295(
        &var_a8);
}
