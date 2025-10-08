
  fn uu_stty::print_settings::h6562ceefa3305078(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    if *arg2.byte_offset(0x29) == 0
    {
        let mut result: i32 = uu_stty::print_terminal_size::h7d50ec96cc45cfab(arg1, arg2);
        
        if result != 0x86
        {
            return result;
        }
        
        let rbp_1: i8 = *arg2.byte_offset(0x28);
        result = uu_stty::print_control_chars::hed7af0204ba7e7a6(arg1, rbp_1);
        
        if result != 0x86
        {
            return result;
        }
        
        uu_stty::print_flags::h1fca9bc374a8d8a1(arg1, rbp_1);
        uu_stty::print_flags::hd79b05057be6f5de(arg1, rbp_1);
        uu_stty::print_flags::h9ad0f8fc257d533c(arg1, rbp_1);
        uu_stty::print_flags::h6b44033c083706a8(arg1, rbp_1);
    }
    else
    {
        uu_stty::print_in_save_format::he259ed46e6739654(arg1);
    }
    
    0x86
}
