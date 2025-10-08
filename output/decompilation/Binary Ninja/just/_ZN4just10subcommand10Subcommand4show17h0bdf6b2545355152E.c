
  void* const just::subcommand::Subcommand::show::h0bdf6b2545355152(char* arg1, void* arg2, void* arg3, void* arg4)

{
    int64_t r15 = *(arg4 + 8);
    int64_t r12 = *(arg4 + 0x10);
    void* i_1;
    int64_t rdx_1;
    i_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h558ebd0999430957(r12 - 1, r15, r12);
    void* i = i_1;
    i_1 = !rdx_1;
    void* const result_1;
    int128_t var_a8;
    void* rax;
    void* const result;
    
    if (!(!i | i_1))
    {
        void* r14_3 = rdx_1 * 0x18 + i;
        void* i_2 = i + 0x18;
        rax = arg3;
        
        do
        {
            int64_t rdx_4 = *(i + 8);
            uint64_t rcx_3 = *(i + 0x10);
            i = i_2;
            rax = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *(rax + 0x2a0), *(rax + 0x2a8), rdx_4, rcx_3);
            
            if (!rax)
            {
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbfd22dd80b4b7c3f(&result_1, arg4);
                result = result_1;
                *(arg1 + 0x10) = var_a8;
                *arg1 = 0x35;
                *(arg1 + 8) = result;
                goto label_690f67;
            }
            
            i_2 = i + 0x18;
            
            if (i == r14_3)
                i_2 = i;
            
            if (i == r14_3)
                break;
        } while (i);
    }
    else
        rax = arg3;
    
    int64_t rcx_1;
    
    if (r12)
        rcx_1 = r12 * 3;
    
    if (!r12 || r15 + (rcx_1 << 3) == 0x18)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void* r14_1 = r15 + (rcx_1 << 3);
    int64_t rax_1 = just::justfile::Justfile::get_alias::h42732d97284ae40e(*(rax + 0x268), 
        *(rax + 0x270), *(r14_1 - 0x10), *(r14_1 - 8));
    void* result_2;
    int128_t var_80;
    int128_t var_60;
    int128_t var_50;
    
    if (!rax_1)
    {
        int64_t rax_5 = just::justfile::Justfile::get_recipe::h2487a07572812fbd(rax, 
            *(r14_1 - 0x10), *(r14_1 - 8));
        
        if (!rax_5)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_80, r15 + (rcx_1 << 3) - 0x18);
            just::justfile::Justfile::suggest_recipe::hb59653753af09818(&var_60, rax, 
                *(r14_1 - 0x10), *(r14_1 - 8));
            int64_t var_70;
            *(arg1 + 0x38) = var_70;
            *(arg1 + 0x28) = var_80;
            int128_t zmm1_1 = var_50;
            *result_1[7] = var_60;
            *arg1 = 0x34;
            *(arg1 + 1) = result_1;
            *(arg1 + 0x11) = zmm1_1;
            result = result_2;
            *(arg1 + 0x20) = result;
        }
        else
        {
            just::color::Color::stdout::h99dee7c87aa8c485(&var_50, arg2 + 0x184);
            var_60 = rax_5;
            *var_60[8] = &data_830370;
            var_80 = &var_60;
            *var_80[8] = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
            result_1 = &data_82dbd8;
            var_a8 = 2;
            result_2 = 0;
            *var_a8[8] = &var_80;
            int64_t var_98_3 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
            result = arg1;
            *result = 0x38;
        }
    }
    else
    {
        int64_t var_38 = rax_1;
        void* rax_2;
        uint64_t rdx_3;
        rax_2 = just::token::Token::lexeme::h66587cdf67f63270(0xa0 + *(rax_1 + 0x18));
        int64_t rax_3 = just::justfile::Justfile::get_recipe::h2487a07572812fbd(rax, rax_2, rdx_3);
        
        if (!rax_3)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_60 = &var_38;
        *var_60[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a08090f72f316c;
        result_1 = &data_82dbd8;
        var_a8 = 2;
        result_2 = 0;
        *var_a8[8] = &var_60;
        int64_t var_98_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
        just::color::Color::stdout::h99dee7c87aa8c485(&var_50, arg2 + 0x184);
        var_60 = rax_3;
        *var_60[8] = &data_830370;
        var_80 = &var_60;
        *var_80[8] = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
        result_1 = &data_82dbd8;
        var_a8 = 2;
        result_2 = 0;
        *var_a8[8] = &var_80;
        int64_t var_98_2 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
        result = arg1;
        *result = 0x38;
    }
    label_690f67:
    return result;
}
