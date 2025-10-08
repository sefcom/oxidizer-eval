
  fn alacritty_terminal::term::Term$LT$T$GT$::toggle_vi_mode::h9e5bfd45a9fbee95(arg1: *mut i32) -> i64

{
    let rax_2: i32 = arg1[0x1b7];
    arg1[0x1b7] = rax_2 ^ 0x10000;
    
    if (rax_2 & 0x10000) == 0
    {
        let mut rax: i32 = arg1[0x18];
        let rcx_2: i32 = arg1[0x32];
        let mut rdx_4: i64;
        
        if rax > !rcx_2 + arg1[0x30]
        {
            rdx_4 = 0;
            rax = -(rcx_2);
        }
        else
        {
            rdx_4 = *arg1.byte_offset(0x58);
        }
        
        *arg1.byte_offset(0x290) = rdx_4;
        arg1[0xa6] = rax;
    }
    
    let mut var_20: i64 = -0x7ffffffffffffff8;
    _$LT$alacritty..event..EventProxy$u20$as$u20$alacritty_terminal..event..EventListener$GT$::send_event::hcb980e74e667f924(arg1, &var_20)
}
