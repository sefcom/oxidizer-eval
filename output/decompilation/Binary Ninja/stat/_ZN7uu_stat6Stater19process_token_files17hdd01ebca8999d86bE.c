
  int64_t uu_stat::Stater::process_token_files::hdd01ebca8999d86b(void* arg1, int64_t* arg2, void* arg3, int64_t arg4, uint64_t arg5, void* arg6, int32_t arg7, char arg8)

{
    int64_t rbx = *arg2;
    int64_t rax = 2;
    
    if (rbx - 3 < 2)
        rax = rbx - 3;
    
    void* const var_168;
    int32_t var_130;
    uint64_t* var_118;
    
    if (!rax)
    {
        var_130 = arg2[1];
        var_118 = &var_130;
        int64_t (* var_110_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_168 = &data_41ab40;
        int64_t var_160_1 = 1;
        int64_t var_148_1 = 0;
        uint64_t** var_158_1 = &var_118;
        int64_t var_150_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
    }
    else if (rax != 1)
    {
        uint64_t rbp_1 = *(arg2 + 0x1c);
        uint64_t r15_1 = arg2[4];
        uint64_t r14_1 = arg2[1];
        int64_t r12_1 = arg2[2];
        uint64_t rax_3 = arg2[3] - 0x41;
        void* const var_188;
        int64_t var_180;
        uint64_t var_160;
        int64_t var_158;
        uint64_t rax_6;
        int64_t rax_7;
        uint64_t rax_12;
        
        if (rax_3 > 0x39)
            var_188 = -0x8000000000000005;
        else
            switch (rax_3)
            {
                case 0:
                {
                    uucore::features::fs::display_permissions::hc8fe13fd96ae0343(&var_188, arg3, 1);
                    break;
                }
                case 1:
                {
                    int64_t var_180_1 = 0x200;
                    var_188 = -0x8000000000000001;
                    break;
                }
                case 2:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_188, "unsupported for this operating s…", 0x25);
                    break;
                }
                case 3:
                {
                    rax_12 = *(arg3 + 0x20);
                    goto label_476a5d;
                }
                case 4:
                case 8:
                case 9:
                case 0xa:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x12:
                case 0x15:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x22:
                case 0x24:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2f:
                case 0x30:
                case 0x35:
                {
                    var_188 = -0x8000000000000005;
                    break;
                }
                case 5:
                {
                    uucore::features::fsext::pretty_filetype::h51e66d968b749c56(&var_188, 
                        *(arg3 + 0x38), *(arg3 + 0x50));
                    break;
                }
                case 6:
                {
                    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_168, *(arg3 + 0x40));
                    void* rax_14 = var_168;
                    void* var_e8;
                    uint64_t var_e0;
                    int64_t var_d8;
                    
                    if (rax_14 != -0x8000000000000000)
                    {
                        var_e8 = rax_14;
                        var_e0 = var_160;
                        var_d8 = var_158;
                    }
                    else
                        uu_stat::Stater::process_token_files::_$u7b$$u7b$closure$u7d$$u7d$::h318241e010beca0a(&var_e8, var_160);
                    
                    int64_t var_178_2 = var_d8;
                    var_188 = var_e8;
                    uint64_t var_180_5 = var_e0;
                    break;
                }
                case 7:
                {
                    rax_6 = *(arg3 + 0x48) >> 8;
                    goto label_476c1c;
                }
                case 0xb:
                {
                    rax_6 = *(arg3 + 0x48);
                    goto label_476c1c;
                }
                case 0xd:
                {
                    uu_stat::get_quoted_file_name::haf9755dc3410fa80(&var_168, arg4, arg5, arg6, 
                        arg7, arg8);
                    void* rax_9 = var_168;
                    
                    if (rax_9 == -0x8000000000000000)
                        return 1;
                    
                    int32_t var_174_1 = *var_158[4];
                    var_180 = var_160;
                    var_188 = rax_9;
                    var_180 = var_160;
                    break;
                }
                case 0x11:
                {
                    int64_t rax_19 = *(arg3 + 0x48);
                    uint64_t var_b8 = rax_19 >> 8;
                    var_130 = rax_19;
                    var_118 = &var_b8;
                    uint64_t (* var_110_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    int32_t* var_108_1 = &var_130;
                    uint64_t (* var_100_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    var_168 = &data_519f98;
                    int64_t var_160_2 = 2;
                    int64_t var_148_2 = 0;
                    uint64_t** var_158_2 = &var_118;
                    int64_t var_150_2 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_188, 
                        &var_168);
                    break;
                }
                case 0x13:
                {
                    rax_12 = *(arg3 + 0x48);
                    label_476a5d:
                    uint64_t var_180_2 = rax_12;
                    var_188 = -0x8000000000000002;
                    break;
                }
                case 0x14:
                {
                    int64_t var_b0;
                    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_b0, *(arg3 + 0x3c));
                    void* const var_d0;
                    uint64_t var_c8;
                    int64_t var_c0;
                    uint64_t var_a8;
                    
                    if (var_b0 != -0x8000000000000000)
                    {
                        uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::hd6b2b4d931cf2f66(&var_168, &var_b0);
                        void* const rax_22 = var_168;
                        
                        if (rax_22 != -0x8000000000000000)
                        {
                            var_d0 = rax_22;
                            var_c8 = var_160;
                            var_c0 = var_158;
                        }
                        else
                            uu_stat::Stater::process_token_files::_$u7b$$u7b$closure$u7d$$u7d$::h318241e010beca0a(&var_d0, var_160);
                    }
                    else
                        uu_stat::Stater::process_token_files::_$u7b$$u7b$closure$u7d$$u7d$::h318241e010beca0a(&var_d0, var_a8);
                    int64_t var_178_4 = var_c0;
                    var_188 = var_d0;
                    uint64_t var_180_7 = var_c8;
                    break;
                }
                case 0x16:
                {
                    _$LT$std..fs..Metadata$u20$as$u20$uucore..features..fsext..BirthTime$GT$::birth::h0c5185550c9eb1ca(&var_168);
                    
                    if (!var_168)
                        rax_6 = 0;
                    else
                        rax_6 = var_160;
                    
                    goto label_476c1c;
                }
                case 0x17:
                {
                    rax_7 = *(arg3 + 0x68);
                    label_476bd4:
                    int64_t var_180_3 = rax_7;
                    var_188 = -0x8000000000000000;
                    break;
                }
                case 0x18:
                {
                    chrono::datetime::DateTime$LT$chrono..offset..utc..Utc$GT$::from_timestamp::h1ce8e0fb8cfe0735(&var_168, *(arg3 + 0x78), *(arg3 + 0x80));
                    void* const var_f8;
                    
                    if (!var_168)
                        _$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$u20$as$u20$core..default..Default$GT$::default::h251f53cfce2ba472(&var_f8);
                    else
                    {
                        int32_t var_f0_1 = var_160;
                        var_f8 = var_168;
                    }
                    
                    _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$chrono..datetime..DateTime$LT$chrono..offset..utc..Utc$GT$$GT$$GT$::from::h90f246ab10ef0572(&var_168, &var_f8);
                    char rax_30;
                    int64_t rdx_9;
                    rax_30 = chrono::datetime::DateTime$LT$Tz$GT$::timestamp_nanos_opt::h14cda3e030e1ca18(&var_168);
                    double zmm0_3;
                    
                    if (!(rax_30 & 1))
                    {
                        rdx_9 = var_160 / 0x3e8 + ((
                            chrono::naive::date::NaiveDate::num_days_from_ce::h3a63bbbadb6054a1(
                            var_168) - 0xaf93b) * 0x15180 + *var_168[4]) * 0xf4240;
                        zmm0_3 = 1000000.0;
                    }
                    else
                        zmm0_3 = 1000000000.0;
                    
                    double var_180_6 = rdx_9 / zmm0_3;
                    var_188 = -0x8000000000000004;
                    break;
                }
                case 0x19:
                {
                    rax_7 = *(arg3 + 0x88);
                    goto label_476bd4;
                }
                case 0x20:
                {
                    var_180 = 0xfff & *(arg3 + 0x38);
                    var_188 = -0x8000000000000003;
                    break;
                }
                case 0x21:
                {
                    rax_6 = *(arg3 + 0x60);
                    goto label_476c1c;
                }
                case 0x23:
                {
                    rax_6 = *(arg3 + 0x20);
                    label_476c1c:
                    uint64_t var_180_4 = rax_6;
                    var_188 = -0x8000000000000001;
                    break;
                }
                case 0x25:
                {
                    rax_12 = *(arg3 + 0x38);
                    goto label_476a5d;
                }
                case 0x26:
                {
                    rax_6 = *(arg3 + 0x40);
                    goto label_476c1c;
                }
                case 0x27:
                {
                    rax_6 = *(arg3 + 0x30);
                    goto label_476c1c;
                }
                case 0x28:
                {
                    rax_6 = *(arg3 + 0x28);
                    goto label_476c1c;
                }
                case 0x2c:
                {
                    uu_stat::Stater::find_mount_point::hb64e131c06b92eb6(&var_168, arg1, arg6);
                    
                    if (var_168 == -0x8000000000000000)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    int64_t var_178_1 = var_158;
                    var_188 = var_168;
                    break;
                }
                case 0x2d:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_188, arg4, arg5);
                    break;
                }
                case 0x2e:
                {
                    rax_6 = *(arg3 + 0x58);
                    goto label_476c1c;
                }
                case 0x31:
                {
                    rax_6 = *(arg3 + 0x48);
                    goto label_476c1c;
                }
                case 0x32:
                {
                    rax_7 = *(arg3 + 0x50);
                    goto label_476bd4;
                }
                case 0x33:
                {
                    rax_12 = *(arg3 + 0x48) >> 8;
                    goto label_476a5d;
                }
                case 0x34:
                {
                    rax_6 = *(arg3 + 0x3c);
                    goto label_476c1c;
                }
                case 0x36:
                {
                    _$LT$std..fs..Metadata$u20$as$u20$uucore..features..fsext..BirthTime$GT$::birth::h0c5185550c9eb1ca(&var_168);
                    
                    if (!(var_168 & 1))
                        var_130 = -0x8000000000000000;
                    else
                        uu_stat::pretty_time::h245badb3e9e8e0d9(&var_130, var_160, var_158);
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_168, "-,UNKNOWNusing '-' to denote sta…", 1);
                    var_118 = var_168;
                    int64_t var_158_3;
                    
                    if (var_130 != -0x8000000000000000)
                    {
                        int64_t var_120;
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
                    int64_t var_178_3 = var_158_3;
                    break;
                }
                case 0x37:
                {
                    uu_stat::pretty_time::h245badb3e9e8e0d9(&var_188, *(arg3 + 0x68), 
                        *(arg3 + 0x70));
                    break;
                }
                case 0x38:
                {
                    uu_stat::pretty_time::h245badb3e9e8e0d9(&var_188, *(arg3 + 0x78), 
                        *(arg3 + 0x80));
                    break;
                }
                case 0x39:
                {
                    uu_stat::pretty_time::h245badb3e9e8e0d9(&var_188, *(arg3 + 0x88), 
                        *(arg3 + 0x90));
                    break;
                }
            }
        uu_stat::print_it::hbae1e67489e4141f(&var_188, r15_1 << 0x20 | rbp_1, r12_1, rbx, r14_1);
        core::ptr::drop_in_place$LT$uu_stat..OutputType$GT$::h618762e13dd348ef(&var_188);
    }
    else
        uu_stat::write_raw_byte::hbbf81da3232f2130(arg2[1]);
    return 0;
}
