
  fn uu_link::uumain::uumain::h45262a3ada58109a(arg1: i64) -> *mut i128

{
    let mut var_2e8: fn() -> !;
    uu_link::uu_app::h8c6c98521a86a24e(&var_2e8);
    let mut var_360: fn() -> !;
    clap_builder::builder::command::Command::try_get_matches_from::h066c7c93d2162a47(&var_360, 
        &var_2e8, arg1);
    let rax: fn() -> ! = var_360;
    let var_358: *mut i64;
    
    if rax == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_358);
    }
    
    let var_330: *mut i8;
    let var_2f0: *mut i8 = var_330;
    let var_340: i128;
    let var_300: i128 = var_340;
    let var_350: u128;
    let var_310: u128 = var_350;
    let mut var_320: fn() -> ! = rax;
    let var_318: *mut i64 = var_358;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h120e9fd3de4d454f(
        &var_2e8, &var_320, "FILES0.0.28{} FILE1 FILE2descrip…", 5);
    let mut rsi_4: *const i8 = "FILES0.0.28{} FILE1 FILE2descrip…";
    clap_builder::parser::error::MatchesError::unwrap::had88a321cb4048ba(&var_360, 
        "FILES0.0.28{} FILE1 FILE2descrip…", 5, &var_2e8);
    let mut rax_2: fn() -> ! = var_360;
    let mut rcx_4: *mut i64;
    let mut rdx_2: i64;
    let mut zmm0_2: i128;
    let mut zmm1_2: u128;
    
    if rax_2 == 0
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
        let var_328: i64;
        rdx_2 = var_328;
    }
    
    var_2e8 = rax_2;
    let var_2e0: *mut i64 = rcx_4;
    let mut var_2d8: u128 = zmm1_2;
    let var_2c8: i128 = zmm0_2;
    let var_2b8: *const i8 = rsi_4;
    let var_2b0: i64 = rdx_2;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d2e1812b0eb8590(&var_360, &var_2e8);
    let rax_3: i64 = var_350;
    let mut rdi_11: i64;
    
    if rax_3 == 0
    {
        rdi_11 = 0;
    }
    else
    {
        if rax_3 != 1
        {
            let rcx_5: *mut c_void = *var_358;
            let rbx_1: i64 = *rcx_5.byte_offset(8);
            let r14_1: i64 = *rcx_5.byte_offset(0x10);
            let rax_5: *mut c_void = var_358[1];
            let r15: fn() -> ! = *rax_5.byte_offset(8);
            let r12: i64 = *rax_5.byte_offset(0x10);
            let rax_6: i64 = std::fs::hard_link::h27245533caa257e4(rbx_1, r14_1, r15);
            var_2e8 = r15;
            let var_2e0_1: i64 = r12;
            var_2d8 = rbx_1;
            *var_2d8[8] = r14_1;
            let result: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h28cb617c0241e7b8(rax_6, &var_2e8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsString$GT$$GT$::hab158a2c4b32ba65(&var_360);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7efe79aefed125da(&var_320);
            return result;
        }
        
        rdi_11 = 1;
    }
    
    core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_11, rdi_11);
    /* no return */
}
