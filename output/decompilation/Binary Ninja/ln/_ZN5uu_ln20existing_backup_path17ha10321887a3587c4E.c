
  int64_t uu_ln::existing_backup_path::ha10321887a3587c4(int128_t* arg1, char* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    void var_f8;
    uu_ln::simple_backup_path::hf92f6b12668c10c1(&var_f8, arg2, arg3, &data_4197f4[0x10], 4);
    int64_t var_f0;
    int64_t var_e0;
    std::fs::metadata::h3a5d957c4cc0d9ad(&var_e0, var_f0);
    int32_t rbp = var_e0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haadcf12438c9539e(&var_e0);
    
    if (rbp != 2)
        uu_ln::numbered_backup_path::h08a544ce38fbf5a5(arg1, arg2, arg3);
    else
        uu_ln::simple_backup_path::hf92f6b12668c10c1(arg1, arg2, arg3, arg4, arg5);
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_f8);
}
