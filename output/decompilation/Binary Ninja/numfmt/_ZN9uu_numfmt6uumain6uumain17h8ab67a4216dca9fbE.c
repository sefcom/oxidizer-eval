
  int64_t* uu_numfmt::uumain::uumain::h8ab67a4216dca9fb(void** arg1)

{
    int32_t* var_2e8;
    uu_numfmt::uu_app::hfdc8a28206314692(&var_2e8);
    int32_t* var_3f8;
    clap_builder::builder::command::Command::try_get_matches_from::h23f58464f9be56a7(&var_3f8, 
        &var_2e8, arg1);
    int32_t* rax = var_3f8;
    int64_t* result;
    int64_t var_3f0;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_3c8;
        int64_t var_420_1 = var_3c8;
        int128_t var_3d8;
        int128_t var_430_1 = var_3d8;
        int128_t var_3e8;
        int128_t var_440_1 = var_3e8;
        int32_t* var_450 = rax;
        int64_t var_448_1 = var_3f0;
        uu_numfmt::parse_options::h74b780a1d54305df(&var_2e8, &var_450);
        int32_t* rbx_1 = var_2e8;
        int128_t var_478;
        int128_t var_2e0;
        
        if (rbx_1 != 2)
        {
            var_478 = var_2e0;
            void var_2c0;
            memcpy(&*var_3d8[8], &var_2c0, 0xa8);
            int128_t zmm0_4 = var_478;
            int128_t var_418_2 = zmm0_4;
            var_3f0 = zmm0_4;
            int128_t var_2d0;
            var_3e8 = var_2d0;
            var_3f8 = rbx_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb133da43c8fa0f0e(
                &var_2e8, &var_450, "NUMBERerror flushing stdout/home…", 6);
            int64_t var_328;
            clap_builder::parser::error::MatchesError::unwrap::h9995f03ceaefcc81(&var_328, 
                "NUMBERerror flushing stdout/home…", 6, &var_2e8);
            
            if (!var_328)
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_478 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                int32_t* rax_3;
                char rdx_2;
                rax_3 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_478);
                var_2e8 = rax_3;
                var_2e0 = rdx_2 & 1;
                int128_t* result_2;
                void** rdx_3;
                result_2 = uu_numfmt::handle_buffer::h9ad60b7403393a62(&var_2e8, &var_3f8);
                result = result_2;
                core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hd8f521f94a788c9e(
                    var_2e8, var_2e0);
                
                if (!result)
                    result = nullptr;
                else
                {
                    label_471a7e:
                    std::io::stdio::stdout::h077da66234850927();
                    var_2e8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                    core::result::Result$LT$T$C$E$GT$::expect::hc9085200e0221a50(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&var_2e8));
                }
            }
            else
            {
                int128_t* result_1;
                void** rdx_1;
                result_1 = uu_numfmt::handle_args::ha10f500c4512be74(&var_328, &var_3f8);
                result = result_1;
                
                if (result_1)
                    goto label_471a7e;
                
                result = nullptr;
            }
            
            core::ptr::drop_in_place$LT$uu_numfmt..options..NumfmtOptions$GT$::h2da773dd799c8198(
                &var_3f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7a0abc69fd02c535(&var_450);
        }
        else
        {
            core::ops::function::FnOnce::call_once::hf9126f76b4d13315(&var_478, &var_2e0);
            int128_t zmm0_3 = var_478;
            int128_t var_418_1 = zmm0_3;
            int128_t var_468;
            int128_t var_408_1 = var_468;
            var_2e0 = var_468;
            var_2e8 = zmm0_3;
            result = alloc::boxed::Box$LT$T$GT$::new::hb050645051cd6aca(&var_2e8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7a0abc69fd02c535(&var_450);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3f0);
    return result;
}
