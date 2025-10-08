
  int128_t* uu_rmdir::remove::h30d38ff9a4c5e87a(int128_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int64_t var_48;
    uu_rmdir::remove_single::h47fda4712a97f9b5(&var_48, arg2, arg3, arg4);
    
    if (!var_48)
    {
        if (arg4 & 0x100)
        {
            char* rax_2;
            int64_t i_2;
            rax_2 = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
            char* r14_1 = rax_2;
            rax_2 = !rax_2;
            
            if (!(!i_2 | rax_2))
            {
                int64_t i_1 = i_2;
                int64_t i;
                
                do
                {
                    uu_rmdir::remove_single::h47fda4712a97f9b5(&var_48, r14_1, i_1, arg4);
                    
                    if (var_48)
                        goto label_454e3d;
                    
                    char* rax_4;
                    rax_4 = std::path::Path::parent::hef287f60afa56900(r14_1, i_1);
                    
                    if (!rax_4)
                        break;
                    
                    r14_1 = rax_4;
                    i_1 = i;
                } while (i);
            }
        }
        
        *arg1 = 0;
    }
    else
    {
        label_454e3d:
        int64_t var_38;
        arg1[1] = var_38;
        *arg1 = var_48;
    }
    
    return arg1;
}
