
  uint64_t uu_mv::mv::h16154d6ab76310c1(int64_t arg1, int64_t arg2, void* arg3)

{
    void var_58;
    uu_mv::parse_paths::h7d4cc822362d53dc(&var_58, arg1, arg2, *(arg3 + 0x32));
    uint64_t result;
    void* var_50;
    int64_t var_48;
    
    if (!(0 + -(*(arg3 + 0x18))))
    {
        int64_t var_40;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h19a54565959f0f6f(&var_40, *(arg3 + 0x20), *(arg3 + 0x28));
        int64_t r15_1 = var_40;
        char* var_38;
        uint64_t var_30;
        result =
            uu_mv::move_files_into_dir::h52a820120b69cecf(var_50, var_48, var_38, var_30, arg3);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(r15_1, var_38);
    }
    else
    {
        uint64_t result_1;
        void** rdx_2;
        
        if (var_48 != 2)
            result_1 = uu_mv::handle_multiple_paths::h97c89a5ca649d47f(var_50, var_48, arg3);
        else
            result_1 = uu_mv::handle_two_paths::hd6bab6134f770973(*(var_50 + 8), *(var_50 + 0x10), 
                *(var_50 + 0x20), *(var_50 + 0x28), arg3);
        result = result_1;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::ha14a05455c2f8b3b(
        &var_58);
    return result;
}
