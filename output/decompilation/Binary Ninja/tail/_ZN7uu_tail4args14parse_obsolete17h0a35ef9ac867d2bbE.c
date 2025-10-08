
  int64_t* uu_tail::args::parse_obsolete::h0a35ef9ac867d2bb(int64_t* arg1, void* arg2, void* arg3)

{
    int64_t r15 = *(arg2 + 8);
    uint64_t r12 = *(arg2 + 0x10);
    char var_38;
    uu_tail::parse::parse_obsolete::h9e4918f448acbdfb(&var_38);
    char var_2e;
    uint32_t rax = var_2e;
    
    if (rax == 2)
    {
        uint64_t r13_1 = var_38;
        void var_50;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, r15, r12);
        char const (** const var_e8)[0x10];
        int64_t var_d0_1;
        int64_t* var_b8;
        void* var_a8;
        int64_t var_98;
        int64_t var_88;
        int128_t var_80;
        int128_t var_68_1;
        int128_t var_48;
        int64_t rax_4;
        
        switch (r13_1)
        {
            case 0:
            {
                var_88 = 0;
                int128_t var_80_1 = var_48;
                char var_70_1 = 1;
                var_b8 = &var_88;
                int64_t (* var_b0_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_e8 = &data_573108;
                int64_t var_e0_1 = 2;
                int64_t var_c8_1 = 0;
                int64_t** var_d8_1 = &var_b8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_a8, &var_e8);
                var_68_1 = var_a8;
                rax_4 = var_98;
                break;
            }
            case 1:
            {
                var_88 = 0;
                int128_t var_80_2 = var_48;
                char var_70_2 = 1;
                var_b8 = &var_88;
                int64_t (* var_b0_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_e8 = &data_573128;
                int64_t var_e0_4 = 1;
                int64_t var_c8_4 = 0;
                int64_t** var_d8_4 = &var_b8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_a8, &var_e8);
                var_68_1 = var_a8;
                rax_4 = var_98;
                break;
            }
            case 2:
            {
                void* rax_1 = var_48;
                var_a8 = rax_1;
                void* var_a0_1 = *var_48[8] + rax_1;
                int64_t rax_2 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_a8);
                char rax_3;
                int32_t rdx_3;
                
                if (!rax_2)
                    rax_3 =
                        core::str::validations::next_code_point::h4e3882b40d59c120(&var_a8, arg1);
                
                if (rax_2 || !(rdx_3 != 0x110000 & rax_3))
                    rdx_3 = 0;
                
                int32_t var_8c = rdx_3;
                var_b8 = &var_8c;
                int64_t (* var_b0_2)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_e8 = &data_573138;
                int64_t var_e0_2 = 1;
                int64_t var_c8_2 = 0;
                int64_t** var_d8_2 = &var_b8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_88, &var_e8);
                var_68_1 = var_88;
                rax_4 = *var_80[8];
                break;
            }
            case 3:
            {
                var_a8 = &var_50;
                int64_t (* var_a0_2)(int64_t* arg1, int64_t arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h0a315621bb4b991c;
                var_e8 = &data_573148;
                int64_t var_e0_3 = 2;
                int64_t var_c8_3 = 0;
                void** var_d8_3 = &var_a8;
                var_d0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_88, &var_e8);
                var_68_1 = var_88;
                rax_4 = *var_80[8];
                break;
            }
        }
        
        var_d0_1 = 1;
        var_e8 = var_68_1;
        int64_t var_d8_5 = rax_4;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_e8);
        arg1[2] = &data_572f18;
        *arg1 = 6;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha58dd5728a52fcee(&var_50);
    }
    else if (rax != 3)
        uu_tail::args::Settings::from_obsolete_args::hfeff493f00111f18(arg1, &var_38, arg3);
    else
        *arg1 = 5;
    
    return arg1;
}
