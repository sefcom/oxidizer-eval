
  int64_t fd::fmt::input::remove_extension::hfdc34e319ac0822a(int128_t* arg1, int16_t* arg2, uint64_t arg3)

{
    int16_t* r14 = arg2;
    int64_t var_68;
    fd::fmt::input::dirname::h900660a28c19a669(&var_68, arg2, arg3);
    int16_t* rax;
    int64_t rdx;
    rax = std::path::Path::file_stem::hc69c2d2c61933548(r14, arg3);
    
    if (rax)
        r14 = rax;
    
    int64_t r12 = var_68;
    int64_t var_60;
    uint64_t var_58;
    int64_t var_50;
    std::path::Path::join::h1476eb6a0e8f28c9(&var_50, var_60, var_58, r14);
    core::mem::drop::h3eb21fab0c0d11e6(r12, var_60);
    int64_t var_48;
    int64_t var_40;
    int64_t rax_1;
    uint64_t rdx_2;
    rax_1 = fd::filesystem::strip_current_dir::hccbc9a783f2543e7(var_48, var_40);
    int128_t var_38;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_38, rax_1, rdx_2);
    int64_t var_28;
    arg1[1] = var_28;
    *arg1 = var_38;
    /* tailcall */
    return core::mem::drop::h3eb21fab0c0d11e6(var_50, var_48);
}
