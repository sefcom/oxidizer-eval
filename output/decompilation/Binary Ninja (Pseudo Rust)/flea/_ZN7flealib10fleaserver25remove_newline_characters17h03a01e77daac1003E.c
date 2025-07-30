
  fn flealib::fleaserver::remove_newline_characters::h03a01e77daac1003(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut var_58: ();
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_58, arg2, 
        arg3);
    let var_50: i64;
    let var_48: i64;
    let mut var_40: ();
    alloc::str::_$LT$impl$u20$str$GT$::replace::hd78aa449e9cb76fe(&var_40, var_50, var_48, 0xa);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_58);
    let var_38: i64;
    let var_30: i64;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hd78aa449e9cb76fe(&var_58, var_38, var_30, 0xd);
    let mut var_28: i64 = var_50;
    let var_20: i64 = var_50 + var_48;
    let mut rax_1: i64;
    let mut rdx_2: i64;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::hae5b526ea16bb78f(&var_28);
    
    if rax_1 == 0
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    let mut rax_2: i64;
    let mut rdx_4: u64;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha9914e413251f43e(rdx_2, var_50, var_48);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(arg1, rax_2, 
        rdx_4);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_40)
}
