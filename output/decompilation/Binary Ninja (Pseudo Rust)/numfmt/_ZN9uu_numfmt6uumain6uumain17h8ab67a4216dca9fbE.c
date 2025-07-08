
  fn uu_numfmt::uumain::uumain::h8ab67a4216dca9fb(arg1: *mut *mut c_void) -> *mut i64

{
    let mut var_2e8: *mut i32;
    uu_numfmt::uu_app::hfdc8a28206314692(&var_2e8);
    let mut var_3f8: *mut i32;
    clap_builder::builder::command::Command::try_get_matches_from::h23f58464f9be56a7(&var_3f8, 
        &var_2e8, arg1);
    let rax: *mut i32 = var_3f8;
    let mut result: *mut i64;
    let mut var_3f0: i64;
    
    if rax != -0x8000000000000000
    {
        let var_3c8: i64;
        let var_420_1: i64 = var_3c8;
        let mut var_3d8: i128;
        let var_430_1: i128 = var_3d8;
        let mut var_3e8: i128;
        let var_440_1: i128 = var_3e8;
        let mut var_450: *mut i32 = rax;
        let var_448_1: i64 = var_3f0;
        uu_numfmt::parse_options::h74b780a1d54305df(&var_2e8, &var_450);
        let rbx_1: *mut i32 = var_2e8;
        let mut var_478: i128;
        let mut var_2e0: i128;
        
        if rbx_1 != 2
        {
            var_478 = var_2e0;
            let mut var_2c0: ();
            memcpy(&*var_3d8[8], &var_2c0, 0xa8);
            let zmm0_4: i128 = var_478;
            let var_418_2: i128 = zmm0_4;
            var_3f0 = zmm0_4;
            let var_2d0: i128;
            var_3e8 = var_2d0;
            var_3f8 = rbx_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb133da43c8fa0f0e(
                &var_2e8, &var_450, "NUMBERerror flushing stdout/home…", 6);
            let mut var_328: i64;
            clap_builder::parser::error::MatchesError::unwrap::h9995f03ceaefcc81(&var_328, 
                "NUMBERerror flushing stdout/home…", 6, &var_2e8);
            
            if var_328 == 0
            {
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_478 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                let mut rax_3: *mut i32;
                let mut rdx_2: i8;
                rax_3 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_478);
                var_2e8 = rax_3;
                var_2e0 = rdx_2 & 1;
                let mut result_2: *mut i128;
                let mut rdx_3: *mut *mut c_void;
                result_2 = uu_numfmt::handle_buffer::h9ad60b7403393a62(&var_2e8, &var_3f8);
                result = result_2;
                core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hd8f521f94a788c9e(
                    var_2e8, var_2e0);
                
                if result == 0
                {
                    result = nullptr;
                }
                else
                {
                    'label_471a7e:
                    std::io::stdio::stdout::h077da66234850927();
                    var_2e8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                    core::result::Result$LT$T$C$E$GT$::expect::hc9085200e0221a50(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&var_2e8));
                }
            }
            else
            {
                let mut result_1: *mut i128;
                let mut rdx_1: *mut *mut c_void;
                result_1 = uu_numfmt::handle_args::ha10f500c4512be74(&var_328, &var_3f8);
                result = result_1;
                
                if result_1 != 0
                {
                    goto 'label_471a7e;
                }
                
                result = nullptr;
            }
            
            core::ptr::drop_in_place$LT$uu_numfmt..options..NumfmtOptions$GT$::h2da773dd799c8198(
                &var_3f8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7a0abc69fd02c535(&var_450);
        }
        else
        {
            core::ops::function::FnOnce::call_once::hf9126f76b4d13315(&var_478, &var_2e0);
            let zmm0_3: i128 = var_478;
            let var_418_1: i128 = zmm0_3;
            let var_468: i128;
            let var_408_1: i128 = var_468;
            var_2e0 = var_468;
            var_2e8 = zmm0_3;
            result = alloc::boxed::Box$LT$T$GT$::new::hb050645051cd6aca(&var_2e8);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7a0abc69fd02c535(&var_450);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3f0);
    }
    result
}
