
  fn fd::cli::ensure_current_directory_exists::hea3f65f4cbc3c1ec() -> u64

{
    if fd::filesystem::is_existing_directory::h6c4a6eed8c6886fc(
        "./cannot parse integer from empt…", 2) != 0
    {
        return 0;
    }
    
    let mut var_30: *mut *mut [i8; 0x8e] = &data_802130;
    let var_28: i64 = 1;
    let var_20: i64 = 8;
    let var_18: i128 = {0};
    anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_30)
}
