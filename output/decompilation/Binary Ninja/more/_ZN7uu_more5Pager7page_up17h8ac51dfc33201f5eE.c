
  uint64_t uu_more::Pager::page_up::h8ac51dfc33201f5e(void* arg1)

{
    void* rbx;
    void* var_30 = rbx;
    int64_t rcx = *(arg1 + 0x50);
    int64_t rax = *(arg1 + 0x58);
    uint64_t result = rax + *(arg1 + 0x78);
    uint64_t result_1 = -1;
    
    if (rax + *(arg1 + 0x78) >= rax)
        result_1 = result;
    
    int64_t r14_1 = rcx - result_1;
    
    if (rcx < result_1)
        r14_1 = 0;
    
    *(arg1 + 0x50) = r14_1;
    
    if (*(arg1 + 0x81) == 1)
    {
        int64_t var_48 = 0;
        int64_t var_40_1 = 1;
        int64_t var_38_1 = 0;
        uint64_t result_2;
        
        if (rcx <= result_1)
            result_2 = 0;
        else
        {
            int64_t r15_1 = *(arg1 + 0x40);
            int64_t rbp_1 = *(arg1 + 0x48);
            
            while (true)
            {
                uint64_t result_3;
                void* rdx_1;
                result_3 = uu_more::Pager::seek_to_line::h869c7595a8249d8f(arg1, r14_1);
                
                if (!result_3)
                {
                    uint64_t var_38_2 = 0;
                    
                    if (!((*(rbp_1 + 0x80))(r15_1, &var_48) & 1))
                    {
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h506ca15ca5b86ee2(var_40_1, var_38_2, "\nNext file: %--More--()'. Press…", 1))
                        {
                            int64_t temp3_1 = r14_1;
                            r14_1 -= 1;
                            *(arg1 + 0x50) = r14_1;
                            
                            if (temp3_1 != 1)
                                continue;
                        }
                        
                        result_2 = 0;
                        break;
                    }
                    
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                
                result_2 = result_3;
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_48);
        result = result_2;
    }
    
    return result;
}
