
  char* alacritty::event::ActionContext$LT$N$C$T$GT$::update_search::had042facf139e1ec(void* arg1)

{
    int64_t var_1020 = 0;
    int64_t var_2020 = 0;
    int64_t* rbx = *(arg1 + 0x68);
    char* result = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(rbx);
    
    if (result)
    {
        if (*(*(arg1 + 0x40) + 0x1d0))
            alacritty::display::window::Window::set_mouse_visible::h0708ccda880bd802(
                0x320 + *(arg1 + 0x30), 0);
        
        int64_t rdx_1 = *(result + 0x10);
        
        if (!rdx_1)
        {
            alacritty::event::ActionContext$LT$N$C$T$GT$::search_reset_state::h60fb25255eb6c066(
                arg1);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..search..RegexSearch$GT$$GT$::h70cc142e910b72fd(rbx);
            rbx[1] = 0;
            *rbx = 2;
        }
        else
        {
            int64_t var_2218;
            alacritty_terminal::term::search::RegexSearch::new::he62c7dc0d18da29a(&var_2218, 
                *(result + 8), rdx_1);
            int64_t r12_1 = var_2218;
            void var_1118;
            void var_2208;
            
            if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2218, data_4e8640)) != 0xffff)
                memcpy(&var_1118, &var_2208, 0x10f0);
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..term..search..RegexSearch$C$alloc..boxed..Box$LT$regex_automata..hybrid..error..BuildError$GT$$GT$$GT$::hd27b4184502a0bae(&var_2218);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..search..RegexSearch$GT$$GT$::h70cc142e910b72fd(rbx);
            *rbx = r12_1;
            int64_t var_2210;
            rbx[1] = var_2210;
            memcpy(&rbx[2], &var_1118, 0x10f0);
            alacritty::event::ActionContext$LT$N$C$T$GT$::goto_match::h27bd0aa40a0316cf(arg1, 1);
        }
        
        result = *(arg1 + 0x78);
        *result = 1;
    }
    
    return result;
}
