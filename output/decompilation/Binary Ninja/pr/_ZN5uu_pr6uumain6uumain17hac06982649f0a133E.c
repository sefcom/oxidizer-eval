
  uint64_t uu_pr::uumain::uumain::hac06982649f0a133(int64_t arg1)

{
    void** const r12;
    void** const var_28 = r12;
    void var_6e0;
    uucore::Args::collect_ignore::h97482d15030ba782(&var_6e0, arg1);
    void* var_6d8;
    int64_t var_6d0;
    void var_5e0;
    uu_pr::recreate_arguments::hde7501ecf1930281(&var_5e0, var_6d8, var_6d0);
    void var_2f8;
    uu_pr::uu_app::hd57f601a60b3d98f(&var_2f8);
    void** var_5c8;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h56c31e2702c5690a(&var_5c8, 
        &var_2f8, &var_5e0);
    void** rax = var_5c8;
    uint64_t result;
    int64_t var_5c0;
    
    if (-(rax) != -0x8000000000000000)
    {
        int64_t var_598;
        int64_t var_640_1 = var_598;
        int128_t var_5a8;
        int128_t var_650_1 = var_5a8;
        int128_t var_5b8;
        int128_t var_660_1 = var_5b8;
        void** var_670 = rax;
        int64_t var_668_1 = var_5c0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9ab32871d6940052(
            &var_5c8, &var_670);
        int64_t var_480;
        clap_builder::parser::error::MatchesError::unwrap::h326427d89277f070(&var_480, &var_5c8);
        int64_t rdx_3;
        int64_t rbx_1;
        void** r14_1;
        
        if (!var_480)
        {
            label_523d8e:
            rbx_1 = 8;
            rdx_3 = 0;
            r14_1 = nullptr;
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::hcebf0ec800da98fb(&var_5c8, &var_480);
            r14_1 = var_5c8;
            
            if (r14_1 == -0x8000000000000000)
                goto label_523d8e;
            
            rbx_1 = var_5c0;
            rdx_3 = var_5b8;
        }
        
        int128_t var_6f8;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc7ce5ee35d8c572c(&var_6f8, rbx_1, rdx_3);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h77d95ec4cfe72c96(r14_1, 
            rbx_1);
        int64_t var_6e8;
        
        if (!var_6e8)
            alloc::vec::Vec$LT$T$C$A$GT$::insert::he471e9efcf55dae8(&var_6f8);
        
        int64_t var_618;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_670, "mergeUnknownErrnoEPERMENOENTESRC…", 5))
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4c8875bae1ad66fe(&var_5c8, &var_6f8);
            core::iter::traits::iterator::Iterator::collect::h39c8c4e18f2c5e13(&var_618, &var_5c8);
        }
        else
        {
            uint64_t rax_3 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if (!rax_3)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            int128_t zmm0_2 = var_6f8;
            *(rax_3 + 0x10) = var_6e8;
            *rax_3 = zmm0_2;
            var_618 = 1;
            uint64_t var_610_1 = rax_3;
            int64_t var_608_1 = 1;
        }
        
        void var_600;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he0c8406f3ea8cec4(&var_600, &var_618);
        int64_t var_688;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6b07da59e5f71a1e(&var_688, &var_600);
        int64_t rbx_2 = var_688;
        
        if (rbx_2 == -0x8000000000000000)
        {
            label_52400f:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h7a0321272e8203db(&var_600);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h35a9c1db073199ba(&var_670);
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h5390a55aec4cadbc(&var_2f8);
            result = 0;
        }
        else
        {
            int64_t var_6a0_1 = -0x7ffffffffffffffb;
            
            while (true)
            {
                alloc::str::join_generic_copy::h9a16a609d86d9006(&var_5c8, var_6d8, var_6d0);
                r12 = var_5c8;
                int64_t* var_680;
                uint64_t var_678;
                int32_t var_440;
                uu_pr::build_options::h49ff7384d8a5a7b3(&var_440, &var_670, var_680, var_678, 
                    var_5c0, var_5b8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1990b2a4231c8396(r12, 
                    var_5c0);
                int128_t var_6c8;
                
                if (var_440 == 2)
                {
                    int128_t var_428;
                    int128_t var_6b8_1 = var_428;
                    int128_t var_438;
                    var_6c8 = var_438;
                    uu_pr::print_error::hcda7b11e9efc84e6(&var_670, &var_6c8);
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                    core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::hb0ace81eae090343(&var_6c8);
                }
                else
                {
                    memcpy(&var_5c8, &var_440, 0x148);
                    itertools::Itertools::exactly_one::h00a3accd7fcc4326(&var_6c8, var_680);
                    int64_t var_638;
                    
                    if (var_6c8 != 2)
                        uu_pr::mpr::hb7baf1477b554e9c(&var_638, var_680, var_678, &var_5c8);
                    else
                    {
                        int64_t* rax_6 = *var_6c8[8];
                        uu_pr::pr::h5485419cf3c9b0ae(&var_638, *rax_6, rax_6[1], &var_5c8);
                    }
                    
                    if (var_638 != var_6a0_1)
                    {
                        int128_t var_628;
                        int128_t var_6b8_2 = var_628;
                        var_6c8 = var_638;
                        uu_pr::print_error::hcda7b11e9efc84e6(&var_670, &var_6c8);
                        core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::hb0ace81eae090343(&var_638);
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                        core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h0b5888463897c4e4(
                            &var_5c8);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h0b5888463897c4e4(
                            &var_5c8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h77d95ec4cfe72c96(rbx_2, var_680);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6b07da59e5f71a1e(&var_688, &var_600);
                        rbx_2 = var_688;
                        
                        if (rbx_2 == -0x8000000000000000)
                            goto label_52400f;
                        
                        continue;
                    }
                }
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h77d95ec4cfe72c96(
                    rbx_2, var_680);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h7a0321272e8203db(&var_600);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h35a9c1db073199ba(&var_670);
                break;
            }
            
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h5390a55aec4cadbc(&var_2f8);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_5c0);
        core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h5390a55aec4cadbc(
            &var_2f8);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd02d4b6e80bb29b4(
        &var_6e0);
    return result;
}
