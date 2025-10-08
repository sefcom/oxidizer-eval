
  int64_t* uu_uniq::opt_parsed::hf72dfa4667cb2ab6(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_c0 = arg2;
    int64_t var_b8 = arg3;
    char const (** const var_70)[0xca];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a2509cd518fbd9f(&var_70, 
        arg4, arg2, arg3);
    void* rax =
        clap_builder::parser::error::MatchesError::unwrap::h0de382a77e5c484b(arg2, arg3, &var_70);
    
    if (!rax)
        *arg1 = {0};
    else
    {
        char* r14_1 = *(rax + 8);
        int64_t r15_1 = *(rax + 0x10);
        char var_d0;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_d0, r14_1, 
            r15_1);
        int64_t rax_3;
        char var_cf;
        
        if (!var_d0)
        {
            arg1[1] = 1;
            int64_t var_c8;
            arg1[2] = var_c8;
            rax_3 = 0;
        }
        else if (var_cf != 2)
        {
            int64_t var_90 = 0;
            char* var_88_1 = r14_1;
            int64_t var_80_1 = r15_1;
            char var_78_1 = 0;
            int64_t* var_b0 = &var_c0;
            int64_t (* var_a8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9c987e12ca4ea4cf;
            int64_t* var_a0_1 = &var_90;
            int64_t (* var_98_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_70 = &data_4f5850;
            int64_t var_68_1 = 2;
            int64_t var_50_1 = 0;
            int64_t** var_60_1 = &var_b0;
            int64_t var_58_1 = 2;
            void var_40;
            core::option::Option$LT$T$GT$::map_or_else::h4bd594a823200ed2(&var_40, &var_70);
            int32_t var_28_1 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_40);
            arg1[2] = &data_4f5890;
            rax_3 = 1;
        }
        else
        {
            arg1[1] = 1;
            arg1[2] = -1;
            rax_3 = 0;
        }
        *arg1 = rax_3;
    }
    
    return arg1;
}
