
  int64_t uu_base32::base_common::fast_decode::alphabet_to_table::h35e8b72e3b4f91ee(int64_t arg1, void* arg2, int64_t arg3, int32_t arg4)

{
    int128_t* rsi;
    int128_t s;
    
    if (!arg4)
    {
        __builtin_memset(&s, 1, 0x100);
        int64_t var_130 = 0;
        int64_t var_128_1 = 2;
        int16_t var_120_1 = 0xd0a;
        char rax_2;
        char rdx;
        rax_2 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h722d476f1ff7331c(&var_130);
        
        if (rax_2 & 1)
        {
            char rax_4;
            
            do
            {
                uint64_t rax_3 = rdx;
                
                if (!*(&s + rax_3))
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: table[us]asser…");
                    /* no return */
                }
                
                *(&s + rax_3) = 0;
                rax_4 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h722d476f1ff7331c(&var_130);
            } while (rax_4 & 1);
        }
        
        rsi = &s;
    }
    else
    {
        __builtin_memset(&s, 0, 0x100);
        
        if (arg3)
        {
            int64_t rax_1 = 0;
            
            do
            {
                uint64_t rcx = *(arg2 + rax_1);
                
                if (*(&s + rcx))
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: !table[us]asse…");
                    /* no return */
                }
                
                *(&s + rcx) = 1;
                rax_1 += 1;
            } while (arg3 != rax_1);
        }
        
        rsi = &s;
    }
    return memcpy(arg1, rsi, 0x100);
}
