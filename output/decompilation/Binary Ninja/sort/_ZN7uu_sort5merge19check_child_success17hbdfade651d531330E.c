
  uint64_t uu_sort::merge::check_child_success::hbdfade651d531330(int32_t* arg1, int64_t arg2, uint64_t arg3)

{
    int32_t var_58;
    std::process::Child::wait::h7e33de4911114104(&var_58, arg1);
    uint64_t result;
    int32_t var_70;
    int64_t var_50;
    
    if (var_58 != 1)
    {
        int32_t var_54;
        char temp0_1 = var_54 & 0x7f;
        int32_t rcx_1;
        rcx_1 = !temp0_1;
        int32_t var_6c_1 = rcx_1;
        uint32_t rax_3 = var_54 >> 8;
        uint32_t var_68_1 = rax_3;
        var_70 = 0;
        rax_3 = !rax_3;
        rax_3 |= temp0_1;
        
        if (rax_3)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h5f0fafecf499e947(&var_70);
            result = 0;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h5f0fafecf499e947(&var_70);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_70, arg2, arg3);
            int64_t var_60;
            int64_t var_40_1 = var_60;
            var_50 = var_70;
            var_58 = -0x7ffffffffffffffb;
            result = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_58);
        }
    }
    else
    {
        int32_t var_68;
        var_68 = var_50;
        var_70 = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h5f0fafecf499e947(&var_70);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..process..Child$GT$::hc47d8b8842bb4996(arg1);
    return result;
}
