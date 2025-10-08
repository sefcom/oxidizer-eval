
  fn alacritty_terminal::index::Line::grid_clamp::h7a533a4686eb6d93(arg1: i32, arg2: i64, arg3: i64, arg4: i8) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rax_4: i32;
    let mut rdi_3: i32;
    
    if arg4 == 0
    {
        rax_4 = core::cmp::Ord::min::h08e004ced85b11eb(
            alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg3), arg1);
        rdi_3 = 0;
    }
    else
    {
        if arg4 != 1
        {
            let mut rbx_1: i32 = arg1 - arg3;
            let mut rcx_1: i32;
            
            if arg1 >= arg3
            {
                let rax_10: i32 =
                    alacritty_terminal::grid::Dimensions::topmost_line::hce2892a243265b85(arg2, 
                    arg3);
                
                if arg2 == 0
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                    /* no return */
                }
                
                rcx_1 = rax_10;
                
                if ((rbx_1 - 0x80000000) | !arg2) == 0
                {
                    core::panicking::panic_const::panic_const_rem_overflow::hb7d6dc691a8e6ad1();
                    /* no return */
                }
            }
            else
            {
                let rax_7: i32 =
                    alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg3);
                
                if arg2 == 0
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                    /* no return */
                }
                
                rcx_1 = rax_7;
                rbx_1 += 1;
                
                if ((rbx_1 - 0x80000000) | !arg2) == 0
                {
                    core::panicking::panic_const::panic_const_rem_overflow::hb7d6dc691a8e6ad1();
                    /* no return */
                }
            }
            
            return rbx_1 % arg2 + rcx_1;
        }
        
        let rax_2: i32 =
            alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg3);
        let rax_3: i32 =
            alacritty_terminal::grid::Dimensions::topmost_line::hce2892a243265b85(arg2, arg3);
        rax_4 = core::cmp::Ord::min::h08e004ced85b11eb(rax_2, arg1);
        rdi_3 = rax_3;
    }
    
    /* tailcall */
    core::cmp::Ord::max::h3396bb7148673668(rdi_3, rax_4)
}
