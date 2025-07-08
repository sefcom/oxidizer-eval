
  fn uu_rmdir::remove_single::h7d254dd4570d65d7(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    if (arg4 & 0x10000) != 0
    {
        let mut rax_1: i64;
        let mut rdx: i64;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        let mut var_98: i64 = rax_1;
        let var_90_1: i64 = rdx;
        let mut var_68: i64 = 1;
        let var_60_1: i64 = arg2;
        let var_58_1: i64 = arg3;
        let var_50_1: i8 = 1;
        let mut var_88: *mut i64 = &var_98;
        let var_80_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h39d7d38f25d43a0c;
        let var_78_1: *mut i64 = &var_68;
        let var_70_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let mut var_48: *mut c_void = &data_50dab8;
        let var_40_1: i64 = 3;
        let var_28_1: i64 = 0;
        let var_38_1: *mut *mut i64 = &var_88;
        let var_30_1: i64 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&var_48);
    }
    
    let result: i64 = std::fs::remove_dir::h0572df07be869037(arg2);
    
    if result != 0
    {
        arg1[1] = arg2;
        arg1[2] = arg3;
    }
    
    *arg1 = result;
    result
}
