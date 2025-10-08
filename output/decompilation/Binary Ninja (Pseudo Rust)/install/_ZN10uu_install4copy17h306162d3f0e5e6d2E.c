
  fn uu_install::copy::h306162d3f0e5e6d2(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: u64, arg5: *mut c_void) -> u64

{
    let mut var_d8: u64;
    let var_d0: u64;
    
    if *arg5.byte_offset(0x63) == 0
    {
        'label_469712:
        uu_install::perform_backup::h71eccbd452695050(&var_d8, arg3, arg4, arg5);
        let rdx_3: u64 = var_d8;
        
        if rdx_3 == -0x7fffffffffffffff
        {
            return var_d0;
        }
        
        let mut var_a8: u64 = rdx_3;
        let var_c8: i64;
        let var_98_1: i64 = var_c8;
        let mut rax_2: u64;
        let mut rdx_6: *mut *mut c_void;
        rax_2 = uu_install::copy_file::h9c5ec538cb19a460(arg1, arg2, arg3, arg4);
        let mut rbx_1: u64;
        
        if rax_2 != 0
        {
            'label_46978a:
            rbx_1 = rax_2;
            'label_469792:
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1b9f1de4ce9f7be6(&var_a8);
            return rbx_1;
        }
        
        let mut rax_3: u64;
        
        if *arg5.byte_offset(0x64) != 0
        {
            rax_3 = uu_install::strip_file::hce331b84877bdb5d(arg3, arg4, arg5);
        }
        
        if *arg5.byte_offset(0x64) != 0 && rax_3 != 0
        {
            rbx_1 = rax_3;
            goto 'label_469792;
        }
        
        rax_2 = uu_install::set_ownership_and_permissions::h4b3ae3ef285be2d9(arg3, arg4, arg5);
        
        if rax_2 != 0
        {
            goto 'label_46978a;
        }
        
        if *arg5.byte_offset(0x62) != 0
        {
            rax_3 = uu_install::preserve_timestamps::h613a91b27797a409(arg1, arg2, arg3);
        }
        
        if *arg5.byte_offset(0x62) != 0 && rax_3 != 0
        {
            rbx_1 = rax_3;
            goto 'label_469792;
        }
        
        if *arg5.byte_offset(0x61) != 0
        {
            let mut var_70: *mut i64 = 1;
            let var_68_1: *mut i8 = arg1;
            let var_60_1: u64 = arg2;
            let var_58_1: i8 = 1;
            let mut var_90: i64 = 1;
            let mut var_88_1: *mut i8 = arg3;
            let var_80_1: u64 = arg4;
            let var_78_1: i8 = 1;
            let mut var_50: *mut i64 = &var_70;
            let var_48_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_40_1: *mut i64 = &var_90;
            let var_38_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_d8 = &data_502530;
            let var_d0_1: i64 = 2;
            let var_b8_1: i64 = 0;
            let var_c8_1: *mut *mut i64 = &var_50;
            let mut var_c0_1: i64 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            
            if rdx_3 != -0x8000000000000000
            {
                var_90 = 1;
                var_88_1 = var_d0;
                let var_78_2: i8 = 1;
                var_70 = &var_90;
                let var_68_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_d8 = &data_502560;
                let var_d0_3: i64 = 2;
                let var_b8_2: i64 = 0;
                let var_c8_3: *mut *mut i64 = &var_70;
                let var_c0_2: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_a8);
            }
            else
            {
                var_d8 = &data_502550;
                let var_d0_2: i64 = 1;
                let var_c8_2: i64 = 8;
                var_c0_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
        }
        else if rdx_3 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_a8);
        }
    }
    else
    {
        uu_install::need_copy::h897b20bca7aa9813(&var_d8, arg1, arg2, arg3, arg4, arg5);
        let rax_1: u64 = var_d8;
        
        if rax_1 != 0
        {
            return rax_1;
        }
        
        if var_d0 != 0
        {
            goto 'label_469712;
        }
    }
    0
}
