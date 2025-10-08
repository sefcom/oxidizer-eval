
  char uu_realpath::canonicalize_relative::ha3a23c9727c26a2f(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4, char arg5)

{
    int64_t var_58;
    uucore::features::fs::canonicalize::h7cde29b0af4066d7(&var_58, arg2, arg3, arg4, arg5);
    int64_t r15 = var_58;
    char result = -(r15);
    char* var_50;
    
    if (-(r15) != -0x8000000000000000)
    {
        uint64_t var_48;
        
        if (arg4 == 1)
        {
            result = std::path::Path::is_dir::h02edbc48c38d7d9e(var_50, var_48);
            
            if (!result)
            {
                std::fs::read_dir::h45c5fe38c359e267(&var_58, var_50);
                char rax_1 = var_50;
                int64_t rcx = var_58;
                
                if (rax_1 == 2)
                {
                    arg1[1] = rcx;
                    *arg1 = -0x8000000000000000;
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb5b343c2ee7576a0(
                        r15, var_50);
                }
                
                int64_t var_40 = rcx;
                char var_38_1 = rax_1;
                result =
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hbf19dde921508ab7(&var_40);
            }
        }
        
        *arg1 = r15;
        arg1[1] = var_50;
        arg1[2] = var_48;
    }
    else
    {
        arg1[1] = var_50;
        *arg1 = -0x8000000000000000;
    }
    return result;
}
