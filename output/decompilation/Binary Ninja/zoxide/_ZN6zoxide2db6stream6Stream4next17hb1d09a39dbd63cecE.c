
  int64_t zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(void* arg1)

{
    int64_t rbx = *(arg1 + 0x70);
    
    if (*(arg1 + 0x68) >= rbx)
        return 0;
    
    int64_t rsi_2;
    
    while (true)
    {
        *(arg1 + 0x70) = rbx - 1;
        void* rax_1 = *(arg1 + 0x60);
        rsi_2 = *(rax_1 + 0x10);
        
        if (rbx - 1 >= rsi_2)
            break;
        
        int64_t r13_1 = *(rax_1 + 8);
        int64_t r12_1 = (rbx - 1) * 5;
        *(r13_1 + (r12_1 << 3) + 0x10);
        char rax_2;
        uint32_t zmm0[0x4];
        char zmm1[0x10];
        uint128_t zmm2;
        rax_2 = zoxide::db::stream::Stream::filter_by_keywords::hfa6dd4ec6611dd54(*(arg1 + 8), 
            *(arg1 + 0x10), *(r13_1 + (r12_1 << 3) + 8), zmm0, zmm1, zmm2);
        
        if (rax_2)
        {
            void* r13_2 = r13_1 + (r12_1 << 3);
            char rax_3;
            rax_3 = zoxide::db::stream::Stream::filter_by_base_dir::h40436340d7146c85(arg1, 
                *(r13_2 + 8), *(r13_2 + 0x10));
            
            if (rax_3)
            {
                if (!zoxide::db::stream::Stream::filter_by_exclude::h56276cfa98379766(
                        *(arg1 + 0x20), *(arg1 + 0x28), *(r13_2 + 8), *(r13_2 + 0x10)))
                    zmm0 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(*(arg1 + 0x60), rbx - 1);
                else
                {
                    char rax_5;
                    rax_5 = zoxide::db::stream::Stream::filter_by_exists::h7f6b4e7bfdd84ce2(
                        *(arg1 + 0x58), *(arg1 + 0x59), *(r13_2 + 8), *(r13_2 + 0x10));
                    
                    if (rax_5)
                    {
                        void* rax_8 = *(arg1 + 0x60);
                        int64_t rsi_7 = *(rax_8 + 0x10);
                        
                        if (rbx - 1 < rsi_7)
                            return (r12_1 << 3) + *(rax_8 + 8);
                        
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx - 1, rsi_7);
                        /* no return */
                    }
                    
                    if (*(r13_2 + 0x20) < *(arg1 + 0x50))
                        zmm0 = zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(*(arg1 + 0x60), rbx - 1);
                }
            }
        }
        
        rbx = *(arg1 + 0x70);
        
        if (*(arg1 + 0x68) >= rbx)
            return 0;
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx - 1, rsi_2);
    /* no return */
}
