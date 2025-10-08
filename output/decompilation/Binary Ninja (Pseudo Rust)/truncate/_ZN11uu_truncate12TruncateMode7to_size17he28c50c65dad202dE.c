
  fn uu_truncate::TruncateMode::to_size::he28c50c65dad202d(arg1: i64, arg2: i64, arg3: i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    match arg1
    {
        0 =>
        {
            arg2
        }
        1 =>
        {
            arg2 + arg3
        }
        2 =>
        {
            if arg3 >= arg2
            {
                return arg3 - arg2;
            }
            
            0
        }
        3 =>
        {
            /* tailcall */
            core::cmp::Ord::min::h6d7091d5dcc61f46(arg3, arg2)
        }
        4 =>
        {
            /* tailcall */
            core::cmp::Ord::max::hf5667597076a65ce(arg3, arg2)
        }
        5 =>
        {
            if arg2 == 0
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            let mut rcx_4: i64;
            let mut rdx_2: u64;
            
            if (arg3 | arg2) >> 0x20 == 0
            {
                rcx_4 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            else
            {
                rcx_4 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            
            rcx_4 - rdx_2
        }
        6 =>
        {
            if arg2 == 0
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            if (arg3 | arg2) >> 0x20 == 0
            {
                return COMBINE(0, arg3) % arg2 + arg3;
            }
            
            COMBINE(0, arg3) % arg2 + arg3
        }
    }
}
