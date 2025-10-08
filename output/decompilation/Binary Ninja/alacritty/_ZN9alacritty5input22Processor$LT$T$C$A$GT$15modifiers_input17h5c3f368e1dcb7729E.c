
  void* alacritty::input::Processor$LT$T$C$A$GT$::modifiers_input::h5c3f368e1dcb7729(void* arg1, int32_t arg2, char arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int32_t* r15 = *(arg1 + 0x28);
    *r15 = arg2;
    r15[1] = arg3;
    *(*(arg1 + 0x18) + 0x39) = 1;
    char rax_1 = alacritty::input::Processor$LT$T$C$A$GT$::cursor_state::hd11ac0475868ceff(arg1);
    void* result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(*(arg1 + 0x30));
    
    if (rax_1 == *(result + 0xf5))
        return result;
    
    *(result + 0xf5) = rax_1;
    /* tailcall */
    return winit::window::Window::set_cursor::h058b386c12dba32c(*(result + 0x20), *(result + 0x28), 
        rax_1);
}
