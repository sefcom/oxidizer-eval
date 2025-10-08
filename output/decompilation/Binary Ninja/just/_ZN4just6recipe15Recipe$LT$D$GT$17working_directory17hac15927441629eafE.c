
  uint64_t just::recipe::Recipe$LT$D$GT$::working_directory::hac15927441629eaf(int64_t* arg1, void* arg2, void* arg3, void* arg4)

{
    uint64_t result =
        just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg2 + 0xd8, 9);
    
    if (!result)
    {
        int128_t var_a0;
        just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_a0, 
            arg3, arg4);
        int64_t rax = *(arg2 + 0xd8);
        int64_t rcx = *(arg2 + 0xe0);
        int64_t rsi_1 = rax;
        int64_t rdx_1;
        rdx_1 = rax;
        
        if (rax)
            rsi_1 = *(arg2 + 0xe8);
        
        int64_t var_88 = rdx_1;
        int64_t var_80_1 = 0;
        int64_t var_78_1 = rax;
        int64_t var_70_1 = rcx;
        int64_t var_68_1 = rdx_1;
        int64_t var_60_1 = 0;
        int64_t var_58_1 = rax;
        int64_t var_50_1 = rcx;
        int64_t var_48_1 = rsi_1;
        
        while (true)
        {
            int64_t* rax_1 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_88);
            uint64_t result_1;
            
            if (!rax_1)
            {
                result = result_1;
                arg1[2] = result;
                *arg1 = var_a0;
                break;
            }
            
            if (*rax_1 == -0x7fffffffffffffec)
            {
                int128_t var_40;
                std::path::Path::join::h509d33a3bbf89c2c(&var_40, *var_a0[8], result_1, &rax_1[1]);
                int64_t var_30;
                arg1[2] = var_30;
                *arg1 = var_40;
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                    &var_a0);
            }
        }
    }
    else
        *arg1 = -0x8000000000000000;
    
    return result;
}
