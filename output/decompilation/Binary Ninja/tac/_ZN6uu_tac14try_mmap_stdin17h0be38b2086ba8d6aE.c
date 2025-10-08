
  int64_t* uu_tac::try_mmap_stdin::h0be38b2086ba8d6a(int64_t* arg1)

{
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    void* var_48 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    int64_t var_18 = 0;
    int64_t var_28 = 0;
    char var_10 = 0;
    int16_t var_e = 0;
    char var_40;
    int64_t* result = memmap2::MmapOptions::map::h350451b78dea6693(&var_40, &var_28);
    
    if (var_40 & 1)
    {
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h6ab4ebf47749bb69(&var_40);
    }
    
    int128_t var_38;
    *(arg1 + 8) = var_38;
    *arg1 = 1;
    return result;
}
