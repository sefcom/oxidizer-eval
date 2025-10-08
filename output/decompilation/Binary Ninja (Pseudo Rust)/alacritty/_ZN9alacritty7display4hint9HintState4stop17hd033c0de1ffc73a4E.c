
  fn alacritty::display::hint::HintState::stop::hd033c0de1ffc73a4(arg1: *mut c_void) -> i64

{
    *arg1.byte_offset(0x28) = 0;
    let rdi: *mut c_void = *arg1.byte_offset(0x38);
    let rsi: i64 = *arg1.byte_offset(0x40);
    *arg1.byte_offset(0x40) = 0;
    core::ptr::drop_in_place$LT$$u5b$alloc..vec..Vec$LT$char$GT$$u5d$$GT$::hff5fd8ccc15a89cc(rdi, 
        rsi);
    *arg1.byte_offset(0x58) = 0;
    let result: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..Hint$GT$$GT$$GT$::h5b7fa1363027eda5(arg1.byte_offset(0x60));
    *arg1.byte_offset(0x60) = 0;
    result
}
