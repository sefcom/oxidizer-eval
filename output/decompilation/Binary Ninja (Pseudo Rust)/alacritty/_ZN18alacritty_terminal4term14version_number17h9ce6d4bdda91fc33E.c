
  fn alacritty_terminal::term::version_number::h9ce6d4bdda91fc33(arg1: *mut i8, arg2: i64) -> i64

{
    let mut rbx: i64 = arg2;
    let mut r14: *mut i8 = arg1;
    let mut rax: i8;
    let mut rdx: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::rfind::h5ffd3ec6ac878557(arg1, arg2);
    
    if (rax & 1) != 0
    {
        let mut rax_1: *mut i8;
        let mut rdx_2: i64;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx, r14, rbx);
        
        if rax_1 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, 0, rdx);
            /* no return */
        }
        
        rbx = rdx_2;
        r14 = rax_1;
    }
    
    let mut var_70: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_70, 
        0x2e, r14, rbx);
    let mut var_88: i128 = {0};
    let var_78: i64 = rbx;
    let var_40: i16 = 1;
    let mut var_b0: u32;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcac804ffefb0fdb3(&var_b0, &var_88);
    let i_1: *mut i8;
    let mut i: *mut i8 = i_1;
    let mut result: i64 = 0;
    
    for ; i != 0; i = i_1
    {
        let rbp_1: u32 = var_b0;
        let var_a0: i64;
        let mut var_98: i8;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, i, var_a0);
        let mut r13_1: i64;
        let var_90: i64;
        
        if var_98 == 0
        {
            r13_1 = var_90;
        }
        else
        {
            r13_1 = 0;
        }
        result += core::num::_$LT$impl$u20$usize$GT$::pow::ha18887787946000d(rbp_1) * r13_1;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcac804ffefb0fdb3(&var_b0, &var_88);
    }
    
    result
}
