
  int64_t uu_tac::try_mmap_path::h01ee297263e394e5(int64_t* arg1)

{
    int32_t var_48;
    int64_t rsi;
    std::fs::File::open::h0ae14c8dddef61f7(&var_48, rsi);
    
    if (var_48)
    {
        int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hb56a7153beea00aa(&var_48);
        *arg1 = 0;
        return result;
    }
    
    int32_t fd_2;
    int32_t fd_1 = fd_2;
    int64_t var_38_1 = 0;
    var_48 = 0;
    char var_30_1 = 0;
    int16_t var_2e_1 = 0;
    int64_t var_28;
    memmap2::MmapOptions::map::hf6d33351edcc2203(&var_28, &var_48, &fd_1);
    int32_t fd;
    
    if (!var_28)
    {
        int128_t var_20;
        *(arg1 + 8) = var_20;
        *arg1 = 1;
        fd = fd_2;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h33f78c51d3eed1e5(&var_28);
        *arg1 = 0;
        fd = fd_1;
    }
    
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h8bacf0b914d62b8a(fd);
}
