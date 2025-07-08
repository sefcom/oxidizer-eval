
  int64_t* uu_tac::try_mmap_stdin::hfe59da374b4e6932(int64_t* arg1)

{
    std::io::stdio::stdin::h7215cc131abb55d8();
    void* var_48 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
    int64_t var_18 = 0;
    int64_t var_28 = 0;
    char var_10 = 0;
    int16_t var_e = 0;
    int64_t var_40;
    int64_t* result = memmap2::MmapOptions::map::h3d047a9fe9b50b2b(&var_40, &var_28, &var_48);
    
    if (var_40)
    {
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h33f78c51d3eed1e5(&var_40);
    }
    
    int128_t var_38;
    *(arg1 + 8) = var_38;
    *arg1 = 1;
    return result;
}
