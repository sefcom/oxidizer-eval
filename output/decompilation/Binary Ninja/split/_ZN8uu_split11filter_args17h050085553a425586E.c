
  int64_t* uu_split::filter_args::h050085553a425586(int64_t* arg1, int64_t* arg2, int128_t* arg3, char* arg4, char* arg5)

{
    char* rbx = arg2[1];
    int64_t r12 = arg2[2];
    int32_t var_50;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_50, rbx, r12);
    
    if (var_50 != 1)
    {
        char* var_48;
        uint64_t var_40;
        
        if (!uu_split::should_extract_obs_lines::hb752b49cf9c3d508(var_48, var_40, *arg4, *arg5))
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_50, var_48, var_40);
        else
            uu_split::handle_extract_obs_lines::h29d50544fed6fa56(&var_50, var_48, var_40, arg3);
        
        int64_t rax_3 = var_50;
        uu_split::handle_preceding_options::hd141d9afeb690cc2(var_48, var_40, arg4, arg5);
        *arg1 = rax_3;
        arg1[1] = var_48;
        arg1[2] = var_40;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h81504cba959ecfd9(*arg2, rbx);
    }
    else
    {
        *arg1 = *arg2;
        arg1[1] = rbx;
        arg1[2] = r12;
    }
    
    return arg1;
}
