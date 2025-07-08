
  int64_t uu_dd::stdout_canonicalized::h8616e33a4059f2ee(int128_t* arg1)

{
    int64_t var_38;
    std::fs::canonicalize::hc098601a0f17255d(&var_38, "/dev/stdout0.0.28Copy, and optio…");
    
    if (var_38 == -0x8000000000000000)
    {
        int128_t var_20;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_20, 
            "/dev/stdout0.0.28Copy, and optio…", 0xb);
        int64_t var_10;
        arg1[1] = var_10;
        *arg1 = var_20;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h6d990e1150a85915(&var_38);
    }
    
    int64_t result;
    arg1[1] = result;
    *arg1 = var_38;
    return result;
}
