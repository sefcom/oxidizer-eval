
  fn uu_fmt::parasplit::WordSplit::new::h78514cc4bb6fc660(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut result: i64;
    let mut rdx: i64;
    result = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha0c5a82f3d17b2d2(arg3, arg4);
    *arg1 = arg2;
    arg1[1] = result;
    arg1[2] = rdx;
    arg1[3] = arg4;
    arg1[4] = 0;
    arg1[5] = 0;
    result
}
