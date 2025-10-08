
  fn uu_cp::delete_dest_if_needed_and_allowed::h89467f703e519ceb(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64, arg6: *mut c_void, arg7: i8, arg8: *mut i64)

{
    if *arg6.byte_offset(0x54) >= 2
    {
        *arg1 = -0x7ffffffffffffff4;
        return;
    }
    
    let mut rax: u64 = *arg6.byte_offset(0x55);
    let mut var_188: i8;
    let var_180: i128;
    let var_150: i128;
    
    if rax == 2
    {
        if *arg6.byte_offset(0x50) == 0
        {
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            let mut rax_2: i8 = *arg6.byte_offset(0x59);
            
            if ((arg7 ^ 1) | rax_2) == 0
            {
                rax_2 = *arg6.byte_offset(0x58);
            }
            
            uucore::features::fs::FileInformation::from_path::hfd069e4f76a9cc58(&var_188, arg2, 
                arg3, rax_2);
            let mut var_1d8: i64 = 1;
            let var_1d0_1: i64 = arg2;
            let var_1c8_1: i64 = arg3;
            let var_1c0_1: i8 = 1;
            let mut var_218: *mut i64 = &var_1d8;
            let var_210_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let mut var_1b8: *mut *mut [i8; 0xcb] = &data_55ec38;
            let var_1b0_1: i64 = 1;
            let var_198_1: i64 = 0;
            let var_1a8_1: *mut *mut i64 = &var_218;
            let var_1a0_1: i64 = 1;
            let mut var_1f0: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_1f0, &var_1b8);
            
            if (var_188 & 1) == 0
            {
                let var_160: i128;
                let var_98_1: i128 = var_160;
                let var_88_1: i128 = var_150;
                let var_140: i128;
                let var_78_1: i128 = var_140;
                let var_130: i128;
                let var_68_1: i128 = var_130;
                let var_120: i128;
                let var_58_1: i128 = var_120;
                let var_110: i128;
                let var_48_1: i128 = var_110;
                let var_100: i128;
                let var_38_1: i128 = var_100;
                core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h92d6353b521410cd(&var_1f0);
                let var_170: i64;
                let var_c8_1: i64 = var_170;
                let var_d8_1: i128 = var_180;
                let mut var_b8: i128 = var_180;
                let var_a8_1: i64 = var_170;
                let var_168: i64;
                let var_a0_1: i64 = var_168;
                
                if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h13e176d417cda5ca(arg8, 
                    &var_b8) != 0
                {
                    goto 'label_4a2f02;
                }
                
                *arg1 = -0x7ffffffffffffff4;
            }
            else
            {
                let var_1e0: i64;
                arg1[3] = var_1e0;
                *arg1.byte_offset(8) = var_1f0;
                *arg1 = -0x7ffffffffffffffe;
                arg1[4] = var_180;
            }
        }
    }
    else if rax == 1
    {
        'label_4a2f02:
        rax = std::fs::remove_file::h19277b2d7a4f8643(arg4);
        
        if rax == 0
        {
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = rax;
        }
    }
    else
    {
        let r15_1: i64 = arg4;
        let rax_1: i8 = uucore::features::fs::is_symlink_loop::h04d1ad90472ac98a(arg4, arg5);
        arg4 = r15_1;
        
        if rax_1 != 0
        {
            goto 'label_4a2f02;
        }
        
        std::fs::metadata::h87a95e5fd9b91fc7(&var_188, arg4);
        
        if var_188 != 2
        {
            arg4 = r15_1;
            
            if (var_150 & 0x92) == 0
            {
                goto 'label_4a2f02;
            }
            
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = var_180;
        }
    }
}
