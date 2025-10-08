
  fn alacritty::display::damage::RenderDamageIterator::overdamage::h06421bbc55b85a99(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i32) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let rbp: i32 = *arg2.byte_offset(0x18);
    let rax_1: i32 = core::cmp::Ord::max::h485505c56320f468(*arg3 - rbp, 0);
    *arg3 = rax_1;
    arg3[2] = core::cmp::Ord::min::h3552534d3430b892(
        core::cmp::Ord::max::h485505c56320f468(*arg2.byte_offset(0x10) - rax_1, 0), 
        rbp * 2 + arg3[2]);
    let rbp_3: i32 = *arg2.byte_offset(0x1c);
    let rax_8: i32 =
        core::cmp::Ord::max::h485505c56320f468(arg3[1] - (((rbp_3 >> 0x1f) + rbp_3) >> 1), 0);
    arg3[1] = rax_8;
    arg3[3] = core::cmp::Ord::min::h3552534d3430b892(
        core::cmp::Ord::max::h485505c56320f468(*arg2.byte_offset(0x14) - rax_8, 0), 
        rbp_3 + arg3[3]);
    *arg1 = *arg3;
    arg1[1] = arg3[2];
    let result: i32 = arg3[3];
    *arg1.byte_offset(0xc) = result;
    result
}
