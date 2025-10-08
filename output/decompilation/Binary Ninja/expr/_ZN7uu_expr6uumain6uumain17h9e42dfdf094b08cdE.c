
  uint64_t uu_expr::uumain::uumain::h9e42dfdf094b08cd(int64_t arg1, int64_t arg2)

{
    void* const var_2e8;
    core::iter::traits::iterator::Iterator::skip::h532d866c75ac3d55(&var_2e8, arg1, arg2);
    void var_398;
    core::iter::traits::iterator::Iterator::collect::h7531a1f7ea66db80(&var_398, &var_2e8);
    void* var_390;
    void* r12 = var_390;
    int64_t var_388;
    int64_t r15 = var_388;
    uint64_t result;
    void* const var_3c0;
    int32_t var_368;
    int128_t var_360;
    int128_t var_2e0;
    int128_t var_2d0;
    
    if (!r15)
    {
        label_49c67a:
        void* var_340 = r12;
        int64_t var_338_1 = r15;
        int64_t var_330_1 = 0;
        uu_expr::syntax_tree::Parser$LT$S$GT$::parse::hd9457b01c74b6ec9(&var_2e8, &var_340);
        void* const rax_6 = var_2e8;
        int128_t var_328 = var_2e0;
        
        if (rax_6 != -0x7ffffffffffffffb)
        {
            int128_t var_3a8_1 = var_2d0;
            int128_t var_3b8_1 = var_328;
            var_3c0 = rax_6;
            uu_expr::syntax_tree::AstNode::eval::h7294554a61514ede(&var_368, &var_3c0);
            int32_t rax_8 = var_368;
            int128_t var_308 = var_360;
            int128_t var_350;
            int128_t var_2f8_1 = var_350;
            
            if (rax_8 != 1)
            {
                int128_t var_380;
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h12de1e9c78140f1f(&var_380, 
                    &var_308);
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(
                    &var_3c0);
                var_3c0 = &var_380;
                var_3b8_1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_2e8 = &data_549b20;
                var_2e0 = 2;
                *var_2d0[8] = 0;
                *var_2e0[8] = &var_3c0;
                var_2d0 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_2e8);
                int64_t var_370;
                var_2d0 = var_370;
                int128_t var_2e0_1 = var_380;
                var_2e8 = -0x8000000000000000;
                char rax_11 = uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(&var_2e8);
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h85a38dbf46701223(
                    &var_2e8);
                
                if (!rax_11)
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                else
                    result = 0;
            }
            else
            {
                result = alloc::boxed::Box$LT$T$GT$::new::hf89efcdcdc160bb6(&var_308);
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(
                    &var_3c0);
            }
        }
        else
            result = alloc::boxed::Box$LT$T$GT$::new::hf89efcdcdc160bb6(&var_328);
    }
    else
    {
        int64_t rbx_1;
        uint64_t r14_1;
        
        if (r15 != 1)
        {
            rbx_1 = *(r12 + 8);
            r14_1 = *(r12 + 0x10);
            label_49c66a:
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(rbx_1, r14_1, "--/home/34r7hm4n/.rustup/toolcha…", 2))
            {
                r15 -= 1;
                r12 += 0x18;
            }
            
            goto label_49c67a;
        }
        
        rbx_1 = *(r12 + 8);
        r14_1 = *(r12 + 0x10);
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(rbx_1, r14_1, "--help--version--/home/34r7hm4n/…", 6))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6aa7dedd5a5c3808(rbx_1, r14_1, "--version--/home/34r7hm4n/.rustu…", 9))
                goto label_49c66a;
            
            void* rax_4;
            int64_t rdx_1;
            rax_4 = uucore::util_name::h074417a1e6395129();
            var_3c0 = rax_4;
            int128_t var_3b8;
            var_3b8 = rdx_1;
            var_368 = &var_3c0;
            var_360 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h547d29ebb03039db;
            var_2e8 = &data_549b78;
            var_2e0 = 2;
            *var_2d0[8] = 0;
            *var_2e0[8] = &var_368;
            var_2d0 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_2e8);
            result = 0;
        }
        else
        {
            uu_expr::uu_app::h86f9ff8623407d10(&var_2e8);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf3d4d63b65b78e3d(clap_builder::builder::command::Command::print_help::h99ccf3e1a23a10fd(&var_2e8));
            core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hf06aedbb9ada27c4(&var_2e8);
            result = 0;
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h71ec3d093eeba3f8(
        &var_398);
    return result;
}
