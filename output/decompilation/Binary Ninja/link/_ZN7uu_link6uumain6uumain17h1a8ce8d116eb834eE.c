
  uint64_t uu_link::uumain::uumain::h1a8ce8d116eb834e(int64_t arg1)

{
    void (* var_2f8)() __noreturn;
    uu_link::uu_app::h418310be0040ada0(&var_2f8);
    int64_t var_370;
    clap_builder::builder::command::Command::try_get_matches_from::h13d565a3a5c67bbf(&var_370, 
        &var_2f8, arg1);
    int64_t rax = var_370;
    int64_t* var_368;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_368);
    
    int64_t var_340;
    int64_t var_300_1 = var_340;
    int128_t var_350;
    int128_t var_310_1 = var_350;
    int128_t var_360;
    int128_t var_320_1 = var_360;
    int64_t var_330 = rax;
    int64_t* var_328_1 = var_368;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdbb453eb36b18045(
        &var_2f8, &var_330, "FILES(uutils coreutils) 0.0.30{}…", 5);
    clap_builder::parser::error::MatchesError::unwrap::hc7956110ac9be2e8(&var_370, 
        "FILES(uutils coreutils) 0.0.30{}…", 5, &var_2f8);
    
    if (!var_370)
    {
        var_2f8 = core::ops::function::FnOnce::call_once::hf4ee4ccd9a4a864d;
        char const* const var_2f0_1 = "/home/34r7hm4n/.cargo/registry/s…";
        char const* const var_2e8_1 = "/home/34r7hm4n/.cargo/registry/s…";
        int64_t var_2e0_1 = 0;
        int64_t var_2d0_1 = 0;
        int64_t var_2c0_1 = 0;
    }
    else
    {
        int128_t var_2c8_1 = var_340;
        int128_t var_2d8_1 = var_350;
        int64_t var_2e8;
        var_2e8 = var_360;
        var_2f8 = var_370;
    }
    
    core::iter::traits::iterator::Iterator::collect::he6a5d57ffcfdab58(&var_370, &var_2f8);
    int64_t rax_2 = var_360;
    int64_t rdi_10;
    
    if (!rax_2)
        rdi_10 = 0;
    else
    {
        if (rax_2 != 1)
        {
            void* rax_3 = *var_368;
            int64_t r14_1 = *(rax_3 + 8);
            int64_t r15_1 = *(rax_3 + 0x10);
            void* rax_4 = var_368[1];
            void (* r12_1)() __noreturn = *(rax_4 + 8);
            int64_t r13_1 = *(rax_4 + 0x10);
            int64_t rax_5 = std::fs::hard_link::h2f74410233768cf7(r14_1, r15_1, r12_1);
            var_2f8 = r12_1;
            int64_t var_2f0_2 = r13_1;
            int64_t var_2e8_2 = r14_1;
            int64_t var_2e0_2 = r15_1;
            uint64_t result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc3ad62926789bbd2(rax_5);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h7c77565432162c2c(
                var_370, var_368);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8ab534aea64d6c27(&var_330);
            return result;
        }
        
        rdi_10 = 1;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_10, rdi_10);
    /* no return */
}
