
  uint64_t uu_sort::merge::check_child_success::h7aa5fa471a5255f8(int32_t* arg1, int64_t arg2, uint64_t arg3)

{
    int32_t var_58;
    std::process::Child::wait::h4ce2f205e1183efb(&var_58, arg1);
    uint64_t result;
    int32_t var_70;
    int64_t var_50;
    
    if (!var_58)
    {
        int16_t var_54;
        char temp0_1 = var_54 & 0x7f;
        int32_t rcx_1;
        rcx_1 = !temp0_1;
        uint32_t rax_3 = *var_54[1];
        int32_t var_6c_1 = rcx_1;
        uint32_t var_68_1 = rax_3;
        var_70 = 0;
        
        if (temp0_1 || !rax_3)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h9de5c560a761a38e(&var_70);
            result = 0;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h9de5c560a761a38e(&var_70);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &var_70, arg2, arg3);
            int64_t var_60;
            int64_t var_40_1 = var_60;
            var_50 = var_70;
            var_58 = 6;
            result = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_58);
        }
    }
    else
    {
        int32_t var_68;
        var_68 = var_50;
        var_70 = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::h9de5c560a761a38e(&var_70);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..process..Child$GT$::h2a8c738952384278(arg1);
    return result;
}
