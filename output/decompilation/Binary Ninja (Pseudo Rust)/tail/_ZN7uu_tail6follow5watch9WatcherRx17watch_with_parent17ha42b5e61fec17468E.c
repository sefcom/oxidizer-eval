
  fn uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(arg1: *mut *mut c_void, arg2: i64, arg3: i64, arg4: u64) -> u64

{
    let mut var_c8: *mut *mut c_void;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_c8, arg3, arg4);
    let var_c0: *mut i8;
    let mut rbx: *mut i8 = var_c0;
    let mut var_b8: u64;
    let mut result: u64;
    let mut var_a8: *mut *mut c_void;
    let var_98: u64;
    
    if std::path::Path::is_file::h6e28d87ff76ffc41(rbx, var_b8) == 0
    {
        'label_4a3070:
        rbx = var_c0;
        let mut r12_1: u64 = var_b8;
        
        if std::path::Path::is_absolute::hf2dacc49683e82ac(rbx, r12_1) != 0
        {
            goto 'label_4a30eb;
        }
        
        std::fs::canonicalize::h51813c249f73b0e1(&var_a8, rbx);
        let rbp_2: *mut *mut c_void = var_a8;
        
        if -(rbp_2) != -0x8000000000000000
        {
            r12_1 = var_98;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
            var_c8 = rbp_2;
            let var_a0: *mut i8;
            let var_c0_1: *mut i8 = var_a0;
            let var_b8_1: u64 = r12_1;
            rbx = var_a0;
            'label_4a30eb:
            let result_1: u64 =
                uu_tail::follow::watch::WatcherRx::watch::h0f775d7b205c66a4(arg1, arg2, rbx, r12_1);
            result = result_1;
            
            if result_1 == 0
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
                return 0;
            }
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
    }
    else
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: u64;
        rax_1 = std::path::Path::parent::hef287f60afa56900(rbx, var_b8);
        let mut var_78: *mut i8;
        
        if rax_1 != 0
        {
            let mut zmm0_1: i128;
            
            if std::path::Path::is_dir::h02edbc48c38d7d9e(rax_1, rdx_1) == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_a8, ".cannot watch parent directory o…", 1);
                var_78 = var_a8;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
                var_b8 = var_98;
                zmm0_1 = var_78;
            }
            else
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_a8, 
                    rax_1, rdx_1);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
                var_b8 = var_98;
                zmm0_1 = var_a8;
            }
            
            var_c8 = zmm0_1;
            goto 'label_4a3070;
        }
        
        var_78 = rbx;
        let var_70_1: u64 = var_b8;
        let mut var_58: *mut *mut i8 = &var_78;
        let var_50_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_a8 = &data_573490;
        let var_a0_1: i64 = 1;
        let var_88_1: i64 = 0;
        let var_98_1: *mut *mut *mut i8 = &var_58;
        let mut var_90_1: i64 = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_48, &var_a8);
        var_90_1 = 1;
        var_a8 = var_48;
        let var_38: i64;
        let var_98_2: i64 = var_38;
        result = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_a8);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(var_c8, rbx);
    result
}
