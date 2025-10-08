
  int64_t alacritty::display::hint::HintState::stop::hd033c0de1ffc73a4(void* arg1)

{
    *(arg1 + 0x28) = 0;
    void* rdi = *(arg1 + 0x38);
    int64_t rsi = *(arg1 + 0x40);
    *(arg1 + 0x40) = 0;
    core::ptr::drop_in_place$LT$$u5b$alloc..vec..Vec$LT$char$GT$$u5d$$GT$::hff5fd8ccc15a89cc(rdi, 
        rsi);
    *(arg1 + 0x58) = 0;
    int64_t result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..Hint$GT$$GT$$GT$::h5b7fa1363027eda5(arg1 + 0x60);
    *(arg1 + 0x60) = 0;
    return result;
}
