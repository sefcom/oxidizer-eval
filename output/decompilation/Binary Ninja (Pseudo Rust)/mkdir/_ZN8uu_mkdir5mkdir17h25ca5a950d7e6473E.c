
  fn uu_mkdir::mkdir::h25ca5a950d7e6473(arg1: i64, arg2: size_t, arg3: i8, arg4: i32, arg5: i8) -> *mut i128

{
    let mut var_38: ();
    
    if arg2 != 0
    {
        uucore::features::fs::dir_strip_dot_for_creation::h0aaf496517cc5178(&var_38, arg1, arg2);
        let var_30: *mut i8;
        let var_28: u64;
        let mut result: *mut i128;
        let mut rdx_2: *mut *mut c_void;
        result = uu_mkdir::create_dir::ha7ee258293152955(var_30, var_28, arg3, arg5, 0, arg4);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb7551ff5f0211b82(&var_38);
        return result;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(&var_38, 
        "cannot create directory '': No s…", 0x35);
    let var_20_1: i32 = 1;
    alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&var_38)
}
