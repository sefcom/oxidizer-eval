
  void* uu_more::Pager::page_up::hcd3674266d22c74e(void* arg1)

{
    uint64_t rcx_1 = *(arg1 + 0x40);
    void* result = *(arg1 + 0x18);
    int64_t rdx = -1;
    
    if (rcx_1 + *(arg1 + 0x38) >= rcx_1)
        rdx = rcx_1 + *(arg1 + 0x38);
    
    void* i = nullptr;
    
    if (result >= rdx)
        i = result - rdx;
    
    *(arg1 + 0x18) = i;
    
    if (*(arg1 + 0x43))
    {
        int64_t rsi_2 = *(arg1 + 8);
        int64_t rdi = *(arg1 + 0x10);
        int64_t var_40 = rsi_2;
        
        if (result > rdx)
        {
            void* i_1 = i;
            
            do
            {
                uint64_t rdx_2 = (rsi_2 + rdi * 0x18 - var_40) / 0x18;
                void* rdx_3 = rdx_2 - i;
                
                if (rdx_2 < i)
                    rdx_3 = nullptr;
                
                result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::nth_back::h9be320c1ff82071c(&var_40, rdx_3);
                
                if (!result)
                    break;
                
                if (*(result + 0x10))
                    break;
                
                void* i_2 = i_1;
                i_1 -= 1;
                
                if (i_2 < 1)
                    i_1 = nullptr;
                
                *(arg1 + 0x18) = i_1;
                i -= 1;
            } while (i);
        }
    }
    
    return result;
}
