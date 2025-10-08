
  uint64_t uu_tail::uumain::uumain::h4f2c457a173cc598(int64_t arg1)

{
    char const (** const var_f8)[0xa3];
    uu_tail::args::parse_args::h43d18e920560b20a(&var_f8, arg1);
    char const (** const rcx)[0xa3] = var_f8;
    uint64_t var_f0;
    uint64_t rax = var_f0;
    
    if (rcx != 5)
    {
        int64_t var_b0;
        int64_t var_50_1 = var_b0;
        int128_t var_c0;
        int128_t var_60_1 = var_c0;
        int128_t var_d0;
        int128_t var_70_1 = var_d0;
        int128_t var_e0;
        int128_t var_80_1 = var_e0;
        char const (** const var_98)[0xa3] = rcx;
        uint64_t var_90_1 = rax;
        int64_t var_e8;
        int64_t var_88_1 = var_e8;
        uu_tail::args::Settings::check_warnings::h0e1cfe5e0e5b7f3f(&var_98);
        char rax_1 = uu_tail::args::Settings::verify::hc5274fc1768a90af(&var_98);
        
        if (rax_1)
        {
            uint64_t rbx_1;
            
            if (rax_1 != 1)
                rbx_1 = 0;
            else
            {
                int64_t var_48 = 0;
                char const* const var_40_1 = "-cannot follow /home/34r7hm4n/.r…";
                int64_t var_38_1 = 1;
                char var_30_1 = 1;
                int64_t* var_a8 = &var_48;
                int64_t (* var_a0_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_f8 = &data_571ae0;
                int64_t var_f0_1 = 2;
                *var_e0[8] = 0;
                int64_t** var_e8_1 = &var_a8;
                var_e0 = 1;
                int128_t var_28;
                core::option::Option$LT$T$GT$::map_or_else::h42203edf7c781717(&var_28, &var_f8);
                var_e0 = 1;
                var_f8 = var_28;
                int64_t var_18;
                int64_t var_e8_2 = var_18;
                rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h91ea36abbec1b09e(&var_f8);
            }
            
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h678d2e5b8582bfdc(&var_98);
            return rbx_1;
        }
        
        uint64_t rax_5;
        int64_t rdx_2;
        rax_5 = uu_tail::uu_tail::hb4d0bd57fdc397ee(&var_98);
        core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h678d2e5b8582bfdc(&var_98);
        rax = rax_5;
    }
    
    return rax;
}
