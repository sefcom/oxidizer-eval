
  fn uu_kill::print_signal::hbbda5da3d768aa27(arg1: *mut i8, arg2: u64) -> u64

{
    let mut rbp: u64 = arg2;
    let mut var_e0: i8;
    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_e0, arg1, rbp);
    let rax: i8 = var_e0;
    let mut var_70: *mut *mut c_void = &uucore::features::signals::ALL_SIGNALS::hb6c41a286543a4a8;
    let var_68: *mut *mut c_void = &data_4e8200;
    let var_60: i64 = 0;
    let mut rax_2: u64;
    let mut i: *mut i64;
    rax_2 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3441d36b832b537(&var_70);
    let mut var_b0: *mut *mut *mut c_void;
    let mut var_80: *const *mut *mut c_void;
    
    if i != 0
    {
        let mut r14_1: u64 = rax_2;
        let var_88_1: u64 = rbp;
        
        do
        {
            let mut var_48: u64 = r14_1;
            let rdi_3: *mut *mut c_void = *i;
            let rsi_1: i64 = i[1];
            let mut var_40: *mut *mut c_void = rdi_3;
            let var_38_1: i64 = rsi_1;
            let rax_5: i8 = core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rdi_3, rsi_1, arg1, rbp);
            let mut var_d8_1: i64;
            let mut var_d0_1: *mut *const *mut *mut c_void;
            let mut rax_6: i8;
            
            if rax_5 == 0
            {
                var_80 = &var_40;
                let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
                var_e0 = &data_4e7640;
                var_d8_1 = 1;
                let var_c0_1: i64 = 0;
                var_d0_1 = &var_80;
                let var_c8_1: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h9ebb7b35ad4a5108(&var_b0, &var_e0);
                let r15_1: *mut *mut *mut c_void = var_b0;
                let var_a8: *mut i8;
                let var_a0: i64;
                rax_6 = core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(var_a8, var_a0, arg1, rbp);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h31b345ac50aa997d(r15_1, 
                    var_a8);
            }
            
            if rax_5 != 0 || rax_6 != 0
            {
                var_b0 = &var_48;
                let var_a8_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_e0 = &data_4e7650;
                let var_d8_4: i64 = 2;
                let var_c0_4: i64 = 0;
                let var_d0_4: *mut *mut *mut *mut c_void = &var_b0;
                'label_45d48f:
                let var_c8_3: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                return 0;
            }
            
            let mut rax_7: i64;
            let mut rdx_3: u64;
            rax_7 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(r14_1, 
                &var_b0, 0x14);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf4ce7647a8e36fb0(&var_e0, rax_7, rdx_3);
            let r15_2: i64 = var_e0;
            let rax_8: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha97fbaefa0d2ac9d(arg1, var_88_1, var_d8_1, var_d0_1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h31b345ac50aa997d(r15_2, 
                var_d8_1);
            
            if rax_8 != 0
            {
                'label_45d389:
                var_b0 = &var_40;
                let var_a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
                var_e0 = &data_4e7650;
                let var_d8_2: i64 = 2;
                let var_c0_2: i64 = 0;
                let var_d0_2: *mut *mut *mut *mut c_void = &var_b0;
                goto 'label_45d48f;
            }
            
            let var_d8: i64;
            
            if rax == 0 && (var_d8 == r14_1 || var_d8 == r14_1 + 0x80)
            {
                goto 'label_45d389;
            }
            
            let mut rax_4: u64;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3441d36b832b537(&var_70);
            r14_1 = rax_4;
            rbp = var_88_1;
        } while i != 0;
    }
    
    var_70 = nullptr;
    let var_68_1: *mut i8 = arg1;
    let var_60_1: u64 = rbp;
    let var_58_1: i8 = 1;
    var_80 = &var_70;
    let var_78_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_e0 = &data_4e7670;
    let var_d8_3: i64 = 2;
    let var_c0_3: i64 = 0;
    let var_d0_3: *mut *const *mut *mut c_void = &var_80;
    let var_c8_2: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h9ebb7b35ad4a5108(&var_b0, &var_e0);
    let var_98_1: i32 = 1;
    alloc::boxed::Box$LT$T$GT$::new::h4d33bae44fdeaf98(&var_b0)
}
