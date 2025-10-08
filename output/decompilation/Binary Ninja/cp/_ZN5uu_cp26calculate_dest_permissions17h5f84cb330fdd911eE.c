
  int64_t uu_cp::calculate_dest_permissions::h5f84cb330fdd911e(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t arg4, char arg5, char arg6, int64_t arg7, int64_t arg8)

{
    int32_t var_e0;
    std::fs::metadata::h87a95e5fd9b91fc7(&var_e0, arg2);
    int32_t r14 = var_e0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_e0);
    int32_t result;
    
    if (r14 != 2)
    {
        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_e0, arg2);
        
        if (var_e0 == 2)
        {
            var_e0 = arg7;
            int64_t var_d8_1 = arg8;
            int64_t var_d8;
            int64_t var_d0_1 = var_d8;
            return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hda2d8848c156368b(arg1, &var_e0);
        }
        
        int32_t result_1;
        result = result_1;
    }
    else
    {
        int32_t rax = uu_cp::handle_no_preserve_mode::h796a58434a5cfa44(arg5, arg6, arg4);
        result = ~uucore::features::mode::get_umask::h22fe72fd4e3f2e99() & rax;
    }
    
    arg1[1] = result;
    *arg1 = -0x7ffffffffffffff4;
    return result;
}
