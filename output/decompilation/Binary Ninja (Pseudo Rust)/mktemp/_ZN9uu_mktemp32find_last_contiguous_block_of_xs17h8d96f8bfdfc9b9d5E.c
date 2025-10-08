
  fn uu_mktemp::find_last_contiguous_block_of_xs::h8d96f8bfdfc9b9d5(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rax_1: i8;
    let mut rdx: i64;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::h3ea40a8a7df4209c(arg2, arg3);
    let mut result: i64;
    
    if (rax_1 & 1) == 0
    {
        result = 0;
    }
    else
    {
        let mut rax_2: i64;
        let mut rdx_2: i64;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx + 3, arg2, arg3);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, rdx + 3);
            /* no return */
        }
        
        let mut rax_3: i8;
        let mut rdx_3: i64;
        rax_3 = core::str::_$LT$impl$u20$str$GT$::rfind::h7a5049edaccade27(rax_2, rdx_2);
        arg1[1] = core::option::Option$LT$T$GT$::map_or::hda51459bca63de71(rax_3, rdx_3);
        arg1[2] = rdx + 3;
        result = 1;
    }
    
    *arg1 = result;
    result
}
