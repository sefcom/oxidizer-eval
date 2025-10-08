
  uint64_t just::run::run::h9b9ac305fd2b19cf(int128_t* arg1)

{
    void var_2e8;
    just::config::Config::app::hcb0f5449d8cb91bb(&var_2e8);
    int64_t var_638;
    clap_builder::builder::command::Command::try_get_matches_from::hd7093f251b5c999d(&var_638, 
        &var_2e8, arg1);
    int64_t rax = var_638;
    int32_t rbp;
    int32_t var_630;
    
    if (-(rax) != -0x8000000000000000)
    {
        int128_t var_62c;
        int128_t var_664_1 = var_62c;
        int128_t var_61c;
        int128_t var_654_1 = var_61c;
        var_654_1 = var_61c;
        int64_t var_670 = rax;
        int32_t var_668_1 = var_630;
        just::config::Config::from_matches::h78fa0e0b3f46850c(&var_638, &var_670);
        int128_t var_6e0;
        int128_t var_6d9;
        int128_t var_600;
        int64_t var_490;
        char var_488;
        int128_t var_487;
        int128_t var_477;
        int128_t var_467;
        int128_t var_457;
        char rax_3;
        
        if (var_638 != -0x8000000000000000)
        {
            memcpy(&var_490, &var_638, 0x1a8);
            
            if (var_490 != -0x8000000000000000)
            {
                int16_t var_2fc;
                *var_62c[5] = var_2fc;
                int128_t var_30c;
                *var_638[1] = var_30c;
                char var_2e9;
                *var_62c[7] = var_2e9;
                rax_3 = 0;
            }
            else
            {
                var_630 = &var_488;
                rax_3 = 1;
            }
        }
        else
        {
            var_6d9 = var_630;
            var_488 = 0xd;
            var_487 = var_6e0;
            var_477 = var_6d9;
            var_467 = var_62c;
            var_457 = var_61c;
            *var_457[0xf] = *var_600[8];
            var_490 = -0x8000000000000000;
            var_630 = &var_488;
            rax_3 = 1;
        }
        
        var_638 = rax_3;
        core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h418447741ab00b77(&var_6e0, &var_638);
        int16_t var_758_1 = *var_6d9[9];
        int128_t var_768 = var_6e0;
        just::loader::Loader::new::h699739d5c4f106fb(&var_6e0);
        int64_t r15_1 = var_490;
        char var_748;
        int128_t var_5f0;
        int128_t var_5e0;
        int128_t var_438;
        int64_t var_428;
        
        if (r15_1 != -0x8000000000000000)
        {
            int64_t var_5d0_1 = var_428;
            var_5e0 = var_438;
            var_5f0 = var_457;
            var_600 = var_467;
            var_61c = var_477;
            var_62c = var_487;
            var_630 = var_488;
            void var_5c8;
            void var_420;
            memcpy(&var_5c8, &var_420, 0x138);
            var_638 = r15_1;
            just::run::run::_$u7b$$u7b$closure$u7d$$u7d$::hd9ace7d3bf538c36(&var_748, &var_6e0, 
                &var_638);
            
            if (var_748 != 0x38)
                goto label_5d6cb8;
            
            rbp = 0;
        }
        else
        {
            int64_t var_6e8 = var_428;
            int128_t var_6f8 = var_438;
            int128_t var_708 = var_457;
            int128_t var_718 = var_467;
            int128_t var_728 = var_477;
            int128_t var_738 = var_487;
            var_748 = var_488;
            label_5d6cb8:
            *var_5e0[8] = var_6e8;
            var_5f0 = var_6f8;
            var_600 = var_708;
            int128_t var_608_1 = var_718;
            var_61c = var_728;
            var_62c = var_738;
            var_638 = var_748;
            just::run::run::_$u7b$$u7b$closure$u7d$$u7d$::hd8583d1add5f188b(*var_6d9[0xb], 
                &var_768, &var_638);
            rbp = 1;
        }
        core::ptr::drop_in_place$LT$just..loader..Loader$GT$::he356c9fe53dc020c(&var_6e0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h23e605ecd3c5820d(&var_670);
    }
    else
    {
        just::run::run::_$u7b$$u7b$closure$u7d$$u7d$::h2fb20edec489a94b(var_630);
        rbp = 1;
    }
    return rbp;
}
