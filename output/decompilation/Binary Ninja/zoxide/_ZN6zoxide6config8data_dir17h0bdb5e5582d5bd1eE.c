
  uint64_t zoxide::config::data_dir::h0bdb5e5582d5bd1e(int128_t* arg1)

{
    int64_t var_68;
    std::env::var_os::h745bce177e3d772b(&var_68, "_ZO_DATA_DIRcould not find data …");
    uint64_t result;
    int128_t var_88;
    uint64_t result_1;
    char const (** const var_50)[0xee];
    
    if (!(0 + -(var_68)))
    {
        uint64_t result_2;
        result_1 = result_2;
        var_88 = var_68;
        label_490a84:
        char* r14_2 = *var_88[8];
        
        if (!std::path::Path::is_absolute::hf2dacc49683e82ac(r14_2, result_1))
        {
            var_50 = &data_534980;
            int64_t var_48 = 1;
            int64_t var_40 = 8;
            int128_t var_38 = {0};
            *(arg1 + 8) = anyhow::__private::format_err::h09b344f6a077676a(&var_50);
            *arg1 = -0x8000000000000000;
            /* tailcall */
            return core::mem::drop::h8efcdb4578edbe7f(var_88, r14_2);
        }
        
        result = result_1;
        arg1[1] = result;
        *arg1 = var_88;
    }
    else
    {
        dirs::data_local_dir::hc7e2cb36d3971fab(&var_50);
        result = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::context::ha597f3a4a7295cfd(&var_88, &var_50);
        int64_t r15_1 = var_88;
        int64_t r14_1 = *var_88[8];
        
        if (r15_1 != -0x8000000000000000)
        {
            std::path::Path::join::hb0fbf4f9ac9d7e75(&var_88, r14_1, result_1, 
                "zoxide1invalid unicode in _ZO_EX…");
            core::mem::drop::h8efcdb4578edbe7f(r15_1, r14_1);
            goto label_490a84;
        }
        
        *(arg1 + 8) = r14_1;
        *arg1 = -0x8000000000000000;
    }
    return result;
}
