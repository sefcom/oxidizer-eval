
  fn alacritty::input::Processor$LT$T$C$A$GT$::modifiers_input::h5c3f368e1dcb7729(arg1: *mut c_void, arg2: i32, arg3: i8) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let r15: *mut i32 = *arg1.byte_offset(0x28);
    *r15 = arg2;
    r15[1] = arg3;
    *(*arg1.byte_offset(0x18)).byte_offset(0x39) = 1;
    let rax_1: i8 = alacritty::input::Processor$LT$T$C$A$GT$::cursor_state::hd11ac0475868ceff(arg1);
    let result: *mut c_void = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(*arg1.byte_offset(0x30));
    
    if rax_1 == *result.byte_offset(0xf5)
    {
        return result;
    }
    
    *result.byte_offset(0xf5) = rax_1;
    /* tailcall */
    winit::window::Window::set_cursor::h058b386c12dba32c(*result.byte_offset(0x20), 
        *result.byte_offset(0x28), rax_1)
}
