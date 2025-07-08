
  fn uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(arg1: i64, arg2: i64, arg3: i64) -> i64

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
            core::cmp::min_by::h20fa0a6e707cb19a(arg3, arg2)
        }
        4 =>
        {
            /* tailcall */
            core::cmp::max_by::heb06031df86cdd19(arg3, arg2)
        }
        5 =>
        {
            if arg2 == 0
            {
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            let mut rcx_5: i64;
            let mut rdx_2: u64;
            
            if (arg3 | arg2) >> 0x20 == 0
            {
                rcx_5 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            else
            {
                rcx_5 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            
            rcx_5 - rdx_2
        }
        6 =>
        {
            if arg2 == 0
            {
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            let mut rcx_6: i64;
            let mut rsi: u64;
            
            if (arg3 | arg2) >> 0x20 == 0
            {
                rcx_6 = arg3;
                rsi = COMBINE(0, arg3) % arg2;
            }
            else
            {
                rcx_6 = arg3;
                rsi = COMBINE(0, arg3) % arg2;
            }
            
            rsi + rcx_6
        }
    }
}
