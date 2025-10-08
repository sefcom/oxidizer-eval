
  uint64_t alacritty_terminal::index::Line::grid_clamp::h7a533a4686eb6d93(int32_t arg1, int64_t arg2, int64_t arg3, char arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    int32_t rax_4;
    int32_t rdi_3;
    
    if (!arg4)
    {
        rax_4 = core::cmp::Ord::min::h08e004ced85b11eb(
            alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg3), arg1);
        rdi_3 = 0;
    }
    else
    {
        if (arg4 != 1)
        {
            int32_t rbx_1 = arg1 - arg3;
            int32_t rcx_1;
            
            if (arg1 >= arg3)
            {
                int32_t rax_10 =
                    alacritty_terminal::grid::Dimensions::topmost_line::hce2892a243265b85(arg2, 
                    arg3);
                
                if (!arg2)
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                    /* no return */
                }
                
                rcx_1 = rax_10;
                
                if (!((rbx_1 - 0x80000000) | ~arg2))
                {
                    core::panicking::panic_const::panic_const_rem_overflow::hb7d6dc691a8e6ad1();
                    /* no return */
                }
            }
            else
            {
                int32_t rax_7 =
                    alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg3);
                
                if (!arg2)
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                    /* no return */
                }
                
                rcx_1 = rax_7;
                rbx_1 += 1;
                
                if (!((rbx_1 - 0x80000000) | ~arg2))
                {
                    core::panicking::panic_const::panic_const_rem_overflow::hb7d6dc691a8e6ad1();
                    /* no return */
                }
            }
            
            return rbx_1 % arg2 + rcx_1;
        }
        
        int32_t rax_2 =
            alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg3);
        int32_t rax_3 =
            alacritty_terminal::grid::Dimensions::topmost_line::hce2892a243265b85(arg2, arg3);
        rax_4 = core::cmp::Ord::min::h08e004ced85b11eb(rax_2, arg1);
        rdi_3 = rax_3;
    }
    
    /* tailcall */
    return core::cmp::Ord::max::h3396bb7148673668(rdi_3, rax_4);
}
