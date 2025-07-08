
  fn uu_expr::uumain::uumain::he332773eb3dd795f(arg1: i64) -> *mut i64

{
    let mut var_2e8: i128;
    uu_expr::uu_app::hc20cc991bc2caa88(&var_2e8);
    let mut var_3b8: *mut i128;
    clap_builder::builder::command::Command::try_get_matches_from::h3341692c1e135144(&var_3b8, 
        &var_2e8, arg1);
    let rax: *mut i128 = var_3b8;
    let mut result: *mut i64;
    let var_3b0: i64;
    
    if rax != -0x8000000000000000
    {
        let var_388: i64;
        let var_310_1: i64 = var_388;
        let var_398: i128;
        let var_320_1: i128 = var_398;
        let var_3a8: i128;
        let var_330_1: i128 = var_3a8;
        let mut var_340: *mut i128 = rax;
        let var_338_1: i64 = var_3b0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h49af73bbc3b34fea(
            &var_2e8, &var_340, "expressionError flushing stdout:…", 0xa);
        clap_builder::parser::error::MatchesError::unwrap::hf35f627069fc413d(&var_3b8, 
            "expressionError flushing stdout:…", 0xa, &var_2e8);
        let mut var_3f0: i64;
        let mut var_3d8: i64;
        let mut var_2d8: i128;
        let mut var_2c8: i128;
        let mut rsi_4: i64;
        
        if var_3b8 == 0
        {
            var_3f0 = 0;
            let var_3e8_1: i64 = 8;
            let var_3e0_1: i64 = 0;
            rsi_4 = 8;
        }
        else
        {
            let var_2b8_1: i128 = var_388;
            var_2c8 = var_398;
            var_2d8 = var_3a8;
            var_2e8 = var_3b8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9b1781b5ffa40da4(&var_3d8, &var_2e8);
            let mut var_3e8: i64;
            let var_3d0: i128;
            var_3e8 = var_3d0;
            var_3f0 = var_3d8;
            rsi_4 = var_3e8;
        }
        
        uu_expr::syntax_tree::AstNode::parse::h8fc5e56b2d3adf65(&var_2e8, rsi_4);
        var_3d8 = var_2e8;
        
        if var_2e8 == 0
        {
            let var_368_1: i128 = var_2d8;
            let mut var_378: i128 = var_3d8;
            uu_expr::syntax_tree::AstNode::eval::h0e7cef87b1c8bd3f(&var_3b8, &var_378);
            let cond:0_1: bool = var_3b8 == 0;
            let mut var_308: i128 = var_3b0;
            
            if cond:0_1
            {
                let mut var_358: i128;
                uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(&var_358, 
                    &var_308);
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(
                    &var_378);
                var_3b8 = &var_358;
                let var_3b0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_2e8 = &data_59f158;
                *var_2e8[8] = 2;
                var_2c8 = 0;
                var_2d8 = &var_3b8;
                *var_2d8[8] = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_2e8);
                let var_348: i64;
                *var_2d8[8] = var_348;
                var_2e8 = var_358;
                var_2e8 = -0x8000000000000000;
                
                if uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(&var_2e8) != 0
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
                let var_2d8_2: i128 = var_3a8;
                var_2e8 = var_308;
                result = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&var_2e8);
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::hb5763514b279a259(
                    &var_378);
            }
        }
        else
        {
            let var_2d8_1: i128 = var_2d8;
            var_2e8 = var_3d8;
            result = alloc::boxed::Box$LT$T$GT$::new::h9793020a81d80a2f(&var_2e8);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9cc8147b558a6216(&var_3f0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h690b48a34d1b9253(&var_340);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3b0);
    }
    result
}
