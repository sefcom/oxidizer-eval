
  uint64_t alacritty::event::ActionContext$LT$N$C$T$GT$::goto_match::h27bd0aa40a0316cf(void* arg1, char arg2)

{
    int128_t* r14 = *(arg1 + 0x68);
    uint64_t result = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(*r14, data_4e8640));
    
    if (result != 0xffff)
    {
        int32_t* r15_1 = *(arg1 + 8);
        uint64_t rax_1 =
            core::option::Option$LT$T$GT$::filter::hd079b52a2910e85b(arg2, *(r15_1 + 0x50));
        uint32_t rbp_1 = *(r14 + 0x116c);
        int64_t rax_2;
        int32_t rdx_2;
        rax_2 = alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(r14[0x113], 
            *(r14 + 0x1138), r15_1, 1);
        int64_t var_210;
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::search_next::hfbb586cdfa9a04b2(&var_210, r15_1, r14, rax_2, rdx_2, rbp_1, 0, rax_1, 0x3e8);
        char var_1f0;
        int64_t var_1e8;
        
        if (var_1f0 != 2)
        {
            int64_t rax_6 = var_210;
            int32_t r12_3 = r15_1[0x32];
            int32_t r13_2 = r15_1[0x1b7];
            int32_t var_208;
            alacritty_terminal::term::Term$LT$T$GT$::scroll_to_point::hb7f2e07c90fd62c4(r15_1, 
                var_208);
            
            if (r13_2 & 0x10000)
            {
                *(r15_1 + 0x290) = rax_6;
                r15_1[0xa6] = var_208;
                alacritty_terminal::term::Term$LT$T$GT$::vi_mode_recompute_selection::hf880b3a3d59b9937(r15_1);
            }
            
            r14[0x116] = var_1f0;
            int128_t zmm0_1 = var_210;
            int128_t var_200;
            r14[0x115] = var_200;
            r14[0x114] = zmm0_1;
            *(r14 + 0x1168) += r12_3 - r15_1[0x32];
            int64_t rax_9 =
                alacritty::display::window::Window::id::h395f89524db74beb(0x320 + *(arg1 + 0x30));
            alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_1e8, 
                *(arg1 + 0x60), rax_9);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_1e8);
        }
        else if (rax_1 != 1)
            alacritty::event::ActionContext$LT$N$C$T$GT$::search_reset_state::h60fb25255eb6c066(
                arg1);
        else
        {
            void* r13_1 = 0x320 + *(arg1 + 0x30);
            int64_t rax_3 = alacritty::display::window::Window::id::h395f89524db74beb(r13_1);
            void* r12_2 = *(arg1 + 0x60);
            
            if (!alacritty::scheduler::Scheduler::scheduled::hb59bdd10155a35fc(r12_2, rax_3))
            {
                var_1e8 = -0x7ffffffffffffff7;
                alacritty::display::window::Window::id::h395f89524db74beb(r13_1);
                void var_f8;
                alacritty::event::Event::new::h74b0126f9adfc99e(&var_f8, &var_1e8);
                int64_t var_228_1 = 1;
                alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(r12_2, &var_f8, 0, 
                    0x1dcd6500, 0, rax_3);
            }
            
            r14[0x116] = 2;
        }
        result = *(arg1 + 0x78);
        *result = 1;
    }
    
    return result;
}
