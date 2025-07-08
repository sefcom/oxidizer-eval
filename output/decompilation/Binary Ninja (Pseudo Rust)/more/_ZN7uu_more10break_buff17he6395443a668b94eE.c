
  fn uu_more::break_buff::he6395443a668b94e(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_80: i64;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_80, 
        arg2, arg3);
    let mut var_90: i64 = 0;
    let var_50: i16 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h5d7525725ab87575(&var_90, 
        core::iter::traits::iterator::Iterator::fold::haf2e61b0f943967a(&var_90), 0);
    
    if var_90 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(arg3);
        /* no return */
    }
    
    let rax_1: i64 = var_80;
    let mut var_a8: i64 = arg3;
    let var_a0: i64 = rax_1;
    let result: i64 = 0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_80, 
        arg2, arg3);
    var_90 = 0;
    let var_88_1: i64 = arg3;
    let var_50_1: i16 = 0;
    
    loop
    {
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h6d0b307c0d2190f6(&var_90);
        
        if rax_2 == 0
        {
            break;
        }
        
        let mut var_48: ();
        let mut rax_3: *mut i8;
        let mut rdx_2: u64;
        rax_3 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h200055905ca292d8(&var_48, rax_2, rdx_1);
        uu_more::break_line::h73539b671d3ea9e7(&var_48, rax_3, rdx_2, arg4);
        let var_40: i64;
        let mut var_38: i64;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3ec15337970eadce(&var_a8, var_40, var_38);
        var_38 = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h54d13806247b6c15(&var_48);
    }
    
    arg1[1] = result;
    *arg1 = var_a8;
    result
}
