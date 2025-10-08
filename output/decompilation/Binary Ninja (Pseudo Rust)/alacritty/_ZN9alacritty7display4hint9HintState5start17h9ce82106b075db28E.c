
  fn alacritty::display::hint::HintState::start::h9ce82106b075db28(arg1: *mut c_void, arg2: i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let result: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..Hint$GT$$GT$$GT$::h5b7fa1363027eda5(arg1.byte_offset(0x60));
    *arg1.byte_offset(0x60) = arg2;
    result
}
