
  void* alacritty::event::ActionContext$LT$N$C$T$GT$::exit_search::h5ece67b27cc470a9(void* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    void* r14 = *(arg1 + 0x30);
    alacritty::display::window::Window::set_ime_allowed::hbb6cdda1349198bd(r14 + 0x320, 
        !(*(*(arg1 + 8) + 0x6dc) & 0x10000));
    *(r14 + 0x48) = 1;
    *(r14 + 0x55c) = 1;
    void* result = *(arg1 + 0x68);
    *(result + 0x1100) = 0;
    *(result + 0x1160) = 2;
    return result;
}
