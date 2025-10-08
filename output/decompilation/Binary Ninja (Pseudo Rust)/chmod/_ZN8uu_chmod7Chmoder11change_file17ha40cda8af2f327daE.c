
  fn uu_chmod::Chmoder::change_file::ha40cda8af2f327da(arg1: *mut c_void, arg2: i32, arg3: i32, arg4: i64, arg5: i64) -> u64

{
    let mut var_108: i32 = arg2;
    let mut var_104: i32 = arg3;
    let mut r12: i32;
    let mut var_100: *const *mut *mut [i8; 0x19];
    let mut var_e0: *mut *mut [i8; 0x19];
    let mut var_b0: *mut i64;
    let mut var_58: ();
    
    if arg2 != arg3
    {
        let rax_1: *mut [i8; 0x19] = std::fs::set_permissions::hb2684a192581866f(arg4, arg5, arg3);
        let mut var_40: ();
        
        if rax_1 == 0
        {
            r12 = 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h22bbb88f7e5010db(0);
            
            if *arg1.byte_offset(0x22) != 0 || *arg1.byte_offset(0x20) == 1
            {
                var_100 = 1;
                let var_f8_4: i64 = arg4;
                let var_f0_3: i64 = arg5;
                let var_e8_3: i8 = 1;
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_40, arg2, 0);
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_58, var_104, 
                    0);
                var_b0 = &var_100;
                let var_a8_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_a0_5: *mut i32 = &var_108;
                let var_98_5: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                let var_90_5: *mut c_void = &var_40;
                let var_88_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_80_2: *mut i32 = &var_104;
                let var_78_2: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                let var_70_2: *mut c_void = &var_58;
                let var_68_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_e0 = &data_4ebbb0;
                let var_d8_5: i64 = 6;
                let var_c0_3: *mut c_void = &data_41a1e0;
                let var_b8_3: i64 = 5;
                let var_d0_3: *mut *mut i64 = &var_b0;
                let var_c8_3: i64 = 5;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_58);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_40);
                r12 = 0;
            }
        }
        else
        {
            let mut var_60: *mut [i8; 0x19] = rax_1;
            
            if *arg1.byte_offset(0x21) == 0
            {
                let mut rax_2: *mut *mut [i8; 0x19];
                let mut rdx: i64;
                rax_2 = uucore::util_name::h074417a1e6395129();
                var_e0 = rax_2;
                let var_d8_2: i64 = rdx;
                var_100 = &var_e0;
                let var_f8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9aa873f8513a6c9b;
                var_b0 = &data_4ebab0;
                let var_a8_2: i64 = 2;
                let var_90_2: i64 = 0;
                let var_a0_2: *mut *const *mut *mut [i8; 0x19] = &var_100;
                let var_98_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                var_e0 = &var_60;
                let var_d8_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_b0 = &data_4ebb30;
                let var_a8_3: i64 = 2;
                let var_90_3: i64 = 0;
                let var_a0_3: *const *mut *mut [i8; 0x19] = &var_e0;
                let var_98_3: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
            }
            
            if *arg1.byte_offset(0x22) != 0
            {
                var_100 = 1;
                let var_f8_3: i64 = arg4;
                let var_f0_2: i64 = arg5;
                let var_e8_2: i8 = 1;
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_40, var_108, 
                    0);
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_58, var_104, 
                    0);
                var_b0 = &var_100;
                let var_a8_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_a0_4: *mut i32 = &var_108;
                let var_98_4: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                let var_90_4: *mut c_void = &var_40;
                let var_88_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_80_1: *mut i32 = &var_104;
                let var_78_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
                let var_70_1: *mut c_void = &var_58;
                let var_68_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_e0 = &data_4ebb50;
                let var_d8_4: i64 = 6;
                let var_c0_2: *mut c_void = &data_41a1e0;
                let var_b8_2: i64 = 5;
                let var_d0_2: *mut *mut i64 = &var_b0;
                let var_c8_2: i64 = 5;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_58);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_40);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he4a0a2b91febee14(var_60);
            r12 = 1;
        }
    }
    else
    {
        r12 = 0;
        
        if *arg1.byte_offset(0x22) != 0 && *arg1.byte_offset(0x20) == 0
        {
            var_100 = 1;
            let var_f8_1: i64 = arg4;
            let var_f0_1: i64 = arg5;
            let var_e8_1: i8 = 1;
            r12 = 0;
            uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_58, arg2, 0);
            var_b0 = &var_100;
            let var_a8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_a0_1: *mut i32 = &var_108;
            let var_98_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
            let var_90_1: *mut c_void = &var_58;
            let var_88_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e0 = &data_4ebc10;
            let var_d8_1: i64 = 4;
            let var_c0_1: *mut c_void = &data_41a2f0;
            let var_b8_1: i64 = 3;
            let var_d0_1: *mut *mut i64 = &var_b0;
            let var_c8_1: i64 = 3;
            std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_58);
        }
    }
    r12
}
