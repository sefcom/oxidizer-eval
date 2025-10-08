
  uint64_t* uu_cp::copy_helper::hc581f8ab4f6e163d(int64_t* arg1, int64_t arg2, uint64_t arg3, char* arg4, uint64_t arg5, void* arg6, uint64_t arg7, int64_t arg8, char arg9, char arg10, char** arg11, char arg12)

{
    int64_t r13 = -0x7ffffffffffffff4;
    uint64_t* result;
    
    if (*(arg6 + 0x5c))
    {
        char* rax_1;
        uint64_t rdx;
        rax_1 = std::path::Path::parent::hef287f60afa56900(arg4, arg5);
        
        if (!rax_1)
            rax_1 = arg4;
        
        result = std::fs::create_dir_all::h55eae5e2d660073f(rax_1);
    }
    
    if (*(arg6 + 0x5c) && result)
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = result;
    }
    else if (!arg5)
    {
        label_4a50eb:
        uint64_t* result_1;
        
        if (arg10 && *(arg6 + 0x5e) == 1 && !*(arg6 + 0x57))
        {
            result = uu_cp::copy_fifo::he922d06a7cbac9e7(&result_1, arg4, arg5, *(arg6 + 0x54), 
                *(arg6 + 0x5f));
            
            if (result_1 != -0x7ffffffffffffff4)
                goto label_4a5233;
            
            *arg1 = r13;
        }
        else
        {
            int128_t var_5d;
            int128_t var_4d;
            
            if (!arg9)
            {
                uu_cp::platform::linux::copy_on_write::h34431c68bfa64cd2(&result_1, arg2, arg3, 
                    arg4, arg5, *(arg6 + 0x64), *(arg6 + 0x63), arg7, arg8, arg10, arg12);
                result = result_1;
                int16_t var_60;
                char result_2;
                
                if (result != -0x7ffffffffffffff4)
                {
                    *(arg1 + 0x28) = var_4d;
                    *(arg1 + 0x1b) = var_4d;
                    *(arg1 + 0xb) = var_5d;
                    *(arg1 + 0xa) = result_2;
                    arg1[1] = var_60;
                    *arg1 = result;
                }
                else
                {
                    int16_t var_74 = var_60;
                    result = result_2;
                    char var_72_1 = result;
                    
                    if (!*(arg6 + 0x56) && *(arg6 + 0x5f))
                        result = uu_cp::show_debug::h47a442e1933f80ee(&var_74);
                    
                    *arg1 = r13;
                }
            }
            else
            {
                result =
                    uu_cp::copy_link::h25042d5280b1628e(&result_1, arg2, arg3, arg4, arg5, arg11);
                
                if (result_1 == -0x7ffffffffffffff4)
                    *arg1 = r13;
                else
                {
                    label_4a5233:
                    uint64_t* result_3;
                    result = result_3;
                    arg1[6] = result;
                    int128_t zmm0_1 = result_1;
                    *(arg1 + 0x20) = var_4d;
                    *(arg1 + 0x10) = var_5d;
                    *arg1 = zmm0_1;
                }
            }
        }
    }
    else
    {
        uint32_t rax_2 = arg4[arg5 - 1];
        
        if (rax_2 != 0x2f && rax_2 != 0x5c)
            goto label_4a50eb;
        
        if (std::path::Path::is_dir::h02edbc48c38d7d9e(arg4, arg5))
            goto label_4a50eb;
        
        result = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&arg1[1], 
            arg4, arg5);
        *arg1 = -0x7ffffffffffffff5;
    }
    
    return result;
}
