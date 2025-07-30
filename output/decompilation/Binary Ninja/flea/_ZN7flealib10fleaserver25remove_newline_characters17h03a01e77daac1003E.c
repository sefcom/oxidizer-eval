
  int64_t flealib::fleaserver::remove_newline_characters::h03a01e77daac1003(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    void var_58;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_58, arg2, 
        arg3);
    int64_t var_50;
    int64_t var_48;
    void var_40;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hd78aa449e9cb76fe(&var_40, var_50, var_48, 0xa);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_58);
    int64_t var_38;
    int64_t var_30;
    alloc::str::_$LT$impl$u20$str$GT$::replace::hd78aa449e9cb76fe(&var_58, var_38, var_30, 0xd);
    int64_t var_28 = var_50;
    int64_t var_20 = var_50 + var_48;
    int64_t rax_1;
    int64_t rdx_2;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::hae5b526ea16bb78f(&var_28);
    
    if (!rax_1)
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    int64_t rax_2;
    uint64_t rdx_4;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha9914e413251f43e(rdx_2, var_50, var_48);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(arg1, rax_2, 
        rdx_4);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_58);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_40);
}
