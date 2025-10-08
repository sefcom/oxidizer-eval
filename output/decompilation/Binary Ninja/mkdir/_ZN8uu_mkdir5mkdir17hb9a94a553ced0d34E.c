
  uint64_t uu_mkdir::mkdir::hb9a94a553ced0d34(int64_t arg1, uint64_t arg2, void* arg3)

{
    int64_t var_38;
    
    if (arg2)
    {
        uucore::features::fs::dir_strip_dot_for_creation::h60bc83913df5140f(&var_38, arg1, arg2);
        int64_t* var_30;
        uint64_t var_28;
        uint64_t result;
        void** rdx_1;
        result = uu_mkdir::create_dir::hfbbf39588947948c(var_30, var_28, 0, arg3);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h186e614367733317(var_38, var_30);
        return result;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_38, "cannot create directory '': No s…", 0x35);
    int32_t var_20_1 = 1;
    return alloc::boxed::Box$LT$T$GT$::new::h5788815961083ce5(&var_38);
}
