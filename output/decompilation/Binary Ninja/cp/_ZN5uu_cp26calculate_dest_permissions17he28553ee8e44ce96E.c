
  int64_t uu_cp::calculate_dest_permissions::he28553ee8e44ce96(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4, char arg5, char arg6, int64_t arg7, int64_t arg8)

{
    int32_t var_e0;
    std::fs::metadata::h003d8cdbffde7c56(&var_e0, arg2);
    int32_t r14 = var_e0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_e0);
    int32_t result;
    
    if (r14 != 2)
    {
        std::fs::symlink_metadata::h8589e79b0a107dee(&var_e0, arg2);
        
        if (var_e0 == 2)
        {
            var_e0 = arg7;
            int64_t var_d8_1 = arg8;
            int64_t var_d8;
            int64_t var_d0_1 = var_d8;
            return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(arg1, &var_e0);
        }
        
        int32_t result_1;
        result = result_1;
    }
    else
    {
        int32_t rax = uu_cp::handle_no_preserve_mode::h5c03b58fbdc698a0(arg5, arg6, arg4);
        result = ~uucore::features::mode::get_umask::hd2aa58752ad993fa() & rax;
    }
    
    arg1[1] = result;
    *arg1 = 0xd;
    return result;
}
