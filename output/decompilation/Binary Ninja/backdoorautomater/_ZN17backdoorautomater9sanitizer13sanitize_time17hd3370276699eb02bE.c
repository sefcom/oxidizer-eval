
  int64_t backdoorautomater::sanitizer::sanitize_time::hd3370276699eb02b(int128_t* arg1, int128_t* arg2)

{
    char const (** const var_40)[0xc3];
    regex::regex::string::Regex::new::h6831ffd0596491b3(&var_40, 
        "[^0-9/]+Error!: /.bashrcpython3 …");
    void* var_60;
    core::result::Result$LT$T$C$E$GT$::unwrap::h6578ed1ee3bd5b33(&var_60, &var_40);
    void* var_58;
    
    if (!regex::regex::string::Regex::is_match_at::h541fe506ce15d7f3(var_60, var_58, *(arg2 + 8), 
        arg2[1]))
    {
        arg1[1] = arg2[1];
        *arg1 = *arg2;
        return core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5dc5ee83f4543ad0(
            &var_60);
    }
    
    var_40 = &data_62a5d0;
    int64_t var_38 = 1;
    int64_t var_30 = 8;
    int128_t var_28 = {0};
    core::panicking::panic_fmt::he7d3af46f65769b3();
    /* no return */
}
