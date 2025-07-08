
  int64_t* uu_pr::uumain::uumain::hf17caad61ffada1f(int64_t arg1)

{
    void** const r14;
    void** const var_18 = r14;
    void var_6a8;
    uucore::Args::collect_ignore::h1f75fae5bd7a4821(&var_6a8, arg1);
    int128_t* var_6a0;
    int64_t var_698;
    int128_t var_608;
    uu_pr::recreate_arguments::hbe43c308ac861d0c(&var_608, var_6a0, var_698);
    void var_2f8;
    uu_pr::uu_app::h27293cf4b1de8d69(&var_2f8);
    int128_t var_468 = var_608;
    void* var_5b8;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h0d51c7aaa63022ba(&var_5b8, 
        &var_2f8, &var_468);
    void* rax_1 = var_5b8;
    int64_t* result;
    int64_t var_5b0;
    
    if (rax_1 != -0x8000000000000000)
    {
        int64_t var_588;
        int64_t var_630_1 = var_588;
        int128_t var_598;
        int128_t var_640_1 = var_598;
        int128_t var_5a8;
        int128_t var_650_1 = var_5a8;
        void* var_660 = rax_1;
        int64_t var_658_1 = var_5b0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he9d5271e2c2f6830(
            &var_5b8, &var_660, "files -mergeUnknownErrnoEPERMENO…", 5);
        clap_builder::parser::error::MatchesError::unwrap::h9483f94352775eb3(&var_468, 
            "files -mergeUnknownErrnoEPERMENO…", 5, &var_5b8);
        void* var_6f8;
        int128_t var_6f0;
        int128_t var_628;
        
        if (!var_468)
        {
            label_570ee1:
            var_5b8 = nullptr;
            int64_t var_5b0_1 = 8;
            var_5a8 = 0;
        }
        else
        {
            int128_t var_438;
            var_588 = var_438;
            int128_t var_448;
            int128_t var_598_1 = var_448;
            int64_t var_5f8;
            var_5a8 = var_5f8;
            var_5b8 = var_468;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3126b24b43ab7e31(&var_6f8, &var_5b8);
            void* rax_3 = var_6f8;
            var_628 = var_6f0;
            
            if (rax_3 == -0x8000000000000000)
                goto label_570ee1;
            
            var_5b0 = var_628;
            var_5b8 = rax_3;
        }
        
        int128_t var_690;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed7d37a3b4c56c54(&var_690, &var_5b8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd9c35ea9e897c87d(&var_5b8);
        int64_t var_680;
        
        if (!var_680)
            alloc::vec::Vec$LT$T$C$A$GT$::insert::h6aa1a4bfc3ddda46(&var_690, 0, 
                "-mergeUnknownErrnoEPERMENOENTESR…", 1);
        
        void var_5d0;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_660, "mergeUnknownErrnoEPERMENOENTESRC…", 5))
        {
            void var_318;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h57e7793faa5c940a(&var_318, &var_690);
            alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::ha8d90c04fe27a3d5(&var_5d0, &var_318);
        }
        else
        {
            int128_t* rax_5 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
            
            if (!rax_5)
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            rax_5[1] = var_680;
            *rax_5 = var_690;
            alloc::slice::hack::into_vec::h0ff742cd646d7bf3(&var_5d0, rax_5, 1);
        }
        
        void var_5f0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he0633ba5e41a2d78(&var_5f0, &var_5d0);
        int64_t var_678;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08603e204509b18e(&var_678, &var_5f0);
        
        if (var_678 == -0x8000000000000000)
        {
            label_571192:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h4b9d711cf2b8be8b(&var_5f0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h320315631e9d3f1c(&var_660);
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb4de78349db13b93(&var_2f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd5b40a3057d327f5(&var_6a8);
            return nullptr;
        }
        
        while (true)
        {
            int128_t var_6c8 = var_678;
            int64_t* rbp_1 = *var_6c8[8];
            alloc::str::join_generic_copy::h3936ba3902b6550c(&var_5b8, var_6a0, var_698, 
                " -mergeUnknownErrnoEPERMENOENTES…", 1);
            uint64_t r9_1 = var_5a8;
            *var_6f0[8] = r9_1;
            var_6f8 = var_5b8;
            uint64_t var_668;
            uu_pr::build_options::h94d2c892cdb8648c(&var_468, &var_660, rbp_1, var_668, var_6f0, 
                r9_1);
            uint64_t rbx_1;
            rbx_1 = 1;
            rbp_1 = 1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9f022ce4bf884c9d(&var_6f8);
            int64_t r15_1 = var_468;
            rbp_1 = r15_1 == 2;
            
            if (r15_1 == 2)
            {
                int128_t var_450;
                var_6f0 = var_450;
                var_6f8 = var_468;
                uu_pr::print_error::hae74ddad01a055bb(&var_660, &var_6f8);
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::h11e50f787d698fda(&var_6f8);
            }
            else
            {
                memcpy(&var_5b8, &var_468, 0x148);
                itertools::Itertools::exactly_one::h2b0e489c5cd32cfa(&var_6f8, *var_6c8[8]);
                
                if (var_6f8 != 2)
                    uu_pr::mpr::h619b4b447614e91a(&var_628, *var_6c8[8], var_668, &var_5b8);
                else
                {
                    int64_t* rax_6 = var_6f0;
                    uu_pr::pr::hece35f3a6aa3bef4(&var_628, *rax_6, rax_6[1], &var_5b8);
                }
                
                if (var_628 != -0x7ffffffffffffffb)
                {
                    int128_t var_618;
                    var_6f0 = var_618;
                    var_6f8 = var_628;
                    uu_pr::print_error::hae74ddad01a055bb(&var_660, &var_6f8);
                    core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::h11e50f787d698fda(&var_6f8);
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                    core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h0aa4c9475356bf21(
                        &var_5b8);
                }
                else
                {
                    core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h0aa4c9475356bf21(
                        &var_5b8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd9c35ea9e897c87d(&var_6c8);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08603e204509b18e(&var_678, &var_5f0);
                    
                    if (var_678 == -0x8000000000000000)
                        goto label_571192;
                    
                    continue;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd9c35ea9e897c87d(
                &var_6c8);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h4b9d711cf2b8be8b(&var_5f0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h320315631e9d3f1c(&var_660);
            break;
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_5b0);
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb4de78349db13b93(
        &var_2f8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd5b40a3057d327f5(
        &var_6a8);
    return result;
}
