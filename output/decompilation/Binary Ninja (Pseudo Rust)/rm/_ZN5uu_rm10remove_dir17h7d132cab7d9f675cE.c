
  fn uu_rm::remove_dir::h7d132cab7d9f675c(arg1: i64, arg2: i64, arg3: *mut c_void) -> *mut i64

{
    if uu_rm::prompt_dir::h3ebab050e61d8097(arg1, arg2, *arg3.byte_offset(6)) != 0
    {
        let mut var_58: i64;
        std::fs::read_dir::h67bbb91b5f22fd39(&var_58, arg1);
        let mut var_c8: *mut c_void;
        let mut var_98: i64;
        let mut var_78: *mut i64;
        let var_50: i8;
        let mut result: *mut i64;
        
        if var_50 == 2
        {
            let mut rax_1: i64;
            let mut rdx_2: i64;
            rax_1 = uucore::util_name::h60d842bf27b05e82();
            var_98 = rax_1;
            let var_90_1: i64 = rdx_2;
            var_78 = &var_98;
            let var_70_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_c8 = &data_527970;
            let var_c0_1: i64 = 2;
            let var_a8_1: i64 = 0;
            let var_b8_1: *mut *mut i64 = &var_78;
            let var_b0_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            var_98 = 1;
            let var_90_2: i64 = arg1;
            let var_88_1: i64 = arg2;
            let var_80_1: i8 = 1;
            var_78 = &var_98;
            let var_70_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527aa8;
            let var_c0_2: i64 = 2;
            let var_a8_2: i64 = 0;
            let var_b8_2: *mut *mut i64 = &var_78;
            let var_b0_2: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            
            if var_50 != 2
            {
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&var_58);
                result = 1;
                return result;
            }
            
            'label_4b8332:
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hfd9476c8e1bbd8eb(&var_58);
            result = 1;
            return result;
        }
        
        let mut var_38: i64 = var_58;
        let var_30_1: i8 = var_50;
        
        if (*arg3.byte_offset(4) | *arg3.byte_offset(3)) == 0
        {
            let mut rax_4: i64;
            let mut rdx_3: i64;
            rax_4 = uucore::util_name::h60d842bf27b05e82();
            var_98 = rax_4;
            let var_90_3: i64 = rdx_3;
            var_78 = &var_98;
            let var_70_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_c8 = &data_527970;
            let var_c0_3: i64 = 2;
            let var_a8_3: i64 = 0;
            let var_b8_3: *mut *mut i64 = &var_78;
            let var_b0_3: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            var_98 = 1;
            let var_90_4: i64 = arg1;
            let var_88_2: i64 = arg2;
            let var_80_2: i8 = 1;
            var_78 = &var_98;
            let var_70_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527a50;
            let var_c0_4: i64 = 2;
            let var_a8_4: i64 = 0;
            let var_b8_4: *mut *mut i64 = &var_78;
            let var_b0_4: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            'label_4b8321:
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&var_38);
            
            if var_50 == 2
            {
                goto 'label_4b8332;
            }
            
            result = 1;
            return result;
        }
        
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_c8, &var_38);
        
        if var_c8 != 0
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hef23df45bf09fd2e(&var_c8);
            let mut rax_5: i64;
            let mut rdx_4: i64;
            rax_5 = uucore::util_name::h60d842bf27b05e82();
            var_98 = rax_5;
            let var_90_5: i64 = rdx_4;
            var_78 = &var_98;
            let var_70_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            var_c8 = &data_527970;
            let var_c0_5: i64 = 2;
            let var_a8_5: i64 = 0;
            let var_b8_5: *mut *mut i64 = &var_78;
            let var_b0_5: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            var_98 = 1;
            let var_90_6: i64 = arg1;
            let var_88_3: i64 = arg2;
            let var_80_3: i8 = 1;
            var_78 = &var_98;
            let var_70_6: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527aa8;
            let var_c0_6: i64 = 2;
            let var_a8_6: i64 = 0;
            let var_b8_6: *mut *mut i64 = &var_78;
            let var_b0_6: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            goto 'label_4b8321;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hef23df45bf09fd2e(&var_c8);
        let rax_6: *mut i64 = std::fs::remove_dir::h3ace2cb00c00de8e(arg1);
        let mut var_48: *mut i64;
        
        if rax_6 != 0
        {
            var_48 = rax_6;
            
            if std::io::error::Error::kind::hb2ff5fa058639b3d(rax_6) != 1
            {
                let mut rax_9: i64;
                let mut rdx_7: i64;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                var_98 = rax_9;
                let var_90_9: i64 = rdx_7;
                var_78 = &var_98;
                let var_70_9: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_c8 = &data_527970;
                let var_c0_10: i64 = 2;
                let var_a8_10: i64 = 0;
                let var_b8_10: *mut *mut i64 = &var_78;
                let var_b0_10: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                var_98 = 1;
                let var_90_10: i64 = arg1;
                let var_88_5: i64 = arg2;
                let var_80_6: i8 = 1;
                var_78 = &var_98;
                let var_70_10: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                let var_68_1: *mut i64 = &var_48;
                let var_60_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_c8 = &data_5279d0;
                let var_c0_11: i64 = 3;
                let var_a8_11: i64 = 0;
                let var_b8_11: *mut *mut i64 = &var_78;
                let var_b0_11: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            }
            else
            {
                let mut rax_8: i64;
                let mut rdx_5: i64;
                rax_8 = uucore::util_name::h60d842bf27b05e82();
                var_98 = rax_8;
                let var_90_7: i64 = rdx_5;
                var_78 = &var_98;
                let var_70_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_c8 = &data_527970;
                let var_c0_7: i64 = 2;
                let var_a8_7: i64 = 0;
                let var_b8_7: *mut *mut i64 = &var_78;
                let var_b0_7: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                var_98 = 1;
                let var_90_8: i64 = arg1;
                let var_88_4: i64 = arg2;
                let var_80_4: i8 = 1;
                var_78 = &var_98;
                let var_70_8: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_c8 = &data_5279b0;
                let var_c0_8: i64 = 2;
                let var_a8_8: i64 = 0;
                let var_b8_8: *mut *mut i64 = &var_78;
                let var_b0_8: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_48);
            goto 'label_4b8321;
        }
        
        if *arg3.byte_offset(5) != 0
        {
            uu_rm::normalize::hc5c72b2dd9f7b482(&var_78, arg1);
            var_98 = 1;
            let mut var_90: i64;
            let var_70: i64;
            var_90 = var_70;
            let var_80_5: i8 = 1;
            var_48 = &var_98;
            let var_40_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_c8 = &data_527a88;
            let var_c0_9: i64 = 2;
            let var_a8_9: i64 = 0;
            let var_b8_9: *mut *mut i64 = &var_48;
            let var_b0_9: i64 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_c8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7c5c2bfda3b8aa48(&var_78);
        }
        
        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&var_38);
        
        if var_50 == 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hfd9476c8e1bbd8eb(&var_58);
        }
    }
    
    nullptr
}
