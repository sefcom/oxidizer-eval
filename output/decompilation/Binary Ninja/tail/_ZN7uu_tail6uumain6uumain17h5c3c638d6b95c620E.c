
  int128_t* uu_tail::uumain::uumain::h5c3c638d6b95c620(int64_t arg1)

{
    void** const var_f8;
    uu_tail::args::parse_args::h21b79a77363e2b6a(&var_f8, arg1);
    void** const rcx = var_f8;
    int128_t* var_f0;
    
    if (rcx == 5)
        return var_f0;
    
    int64_t var_b0;
    int64_t var_50_1 = var_b0;
    int128_t var_c0;
    int128_t var_60_1 = var_c0;
    int128_t var_d0;
    int128_t var_70_1 = var_d0;
    int128_t var_e0;
    int128_t var_80_1 = var_e0;
    void** const var_98 = rcx;
    int128_t* var_90_1 = var_f0;
    int64_t var_e8;
    int64_t var_88_1 = var_e8;
    uu_tail::args::Settings::check_warnings::hc95159a783f4a1c8(&var_98);
    char rax_1 = uu_tail::args::Settings::verify::h67589dab63f9aa61(&var_98);
    int128_t* rbx_1;
    
    if (rax_1 == 2)
        rbx_1 = nullptr;
    else
    {
        if (rax_1 != 1)
        {
            int128_t* rax_5;
            int64_t rdx_3;
            rax_5 = uu_tail::uu_tail::h84841135fb1b0c3f(&var_98);
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h333061858f2bc617(&var_98);
            return rax_5;
        }
        
        int64_t var_48 = 0;
        char const* const var_40_1 = "-cannot follow ";
        int64_t var_38_1 = 1;
        char var_30_1 = 1;
        int64_t* var_a8 = &var_48;
        int64_t (* var_a0_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_f8 = &data_5b85d0;
        int64_t var_f0_1 = 2;
        *var_e0[8] = 0;
        int64_t** var_e8_1 = &var_a8;
        var_e0 = 1;
        int128_t var_28;
        core::option::Option$LT$T$GT$::map_or_else::h0da0019156620c79(&var_28, &var_f8);
        var_e0 = 1;
        var_f8 = var_28;
        int64_t var_18;
        int64_t var_e8_2 = var_18;
        rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h6de0ca5f93407dd6(&var_f8);
    }
    
    core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h333061858f2bc617(&var_98);
    return rbx_1;
}
