
  fn uu_join::State::next_line::h055b38e9d9bddb6c(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i8) -> u64

{
    let mut var_148: *mut i64;
    uu_join::State::read_line::hf8e7df99ad1c7990(&var_148, arg2, &arg3[2]);
    let rcx: *mut i64 = var_148;
    let result_1: u64;
    let mut result: u64 = result_1;
    
    if rcx != -0x7fffffffffffffff
    {
        let mut var_e0: *mut i64 = rcx;
        
        if rcx != -0x8000000000000000
        {
            let mut var_128: i128;
            let var_f8_1: i128 = var_128;
            let mut var_138: i128;
            let var_108_1: i128 = var_138;
            let mut var_118: *mut i64 = var_e0;
            let result_2: u64 = result;
            result = arg3[1];
            let var_169_1: i8 = result;
            let mut zmm0_1: i128;
            let mut zmm1_1: i128;
            let mut zmm2_1: i128;
            
            if result != 1
            {
                let mut rax_1: i64;
                let mut rdx_1: u64;
                rax_1 = uu_join::State::get_current_key::hb0aa7b8c555c38dc(arg2);
                let mut rax_2: i64;
                let mut rdx_2: u64;
                rax_2 =
                    uu_join::Line::get_field::h5172ba7928bd7492(&var_118, *arg2.byte_offset(0x40));
                result = uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(*arg3, rax_1, rdx_1, 
                    rax_2, rdx_2);
                
                if result == 1
                {
                    if var_169_1 == 2
                    {
                        'label_4647cf:
                        zmm0_1 = *arg2.byte_offset(0x18);
                        let mut var_68: i64 = 0;
                        let mut var_60_1: i128 = zmm0_1;
                        let var_50_1: i8 = 0;
                        let mut var_80: i64;
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_80, 
                            var_f8_1, *var_f8_1[8]);
                        var_148 = &var_68;
                        let var_140: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_138 = arg2.byte_offset(0x50);
                        *var_138[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        var_128 = &var_80;
                        *var_128[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf2e26b2378c77421;
                        let mut var_b0: *mut c_void = &data_4fd400;
                        let var_a8_1: i64 = 3;
                        let var_90_1: i64 = 0;
                        let var_a0_1: *mut *mut i64 = &var_148;
                        let var_98_1: i64 = 3;
                        let mut var_48: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h377ad8e84433d07c(&var_48, 
                            &var_b0);
                        let var_78: i64;
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h5a6ac6c78e48f63b(var_80, var_78);
                        let mut var_168: i128 = var_48;
                        
                        if var_169_1 == 2
                        {
                            let var_38: i64;
                            arg1[3] = var_38;
                            *arg1.byte_offset(8) = var_168;
                            *arg1 = -0x7fffffffffffffff;
                            return core::ptr::drop_in_place$LT$uu_join..Line$GT$::h024107907e0f7a9f(
                                &var_118);
                        }
                        
                        let mut rax_6: i64;
                        let mut rdx_5: i64;
                        rax_6 = uucore::execution_phrase::hf0e80cb4793732ad();
                        var_68 = rax_6;
                        var_60_1 = rdx_5;
                        var_b0 = &var_68;
                        let var_a8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h76c68e868af0404d;
                        let var_a0_2: *mut i128 = &var_168;
                        let var_98_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_148 = &data_4fd430;
                        let var_140_1: i64 = 3;
                        var_128 = 0;
                        var_138 = &var_b0;
                        *var_138[8] = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_148);
                        *arg2.byte_offset(0x5a) = 1;
                        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::he74323e6cadbe242(var_168, *var_168[8]);
                    }
                    else if *arg2.byte_offset(0x5b) != 0 && *arg2.byte_offset(0x5a) == 0
                    {
                        goto 'label_4647cf;
                    }
                }
                
                zmm0_1 = var_118;
                zmm1_1 = var_108_1;
                zmm2_1 = var_f8_1;
            }
            else
            {
                zmm0_1 = var_e0;
                zmm1_1 = var_138;
                zmm2_1 = var_128;
            }
            
            *arg1.byte_offset(0x20) = zmm2_1;
            *arg1.byte_offset(0x10) = zmm1_1;
            *arg1 = zmm0_1;
        }
        else
        {
            result = core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_e0);
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        arg1[1] = -0x8000000000000000;
        arg1[2] = result;
        *arg1 = -0x7fffffffffffffff;
    }
    
    result
}
