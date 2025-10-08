
  fn uu_install::perform_backup::h71eccbd452695050(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut c_void) -> i64

{
    let mut var_e0: i32;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, arg2);
    let rbp: i32 = var_e0;
    let mut result: i64 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
    
    if rbp != 2
    {
        let mut var_150: *mut i64;
        let mut var_138: i64;
        let mut var_130: i64;
        let mut var_120: i8;
        let mut var_d8: i64;
        let mut var_c8: i64;
        
        if *arg4.byte_offset(0x61) != 0
        {
            var_138 = 1;
            var_130 = arg2;
            let var_128_1: u64 = arg3;
            var_120 = 1;
            var_150 = &var_138;
            let var_148_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_e0 = &data_502498;
            var_d8 = 2;
            let var_c0_1: i64 = 0;
            let var_d0_1: *mut *mut i64 = &var_150;
            var_c8 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
        }
        
        uucore::features::backup_control::get_backup_path::hd1136aea6807a071(&var_150, 
            *arg4.byte_offset(0x67), arg2, arg3, *arg4.byte_offset(8), *arg4.byte_offset(0x10));
        
        if var_150 != -0x8000000000000000
        {
            let rax: i64 = std::fs::rename::hd36dae249ba265a0(arg2, arg3, &var_150);
            let mut var_f8: i64 = arg2;
            let var_f0_1: u64 = arg3;
            let var_e8_1: *mut *mut i64 = &var_150;
            
            if rax != 0
            {
                uu_install::perform_backup::_$u7b$$u7b$closure$u7d$$u7d$::h202386b539bdbc0f(
                    &var_138, &var_f8, rax);
                let var_100: i64;
                let var_a8_1: i64 = var_100;
                let var_110: i128;
                let var_b8_1: i128 = var_110;
                var_c8 = var_120;
                var_d8 = var_130;
                var_e0 = var_138;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
                arg1[2] = &data_502208;
                *arg1 = -0x7fffffffffffffff;
                return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1b9f1de4ce9f7be6(&var_150);
            }
        }
        
        let result_1: i64;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_150;
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    result
}
