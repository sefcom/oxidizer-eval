
  fn just::function::just_pid::h7a6413ce5eb56871(arg1: *mut i64) -> *mut i64

{
    let mut var_12: ();
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
        std::process::id::hbddb6ac2895e6a42(), &var_12, 0xa);
    let mut var_30: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_30, rax_1, rdx);
    let var_20: i64;
    arg1[3] = var_20;
    *arg1.byte_offset(8) = var_30;
    *arg1 = 0;
    arg1
}
