
  fn uu_tsort::remove::h9256c665cc3cd014(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_28: i64 = arg2;
    let rdx: i64;
    let var_20: i64 = rdx;
    let rax: i64 = *arg1.byte_offset(8);
    let rcx_2: i64 = (*arg1.byte_offset(0x10) << 4) + rax;
    let mut var_18: i64 = rax;
    let var_10: i64 = rcx_2;
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::hc2769bd0853c5449(&var_18, &var_28);
    core::option::Option$LT$T$GT$::inspect::h35b0acb6d29925d4(rax_1, rdx_1, arg1)
}
