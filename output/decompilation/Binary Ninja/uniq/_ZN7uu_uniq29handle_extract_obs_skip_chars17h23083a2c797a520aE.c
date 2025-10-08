
  int64_t uu_uniq::handle_extract_obs_skip_chars::h23083a2c797a520a(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t var_88 = 0;
    int64_t var_80 = 4;
    int64_t var_78 = 0;
    int64_t var_58 = arg2;
    int64_t var_50 = arg2 + arg3;
    core::str::validations::next_code_point::h563de53b3cb3d652(&var_58, rbx);
    int128_t var_48 = var_58;
    
    while (true)
    {
        char rax_1;
        int32_t rdx;
        rax_1 = core::str::validations::next_code_point::h563de53b3cb3d652(&var_48, &var_88);
        int128_t var_70;
        int64_t var_60;
        
        if (!(rax_1 & 1))
        {
            int64_t r15_1;
            
            if (!var_78)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_70, arg2, arg3);
                arg1[1] = var_60;
                *arg1 = var_70;
                r15_1 = var_80;
            }
            else
            {
                r15_1 = var_80;
                core::iter::traits::iterator::Iterator::collect::h3b15c762db729d48(&var_70, r15_1);
                var_48 = var_70;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
                arg4[2] = var_60;
                *arg4 = var_48;
                *arg1 = -0x8000000000000000;
            }
            
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(
                var_88, r15_1);
        }
        
        if (rdx - 0x30 >= 0xa)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h95e753fd9f550503(arg4);
            *arg4 = -0x8000000000000000;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_70, arg2, arg3);
            arg1[1] = var_60;
            *arg1 = var_70;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h341dc4a29c957248(
                var_88, var_80);
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h71471e6e1bce8529(&var_88, rdx);
    }
}
