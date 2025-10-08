
  fn alacritty::display::damage::merge_rects::h0447d93a60ef6e50(arg1: *mut i32, arg2: *mut i32, arg3: *mut i32) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let r12: i32 = *arg2;
    let r13: i32 = *arg3;
    let rax_1: i32 = core::cmp::Ord::min::h3552534d3430b892(r12, r13);
    let rax_2: i32 = core::cmp::Ord::max::h485505c56320f468(r12 + arg2[2], r13 + arg3[2]);
    let r13_2: i32 = arg2[1];
    let r15_1: i32 = arg3[1];
    let rax_3: i32 = core::cmp::Ord::max::h485505c56320f468(arg2[3] + r13_2, arg3[3] + r15_1);
    let result: i32 = core::cmp::Ord::min::h3552534d3430b892(r13_2, r15_1);
    *arg1 = rax_1;
    arg1[1] = result;
    arg1[2] = rax_2 - rax_1;
    arg1[3] = rax_3 - result;
    result
}
