
  fn uu_ln::numbered_backup_path::h43f0286cb18b9b8f(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_138: i64 = 1;
    let mut var_128: i128;
    let mut var_e0_1: i64;
    
    loop
    {
        let mut var_110: *mut i64 = &var_138;
        let var_108_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        let mut var_e8: *mut *mut [i8; 0x42] = &data_52d0f0;
        var_e0_1 = 2;
        let var_c8_1: i64 = 0;
        let var_d8_1: *mut *mut i64 = &var_110;
        let var_d0_1: i64 = 1;
        let mut var_100: i128;
        core::option::Option$LT$T$GT$::map_or_else::hf2027c020971d755(&var_100, &var_e8);
        var_e8 = var_100;
        let var_f0: i64;
        let var_d8_2: i64 = var_f0;
        uu_ln::simple_backup_path::hd90ca54508e22200(&var_128, arg2, arg3, var_e0_1, var_f0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h903473fdb0d332f1(&var_e8);
        let var_120: i64;
        std::fs::metadata::hebad4fc3d3e825b8(&var_e8, var_120);
        let rdi_4: *mut *mut [i8; 0x42] = var_e8;
        
        if rdi_4 == 2
        {
            break;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(rdi_4, var_e0_1);
        var_138 += 1;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_128);
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(2, var_e0_1);
    let result: i64;
    arg1[1] = result;
    *arg1 = var_128;
    result
}
