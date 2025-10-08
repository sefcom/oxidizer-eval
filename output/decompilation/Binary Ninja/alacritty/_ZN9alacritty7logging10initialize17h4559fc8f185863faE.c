
  int64_t alacritty::logging::initialize::h4559fc8f185863fa(int64_t* arg1, void* arg2, int128_t* arg3)

{
    char rcx = *(arg2 + 0x1e3);
    uint32_t rdx = *(arg2 + 0x1e4);
    int64_t rsi = 3;
    int64_t rax_1;
    bool cond:0_1;
    
    if (!rdx)
    {
        if (!*(arg2 + 0x1e0))
        {
            rax_1 = rcx == 1;
            cond:0_1 = rcx;
            rsi = 2;
            label_85cf54:
            
            if (cond:0_1)
                rsi = rax_1;
        }
    }
    else if (rdx != 1)
    {
        if (rdx != 2)
        {
            rax_1 = rcx == 1;
            cond:0_1 = rcx;
            rsi = 5;
            goto label_85cf54;
        }
        
        rsi = 4;
    }
    core::sync::atomic::atomic_store::h01a750bd23f9b0c6(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, rsi);
    int128_t var_168 = arg3[1];
    int128_t var_178 = *arg3;
    void var_c0;
    alacritty::logging::Logger::new::h12092a1bc3938b41(&var_c0, &var_178);
    int128_t var_190;
    alacritty::logging::Logger::file_path::he8b6db1c93e0851d(&var_190, &var_c0);
    memcpy(&var_178, &var_c0, 0xb0);
    
    if (log::set_boxed_logger::h2b195a68dd82a5ea(
        alloc::boxed::Box$LT$T$GT$::new::h7463630cd21e0489(&var_178), &data_c83030))
    {
        *arg1 = -0x7fffffffffffffff;
        return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&var_190);
    }
    
    int64_t result;
    arg1[2] = result;
    *arg1 = var_190;
    return result;
}
