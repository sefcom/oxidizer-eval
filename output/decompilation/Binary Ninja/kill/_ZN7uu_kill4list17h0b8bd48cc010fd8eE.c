
  int64_t uu_kill::list::h0b8bd48cc010fd8e(void* arg1)

{
    int64_t rax = *(arg1 + 0x10);
    
    if (!rax)
        /* tailcall */
        return uu_kill::print_signals::h042cfab5aaca8808();
    
    int64_t r15 = *(arg1 + 8);
    int64_t r12 = rax * 0x18;
    int64_t r13 = 0;
    int64_t result;
    
    while (true)
    {
        uint64_t rax_2 =
            uu_kill::print_signal::hbbda5da3d768aa27(*(r15 + r13 + 8), *(r15 + r13 + 0x10));
        
        if (!rax_2)
        {
            result = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hddf9a1b880dd3247(0, &data_4e76b0);
            r13 += 0x18;
            
            if (r12 == r13)
                break;
        }
        else
        {
            uint64_t var_a0 = rax_2;
            void** const var_98_1 = &data_4e76b0;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_2));
            int64_t rax_4;
            int64_t rdx_1;
            rax_4 = uucore::util_name::h074417a1e6395129();
            int64_t var_90 = rax_4;
            int64_t var_88_1 = rdx_1;
            int64_t* var_80 = &var_90;
            int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
            uint64_t* var_70_1 = &var_a0;
            int64_t (* var_68_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5053a415acb728e8;
            void* const var_60 = &data_4e7718;
            int64_t var_58_1 = 3;
            int64_t var_40_1 = 0;
            int64_t** var_50_1 = &var_80;
            int64_t var_48_1 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_60);
            result = core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hd18bab097a34ea48(var_a0, var_98_1);
            r13 += 0x18;
            
            if (r12 == r13)
                break;
        }
    }
    
    return result;
}
