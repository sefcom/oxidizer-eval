
  fn uu_stat::Stater::process_token_files::hdd01ebca8999d86b(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void, arg4: i64, arg5: u64, arg6: *mut c_void, arg7: i32, arg8: i8) -> i64

{
    let rbx: i64 = *arg2;
    let mut rax: i64 = 2;
    
    if rbx - 3 < 2
    {
        rax = rbx - 3;
    }
    
    let mut var_168: *mut c_void;
    let mut var_130: i32;
    let mut var_118: *mut u64;
    
    if rax == 0
    {
        var_130 = arg2[1];
        var_118 = &var_130;
        let var_110_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_168 = &data_41ab40;
        let var_160_1: i64 = 1;
        let var_148_1: i64 = 0;
        let var_158_1: *mut *mut u64 = &var_118;
        let var_150_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
    }
    else if rax != 1
    {
        let rbp_1: u64 = *arg2.byte_offset(0x1c);
        let r15_1: u64 = arg2[4];
        let r14_1: u64 = arg2[1];
        let r12_1: i64 = arg2[2];
        let rax_3: u64 = arg2[3] - 0x41;
        let mut var_188: *mut c_void;
        let mut var_180: i64;
        let var_160: u64;
        let var_158: i64;
        let mut rax_6: u64;
        let mut rax_7: i64;
        let mut rax_12: u64;
        
        if rax_3 > 0x39
        {
            var_188 = -0x8000000000000005;
        }
        else
        {
            match rax_3
            {
                0 =>
                {
                    uucore::features::fs::display_permissions::hc8fe13fd96ae0343(&var_188, arg3, 1);
                }
                1 =>
                {
                    let var_180_1: i64 = 0x200;
                    var_188 = -0x8000000000000001;
                }
                2 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_188, "unsupported for this operating s…", 0x25);
                }
                3 =>
                {
                    rax_12 = *arg3.byte_offset(0x20);
                    goto 'label_476a5d;
                }
                4 | 8 | 9 | 0xa | 0xc | 0xe | 0xf | 0x10 | 0x12 | 0x15 | 0x1a | 0x1b | 0x1c | 0x1d
                    | 0x1e | 0x1f | 0x22 | 0x24 | 0x29 | 0x2a | 0x2b | 0x2f | 0x30 | 0x35 =>
                {
                    var_188 = -0x8000000000000005;
                }
                5 =>
                {
                    uucore::features::fsext::pretty_filetype::h51e66d968b749c56(&var_188, 
                        *arg3.byte_offset(0x38), *arg3.byte_offset(0x50));
                }
                6 =>
                {
                    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_168, *arg3.byte_offset(0x40));
                    let rax_14: *mut c_void = var_168;
                    let mut var_e8: *mut c_void;
                    let mut var_e0: u64;
                    let mut var_d8: i64;
                    
                    if rax_14 != -0x8000000000000000
                    {
                        var_e8 = rax_14;
                        var_e0 = var_160;
                        var_d8 = var_158;
                    }
                    else
                    {
                        uu_stat::Stater::process_token_files::_$u7b$$u7b$closure$u7d$$u7d$::h318241e010beca0a(&var_e8, var_160);
                    }
                    
                    let var_178_2: i64 = var_d8;
                    var_188 = var_e8;
                    let var_180_5: u64 = var_e0;
                }
                7 =>
                {
                    rax_6 = *arg3.byte_offset(0x48) >> 8;
                    goto 'label_476c1c;
                }
                0xb =>
                {
                    rax_6 = *arg3.byte_offset(0x48);
                    goto 'label_476c1c;
                }
                0xd =>
                {
                    uu_stat::get_quoted_file_name::haf9755dc3410fa80(&var_168, arg4, arg5, arg6, 
                        arg7, arg8);
                    let rax_9: *mut c_void = var_168;
                    
                    if rax_9 == -0x8000000000000000
                    {
                        return 1;
                    }
                    
                    let var_174_1: i32 = *var_158[4];
                    var_180 = var_160;
                    var_188 = rax_9;
                    var_180 = var_160;
                }
                0x11 =>
                {
                    let rax_19: i64 = *arg3.byte_offset(0x48);
                    let mut var_b8: u64 = rax_19 >> 8;
                    var_130 = rax_19;
                    var_118 = &var_b8;
                    let var_110_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    let var_108_1: *mut i32 = &var_130;
                    let var_100_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    var_168 = &data_519f98;
                    let var_160_2: i64 = 2;
                    let var_148_2: i64 = 0;
                    let var_158_2: *mut *mut u64 = &var_118;
                    let var_150_2: i64 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_188, 
                        &var_168);
                }
                0x13 =>
                {
                    rax_12 = *arg3.byte_offset(0x48);
                    'label_476a5d:
                    let var_180_2: u64 = rax_12;
                    var_188 = -0x8000000000000002;
                }
                0x14 =>
                {
                    let mut var_b0: i64;
                    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_b0, *arg3.byte_offset(0x3c));
                    let mut var_d0: *mut c_void;
                    let mut var_c8: u64;
                    let mut var_c0: i64;
                    let var_a8: u64;
                    
                    if var_b0 != -0x8000000000000000
                    {
                        uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::hd6b2b4d931cf2f66(&var_168, &var_b0);
                        let rax_22: *mut c_void = var_168;
                        
                        if rax_22 != -0x8000000000000000
                        {
                            var_d0 = rax_22;
                            var_c8 = var_160;
                            var_c0 = var_158;
                        }
                        else
                        {
                            uu_stat::Stater::process_token_files::_$u7b$$u7b$closure$u7d$$u7d$::h318241e010beca0a(&var_d0, var_160);
                        }
                    }
                    else
                    {
                        uu_stat::Stater::process_token_files::_$u7b$$u7b$closure$u7d$$u7d$::h318241e010beca0a(&var_d0, var_a8);
                    }
                    let var_178_4: i64 = var_c0;
                    var_188 = var_d0;
                    let var_180_7: u64 = var_c8;
                }
                0x16 =>
                {
                    _$LT$std..fs..Metadata$u20$as$u20$uucore..features..fsext..BirthTime$GT$::birth::h0c5185550c9eb1ca(&var_168);
                    
                    if var_168 == 0
                    {
                        rax_6 = 0;
                    }
                    else
                    {
                        rax_6 = var_160;
                    }
                    
                    goto 'label_476c1c;
                }
                0x17 =>
                {
                    rax_7 = *arg3.byte_offset(0x68);
                    'label_476bd4:
                    let var_180_3: i64 = rax_7;
                    var_188 = -0x8000000000000000;
                }
                0x18 =>
                {
                    chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h1ce8e0fb8cfe0735(&var_168, *arg3.byte_offset(0x78), *arg3.byte_offset(0x80));
                    let mut var_f8: *mut c_void;
                    
                    if var_168 == 0
                    {
                        _$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$u20$as$u20$core..default..Default$GT$::default::h251f53cfce2ba472(&var_f8);
                    }
                    else
                    {
                        let var_f0_1: i32 = var_160;
                        var_f8 = var_168;
                    }
                    
                    _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::h90f246ab10ef0572(&var_168, &var_f8);
                    let mut rax_30: i8;
                    let mut rdx_9: i64;
                    rax_30 = chrono::datetime::DateTime$LT$Tz$GT$::timestamp_nanos_opt::h14cda3e030e1ca18(&var_168);
                    let mut zmm0_3: f64;
                    
                    if (rax_30 & 1) == 0
                    {
                        rdx_9 = var_160 / 0x3e8 + ((
                            chrono::naive::date::NaiveDate::num_days_from_ce::h3a63bbbadb6054a1(
                            var_168) - 0xaf93b) * 0x15180 + *var_168[4]) * 0xf4240;
                        zmm0_3 = 1000000.0;
                    }
                    else
                    {
                        zmm0_3 = 1000000000.0;
                    }
                    
                    let var_180_6: f64 = rdx_9 / zmm0_3;
                    var_188 = -0x8000000000000004;
                }
                0x19 =>
                {
                    rax_7 = *arg3.byte_offset(0x88);
                    goto 'label_476bd4;
                }
                0x20 =>
                {
                    var_180 = 0xfff & *arg3.byte_offset(0x38);
                    var_188 = -0x8000000000000003;
                }
                0x21 =>
                {
                    rax_6 = *arg3.byte_offset(0x60);
                    goto 'label_476c1c;
                }
                0x23 =>
                {
                    rax_6 = *arg3.byte_offset(0x20);
                    'label_476c1c:
                    let var_180_4: u64 = rax_6;
                    var_188 = -0x8000000000000001;
                }
                0x25 =>
                {
                    rax_12 = *arg3.byte_offset(0x38);
                    goto 'label_476a5d;
                }
                0x26 =>
                {
                    rax_6 = *arg3.byte_offset(0x40);
                    goto 'label_476c1c;
                }
                0x27 =>
                {
                    rax_6 = *arg3.byte_offset(0x30);
                    goto 'label_476c1c;
                }
                0x28 =>
                {
                    rax_6 = *arg3.byte_offset(0x28);
                    goto 'label_476c1c;
                }
                0x2c =>
                {
                    uu_stat::Stater::find_mount_point::hb64e131c06b92eb6(&var_168, arg1, arg6);
                    
                    if var_168 == -0x8000000000000000
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    let var_178_1: i64 = var_158;
                    var_188 = var_168;
                }
                0x2d =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_188, arg4, arg5);
                }
                0x2e =>
                {
                    rax_6 = *arg3.byte_offset(0x58);
                    goto 'label_476c1c;
                }
                0x31 =>
                {
                    rax_6 = *arg3.byte_offset(0x48);
                    goto 'label_476c1c;
                }
                0x32 =>
                {
                    rax_7 = *arg3.byte_offset(0x50);
                    goto 'label_476bd4;
                }
                0x33 =>
                {
                    rax_12 = *arg3.byte_offset(0x48) >> 8;
                    goto 'label_476a5d;
                }
                0x34 =>
                {
                    rax_6 = *arg3.byte_offset(0x3c);
                    goto 'label_476c1c;
                }
                0x36 =>
                {
                    _$LT$std..fs..Metadata$u20$as$u20$uucore..features..fsext..BirthTime$GT$::birth::h0c5185550c9eb1ca(&var_168);
                    
                    if (var_168 & 1) == 0
                    {
                        var_130 = -0x8000000000000000;
                    }
                    else
                    {
                        uu_stat::pretty_time::h245badb3e9e8e0d9(&var_130, var_160, var_158);
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_168, "-,UNKNOWNusing '-' to denote sta…", 1);
                    var_118 = var_168;
                    let mut var_158_3: i64;
                    
                    if var_130 != -0x8000000000000000
                    {
                        let var_120: i64;
                        var_158_3 = var_120;
                        var_168 = var_130;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(
                            &var_118);
                    }
                    else
                    {
                        var_158_3 = var_158;
                        var_168 = var_118;
                    }
                    
                    var_188 = var_168;
                    let var_178_3: i64 = var_158_3;
                }
                0x37 =>
                {
                    uu_stat::pretty_time::h245badb3e9e8e0d9(&var_188, *arg3.byte_offset(0x68), 
                        *arg3.byte_offset(0x70));
                }
                0x38 =>
                {
                    uu_stat::pretty_time::h245badb3e9e8e0d9(&var_188, *arg3.byte_offset(0x78), 
                        *arg3.byte_offset(0x80));
                }
                0x39 =>
                {
                    uu_stat::pretty_time::h245badb3e9e8e0d9(&var_188, *arg3.byte_offset(0x88), 
                        *arg3.byte_offset(0x90));
                }
            }
        }
        uu_stat::print_it::hbae1e67489e4141f(&var_188, r15_1 << 0x20 | rbp_1, r12_1, rbx, r14_1);
        core::ptr::drop_in_place$LT$uu_stat..OutputType$GT$::h618762e13dd348ef(&var_188);
    }
    else
    {
        uu_stat::write_raw_byte::hbbf81da3232f2130(arg2[1]);
    }
    0
}
