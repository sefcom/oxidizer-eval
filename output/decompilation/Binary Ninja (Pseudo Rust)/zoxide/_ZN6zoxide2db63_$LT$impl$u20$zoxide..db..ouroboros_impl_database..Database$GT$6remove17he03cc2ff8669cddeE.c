
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::remove::he03cc2ff8669cdde(arg1: *mut c_void, arg2: i64) -> u64

{
    let mut var_28: i64 = arg2;
    let rax: i64 = *arg1.byte_offset(8);
    let rcx: i64 = *arg1.byte_offset(0x10);
    let mut var_20: i64 = rax;
    let var_18: i64 = rax + rcx * 0x28;
    let mut rax_1: i32;
    let mut rdx: i64;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::ha749ffca44ad2cd2(&var_20, &var_28);
    
    if (rax_1 & 1) != 0
    {
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(arg1, rdx);
    }
    
    let mut r14: i32;
    r14 = rax_1 & 1;
    r14
}
