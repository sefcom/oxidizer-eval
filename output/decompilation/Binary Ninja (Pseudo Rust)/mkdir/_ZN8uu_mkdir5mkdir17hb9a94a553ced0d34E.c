
  fn uu_mkdir::mkdir::hb9a94a553ced0d34(arg1: i64, arg2: u64, arg3: *mut c_void) -> u64

{
    let mut var_38: i64;
    
    if arg2 != 0
    {
        uucore::features::fs::dir_strip_dot_for_creation::h60bc83913df5140f(&var_38, arg1, arg2);
        let var_30: *mut i64;
        let var_28: u64;
        let mut result: u64;
        let mut rdx_1: *mut *mut c_void;
        result = uu_mkdir::create_dir::hfbbf39588947948c(var_30, var_28, 0, arg3);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h186e614367733317(var_38, var_30);
        return result;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_38, "cannot create directory '': No s…", 0x35);
    let var_20_1: i32 = 1;
    alloc::boxed::Box$LT$T$GT$::new::h5788815961083ce5(&var_38)
}
