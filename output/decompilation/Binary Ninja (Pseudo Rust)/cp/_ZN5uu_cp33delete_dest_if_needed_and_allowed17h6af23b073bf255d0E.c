
  fn uu_cp::delete_dest_if_needed_and_allowed::h6af23b073bf255d0(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64, arg6: *mut c_void, arg7: i8, arg8: *mut i64)

{
    if *arg6.byte_offset(0x3c) >= 2
    {
        *arg1 = 0xd;
        return;
    }
    
    let mut rax: u64 = *arg6.byte_offset(0x3d);
    let mut var_168: i64;
    let var_160: i128;
    let var_130: i128;
    
    if rax == 2
    {
        if *arg6.byte_offset(0x38) == 0
        {
            *arg1 = 0xd;
        }
        else
        {
            let temp0_1: i8 = *arg6.byte_offset(0x41);
            rax = temp0_1 != 0;
            
            if temp0_1 == 0 && arg7 != 0
            {
                rax = *arg6.byte_offset(0x40) != 0;
            }
            
            uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&var_168, arg2, 
                arg3, rax);
            let mut var_1f8: i64 = 1;
            let var_1f0_1: i64 = arg2;
            let var_1e8_1: i64 = arg3;
            let var_1e0_1: i8 = 1;
            let mut var_228: *mut i64 = &var_1f8;
            let var_220_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let mut var_258: *mut *mut [i8; 0xa4] = &data_5b5f08;
            let var_250_1: i64 = 1;
            let var_238_1: i64 = 0;
            let var_248_1: *mut *mut i64 = &var_228;
            let var_240_1: i64 = 1;
            let mut var_270: i128;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_270, &var_258);
            let var_260: i64;
            let var_248_2: i64 = var_260;
            var_258 = var_270;
            
            if var_168 == 0
            {
                core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1ef8f78603d21391(&var_258);
                let mut var_b8: i128 = var_160;
                let var_150: i64;
                let var_a8_1: i64 = var_150;
                let var_148: i64;
                let var_a0_1: i64 = var_148;
                let var_140: i128;
                let var_98_1: i128 = var_140;
                let var_88_1: i128 = var_130;
                let var_120: i128;
                let var_78_1: i128 = var_120;
                let var_110: i128;
                let var_68_1: i128 = var_110;
                let var_100: i128;
                let var_58_1: i128 = var_100;
                let var_f0: i128;
                let var_48_1: i128 = var_f0;
                let var_e0: i128;
                let var_38_1: i128 = var_e0;
                
                if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef26ad6068154428(arg8, 
                    &var_b8) != 0
                {
                    goto 'label_506257;
                }
                
                *arg1 = 0xd;
            }
            else
            {
                arg1[3] = var_260;
                *arg1.byte_offset(8) = var_270;
                *arg1 = 3;
                arg1[4] = var_160;
            }
        }
    }
    else if rax == 1
    {
        'label_506257:
        rax = std::fs::remove_file::h38159f05e7b4dc34(arg4);
        
        if rax == 0
        {
            *arg1 = 0xd;
        }
        else
        {
            *arg1 = 2;
            arg1[1] = rax;
        }
    }
    else
    {
        let r15_1: i64 = arg4;
        let rax_1: i8 = uucore::features::fs::is_symlink_loop::h6176a52fb38b92f8(arg4, arg5);
        arg4 = r15_1;
        
        if rax_1 != 0
        {
            goto 'label_506257;
        }
        
        std::fs::metadata::h003d8cdbffde7c56(&var_168, arg4);
        
        if var_168 != 2
        {
            arg4 = r15_1;
            
            if (var_130 & 0x92) == 0
            {
                goto 'label_506257;
            }
            
            *arg1 = 0xd;
        }
        else
        {
            *arg1 = 2;
            arg1[1] = var_160;
        }
    }
}
