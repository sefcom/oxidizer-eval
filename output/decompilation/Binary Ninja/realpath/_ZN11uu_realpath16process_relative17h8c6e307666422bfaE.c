
  int128_t* uu_realpath::process_relative::h8c6e307666422bfa(int128_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int128_t var_48;
    
    if (arg3)
    {
        if (std::path::Path::starts_with::heff55995860ce76c(*(arg2 + 8), arg2[1], arg3))
        {
            int64_t var_38_1 = arg2[1];
            var_48 = *arg2;
            int64_t rdx = arg3;
            
            if (arg5)
                rdx = arg5;
            
            return uucore::features::fs::make_path_relative_to::h09a4623272c797bd(arg1, &var_48, 
                rdx);
        }
    }
    else if (arg5)
    {
        int64_t var_38_2 = arg2[1];
        var_48 = *arg2;
        return uucore::features::fs::make_path_relative_to::h09a4623272c797bd(arg1, &var_48, arg5);
    }
    int128_t* result = arg2[1];
    arg1[1] = result;
    *arg1 = *arg2;
    return result;
}
