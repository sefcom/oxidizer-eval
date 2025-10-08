
  int64_t uu_realpath::process_relative::he019ee2f680b65b0(int128_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t rax;
    int64_t var_38 = rax;
    
    if (arg3)
    {
        if (std::path::Path::starts_with::h5d2b2bc7a5c06590(arg2[1], arg2[2], arg3))
        {
            int64_t rdx = arg3;
            
            if (arg5)
                rdx = arg5;
            
            /* tailcall */
            return uucore::features::fs::make_path_relative_to::h06a9f1b021e83a4d(arg1, arg2, rdx);
        }
    }
    else if (arg5)
        /* tailcall */
        return uucore::features::fs::make_path_relative_to::h06a9f1b021e83a4d(arg1, arg2, arg5);
    
    int64_t result = arg2[2];
    arg1[1] = result;
    *arg1 = *arg2;
    return result;
}
