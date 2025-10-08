
  void alacritty_terminal::term::Term$LT$T$GT$::vi_mode_recompute_selection::hf880b3a3d59b9937(void* arg1)

{
    if (*(arg1 + 0x6de) & 1)
    {
        int128_t* rdi = nullptr;
        
        if (*(arg1 + 0x280) != 2)
            rdi = arg1 + 0x258;
        
        int128_t* rax = core::option::Option$LT$T$GT$::filter::h677345fe5c2d3828(rdi);
        
        if (rax)
        {
            int32_t rdx = *(arg1 + 0x298);
            *(rax + 0x18) = *(arg1 + 0x290);
            rax[2] = rdx;
            *(rax + 0x28) = 0;
            /* tailcall */
            return alacritty_terminal::selection::Selection::include_all::h7c6fde09d9c3054d(rax);
        }
    }
}
