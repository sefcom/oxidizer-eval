
  int64_t just::subcommand::Subcommand::summary_recursive::hc0eddb790c4e97dc(char arg1, int64_t* arg2, int64_t* arg3, void* arg4)

{
    void var_68;
    alloc::str::join_generic_copy::h1d897c8c94fa609a(&var_68, arg2[1], arg2[2], 
        ":: [private]\nexport no entry fo…", 2);
    char const (** const var_d8)[0x90];
    just::justfile::Justfile::public_recipes::h73a7b1046fbbce7b(&var_d8, arg4, arg1);
    void var_50;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_50, &var_d8);
    int64_t r12 = *arg3;
    void* i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_50);
    
    if (i_2)
    {
        void* i_1 = i_2;
        int64_t r12_1 = r12 + 1;
        void* i;
        
        do
        {
            int64_t var_c0;
            
            if (r12_1 != 1)
            {
                var_d8 = &data_82f150;
                int64_t var_d0_1 = 1;
                int64_t var_c8_1 = 8;
                var_c0 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
            
            int64_t var_58;
            void* var_e8;
            void* var_88;
            
            if (!var_58)
            {
                void* rax_1;
                int64_t rdx_3;
                rax_1 = just::token::Token::lexeme::h66587cdf67f63270(i_1 + 0x90);
                var_88 = rax_1;
                int64_t var_80_2 = rdx_3;
                var_e8 = &var_88;
                int64_t (* var_e0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_d8 = &data_465db0;
                int64_t var_d0_3 = 1;
                int64_t var_b8_2 = 0;
                void** var_c8_3 = &var_e8;
                var_c0 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
            else
            {
                void* rax;
                int64_t rdx_2;
                rax = just::token::Token::lexeme::h66587cdf67f63270(i_1 + 0x90);
                var_e8 = rax;
                int64_t var_e0_1 = rdx_2;
                var_88 = &var_68;
                int64_t (* var_80_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                void** var_78_1 = &var_e8;
                int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_d8 = &data_8314a0;
                int64_t var_d0_2 = 2;
                int64_t var_b8_1 = 0;
                void** var_c8_2 = &var_88;
                var_c0 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
            *arg3 = r12_1;
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_50);
            i_1 = i;
            r12_1 += 1;
        } while (i);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_50);
    int64_t rax_2 = *(arg4 + 0x2a0);
    int64_t rcx = *(arg4 + 0x2a8);
    int64_t rsi_3 = rax_2;
    char const (** rdx_4)[0x90];
    rdx_4 = rax_2;
    
    if (rax_2)
        rsi_3 = *(arg4 + 0x2b0);
    
    var_d8 = rdx_4;
    int64_t var_d0_4 = 0;
    int64_t var_c8_4 = rax_2;
    int64_t var_c0_1 = rcx;
    char const (** var_b8_3)[0x90] = rdx_4;
    int64_t var_b0 = 0;
    int64_t var_a8 = rax_2;
    int64_t var_a0 = rcx;
    int64_t var_98 = rsi_3;
    
    while (true)
    {
        int64_t* rax_3;
        int64_t rdx_5;
        rax_3 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_d8);
        
        if (!rax_3)
            break;
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, *rax_3, rax_3[1]);
        just::subcommand::Subcommand::summary_recursive::hc0eddb790c4e97dc(arg1, arg2, arg3, rdx_5);
        int64_t rax_4 = arg2[2];
        
        if (rax_4)
            arg2[2] = rax_4 - 1;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_68);
}
