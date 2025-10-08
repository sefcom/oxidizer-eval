
  fn uu_printf::uumain::uumain::h34ac81daaf91927f(arg1: i64) -> u64

{
    let mut var_2f8: i128;
    uu_printf::uu_app::hc502dcf642f8474c(&var_2f8);
    let mut var_370: ();
    clap_builder::builder::command::Command::get_matches_from::h2abe91fa938f486f(&var_370, 
        &var_2f8, arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h57f860443be1a0ff(
        &var_2f8, &var_370);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h06819118e1ccc266(&var_2f8);
    let mut result: u64;
    let mut var_430: i128;
    let var_420: i64;
    
    if rax == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h54cabaa581aa4ecb(&var_430, "missing operandinternal error: e…", 0xf);
        let var_2e8_1: i64 = var_420;
        var_2f8 = var_430;
        let var_2e0_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::ha175f9b533adbceb(&var_2f8);
    }
    else
    {
        let rbx_1: i64 = *rax.byte_offset(8);
        let r14_1: i64 = *rax.byte_offset(0x10);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h887d9d244fd27597(
            &var_2f8, &var_370);
        let mut var_338: i64;
        clap_builder::parser::error::MatchesError::unwrap::h37e62f570075ec30(&var_338, &var_2f8);
        let mut var_458: i64;
        let mut rax_1: i64;
        
        if var_338 == 0
        {
            var_458 = 0;
            let var_450_1: i64 = 8;
            let var_448_1: i64 = 0;
            rax_1 = 8;
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h3b7b57a9b59a744a(&var_458, &var_338);
            let var_450: i64;
            rax_1 = var_450;
        }
        
        let mut s: i64;
        __builtin_memset(&s, 0, 0x18);
        let mut var_3b0: i64 = 0;
        let mut var_440: i64 = rbx_1;
        let var_438_1: i64 = r14_1;
        let mut rbx_2: i8 = 0;
        
        loop
        {
            uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::h6e8f5da603029e23(&var_430, &var_440);
            let rax_4: u32 = var_430;
            
            if rax_4 == 7
            {
                goto 'label_46a8f9;
            }
            
            let mut result_1: u64;
            
            if rax_4 == 8
            {
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(&*var_430[8]);
                'label_46a991:
                result = result_1;
            }
            else
            {
                let var_410: i128;
                let mut var_400: *mut i128;
                let mut var_3d8: *mut i128;
                let var_3d0: i8;
                let var_3cf: i128;
                let mut var_2e8: i64;
                let mut var_2d8: i128;
                
                if rax_4 == 9
                {
                    uucore::features::format::argument::FormatArguments::start_next_batch::h16bc5e37016e687d(&var_3b0);
                    let var_390: i128;
                    
                    if (rbx_2 & 1) != 0
                    {
                        while *var_390[8] < s
                        {
                            var_440 = rbx_1;
                            let var_438_2: i64 = r14_1;
                            
                            loop
                            {
                                uucore::features::format::parse_spec_and_escape::_$u7b$$u7b$closure$u7d$$u7d$::h6e8f5da603029e23(&var_430, &var_440);
                                let rax_10: i8 = var_430;
                                
                                if rax_10 == 9
                                {
                                    uucore::features::format::argument::FormatArguments::start_next_batch::h16bc5e37016e687d(&var_3b0);
                                    break;
                                }
                                
                                if rax_10 == 8
                                {
                                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(
                                        &*var_430[8]);
                                    goto 'label_46a991_1;
                                }
                                
                                let var_2d8_1: i128 = var_410;
                                *var_2e8[1] = *var_420[1];
                                var_2f8 = var_430;
                                var_2f8 = rax_10;
                                std::io::stdio::stdout::hb6a8e10bcccf3287();
                                uucore::features::format::FormatItem$LT$C$GT$::write::h69d3992719ee1c91(&var_3d8, &var_2f8);
                                let rcx_2: *mut i128 = var_3d8;
                                
                                if rcx_2 != -0x7fffffffffffffea
                                {
                                    let var_3e8_2: i128 = var_3cf;
                                    let var_3f7_2: i128 = var_3cf;
                                    var_400 = rcx_2;
                                    let var_3f8_2: i8 = var_3d0;
                                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(
                                        &var_400);
                                    goto 'label_46a991_1;
                                }
                                
                                if (var_3d0 & 1) != 0
                                {
                                    goto 'label_46a951_1;
                                }
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h56711da8e104b355(&var_458);
                        result = 0;
                        break;
                    }
                    
                    let s_1: i64 = s;
                    
                    if *var_390[8] < s_1
                    {
                        let rcx_3: i64 = var_390;
                        let mut rax_14: *mut c_void;
                        
                        if rcx_3 < s_1
                        {
                            rax_14 = rcx_3 * 0x28 + rax_1;
                        }
                        
                        let mut var_2e0: i32;
                        
                        if rcx_3 >= s_1 || *rax_14 != -0x7ffffffffffffff6
                        {
                            var_2f8 = &data_5149f8;
                            *var_2f8[8] = 1;
                            let mut var_460: ();
                            let var_2e8_4: *mut c_void = &var_460;
                            var_2e0 = {0};
                            core::panicking::panic_fmt::h96f341d36638c225(&var_2f8);
                            /* no return */
                        }
                        
                        var_3d8 = rax_14.byte_offset(8);
                        let mut rax_16: i64;
                        let mut rdx_4: i64;
                        rax_16 = uucore::util_name::h074417a1e6395129();
                        var_430 = rax_16;
                        *var_430[8] = rdx_4;
                        var_400 = &var_430;
                        let mut var_3f8: i8;
                        var_3f8 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h19f2f689dad69c8e;
                        var_2f8 = &data_514a08;
                        *var_2f8[8] = 2;
                        var_2d8 = 0;
                        let var_2e8_2: *mut *mut i128 = &var_400;
                        var_2e0 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                        var_430 = &var_3d8;
                        *var_430[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8ec401fe05632880;
                        var_2f8 = &data_514a28;
                        *var_2f8[8] = 2;
                        var_2d8 = 0;
                        let var_2e8_3: *mut i128 = &var_430;
                        var_2e0 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                    }
                    
                    'label_46a951:
                    result = 0;
                }
                else
                {
                    rbx_2 = 1;
                    'label_46a8f9:
                    var_2d8 = var_410;
                    *var_2e8[1] = *var_420[1];
                    var_2f8 = var_430;
                    var_2f8 = rax_4;
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    uucore::features::format::FormatItem$LT$C$GT$::write::h69d3992719ee1c91(
                        &var_3d8, &var_2f8);
                    let rcx_1: *mut i128 = var_3d8;
                    
                    if rcx_1 != -0x7fffffffffffffea
                    {
                        let var_3e8_1: i128 = var_3cf;
                        let var_3f7_1: i128 = var_3cf;
                        var_400 = rcx_1;
                        let var_3f8_1: i8 = var_3d0;
                        result_1 = alloc::boxed::Box$LT$T$GT$::new::h77db3e96626b60ca(&var_400);
                        'label_46a991_1:
                        result = result_1;
                    }
                    else if (var_3d0 & 1) == 0
                    {
                        continue;
                    }
                    else
                    {
                        'label_46a951_1:
                        result = 0;
                    }
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..format..argument..FormatArgument$GT$$GT$::h56711da8e104b355(&var_458);
            break;
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9624343be4e65ac9(&var_370);
    result
}
