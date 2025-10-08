
  void alacritty_terminal::term::Term$LT$T$GT$::damage::h1bcd4e535a5188a6(int64_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_38 = rax;
    
    if (*(arg2 + 0x6dd) & 4)
    {
        *(arg2 + 0x210) = 1;
        int32_t rcx_1 = *(arg2 + 0x60);
        *(arg2 + 0x200) = *(arg2 + 0x58);
        *(arg2 + 0x208) = rcx_1;
    }
    else
    {
        int64_t rbx_1 = *(arg2 + 0x58);
        int64_t rcx = *(arg2 + 0x200);
        int64_t r14_1 = *(arg2 + 0x60);
        int64_t rdx_1 = *(arg2 + 0x208);
        *(arg2 + 0x200) = rbx_1;
        *(arg2 + 0x208) = r14_1;
        
        if (!(*(arg2 + 0x210) & 1))
        {
            int64_t* r15 = arg1;
            rax = r14_1 != rdx_1;
            arg1 = rbx_1 != rcx;
            arg1 |= rax;
            void* rbp;
            int64_t r12;
            int64_t r13;
            
            if (arg1)
            {
                r12 = *(arg2 + 0x1f0);
                rbp = arg2;
                r13 = *(arg2 + 0x1f8);
                alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r12, r13, 
                    rdx_1, rcx, rcx);
            }
            else
            {
                r12 = *(arg2 + 0x1f0);
                rbp = arg2;
                r13 = *(arg2 + 0x1f8);
            }
            
            alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r12, r13, 
                r14_1, rbx_1, rbx_1);
            /* tailcall */
            return alacritty_terminal::term::TermDamageIterator::new::h9c507061ce1d7d92(r15, r12, 
                r13, *(rbp + 0xc8));
        }
    }
    
    *arg1 = 0;
}
