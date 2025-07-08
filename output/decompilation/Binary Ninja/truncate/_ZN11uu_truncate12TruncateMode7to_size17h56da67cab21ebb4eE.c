
  int64_t uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    switch (arg1)
    {
        case 0:
        {
            return arg2;
            break;
        }
        case 1:
        {
            return arg2 + arg3;
            break;
        }
        case 2:
        {
            if (arg3 >= arg2)
                return arg3 - arg2;
            
            return 0;
            break;
        }
        case 3:
        {
            /* tailcall */
            return core::cmp::min_by::h20fa0a6e707cb19a(arg3, arg2);
        }
        case 4:
        {
            /* tailcall */
            return core::cmp::max_by::heb06031df86cdd19(arg3, arg2);
        }
        case 5:
        {
            if (!arg2)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            int64_t rcx_5;
            uint64_t rdx_2;
            
            if (!((arg3 | arg2) >> 0x20))
            {
                rcx_5 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            else
            {
                rcx_5 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            
            return rcx_5 - rdx_2;
            break;
        }
        case 6:
        {
            if (!arg2)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            int64_t rcx_6;
            uint64_t rsi;
            
            if (!((arg3 | arg2) >> 0x20))
            {
                rcx_6 = arg3;
                rsi = COMBINE(0, arg3) % arg2;
            }
            else
            {
                rcx_6 = arg3;
                rsi = COMBINE(0, arg3) % arg2;
            }
            
            return rsi + rcx_6;
            break;
        }
    }
}
