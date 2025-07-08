
  int64_t* uu_expr::uumain::uumain::he332773eb3dd795f(int64_t arg1)

{
    int128_t var_2e8;
    uu_expr::uu_app::hc20cc991bc2caa88(&var_2e8);
    int128_t* var_3b8;
    clap_builder::builder::command::Command::try_get_matches_from::h3341692c1e135144(&var_3b8, 
        &var_2e8, arg1);
    int128_t* rax = var_3b8;
    int64_t* result;
    int64_t var_3b0;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_388;
        int64_t var_310_1 = var_388;
        int128_t var_398;
        int128_t var_320_1 = var_398;
        int128_t var_3a8;
        int128_t var_330_1 = var_3a8;
        int128_t* var_340 = rax;
        int64_t var_338_1 = var_3b0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h49af73bbc3b34fea(
            &var_2e8, &var_340, "expressionError flushing stdout:…", 0xa);
        clap_builder::parser::error::MatchesError::unwrap::hf35f627069fc413d(&var_3b8, 
            "expressionError flushing stdout:…", 0xa, &var_2e8);
        int64_t var_3f0;
        int64_t var_3d8;
        int128_t var_2d8;
        int128_t var_2c8;
        int64_t rsi_4;
        
        if (!var_3b8)
        {
            var_3f0 = 0;
            int64_t var_3e8_1 = 8;
            int64_t var_3e0_1 = 0;
            rsi_4 = 8;
        }
        else
        {
            int128_t var_2b8_1 = var_388;
            var_2c8 = var_398;
            var_2d8 = var_3a8;
            var_2e8 = var_3b8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9b1781b5ffa40da4(&var_3d8, &var_2e8);
            int64_t var_3e8;
            int128_t var_3d0;
            var_3e8 = var_3d0;
            var_3f0 = var_3d8;
            rsi_4 = var_3e8;
        }
        
        uu_expr::syntax_tree::AstNode::parse::h8fc5e56b2d3adf65(&var_2e8, rsi_4);
        var_3d8 = var_2e8;
        
        if (!var_2e8)
        {
            int128_t var_368_1 = var_2d8;
            int128_t var_378 = var_3d8;
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_3b8, &var_378);
            bool cond:0_1 = !var_3b8;
            int128_t var_308 = var_3b0;
            
            if (cond:0_1)
            {
                int128_t var_358;
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_358, 
                    &var_308);
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(
                    &var_378);
                var_3b8 = &var_358;
                int64_t (* var_3b0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_2e8 = &data_59f158;
                *var_2e8[8] = 2;
                var_2c8 = 0;
                var_2d8 = &var_3b8;
                *var_2d8[8] = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_2e8);
                int64_t var_348;
                *var_2d8[8] = var_348;
                var_2e8 = var_358;
                var_2e8 = -0x8000000000000000;
                
                if (uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_2e8))
                {
                    core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h03ce987334fde789(&var_2e8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9cc8147b558a6216(&var_3f0);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h690b48a34d1b9253(&var_340);
                    return nullptr;
                }
                
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..NumOrStr$GT$::h03ce987334fde789(
                    &var_2e8);
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            }
            else
            {
                int128_t var_2d8_2 = var_3a8;
                var_2e8 = var_308;
                result = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&var_2e8);
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(
                    &var_378);
            }
        }
        else
        {
            int128_t var_2d8_1 = var_2d8;
            var_2e8 = var_3d8;
            result = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&var_2e8);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9cc8147b558a6216(&var_3f0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h690b48a34d1b9253(&var_340);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3b0);
    return result;
}
