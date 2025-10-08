
  int64_t uu_stty::print_settings::h6562ceefa3305078(int128_t* arg1, void* arg2)

{
    if (!*(arg2 + 0x29))
    {
        int32_t result = uu_stty::print_terminal_size::h7d50ec96cc45cfab(arg1, arg2);
        
        if (result != 0x86)
            return result;
        
        char rbp_1 = *(arg2 + 0x28);
        result = uu_stty::print_control_chars::hed7af0204ba7e7a6(arg1, rbp_1);
        
        if (result != 0x86)
            return result;
        
        uu_stty::print_flags::h1fca9bc374a8d8a1(arg1, rbp_1);
        uu_stty::print_flags::hd79b05057be6f5de(arg1, rbp_1);
        uu_stty::print_flags::h9ad0f8fc257d533c(arg1, rbp_1);
        uu_stty::print_flags::h6b44033c083706a8(arg1, rbp_1);
    }
    else
        uu_stty::print_in_save_format::he259ed46e6739654(arg1);
    
    return 0x86;
}
