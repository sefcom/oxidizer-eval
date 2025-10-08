
  fn just::run::run::h9b9ac305fd2b19cf(arg1: *mut i128) -> u64

{
    let mut var_2e8: ();
    just::config::Config::app::hcb0f5449d8cb91bb(&var_2e8);
    let mut var_638: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hd7093f251b5c999d(&var_638, 
        &var_2e8, arg1);
    let rax: i64 = var_638;
    let mut rbp: i32;
    let mut var_630: i32;
    
    if -(rax) != -0x8000000000000000
    {
        let mut var_62c: i128;
        let var_664_1: i128 = var_62c;
        let mut var_61c: i128;
        let mut var_654_1: i128 = var_61c;
        var_654_1 = var_61c;
        let mut var_670: i64 = rax;
        let var_668_1: i32 = var_630;
        just::config::Config::from_matches::h78fa0e0b3f46850c(&var_638, &var_670);
        let mut var_6e0: i128;
        let mut var_6d9: i128;
        let mut var_600: i128;
        let mut var_490: i64;
        let mut var_488: i8;
        let mut var_487: i128;
        let mut var_477: i128;
        let mut var_467: i128;
        let mut var_457: i128;
        let mut rax_3: i8;
        
        if var_638 != -0x8000000000000000
        {
            memcpy(&var_490, &var_638, 0x1a8);
            
            if var_490 != -0x8000000000000000
            {
                let var_2fc: i16;
                *var_62c[5] = var_2fc;
                let var_30c: i128;
                *var_638[1] = var_30c;
                let var_2e9: i8;
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
        let var_758_1: i16 = *var_6d9[9];
        let mut var_768: i128 = var_6e0;
        just::loader::Loader::new::h699739d5c4f106fb(&var_6e0);
        let r15_1: i64 = var_490;
        let mut var_748: i8;
        let mut var_5f0: i128;
        let mut var_5e0: i128;
        let var_438: i128;
        let var_428: i64;
        
        if r15_1 != -0x8000000000000000
        {
            let var_5d0_1: i64 = var_428;
            var_5e0 = var_438;
            var_5f0 = var_457;
            var_600 = var_467;
            var_61c = var_477;
            var_62c = var_487;
            var_630 = var_488;
            let mut var_5c8: ();
            let mut var_420: ();
            memcpy(&var_5c8, &var_420, 0x138);
            var_638 = r15_1;
            just::run::run::_$u7b$$u7b$closure$u7d$$u7d$::hd9ace7d3bf538c36(&var_748, &var_6e0, 
                &var_638);
            
            if var_748 != 0x38
            {
                goto 'label_5d6cb8;
            }
            
            rbp = 0;
        }
        else
        {
            let var_6e8: i64 = var_428;
            let var_6f8: i128 = var_438;
            let var_708: i128 = var_457;
            let var_718: i128 = var_467;
            let var_728: i128 = var_477;
            let var_738: i128 = var_487;
            var_748 = var_488;
            'label_5d6cb8:
            *var_5e0[8] = var_6e8;
            var_5f0 = var_6f8;
            var_600 = var_708;
            let var_608_1: i128 = var_718;
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
    rbp
}
