
  uint64_t uu_numfmt::uumain::uumain::h7a36dd360fce0307(int64_t arg1)

{
    int64_t* var_2e0;
    uu_numfmt::uu_app::h17d783a9d7220ae7(&var_2e0);
    int64_t* var_3f0;
    clap_builder::builder::command::Command::try_get_matches_from::hfb908c4e8fd8a90b(&var_3f0, 
        &var_2e0, arg1);
    int64_t* rax = var_3f0;
    int64_t var_3e8;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3e8);
    
    int64_t var_3c0;
    int64_t var_410 = var_3c0;
    int128_t var_3d0;
    int128_t var_420 = var_3d0;
    int128_t var_3e0;
    int128_t var_430 = var_3e0;
    int64_t* var_440 = rax;
    int64_t var_438 = var_3e8;
    uu_numfmt::parse_options::hdd4028f9a896523f(&var_2e0, &var_440);
    int64_t* rbx_1 = var_2e0;
    uint64_t result;
    void** var_2d8;
    int128_t var_2d0;
    
    if (rbx_1 != 2)
    {
        int128_t var_458 = var_2d0;
        void var_2b8;
        memcpy(&*var_3d0[8], &var_2b8, 0xa8);
        int128_t zmm0_3 = var_458;
        int128_t var_408_1 = zmm0_3;
        int128_t var_3e0_1 = zmm0_3;
        int64_t var_2c0;
        var_3d0 = var_2c0;
        var_3f0 = rbx_1;
        void** const var_3e8_1 = var_2d8;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h471fa3c8de9cc35d(
            &var_2e0, &var_440);
        int64_t var_320;
        clap_builder::parser::error::MatchesError::unwrap::h7285758572399059(&var_320, &var_2e0);
        
        if (!var_320)
        {
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            var_458 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
            int64_t* rax_5;
            char rdx_3;
            rax_5 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_458);
            var_2e0 = rax_5;
            var_2d8 = rdx_3 & 1;
            uint64_t result_2;
            void** rdx_4;
            result_2 = uu_numfmt::handle_buffer::h8d59c98e3da551b3(&var_2e0, &var_3f0);
            result = result_2;
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h74753e38be762355(var_2e0, 
                var_2d8);
            
            if (!result)
                result = 0;
            else
            {
                label_463ac0:
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                var_2e0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                core::result::Result$LT$T$C$E$GT$::expect::h35336489fa14421a(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(&var_2e0));
            }
        }
        else
        {
            int128_t* result_1;
            void** rdx_2;
            result_1 = uu_numfmt::handle_args::h88f782532eeab52a(&var_320, &var_3f0);
            result = result_1;
            
            if (result_1)
                goto label_463ac0;
            
            result = 0;
        }
        
        core::ptr::drop_in_place$LT$uu_numfmt..options..NumfmtOptions$GT$::h46b9f219212e0ff3(
            &var_3f0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2f0f0406eae3d8c2(&var_440);
    }
    else
    {
        int64_t rcx_4 = *var_2d0[8];
        int128_t zmm0_2 = var_2d8;
        int128_t var_408 = zmm0_2;
        int64_t var_3f8_1 = rcx_4;
        *var_2d0[8] = rcx_4;
        var_2d8 = zmm0_2;
        var_2e0 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hb6e44097f5c9c613(&var_2e0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2f0f0406eae3d8c2(&var_440);
    }
    return result;
}
