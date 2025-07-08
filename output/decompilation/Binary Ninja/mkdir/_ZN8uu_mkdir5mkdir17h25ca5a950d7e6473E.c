
  int128_t* uu_mkdir::mkdir::h25ca5a950d7e6473(int64_t arg1, size_t arg2, char arg3, int32_t arg4, char arg5)

{
    void var_38;
    
    if (arg2)
    {
        uucore::features::fs::dir_strip_dot_for_creation::h0aaf496517cc5178(&var_38, arg1, arg2);
        char* var_30;
        uint64_t var_28;
        int128_t* result;
        void** rdx_2;
        result = uu_mkdir::create_dir::ha7ee258293152955(var_30, var_28, arg3, arg5, 0, arg4);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb7551ff5f0211b82(&var_38);
        return result;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(&var_38, 
        "cannot create directory '': No s…", 0x35);
    int32_t var_20_1 = 1;
    return alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&var_38);
}
