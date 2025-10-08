
  int64_t* uu_uniq::filter_args::h5c7e6444ca32d395(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4, char* arg5, char* arg6)

{
    char* rsi = arg2[1];
    int64_t r12 = arg2[2];
    int32_t var_70;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_70, rsi, r12);
    
    if (var_70 != 1)
    {
        char r13_1 = *arg5;
        char rbx_1 = *arg6;
        char* var_68;
        uint64_t var_60;
        char* var_58_1;
        uint64_t rbx_2;
        int64_t r13_2;
        
        if (!uu_uniq::should_extract_obs_skip_fields::hfd0c6e5f233e6bba(var_68, var_60, r13_1, 
            rbx_1))
        {
            if (uu_uniq::should_extract_obs_skip_chars::haefcf42314616054(var_68, var_60, r13_1, 
                rbx_1))
            {
                uu_uniq::handle_extract_obs_skip_chars::h23083a2c797a520a(&var_70, var_68, var_60, 
                    arg4);
                goto label_466dcf;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_70, var_68, var_60);
            r13_2 = var_70;
            var_58_1 = var_68;
            rbx_2 = var_60;
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(var_68, 
                var_60, "-f-s---w--group is mutually excl…", 2))
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg3);
                *arg3 = -0x8000000000000000;
            }
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(var_68, 
                var_60, "-s---w--group is mutually exclus…", 2))
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
                *arg4 = -0x8000000000000000;
            }
        }
        else
        {
            uu_uniq::handle_extract_obs_skip_fields::h14d32fa87c099e4f(&var_70, var_68, var_60, 
                arg3);
            label_466dcf:
            r13_2 = var_70;
            var_58_1 = var_68;
            rbx_2 = var_60;
        }
        
        uu_uniq::handle_preceding_options::hdc22a5259b3d167d(var_68, var_60, arg5, arg6);
        *arg1 = r13_2;
        arg1[1] = var_58_1;
        arg1[2] = rbx_2;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9abea3300b327e16(*arg2, rsi);
    }
    else
    {
        *arg1 = *arg2;
        arg1[1] = rsi;
        arg1[2] = r12;
    }
    
    return arg1;
}
