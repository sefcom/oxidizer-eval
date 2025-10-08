
  uint64_t* just::search::Search::working_directory_from_justfile::hd51585d6fd438247(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t r12 = -0x7ffffffffffffffd;
    char* rax;
    uint64_t rdx;
    rax = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    uint64_t* result;
    
    if (!rax)
    {
        uint64_t* result_1;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&result_1, arg2, 
            arg3);
        result = result_1;
        arg1[1] = result;
        int128_t var_30;
        *(arg1 + 0x10) = var_30;
    }
    else
    {
        result = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&arg1[1], 
            rax, rdx);
        r12 = -0x7ffffffffffffffa;
    }
    
    *arg1 = r12;
    return result;
}
