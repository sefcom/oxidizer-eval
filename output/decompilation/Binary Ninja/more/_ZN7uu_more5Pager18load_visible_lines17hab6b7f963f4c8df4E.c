
  uint64_t uu_more::Pager::load_visible_lines::hab6b7f963f4c8df4(void* arg1)

{
    int64_t* rdi = *(arg1 + 0x18);
    int64_t rsi = *(arg1 + 0x20);
    *(arg1 + 0x20) = 0;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u5d$$GT$::h6802b68d421aa63d(rdi, rsi);
    *(arg1 + 0x78) = 0;
    uint64_t result = uu_more::Pager::seek_to_line::h869c7595a8249d8f(arg1, *(arg1 + 0x50));
    
    if (!result)
    {
        int64_t var_50 = 0;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 0;
        
        if (!*(arg1 + 0x58))
        {
            label_47b8f8:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_50);
            return 0;
        }
        
        while (true)
        {
            int64_t var_40_2 = 0;
            char rax_2;
            int64_t rdx_1;
            rax_2 = (*(*(arg1 + 0x48) + 0x80))(*(arg1 + 0x40), &var_50);
            
            if (rax_2 & 1)
            {
                uint64_t result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_50);
                result = result_1;
                break;
            }
            
            if (!rdx_1)
                goto label_47b8f8;
            
            if (uu_more::Pager::should_squeeze_line::hcc3a424a86437f5a(arg1, var_48_1, var_40_2))
                *(arg1 + 0x78) += 1;
            else
            {
                int64_t var_28_1 = var_40_2;
                int128_t var_38 = var_50;
                var_50 = 0;
                var_48_1 = 1;
                int64_t var_40_3 = 0;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h4de2a5e1402a45f2(arg1 + 0x10, &var_38);
            }
            
            if (*(arg1 + 0x20) >= *(arg1 + 0x58))
                goto label_47b8f8;
        }
    }
    
    return result;
}
