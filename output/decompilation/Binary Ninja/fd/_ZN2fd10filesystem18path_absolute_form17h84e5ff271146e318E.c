
  int64_t fd::filesystem::path_absolute_form::h84e5ff271146e318(int128_t* arg1, char* arg2, uint64_t arg3)

{
    char* r14 = arg2;
    
    if (std::path::Path::is_absolute::hf2dacc49683e82ac(arg2, arg3))
        /* tailcall */
        return std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, r14, 
            arg3);
    
    char* rax_2;
    uint64_t rdx_2;
    rax_2 = std::path::Path::strip_prefix::hf2675ccd78c74225(r14, arg3);
    uint64_t r12 = rdx_2;
    int64_t var_60;
    std::env::current_dir::h2d02f56ea8ff76eb(&var_60);
    int64_t result;
    
    if (0 + -(var_60))
    {
        arg1[1] = result;
        *arg1 = var_60;
        return result;
    }
    
    if (rax_2)
        r14 = rax_2;
    
    if (!rax_2)
        r12 = arg3;
    
    int64_t result_1 = result;
    int128_t var_48 = var_60;
    return fd::filesystem::path_absolute_form::_$u7b$$u7b$closure$u7d$$u7d$::hf478e8e0fe4d09ca(
        arg1, r14, r12, &var_48);
}
