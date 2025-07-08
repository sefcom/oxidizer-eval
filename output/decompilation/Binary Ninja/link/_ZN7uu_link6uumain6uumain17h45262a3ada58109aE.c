
  int128_t* uu_link::uumain::uumain::h45262a3ada58109a(int64_t arg1)

{
    void (* var_2e8)() __noreturn;
    uu_link::uu_app::h8c6c98521a86a24e(&var_2e8);
    void (* var_360)() __noreturn;
    clap_builder::builder::command::Command::try_get_matches_from::h066c7c93d2162a47(&var_360, 
        &var_2e8, arg1);
    void (* rax)() __noreturn = var_360;
    int64_t* var_358;
    
    if (rax == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_358);
    
    char* var_330;
    char* var_2f0 = var_330;
    int128_t var_340;
    int128_t var_300 = var_340;
    uint128_t var_350;
    uint128_t var_310 = var_350;
    void (* var_320)() __noreturn = rax;
    int64_t* var_318 = var_358;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h120e9fd3de4d454f(
        &var_2e8, &var_320, "FILES0.0.28{} FILE1 FILE2descrip…", 5);
    char const* const rsi_4 = "FILES0.0.28{} FILE1 FILE2descrip…";
    clap_builder::parser::error::MatchesError::unwrap::had88a321cb4048ba(&var_360, 
        "FILES0.0.28{} FILE1 FILE2descrip…", 5, &var_2e8);
    void (* rax_2)() __noreturn = var_360;
    int64_t* rcx_4;
    int64_t rdx_2;
    int128_t zmm0_2;
    uint128_t zmm1_2;
    
    if (!rax_2)
    {
        zmm0_2 = {0};
        zmm1_2 = "a Display implementation returne…";
        rcx_4 = "a Display implementation returne…";
        rax_2 = core::ops::function::FnOnce::call_once::h5106bbb4b638e43a;
        rdx_2 = 0;
    }
    else
    {
        rcx_4 = var_358;
        zmm1_2 = var_350;
        zmm0_2 = var_340;
        rsi_4 = var_330;
        int64_t var_328;
        rdx_2 = var_328;
    }
    
    var_2e8 = rax_2;
    int64_t* var_2e0 = rcx_4;
    uint128_t var_2d8 = zmm1_2;
    int128_t var_2c8 = zmm0_2;
    char const* const var_2b8 = rsi_4;
    int64_t var_2b0 = rdx_2;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d2e1812b0eb8590(&var_360, &var_2e8);
    int64_t rax_3 = var_350;
    int64_t rdi_11;
    
    if (!rax_3)
        rdi_11 = 0;
    else
    {
        if (rax_3 != 1)
        {
            void* rcx_5 = *var_358;
            int64_t rbx_1 = *(rcx_5 + 8);
            int64_t r14_1 = *(rcx_5 + 0x10);
            void* rax_5 = var_358[1];
            void (* r15)() __noreturn = *(rax_5 + 8);
            int64_t r12 = *(rax_5 + 0x10);
            int64_t rax_6 = std::fs::hard_link::h27245533caa257e4(rbx_1, r14_1, r15);
            var_2e8 = r15;
            int64_t var_2e0_1 = r12;
            var_2d8 = rbx_1;
            *var_2d8[8] = r14_1;
            int128_t* result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h28cb617c0241e7b8(rax_6, &var_2e8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsString$GT$$GT$::hab158a2c4b32ba65(&var_360);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7efe79aefed125da(&var_320);
            return result;
        }
        
        rdi_11 = 1;
    }
    
    core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_11, rdi_11);
    /* no return */
}
