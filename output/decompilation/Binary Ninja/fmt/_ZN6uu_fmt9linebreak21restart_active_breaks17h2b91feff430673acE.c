
  int64_t* uu_fmt::linebreak::restart_active_breaks::h2b91feff430673ac(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, char arg5, int64_t arg6, int64_t* arg7, int64_t arg8, int64_t arg9)

{
    int64_t rbx = arg3;
    int64_t* result = arg7;
    int32_t zmm0 = 0xbf800000;
    char rbp;
    
    if (!arg5)
    {
        int64_t rdx = result[5];
        rbp = 0;
        
        if (arg8 + arg4
            + uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(arg2, result, arg4, 0)
            + rdx - *(arg2 + 0x30) <= arg9 - arg4)
        {
            result = arg7;
            zmm0 = 0xbf800000;
        }
        else
        {
            rbx += rdx;
            rbp = 1;
            zmm0 = 0x3f800000;
            result = arg7;
        }
    }
    else
        rbp = 0;
    
    *arg1 = arg6;
    arg1[1] = result;
    *(arg1 + 0x24) = rbp;
    arg1[2] = 0;
    arg1[4] = zmm0;
    arg1[3] = rbx;
    *(arg1 + 0x25) = rbp ^ 1;
    return result;
}
