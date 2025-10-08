
  int64_t rg::search::SearchWorkerBuilder::preprocessor::hf9be5d148c0e1917(uint64_t arg1, int64_t* arg2)

{
    int64_t result;
    
    if (!(0 + -(*arg2)))
    {
        int32_t var_58;
        grep_cli::decompress::resolve_binary::hb1dd1d929f9d5ea1(&var_58, arg2);
        int128_t var_50;
        int128_t var_38_1 = var_50;
        int64_t var_40;
        
        if (var_58 != 1)
        {
            *var_50[8] = var_40;
            var_58 = var_38_1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8f23796f433813df(arg1 + 0x68);
            *(arg1 + 0x78) = *var_50[8];
            *(arg1 + 0x68) = var_58;
            result = 0;
        }
        else
        {
            *var_50[8] = var_40;
            var_58 = var_38_1;
            anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h7d776c7685489c7a(&var_58);
            result = 1;
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8f23796f433813df(arg1 + 0x68);
        *(arg1 + 0x68) = -0x8000000000000000;
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8f23796f433813df(arg2);
    return result;
}
