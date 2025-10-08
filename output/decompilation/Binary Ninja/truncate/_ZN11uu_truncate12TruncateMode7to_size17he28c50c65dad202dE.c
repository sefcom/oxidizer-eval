
  int64_t uu_truncate::TruncateMode::to_size::he28c50c65dad202d(int64_t arg1, int64_t arg2, int64_t arg3)

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
            return core::cmp::Ord::min::h6d7091d5dcc61f46(arg3, arg2);
        }
        case 4:
        {
            /* tailcall */
            return core::cmp::Ord::max::hf5667597076a65ce(arg3, arg2);
        }
        case 5:
        {
            if (!arg2)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            int64_t rcx_4;
            uint64_t rdx_2;
            
            if (!((arg3 | arg2) >> 0x20))
            {
                rcx_4 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            else
            {
                rcx_4 = arg3;
                rdx_2 = COMBINE(0, arg3) % arg2;
            }
            
            return rcx_4 - rdx_2;
            break;
        }
        case 6:
        {
            if (!arg2)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            if (!((arg3 | arg2) >> 0x20))
                return COMBINE(0, arg3) % arg2 + arg3;
            
            return COMBINE(0, arg3) % arg2 + arg3;
            break;
        }
    }
}
