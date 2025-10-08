
  fn uu_ln::numbered_backup_path::h08a544ce38fbf5a5(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_130: i64 = 1;
    let mut var_120: i128;
    
    loop
    {
        let mut var_108: *mut i64 = &var_130;
        let var_100_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let mut var_e0: *mut *mut [i8; 0xa2] = &data_4f6218;
        let var_d8_1: i64 = 2;
        let var_c0_1: i64 = 0;
        let var_d0_1: *mut *mut i64 = &var_108;
        let var_c8_1: i64 = 1;
        let mut var_f8: ();
        core::option::Option$LT$T$GT$::map_or_else::h600e3d9d768361ad(&var_f8, &var_e0);
        let var_f0: i64;
        let var_e8: i64;
        uu_ln::simple_backup_path::hf92f6b12668c10c1(&var_120, arg2, arg3, var_f0, var_e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf70cab9980d1377(&var_f8);
        let var_118: i64;
        std::fs::metadata::h3a5d957c4cc0d9ad(&var_e0, var_118);
        let rbx_1: i32 = var_e0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haadcf12438c9539e(&var_e0);
        
        if rbx_1 == 2
        {
            break;
        }
        
        var_130 += 1;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_120);
    }
    
    let result: i64;
    arg1[1] = result;
    *arg1 = var_120;
    result
}
