
  int64_t alacritty::display::content::Hint::advance::h8bcb95d1876cc7ab(void* arg1, int32_t arg2, int32_t arg3, int64_t arg4, int32_t arg5)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t result = 0x110001;
    
    if (alacritty::display::content::HintMatches::advance::hba48573630649a2f(arg1, arg4, arg5))
    {
        int64_t r15_1 = *(arg1 + 0x18);
        
        if (r15_1 < *(arg1 + 0x10))
        {
            int64_t rax_2 = *(arg1 + 8);
            int64_t rcx_1 = r15_1 * 5;
            int32_t rax_3;
            int32_t rdx_2;
            rax_3 = core::cmp::Ord::max::h1677403b4a7cf7f9(*(rax_2 + (rcx_1 << 3)), 
                *(rax_2 + (rcx_1 << 3) + 8), arg2);
            int32_t rbx_2 = arg3 * (arg5 - rdx_2) + arg4 - rax_3;
            uint64_t rcx_2 = 0;
            
            if (rbx_2 > 0)
                rcx_2 = rbx_2;
            
            void* rax_4 = *(arg1 + 0x20);
            int64_t rsi_2 = *(rax_4 + 0x10);
            
            if (r15_1 >= rsi_2)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1, rsi_2);
                /* no return */
            }
            
            int64_t rdx_3 = *(rax_4 + 8);
            int64_t rsi_3 = r15_1 * 3;
            result = 0x110000;
            
            if (*(rdx_3 + (rsi_3 << 3) + 0x10) > rcx_2)
                result = *(*(rdx_3 + (rsi_3 << 3) + 8) + (rcx_2 << 2));
            
            rcx_2 = rbx_2 <= 0;
            rdx_3 = result != 0x110000;
            rdx_3 &= rcx_2;
        }
    }
    
    return result;
}
