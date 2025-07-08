
  int128_t* uu_rmdir::remove::ha1b8dea54bda3da3(int128_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int64_t var_48;
    uu_rmdir::remove_single::h7d254dd4570d65d7(&var_48, arg2, arg3, arg4);
    
    if (!var_48)
    {
        if (arg4 & 0x100)
        {
            char* rax_3;
            int64_t i_2;
            rax_3 = std::path::Path::parent::h65c9a340a6266f2d(arg2, arg3);
            
            if (rax_3)
            {
                int64_t i_1 = i_2;
                
                if (i_2)
                {
                    char* r14_1 = rax_3;
                    int64_t i;
                    
                    do
                    {
                        uu_rmdir::remove_single::h7d254dd4570d65d7(&var_48, r14_1, i_1, arg4);
                        
                        if (var_48)
                            goto label_4aa3bd;
                        
                        char* rax_4;
                        rax_4 = std::path::Path::parent::h65c9a340a6266f2d(r14_1, i_1);
                        
                        if (!rax_4)
                            break;
                        
                        r14_1 = rax_4;
                        i_1 = i;
                    } while (i);
                }
            }
        }
        
        *arg1 = 0;
    }
    else
    {
        label_4aa3bd:
        int64_t var_38;
        arg1[1] = var_38;
        *arg1 = var_48;
    }
    
    return arg1;
}
