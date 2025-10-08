
  int64_t alacritty_terminal::vi_mode::ViModeCursor::scroll::h910be6a18dfbf6a9(int32_t arg1, void* arg2, int32_t arg3)

{
    char var_28;
    alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_28, arg2, 
        alacritty_terminal::index::Line::grid_clamp::h7a533a4686eb6d93(arg1 - arg3, *(arg2 + 0x50), 
            *(arg2 + 0xc0), 1));
    
    if (!var_28)
        return 0;
    
    int64_t result;
    return result;
}
