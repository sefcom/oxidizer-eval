
  int64_t uu_tac::try_mmap_path::h5a76dff90b159c96(int64_t* arg1, int64_t arg2)

{
    char var_48;
    std::fs::File::open::h54d8f508eb814270(&var_48, arg2);
    
    if (var_48 & 1)
    {
        int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h817b496011a5d2a4(&var_48);
        *arg1 = 0;
        return result;
    }
    
    int32_t fd_2;
    int32_t fd_1 = fd_2;
    int64_t var_38 = 0;
    var_48 = 0;
    char var_30 = 0;
    int16_t var_2e = 0;
    char var_28;
    memmap2::MmapOptions::map::h02fdac4a9f0686f4(&var_28, &var_48, &fd_1);
    int32_t fd;
    
    if (!(var_28 & 1))
    {
        int128_t var_20;
        *(arg1 + 8) = var_20;
        *arg1 = 1;
        fd = fd_2;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$memmap2..Mmap$C$std..io..error..Error$GT$$GT$::h6ab4ebf47749bb69(&var_28);
        *arg1 = 0;
        fd = fd_1;
    }
    
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h1d9f2810d658cc7a(fd);
}
