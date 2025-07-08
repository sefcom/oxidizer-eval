
  int64_t uu_tail::paths::path_is_tailable::h49529ca9961beb32(char* arg1, uint64_t arg2)

{
    if (std::path::Path::is_file::h82f08f46fb8d8099(arg1, arg2))
        return 1;
    
    int64_t var_c8;
    std::fs::metadata::h5a76b0b01e9dc15d(&var_c8, arg1);
    int64_t rdi_1 = var_c8;
    int64_t var_c0;
    
    if (rdi_1 == 2)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(2, var_c0);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(rdi_1, var_c0);
    std::fs::metadata::h5a76b0b01e9dc15d(&var_c8, arg1);
    return core::result::Result$LT$T$C$E$GT$::map_or::hd585a8198f0cbe88(&var_c8);
}
