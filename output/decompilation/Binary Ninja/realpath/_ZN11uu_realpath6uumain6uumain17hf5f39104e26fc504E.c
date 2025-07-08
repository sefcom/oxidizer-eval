
  int64_t* uu_realpath::uumain::uumain::hf5f39104e26fc504(int64_t arg1)

{
    void* const var_2f8;
    uu_realpath::uu_app::hb0ffbeae13444ba5(&var_2f8);
    int64_t* var_3a0;
    clap_builder::builder::command::Command::try_get_matches_from::h7b8b03d6141a8787(&var_3a0, 
        &var_2f8, arg1);
    int64_t* rax = var_3a0;
    int64_t* result;
    int64_t var_398;
    
    if (rax != -0x8000000000000000)
    {
        int128_t var_38c;
        int128_t var_3c4_1 = var_38c;
        int128_t var_37c;
        int128_t var_3b4_1 = var_37c;
        int32_t var_36c;
        int32_t var_3a4_1 = var_36c;
        int64_t* var_3d8 = rax;
        int64_t var_3d0_1 = var_398;
        int32_t var_390;
        int32_t var_3c8_1 = var_390;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h416337ccbd5dbc14(
            &var_2f8, &var_3d8, "files0.0.28{} [OPTION]... FILE..…", 5);
        clap_builder::parser::error::MatchesError::unwrap::h7356003a6c200bff(&var_3a0, 
            "files0.0.28{} [OPTION]... FILE..…", 5, &var_2f8);
        
        if (!var_3a0)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int128_t var_308_1 = var_37c;
        int128_t var_318_1 = var_38c;
        int128_t var_328_1 = var_390;
        int128_t var_338 = var_3a0;
        void var_360;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h23f5f70296f3017d(&var_360, &var_338);
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "striplogicalfiles0.0.28{} [OPTIO…", 5);
        char r14_1 = 0xa;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3d8, "zero -- \x1b[8mhelpNoneshimname\x1b…", 4))
            r14_1 = 0;
        
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "quietstriplogicalfiles0.0.28{} […", 5);
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3d8, "logicalfiles0.0.28{} [OPTION]...…", 7);
        char rax_6 = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3d8, "canonicalize-existingcanonicaliz…", 0x15))
            rax_6 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3d8, "canonicalize-missingdescription(…", 0x14) * 2;
        
        char r15_1 = 0;
        
        if (!rax_2)
            r15_1 = rax_5 + 1;
        
        uu_realpath::prepare_relative_options::hce8b705a83476ef9(&var_2f8, &var_3d8, rax_6, r15_1);
        void* const rax_7 = var_2f8;
        int64_t* result_1;
        result = result_1;
        
        if (rax_7 != -0x7fffffffffffffff)
        {
            int128_t var_2e0;
            int128_t var_408 = var_2e0;
            void* const var_430 = rax_7;
            void* var_358;
            void* var_3e8 = var_358;
            int64_t var_350;
            void* var_3e0_1 = var_358 + var_350 * 0x18;
            void* i_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&var_3e8);
            
            if (i_3)
            {
                void* i_2 = i_3;
                void** var_2e8;
                int64_t var_2d0;
                
                if (!rax_4)
                {
                    void* i;
                    
                    do
                    {
                        int64_t* result_3 = nullptr;
                        
                        if (var_430 != -0x8000000000000000)
                            result_3 = result;
                        
                        int64_t rax_12 = 0;
                        
                        if (var_408 != -0x8000000000000000)
                            rax_12 = *var_408[8];
                        
                        int128_t* rax_14 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h051db6d61166b42e(
                            uu_realpath::resolve_path::h12f80bacada43346(*(i_2 + 8), *(i_2 + 0x10), 
                                r14_1, r15_1, rax_6, result_3, var_2e8, rax_12, var_2d0), 
                            i_2);
                        
                        if (rax_14)
                        {
                            int128_t* var_418 = rax_14;
                            int64_t* var_410_1 = &data_520fc0;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            int64_t rax_15;
                            int64_t rdx_6;
                            rax_15 = uucore::util_name::h60d842bf27b05e82();
                            int64_t var_348 = rax_15;
                            int64_t var_340_1 = rdx_6;
                            var_3a0 = &var_348;
                            int64_t (* var_398_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h87f610677bb13b0c;
                            var_390 = &var_418;
                            *var_38c[4] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hbb1d36f9ebdb9b04;
                            var_2f8 = &data_520e38;
                            int64_t var_2f0 = 3;
                            *var_2e0[8] = 0;
                            int64_t** var_2e8_1 = &var_3a0;
                            var_2e0 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h234f35a2ffb064b3(var_418, var_410_1);
                        }
                        
                        i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&var_3e8);
                        i_2 = i;
                    } while (i);
                }
                else
                {
                    void* i_1;
                    
                    do
                    {
                        int64_t* result_2 = nullptr;
                        
                        if (var_430 != -0x8000000000000000)
                            result_2 = result;
                        
                        int64_t rax_9 = 0;
                        
                        if (var_408 != -0x8000000000000000)
                            rax_9 = *var_408[8];
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7b44fbfad25f6f6(uu_realpath::resolve_path::h12f80bacada43346(*(i_2 + 8), *(i_2 + 0x10), 
                            r14_1, r15_1, rax_6, result_2, var_2e8, rax_9, var_2d0));
                        i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h81084d37048fee0e(&var_3e8);
                        i_2 = i_1;
                    } while (i_1);
                }
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&var_408);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb958e3bcaa0fe370(&var_430);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&var_360);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&var_3d8);
            return nullptr;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h46da251bdeece735(&var_360);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h0936fb64c2ae8dd7(&var_3d8);
    }
    else
        result = alloc::boxed::Box$LT$T$GT$::new::h5baf976cfb5a61c3(var_398, 1);
    return result;
}
