
  fn alacritty::display::hint::HintLabels::next::h3687c471851e5e21(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let rax: i64 = *arg2.byte_offset(0x20);
    let rcx_1: i64 = rax + (*arg2.byte_offset(0x28) << 3);
    let mut var_28: i64 = rax;
    let var_20: i64 = rcx_1;
    let var_18: *mut c_void = arg2;
    let mut var_40: i128;
    core::iter::traits::iterator::Iterator::collect::h33746914ed5d5ddf(&var_40, &var_28);
    alacritty::display::hint::HintLabels::increment::hee42f897509faf72(arg2);
    let result: i64;
    arg1[1] = result;
    *arg1 = var_40;
    result
}
