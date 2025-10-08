
  fn just::function::num_cpus::h99429b75fcda06dd(arg1: *mut i64) -> *mut i64

{
    let mut var_1c: ();
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(
        num_cpus::linux::get_num_cpus::h28a5c9f1704b633e(), &var_1c, 0x14);
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_38, rax_1, rdx);
    let var_28: i64;
    arg1[3] = var_28;
    *arg1.byte_offset(8) = var_38;
    *arg1 = 0;
    arg1
}
