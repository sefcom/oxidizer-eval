
  fn alacritty_terminal::term::Term$LT$T$GT$::vi_mode_recompute_selection::hf880b3a3d59b9937(arg1: *mut c_void)

{
    if (*arg1.byte_offset(0x6de) & 1) != 0
    {
        let mut rdi: *mut i128 = nullptr;
        
        if *arg1.byte_offset(0x280) != 2
        {
            rdi = arg1.byte_offset(0x258);
        }
        
        let rax: *mut i128 = core::option::Option$LT$T$GT$::filter::h677345fe5c2d3828(rdi);
        
        if rax != 0
        {
            let rdx: i32 = *arg1.byte_offset(0x298);
            *rax.byte_offset(0x18) = *arg1.byte_offset(0x290);
            rax[2] = rdx;
            *rax.byte_offset(0x28) = 0;
            /* tailcall */
            return alacritty_terminal::selection::Selection::include_all::h7c6fde09d9c3054d(rax);
        }
    }
}
