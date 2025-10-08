
  fn alacritty::event::ActionContext$LT$N$C$T$GT$::update_search::had042facf139e1ec(arg1: *mut c_void) -> *mut i8

{
    let var_1020: i64 = 0;
    let var_2020: i64 = 0;
    let rbx: *mut i64 = *arg1.byte_offset(0x68);
    let mut result: *mut i8 = alacritty::event::SearchState::regex::h987f2ff06a62c5a5(rbx);
    
    if result != 0
    {
        if *(*arg1.byte_offset(0x40)).byte_offset(0x1d0) != 0
        {
            alacritty::display::window::Window::set_mouse_visible::h0708ccda880bd802(
                0x320 + *arg1.byte_offset(0x30), 0);
        }
        
        let rdx_1: i64 = *result.byte_offset(0x10);
        
        if rdx_1 == 0
        {
            alacritty::event::ActionContext$LT$N$C$T$GT$::search_reset_state::h60fb25255eb6c066(
                arg1);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..search..RegexSearch$GT$$GT$::h70cc142e910b72fd(rbx);
            rbx[1] = 0;
            *rbx = 2;
        }
        else
        {
            let mut var_2218: i64;
            alacritty_terminal::term::search::RegexSearch::new::he62c7dc0d18da29a(&var_2218, 
                *result.byte_offset(8), rdx_1);
            let r12_1: i64 = var_2218;
            let mut var_1118: ();
            let mut var_2208: ();
            
            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2218, data_4e8640)) != 0xffff
            {
                memcpy(&var_1118, &var_2208, 0x10f0);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..term..search..RegexSearch$C$alloc..boxed..Box$LT$regex_automata..hybrid..error..BuildError$GT$$GT$$GT$::hd27b4184502a0bae(&var_2218);
            }
            core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..term..search..RegexSearch$GT$$GT$::h70cc142e910b72fd(rbx);
            *rbx = r12_1;
            let var_2210: i64;
            rbx[1] = var_2210;
            memcpy(&rbx[2], &var_1118, 0x10f0);
            alacritty::event::ActionContext$LT$N$C$T$GT$::goto_match::h27bd0aa40a0316cf(arg1, 1);
        }
        
        result = *arg1.byte_offset(0x78);
        *result = 1;
    }
    
    result
}
