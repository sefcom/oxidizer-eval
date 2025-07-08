
  int64_t* uu_tr::uumain::uumain::h5cf0371b8c66c032(int64_t arg1)

{
    int128_t var_8d8;
    uu_tr::uu_app::h3af701eb291f0f4d(&var_8d8);
    int128_t var_498;
    clap_builder::builder::command::Command::after_help::h6ea1792ab63c6686(&var_498, &var_8d8, 
        "Translate, squeeze, and/or delet…", 0x5d);
    int128_t* var_9b0;
    int64_t* r12 = &var_9b0;
    clap_builder::builder::command::Command::try_get_matches_from::h79c70f38f211e142(&var_9b0, 
        &var_498, arg1);
    int128_t* rax = var_9b0;
    int64_t* result;
    int64_t var_9a8;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_980;
        int64_t var_8e0_1 = var_980;
        int128_t var_990;
        int128_t var_8f0_1 = var_990;
        int128_t var_9a0;
        int128_t var_900_1 = var_9a0;
        int128_t* var_910 = rax;
        int64_t var_908_1 = var_9a8;
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "deletecomplementsqueeze-repeatst…", 6);
        bool rax_3 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "complementsqueeze-repeatstruncat…", 0xa);
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "squeeze-repeatstruncate-set1extr…", 0xf);
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "truncate-set1extra operandUnknow…", 0xd);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec7e42da4cd7eb05(
            &var_8d8, &var_910, "setsBOLDBlue\x1b[4mSomedumb\x1b[…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h750f5aa244a95e3b(&var_498, 
            "setsBOLDBlue\x1b[4mSomedumb\x1b[…", 4, &var_8d8);
        int128_t var_128_1 = var_498;
        int128_t var_488;
        int128_t var_118_1 = var_488;
        int128_t var_478;
        int128_t var_108_1 = var_478;
        int128_t var_468;
        int128_t var_f8_1 = var_468;
        int64_t var_130 = 1;
        int64_t var_e8_1 = 0;
        int64_t var_a8_1 = 0;
        void var_9c8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hacab1107395fe9c6(&var_9c8, &var_130);
        int64_t var_9b8;
        
        if (!var_9b8)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h03ae0bd4f3f5c044(
                &var_498, "missing operandmissing operand a…", 0xf);
            int64_t var_8c8_3 = var_488;
            var_8d8 = var_498;
            int32_t var_8c0_2 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
        }
        else
        {
            void* var_9c0;
            int32_t var_8c0;
            
            if (var_9b8 == 1 && !(rax_2 | rax_4))
            {
                var_498 = 1;
                var_498 = *(var_9c0 + 8);
                *var_488[8] = 1;
                var_9b0 = &var_498;
                int64_t (* var_9a8_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_8d8 = &data_52c2c0;
                *var_8d8[8] = 2;
                int64_t var_8b8_1 = 0;
                int128_t** var_8c8_1 = &var_9b0;
                var_8c0 = 1;
                int128_t var_608;
                core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_608, &var_8d8);
                int32_t var_8c0_1 = 1;
                var_8d8 = var_608;
                int64_t var_5f8;
                int64_t var_8c8_2 = var_5f8;
                result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
            }
            else if ((rax_2 & rax_4) == 1 && var_9b8 == 1)
            {
                var_498 = 1;
                var_498 = *(var_9c0 + 8);
                *var_488[8] = 1;
                var_9b0 = &var_498;
                int64_t (* var_9a8_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_8d8 = &data_52c2e0;
                *var_8d8[8] = 2;
                int64_t var_8b8_2 = 0;
                int128_t** var_8c8_4 = &var_9b0;
                var_8c0 = 1;
                int128_t var_5f0;
                core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_5f0, &var_8d8);
                int32_t var_8c0_3 = 1;
                var_8d8 = var_5f0;
                int64_t var_5e0;
                int64_t var_8c8_5 = var_5e0;
                result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
            }
            else
            {
                int128_t* var_a00;
                void** const var_9f8;
                
                if (var_9b8 != 1)
                {
                    var_a00 = "extra operandUnknownErrnoEPERMEN…";
                    var_9f8 = 0xd;
                    int128_t zmm0_3;
                    
                    if (((rax_2 ^ 1) | rax_4) != 1)
                    {
                        zmm0_3 = *(var_9c0 + 0x20);
                        var_9b0 = 1;
                        var_9a8 = zmm0_3;
                        *var_9a0[8] = 1;
                        void* rbx_2;
                        
                        if (var_9b8 != 2)
                        {
                            var_498 = &var_a00;
                            *var_498[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                            var_488 = &var_9b0;
                            *var_488[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_8d8 = &data_52c330;
                            *var_8d8[8] = 2;
                            int64_t var_8b8_5 = 0;
                            int128_t* var_8c8_13 = &var_498;
                            var_8c0 = 2;
                            void var_148;
                            rbx_2 = &var_148;
                            core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_148, 
                                &var_8d8);
                        }
                        else
                        {
                            var_498 = &var_a00;
                            *var_498[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                            var_488 = &var_9b0;
                            *var_488[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_8d8 = &data_52c300;
                            *var_8d8[8] = 3;
                            int64_t var_8b8_4 = 0;
                            int128_t* var_8c8_10 = &var_498;
                            var_8c0 = 2;
                            void var_160;
                            rbx_2 = &var_160;
                            core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_160, 
                                &var_8d8);
                        }
                        
                        int64_t rax_40 = *(rbx_2 + 0x10);
                        int64_t var_4a8_1 = rax_40;
                        int128_t zmm0_9 = *rbx_2;
                        int128_t var_4b8_1 = zmm0_9;
                        int32_t var_8c0_5 = 1;
                        var_8d8 = zmm0_9;
                        int64_t var_8c8_14 = rax_40;
                        result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
                    }
                    else
                    {
                        if (var_9b8 <= 2)
                            goto label_46c10b;
                        
                        zmm0_3 = *(var_9c0 + 0x38);
                        var_9b0 = 1;
                        var_9a8 = zmm0_3;
                        *var_9a0[8] = 1;
                        var_498 = &var_a00;
                        *var_498[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                        var_488 = &var_9b0;
                        *var_488[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_8d8 = &data_52c330;
                        *var_8d8[8] = 2;
                        int64_t var_8b8_3 = 0;
                        int128_t* var_8c8_8 = &var_498;
                        var_8c0 = 2;
                        int128_t var_5d8;
                        core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_5d8, 
                            &var_8d8);
                        int32_t var_8c0_4 = 1;
                        var_8d8 = var_5d8;
                        int64_t var_5c8;
                        int64_t var_8c8_9 = var_5c8;
                        result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
                    }
                }
                else
                {
                    label_46c10b:
                    int64_t rcx_3 = *(var_9c0 + 8);
                    var_8d8 = rcx_3;
                    *var_8d8[8] = *(var_9c0 + 0x10) + rcx_3;
                    int64_t var_8c8;
                    var_8c8 = 0;
                    int64_t var_8b8;
                    
                    if (_$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hfc16fb0776f788fe(&var_8d8) & 1)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h03ae0bd4f3f5c044(&var_498, "warning: an unescaped backslash …", 0x40);
                        int64_t var_8c8_6 = var_488;
                        var_8d8 = var_498;
                        var_8c0 = 0;
                        int128_t* rax_20 =
                            alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
                        var_a00 = rax_20;
                        var_9f8 = &data_52c448;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(rax_20));
                        int128_t* rax_22;
                        int64_t rdx_2;
                        rax_22 = uucore::util_name::h60d842bf27b05e82();
                        var_9b0 = rax_22;
                        int64_t var_9a8_3 = rdx_2;
                        var_498 = &var_9b0;
                        *var_498[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                        var_488 = &var_a00;
                        *var_488[8] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hea79bf44bc57fb60;
                        var_8d8 = &data_52c350;
                        *var_8d8[8] = 3;
                        var_8b8 = 0;
                        int128_t* var_8c8_7 = &var_498;
                        var_8c0 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_8d8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h24eb00e4a52f7e7c(var_a00, var_9f8);
                    }
                    
                    std::io::stdio::stdin::h7215cc131abb55d8();
                    void* var_930 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                    int32_t* rax_23;
                    char rdx_3;
                    rax_23 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_930);
                    int32_t* var_a10 = rax_23;
                    rdx_3 &= 1;
                    std::io::stdio::stdout::h077da66234850927();
                    int64_t* var_928 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                    int64_t r8_1 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hdc9c3452e7942aea(&var_9b0, 0x2000, 
                        std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_928));
                    void* var_920 = var_9c0;
                    void* var_918_1 = var_9c0 + var_9b8 * 0x18;
                    void* rax_26 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd6e9cd20df835715(&var_920);
                    void** rax_27;
                    
                    if (!rax_26)
                        rax_27 = nullptr;
                    else
                    {
                        *(rax_26 + 0x10);
                        int64_t* rdx_5;
                        rax_27 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h901a8d7c69801d4b(*(rax_26 + 8));
                        r12 = rdx_5;
                    }
                    
                    char rbx_1 = ~rax_2 & var_9b8 >= 2;
                    int64_t r13_1 = 1;
                    void** const r14_1 = rax_27;
                    
                    if (!rax_27)
                        r14_1 = 1;
                    
                    if (!rax_27)
                        r12 = rax_27;
                    
                    void* rax_32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd6e9cd20df835715(&var_920);
                    int64_t rax_33;
                    
                    if (!rax_32)
                        rax_33 = 0;
                    else
                    {
                        *(rax_32 + 0x10);
                        int64_t rdx_6;
                        rax_33 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h901a8d7c69801d4b(*(rax_32 + 8));
                        r8_1 = rdx_6;
                    }
                    
                    if (rax_33)
                        r13_1 = rax_33;
                    
                    if (!rax_33)
                        r8_1 = rax_33;
                    
                    uu_tr::operation::Sequence::solve_set_characters::hf6b9e7c9837a7276(&var_8d8, 
                        r14_1, r12, r13_1, r8_1, rax_3, rax_5 & rbx_1, rbx_1);
                    int128_t* rax_35 = var_8d8;
                    int64_t* result_1;
                    int128_t zmm0_10;
                    
                    if (rax_35 != -0x8000000000000000)
                    {
                        int64_t var_8b0;
                        var_478 = var_8b0;
                        zmm0_10 = var_8d8;
                        int128_t zmm1_3 = var_8c0;
                        var_498 = zmm0_10;
                        int128_t var_9e8 = zmm1_3;
                        
                        if (rax_2)
                        {
                            if (!rax_4)
                            {
                                int128_t var_5b8_1 = zmm0_10;
                                int128_t* var_5c0 = rax_35;
                                uu_tr::operation::translate_input::h32a13ad4727c4ba9(&var_a10, 
                                    &var_9b0, &var_5c0);
                                label_46c826:
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_9e8);
                                goto label_46ca63;
                            }
                            
                            var_498 = zmm0_10;
                            var_498 = rax_35;
                            int64_t var_8c8_12 = var_8b0;
                            var_8d8 = var_9e8;
                            int128_t var_578;
                            uu_tr::operation::SqueezeOperation::new::hd8d9f9e8de1d3b5c(&var_578, 
                                &var_8d8);
                            int128_t var_508 = var_498;
                            int64_t var_4f8_1 = zmm1_3;
                            int128_t var_4f0_1 = var_578;
                            int128_t var_568;
                            int128_t var_4e0_1 = var_568;
                            int128_t var_558;
                            int128_t var_4d0_1 = var_558;
                            int64_t var_548;
                            int64_t var_4c0_1 = var_548;
                            uu_tr::operation::translate_input::h29bc490f8ef166da(&var_a10, 
                                &var_9b0, &var_508);
                            label_46ca63:
                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hba009b7d471a5fe9(&var_9b0);
                            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hb7e75a9540258d77(var_a10, rdx_3);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h6f1193934e73377f(&var_9c8);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::haa6d892d169dcffa(&var_910);
                            return nullptr;
                        }
                        
                        int128_t var_978;
                        int128_t var_488_1;
                        
                        if (!rax_4)
                        {
                            var_a00 = rax_35;
                            var_9f8 = zmm0_10;
                            var_488_1 = var_8b0;
                            var_498 = var_9e8;
                            uu_tr::operation::TranslateOperation::new::h1640a7dbb9893994(&var_8d8, 
                                &var_a00, &var_498);
                            int64_t rax_42 = var_8d8;
                            var_978 = var_8d8;
                            int64_t rcx_9 = var_8c0;
                            
                            if (!rax_42)
                            {
                                int64_t var_8c8_16 = rcx_9;
                                var_8d8 = var_978;
                                result_1 =
                                    alloc::boxed::Box$LT$T$GT$::new::h3beed998e9c5ecac(&var_8d8);
                                goto label_46c59e;
                            }
                            
                            int128_t var_588_1 = var_8b8;
                            int64_t var_5a8 = rax_42;
                            int128_t var_5a0_1 = var_978;
                            int64_t var_590_1 = rcx_9;
                            uu_tr::operation::translate_input::hc00f303679b61048(&var_a10, 
                                &var_9b0, &var_5a8);
                            goto label_46ca63;
                        }
                        
                        if (var_9b8 == 1)
                        {
                            var_8d8 = rax_35;
                            var_8d8 = zmm0_10;
                            void var_68;
                            uu_tr::operation::SqueezeOperation::new::hd8d9f9e8de1d3b5c(&var_68, 
                                &var_8d8);
                            uu_tr::operation::translate_input::h61644504e49765d2(&var_a10, 
                                &var_9b0, &var_68);
                            goto label_46c826;
                        }
                        
                        var_978 = rax_35;
                        var_978 = zmm0_10;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h786ff7c94a117f7f(&var_a00, &var_9e8);
                        uu_tr::operation::TranslateOperation::new::h1640a7dbb9893994(&var_8d8, 
                            &var_978, &var_a00);
                        int64_t rax_44 = var_8d8;
                        int128_t var_948_1 = var_8d8;
                        int64_t rcx_10 = var_8c0;
                        
                        if (rax_44)
                        {
                            int128_t var_478_1 = var_8b8;
                            var_498 = var_948_1;
                            *var_488_1[8] = rcx_10;
                            var_498 = rax_44;
                            int64_t var_8c8_15 = var_8b0;
                            var_8d8 = var_9e8;
                            int128_t var_540;
                            uu_tr::operation::SqueezeOperation::new::hd8d9f9e8de1d3b5c(&var_540, 
                                &var_8d8);
                            int128_t var_1c8 = var_498;
                            int128_t var_1b8_1 = var_488_1;
                            int128_t var_1a8_1 = var_478_1;
                            int128_t var_198_1 = var_540;
                            int128_t var_530;
                            int128_t var_188_1 = var_530;
                            int128_t var_520;
                            int128_t var_178_1 = var_520;
                            int64_t var_510;
                            int64_t var_168_1 = var_510;
                            uu_tr::operation::translate_input::hd58ae3eaa3f14818(&var_a10, 
                                &var_9b0, &var_1c8);
                            goto label_46ca63;
                        }
                        
                        int64_t var_8c8_17 = rcx_10;
                        var_8d8 = var_948_1;
                        result = alloc::boxed::Box$LT$T$GT$::new::h3beed998e9c5ecac(&var_8d8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_9e8);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hba009b7d471a5fe9(&var_9b0);
                        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hb7e75a9540258d77(var_a10, rdx_3);
                    }
                    else
                    {
                        int64_t rax_36 = var_8c0;
                        var_488 = rax_36;
                        zmm0_10 = var_8d8;
                        var_498 = zmm0_10;
                        int64_t var_8c8_11 = rax_36;
                        var_8d8 = zmm0_10;
                        result_1 = alloc::boxed::Box$LT$T$GT$::new::h3beed998e9c5ecac(&var_8d8);
                        label_46c59e:
                        result = result_1;
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hba009b7d471a5fe9(&var_9b0);
                        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hb7e75a9540258d77(var_a10, rdx_3);
                    }
                }
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h6f1193934e73377f(&var_9c8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::haa6d892d169dcffa(&var_910);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_9a8);
    return result;
}
