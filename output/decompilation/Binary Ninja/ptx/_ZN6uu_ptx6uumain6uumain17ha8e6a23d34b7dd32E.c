
  uint64_t uu_ptx::uumain::uumain::ha8e6a23d34b7dd32(int64_t arg1)

{
    char const (** const var_3c8)[0xa3];
    uu_ptx::uu_app::h1c00958dd96a6a6b(&var_3c8);
    char const (** var_528)[0xa3];
    clap_builder::builder::command::Command::try_get_matches_from::hf5d2c4a8ca2b27a5(&var_528, 
        &var_3c8, arg1);
    char const (** rax)[0xa3] = var_528;
    void** result_8;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_8);
    
    int64_t var_4f8;
    int64_t var_448 = var_4f8;
    int128_t var_508;
    int128_t var_458 = var_508;
    int128_t var_518;
    int128_t var_468 = var_518;
    char const (** var_478)[0xa3] = rax;
    void** result_9 = result_8;
    uu_ptx::get_config::h0871b6c26e5986f1(&var_3c8, &var_478);
    char const (** const rax_2)[0xa3] = var_3c8;
    void** result_4;
    uint64_t result = result_4;
    
    if (rax_2 != -0x8000000000000000)
    {
        int128_t var_380;
        int128_t var_3f8_1 = var_380;
        int128_t var_390;
        int128_t var_408_1 = var_390;
        int128_t var_3a0;
        int128_t var_418_1 = var_3a0;
        int128_t var_3b0;
        int128_t var_428_1 = var_3b0;
        char const (** const var_440)[0xa3] = rax_2;
        uint64_t result_3 = result;
        uint64_t var_3b8;
        uint64_t var_430_1 = var_3b8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h72ce5736d951d193(
            &var_3c8, &var_478, "filemode{", 4);
        clap_builder::parser::error::MatchesError::unwrap::hb151fffebee1738c(&var_528, "filemode{", 
            4, &var_3c8);
        int128_t var_f0_1 = var_528;
        int128_t var_e0_1 = var_518;
        int128_t var_d0_1 = var_508;
        int128_t var_c0_1 = var_4f8;
        int64_t var_f8 = 1;
        int64_t var_b0_1 = 0;
        int64_t var_70_1 = 0;
        int128_t var_578;
        uint64_t var_568_1;
        int128_t var_558;
        uint64_t var_548;
        int64_t var_370;
        char const (** const rbx_1)[0xa3];
        uint64_t r13_1;
        void** result_7;
        
        if (var_370)
        {
            core::iter::traits::iterator::Iterator::collect::h5afcec4cfc7ff9d0(&var_558, &var_f8);
            
            if (!var_548)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
                var_518 = var_3b8;
                var_528 = var_3c8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h637bfad009f371fd(&var_558, &var_528);
            }
            
            var_568_1 = var_548;
            var_578 = var_558;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
            rbx_1 = var_3c8;
            result_7 = result_4;
            r13_1 = var_3b8;
            goto label_51b755;
        }
        
        int64_t* rax_5 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if (!rax_5)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd310af34a44ea93d(&var_528, &var_f8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
        char const (** rdi_13)[0xa3] = var_3c8;
        void** result_6 = result_4;
        char const (** r15)[0xa3] = var_528;
        uint64_t r14_1;
        
        if (r15 != -0x8000000000000000)
        {
            r14_1 = var_518;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(rdi_13, 
                result_6);
            result_6 = result_8;
            rdi_13 = r15;
        }
        else
            r14_1 = var_3b8;
        
        *rax_5 = rdi_13;
        rax_5[1] = result_6;
        rax_5[2] = r14_1;
        var_578 = 1;
        *var_578[8] = rax_5;
        var_568_1 = 1;
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd310af34a44ea93d(&var_528, &var_f8);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haecf4c95bb52634c(&var_3c8, "-extra operand /home/34r7hm4n/.r…", 1);
        rbx_1 = var_3c8;
        result_7 = result_4;
        char const (** r12_2)[0xa3] = var_528;
        
        if (r12_2 != -0x8000000000000000)
        {
            r13_1 = var_518;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(rbx_1, 
                result_7);
            result_7 = result_8;
            rbx_1 = r12_2;
        }
        else
            r13_1 = var_3b8;
        
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd310af34a44ea93d(&var_558, &var_f8);
        int64_t r12_3 = var_558;
        int64_t* var_4a8;
        
        if (r12_3 != -0x8000000000000000)
        {
            int64_t r13_2 = *var_558[8];
            var_528 = nullptr;
            int64_t var_520 = r13_2;
            var_518 = var_548;
            *var_518[8] = 1;
            var_4a8 = &var_528;
            int64_t (* var_4a0_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_3c8 = &data_650498;
            int64_t var_3c0 = 1;
            *var_3b0[8] = 0;
            int64_t** var_3b8_1 = &var_4a8;
            var_3b0 = 1;
            int128_t var_3e0;
            core::option::Option$LT$T$GT$::map_or_else::hbdb9e301cc9bb1ce(&var_3e0, &var_3c8);
            var_3b0 = 1;
            var_3c8 = var_3e0;
            int64_t var_3d0;
            int64_t var_3b8_2 = var_3d0;
            result = alloc::boxed::Box$LT$T$GT$::new::had9a1a842e4db98a(&var_3c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(r12_3, r13_2);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb5663e3f3b5aea09(&var_558);
            label_51b755:
            uu_ptx::WordFilter::new::h59c276fe1fe77d78(&var_3c8, &var_478, &var_440);
            char const (** rax_6)[0xa3] = var_3c8;
            result = result_4;
            
            if (rax_6 != -0x8000000000000000)
            {
                int64_t var_350;
                int64_t var_4b0_1 = var_350;
                int128_t var_360;
                int128_t var_4c0_1 = var_360;
                int128_t var_4d0_1 = var_370;
                int128_t var_4e0_1 = var_380;
                int128_t var_4f0_1 = var_390;
                var_508 = var_3a0;
                var_518 = var_3b0;
                var_528 = rax_6;
                uint64_t result_1 = result;
                var_518 = var_3b8;
                uu_ptx::read_input::h2aa7184f71c3fbbd(&var_3c8, *var_578[8], var_568_1);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5f2fe159620f481a(&var_558, &var_3c8);
                int64_t* rax_7 = var_558;
                result = *var_558[8];
                
                if (rax_7)
                {
                    int64_t var_530;
                    int64_t var_480_1 = var_530;
                    int128_t var_540;
                    int128_t var_490_1 = var_540;
                    var_4a8 = rax_7;
                    uint64_t result_2 = result;
                    uint64_t var_498_1 = var_548;
                    uu_ptx::create_word_set::hc9ac89a5cc609dad(&var_3c8, &var_440, &var_528, 
                        &var_4a8);
                    uint64_t result_5;
                    uint64_t rdx_6;
                    result_5 = uu_ptx::write_traditional_output::hd12854409474720a(&var_440, 
                        &var_4a8, &var_3c8, result_7, r13_1);
                    result = result_5;
                    core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$uu_ptx..WordRef$GT$$GT$::h0a0bf2ea53c34a94(&var_3c8);
                    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h21128070f469357e(&var_4a8);
                }
                
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h822d17abc90201bf(&var_528);
            }
        }
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c43411a32210947(rbx_1, result_7);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hfd38882339c58216(&var_578);
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h41b400fd0146e447(&var_440);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdffd26dae7360ee4(&var_478);
    return result;
}
