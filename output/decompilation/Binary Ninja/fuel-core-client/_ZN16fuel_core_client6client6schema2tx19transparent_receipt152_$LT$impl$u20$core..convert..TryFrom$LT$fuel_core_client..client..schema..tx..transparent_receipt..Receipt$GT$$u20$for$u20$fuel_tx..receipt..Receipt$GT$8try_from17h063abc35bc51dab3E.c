
  int64_t* fuel_core_client::client::schema::tx::transparent_receipt::_$LT$impl$u20$core..convert..TryFrom$LT$fuel_core_client..client..schema..tx..transparent_receipt..Receipt$GT$$u20$for$u20$fuel_tx..receipt..Receipt$GT$::try_from::h063abc35bc51dab3(int64_t* arg1, char* arg2, int64_t arg3, int64_t arg4, int64_t arg5, char* arg6 @ r11, int64_t arg7 @ r13)

{
    int64_t var_20 = arg7;
    char* r14 = arg2;
    int64_t* result = arg1;
    uint32_t* const rcx = &jump_table_48f83c;
    void* rax_2 = jump_table_48f83c[arg2[0x262]] + &jump_table_48f83c;
    char var_1b8;
    int128_t var_1b7;
    int32_t var_1a7;
    int32_t var_1a4;
    int64_t var_1a0;
    uint128_t var_198;
    int64_t* var_188;
    int64_t var_180_1;
    int64_t var_180_2;
    int64_t var_178;
    uint64_t var_170;
    int64_t var_168;
    int64_t var_160;
    int64_t* var_158;
    int64_t var_150;
    int64_t var_78;
    uint128_t var_58;
    int64_t rax_5;
    int64_t rbp_1;
    int64_t r9_1;
    uint8_t r10_1;
    uint64_t r12_1;
    uint64_t r15_1;
    uint128_t zmm0;
    int128_t zmm0_1;
    uint128_t zmm1;
    
    switch (rax_2)
    {
        case 0x71244e:
        {
            arg7 = 0;
            char temp0_1 = r14[0x15a] & 1;
            r15_1 = 0;
            r12_1 = 0;
            
            if (temp0_1)
            {
                r15_1 = *(r14 + 0x15b);
                r12_1 = *(r14 + 0x163);
            }
            
            if (temp0_1)
                zmm1 = *(r14 + 0x16b);
            else
                zmm1 = {0};
            
            rcx = nullptr;
            rax_2 = nullptr;
            arg3 = 0;
            
            if (r14[0x17b] & 1)
            {
                arg3 = *(r14 + 0x194);
                rax_2 = *(r14 + 0x18c);
                arg7 = *(r14 + 0x17c);
                rcx = *(r14 + 0x184);
            }
            
            if (!(r14[0x20] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "amountgasparam1param2pcisvalptrl…", 6);
                goto label_713ade;
            }
            
            if (!(r14[0x118] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "assetIdto_addressOutputDryRunTxS…", 7);
                goto label_7139bb;
            }
            
            arg6 = *(r14 + 0x28);
            int32_t var_145_1 = *(r14 + 0x11c);
            char var_139_1 = r14[0x128];
            
            if (!(r14[0x30] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "gasparam1param2pcisvalptrlendige…", 3);
                goto label_713ade;
            }
            
            if (!(*r14 & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "param1param2pcisvalptrlendigestr…", 6);
                goto label_713ade;
            }
            
            if (!(r14[0x10] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "param2pcisvalptrlendigestreasonr…", 6);
                goto label_713ade;
            }
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713ade;
            }
            
            var_168 = *(r14 + 0x38);
            var_158 = *(r14 + 0x18);
            var_150 = *(r14 + 0x48);
            var_160 = *(r14 + 0x58);
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            var_178 = *(r14 + 0x129);
            var_188 = (*(r14 + 0x119));
            var_170 = *(r14 + 0x131);
            arg5 = *(r14 + 8);
            arg2 = *(r14 + 0x120);
            rbp_1 = -0x7fffffffffffffff;
            arg1 = 1;
            goto label_7134f5;
        }
        case 0x712484:
        {
            if (!(r14[0x241] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "sub_ida formatting trait impleme…", 6);
                label_7139bb:
                char rax_17 = var_1b8;
                *(result + 0x24) = var_1a4;
                *(result + 0x21) = var_1a7;
                result[1] = 0;
                result[2] = rax_17;
                *(result + 0x11) = var_1b7;
                *result = -0x7ffffffffffffff2;
                core::ptr::drop_in_place$LT$core..option..Option$LT$fuel_core_client..client..schema..primitives..HexString$GT$$GT$::h06f82e76d483a231(*(r14 + 0x100), *(r14 + 0x108));
            }
            else
            {
                zmm1 = *(r14 + 0x252);
                int64_t rcx_1 = *(r14 + 0x249);
                int32_t rdx = *(r14 + 0x242);
                int32_t var_a5_1 = *(r14 + 0x245);
                char var_99_1 = r14[0x251];
                
                if (!(r14[0x15a] & 1))
                {
                    core::array::_$LT$impl$u20$core..default..Default$u20$for$u20$$u5b$T$u3b$$u20$32$u5d$$GT$::default::h12029fa6a59c7be6(&var_1b8);
                    arg7 = var_1b8;
                    rcx = *var_1b7[7];
                    rax_2 = *var_1b7[0xf];
                    arg3 = var_1a0;
                }
                else
                {
                    arg3 = *(r14 + 0x173);
                    rax_2 = *(r14 + 0x16b);
                    arg7 = *(r14 + 0x15b);
                    rcx = *(r14 + 0x163);
                }
                
                if (!(r14[0xc0] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "valptrlendigestreasonrarbrcrdres…", 3);
                    goto label_713ade;
                }
                
                if (!(r14[0x50] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                    goto label_713ade;
                }
                
                if (!(r14[0x40] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                    goto label_713ade;
                }
                
                var_188 = *(r14 + 0xc8);
                var_178 = *(r14 + 0x48);
                var_198 = *(r14 + 0x58);
                r15_1 = rdx;
                r12_1 = rcx_1;
                r10_1 = r15_1 >> 0x20;
                r9_1 = -0x10000000000 & r15_1;
                rbp_1 = -0x7ffffffffffffff4;
                label_7134ed:
                arg1 = 1;
                arg2 = var_198;
                label_7134f5:
                *result = rbp_1;
                result[1] = r15_1 | r10_1 << 0x20 | r9_1;
                result[2] = r12_1;
                *(result + 0x18) = zmm1;
                result[5] = arg7;
                result[6] = rcx;
                result[7] = rax_2;
                result[8] = arg3;
                result[9] = var_188;
                result[0xa] = arg2;
                result[0xb] = var_178;
                result[0xc] = var_170;
                result[0xd] = arg6;
                result[0xe] = var_168;
                result[0xf] = arg5;
                result[0x10] = var_158;
                result[0x11] = var_160;
                result[0x12] = var_150;
                *(result + 0x98) = var_58;
                
                if (arg1)
                    core::ptr::drop_in_place$LT$core..option..Option$LT$fuel_core_client..client..schema..primitives..HexString$GT$$GT$::h06f82e76d483a231(*(r14 + 0x100), *(r14 + 0x108));
            }
            break;
        }
        case 0x712504:
        {
            r15_1 = 0;
            char temp1_1 = r14[0x15a] & 1;
            
            if (temp1_1)
            {
                r15_1 = *(r14 + 0x15b);
                r12_1 = *(r14 + 0x163);
                
                if (!temp1_1)
                    goto label_712a99;
                
                goto label_712529;
            }
            
            r12_1 = 0;
            
            if (temp1_1)
            {
                label_712529:
                zmm1 = *(r14 + 0x16b);
                
                if (!(r14[0x70] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rarbrcrdresultsenderrecipientnon…", 2);
                    goto label_713ade;
                }
            }
            else
            {
                label_712a99:
                zmm1 = {0};
                
                if (!(r14[0x70] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rarbrcrdresultsenderrecipientnon…", 2);
                    goto label_713ade;
                }
            }
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713ade;
            }
            
            arg7 = *(r14 + 0x78);
            rax_2 = *(r14 + 0x48);
            rcx = *(r14 + 0x58);
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            rbp_1 = -0x7ffffffffffffffb;
            arg1 = 1;
            goto label_7134f5;
        }
        case 0x712556:
        {
            if (!(r14[0x241] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "sub_ida formatting trait impleme…", 6);
                goto label_7139bb;
            }
            
            zmm1 = *(r14 + 0x252);
            int64_t rcx_2 = *(r14 + 0x249);
            int32_t rdx_1 = *(r14 + 0x242);
            int32_t var_95_1 = *(r14 + 0x245);
            char var_89_1 = r14[0x251];
            
            if (!(r14[0x15a] & 1))
            {
                core::array::_$LT$impl$u20$core..default..Default$u20$for$u20$$u5b$T$u3b$$u20$32$u5d$$GT$::default::h12029fa6a59c7be6(&var_1b8);
                arg7 = var_1b8;
                rcx = *var_1b7[7];
                rax_2 = *var_1b7[0xf];
                arg3 = var_1a0;
            }
            else
            {
                arg3 = *(r14 + 0x173);
                rax_2 = *(r14 + 0x16b);
                arg7 = *(r14 + 0x15b);
                rcx = *(r14 + 0x163);
            }
            
            if (!(r14[0xc0] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "valptrlendigestreasonrarbrcrdres…", 3);
                goto label_713ade;
            }
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713ade;
            }
            
            var_188 = *(r14 + 0xc8);
            var_178 = *(r14 + 0x48);
            var_198 = *(r14 + 0x58);
            r15_1 = rdx_1;
            r12_1 = rcx_2;
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            rbp_1 = -0x7ffffffffffffff3;
            goto label_7134ed;
        }
        case 0x7125d6:
        {
            if (r14[0xe0] & 1)
            {
                if (!(r14[0xf0] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "gas_usedcurve_idoverflowDeadlock…", 8);
                    goto label_713ade;
                }
                
                r12_1 = *(r14 + 0xe8);
                r15_1 = 3;
                
                if (r12_1 < 3)
                    r15_1 = r12_1;
                
                zmm1 = *(r14 + 0xf8);
                rbp_1 = -0x7ffffffffffffff6;
                arg1 = 1;
                r9_1 = 0;
                r10_1 = 0;
                goto label_7134f5;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "resultsenderrecipientnoncesub_id…", 6);
            label_713ade:
            rax_5 = var_1b8;
            zmm0_1 = var_1b7;
            label_713ae7:
            *(result + 0x18) = zmm0_1;
            result[1] = 0;
            result[2] = rax_5;
            *result = -0x7ffffffffffffff2;
            core::ptr::drop_in_place$LT$core..option..Option$LT$fuel_core_client..client..schema..primitives..HexString$GT$$GT$::h06f82e76d483a231(*(r14 + 0x100), *(r14 + 0x108));
            break;
        }
        case 0x71262c:
        {
            int64_t rdi_1;
            
            if (!(r14[0x15a] & 1))
            {
                rdi_1 = 0;
                arg7 = 0;
                rcx = nullptr;
                rax_2 = nullptr;
                
                if (!(r14[0x60] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "ptrlendigestreasonrarbrcrdresult…", 3);
                    goto label_713ade;
                }
            }
            else
            {
                rax_2 = *(r14 + 0x173);
                rcx = *(r14 + 0x16b);
                rdi_1 = *(r14 + 0x15b);
                arg7 = *(r14 + 0x163);
                
                if (!(r14[0x60] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "ptrlendigestreasonrarbrcrdresult…", 3);
                    goto label_713ade;
                }
            }
            
            if (!(r14[0xd0] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "lendigestreasonrarbrcrdresultsen…", 3);
                goto label_713ade;
            }
            
            if (!(r14[0x139] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "digestreasonrarbrcrdresultsender…", 6);
                goto label_7139bb;
            }
            
            arg3 = *(r14 + 0x68);
            arg6 = *(r14 + 0x152);
            int32_t var_135_1 = *(r14 + 0x13d);
            char var_129_1 = r14[0x149];
            r15_1 = *(r14 + 0x100);
            
            if (r15_1 != -0x8000000000000000)
            {
                var_188 = *(r14 + 0xd8);
                r12_1 = *(r14 + 0x108);
                
                if (r14[0x50] & 1)
                {
                    if (!(r14[0x40] & 1))
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                        goto label_713c23;
                    }
                    
                    var_180_2 = *(r14 + 0x48);
                    var_168 = *(r14 + 0x58);
                    var_170 = *(r14 + 0x14a);
                    var_198 = (*(r14 + 0x13a));
                    var_178 = *(r14 + 0x141);
                    r10_1 = r15_1 >> 0x20;
                    r9_1 = -0x10000000000 & r15_1;
                    zmm1 = _mm_unpacklo_epi64(*(r14 + 0x110), rdi_1);
                    rbp_1 = -0x7ffffffffffffffd;
                    arg1 = nullptr;
                    label_713376:
                    arg5 = var_180_2;
                    arg2 = var_198;
                    goto label_7134f5;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                label_713c23:
                int64_t rax_20 = var_1b8;
                *(result + 0x18) = var_1b7;
                result[1] = 0;
                result[2] = rax_20;
                *result = -0x7ffffffffffffff2;
                core::ptr::drop_in_place$LT$rustls..msgs..base..Payload$GT$::h1b47be0ae7f87458(
                    r15_1, r12_1);
            }
            else
            {
                label_712bd6:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "datawdams256RVRTECOPSHA1jneiswwq…", 4);
                int128_t zmm0_4 = var_1b8;
                result[1] = 0;
                *(result + 0x10) = zmm0_4;
                result[4] = *var_1b7[0xf];
                *result = -0x7ffffffffffffff2;
            }
            break;
        }
        case 0x71267a:
        {
            r12_1 = 0;
            char temp2_1 = r14[0x15a] & 1;
            
            if (temp2_1)
            {
                r12_1 = *(r14 + 0x15b);
                arg7 = *(r14 + 0x173);
                
                if (!temp2_1)
                    goto label_712c08;
                
                goto label_71269f;
            }
            
            arg7 = 0;
            
            if (!temp2_1)
            {
                label_712c08:
                zmm0 = {0};
                
                if (!(r14[0xb0] & 1))
                    goto label_7126ca;
                
                goto label_712c2a;
            }
            
            label_71269f:
            zmm0 = *(r14 + 0x163);
            
            if (!(r14[0xb0] & 1))
            {
                label_7126ca:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_78, "reasonrarbrcrdresultsenderrecipi…", 6);
                rax_5 = var_78;
                int128_t var_70;
                zmm0_1 = var_70;
                goto label_713ae7;
            }
            
            label_712c2a:
            arg2 = fuel_core_client::client::schema::primitives::_$LT$impl$u20$core..convert..TryFrom$LT$fuel_core_client..client..schema..primitives..U64$GT$$u20$for$u20$fuel_asm..panic_instruction..PanicInstruction$GT$::try_from::hf514da350207d085(&var_1b8, *(r14 + 0xb8));
            int64_t rax_9 = var_1b8;
            r15_1 = *var_1b7[7];
            r10_1 = *var_1b7[0xb];
            
            if (rax_9 == 0xa)
            {
                if (!(r14[0x50] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                    goto label_713ade;
                }
                
                if (!(r14[0x40] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                    goto label_713ade;
                }
                
                rcx = *(r14 + 0x58);
                rax_2 = *(r14 + 0x48);
                rbp_1 = -0x7ffffffffffffffc;
                arg1 = 1;
                
                if (!(r14[0x220] & 1))
                {
                    r9_1 = 0;
                    var_170 = 0;
                    arg3 = 0;
                    zmm1 = zmm0;
                }
                else
                {
                    var_170 = r14[0x240];
                    var_178 = *(r14 + 0x238);
                    arg6 = *(r14 + 0x230);
                    var_188 = *(r14 + 0x228);
                    arg3 =
                        (*(r14 + 0x221) << 8) + ((r14[0x227] << 0x10 | *(r14 + 0x225)) << 0x28) + 1;
                    r9_1 = 0;
                    arg2 = arg6;
                    zmm1 = zmm0;
                }
                
                goto label_7134f5;
            }
            
            *(result + 0x24) = *var_1a0[4];
            *(result + 0x15) = var_1b7;
            result[1] = rax_9;
            result[2] = r15_1;
            *(result + 0x14) = r10_1;
            *result = -0x7ffffffffffffff2;
            core::ptr::drop_in_place$LT$core..option..Option$LT$fuel_core_client..client..schema..primitives..HexString$GT$$GT$::h06f82e76d483a231(*(r14 + 0x100), *(r14 + 0x108));
            break;
        }
        case 0x7126e4:
        {
            r15_1 = 0;
            char temp3_1 = r14[0x15a] & 1;
            
            if (temp3_1)
            {
                r15_1 = *(r14 + 0x15b);
                r12_1 = *(r14 + 0x163);
                
                if (!temp3_1)
                    goto label_712cfb;
                
                goto label_712709;
            }
            
            r12_1 = 0;
            
            if (temp3_1)
            {
                label_712709:
                zmm1 = *(r14 + 0x16b);
                
                if (!(r14[0x17b] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "toamountgasparam1param2pcisvalpt…", 2);
                    goto label_7139bb;
                }
            }
            else
            {
                label_712cfb:
                zmm1 = {0};
                
                if (!(r14[0x17b] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "toamountgasparam1param2pcisvalpt…", 2);
                    goto label_7139bb;
                }
            }
            
            rax_2 = *(r14 + 0x18c);
            arg3 = *(r14 + 0x194);
            int32_t var_115_1 = *(r14 + 0x17f);
            char var_109_1 = r14[0x18b];
            
            if (!(r14[0x20] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "amountgasparam1param2pcisvalptrl…", 6);
                goto label_713ade;
            }
            
            if (!(r14[0x118] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "assetIdto_addressOutputDryRunTxS…", 7);
                goto label_7139bb;
            }
            
            arg6 = *(r14 + 0x28);
            int32_t var_105_1 = *(r14 + 0x11c);
            char var_f9_1 = r14[0x128];
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713ade;
            }
            
            var_180_2 = *(r14 + 0x48);
            var_168 = *(r14 + 0x58);
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            arg7 = (*(r14 + 0x17c));
            rcx = *(r14 + 0x183);
            var_178 = *(r14 + 0x129);
            var_188 = (*(r14 + 0x119));
            var_170 = *(r14 + 0x131);
            var_198 = *(r14 + 0x120);
            rbp_1 = -0x7ffffffffffffff8;
            label_713373:
            arg1 = 1;
            goto label_713376;
        }
        case 0x712739:
        {
            r15_1 = 0;
            char temp4_1 = r14[0x15a] & 1;
            
            if (temp4_1)
            {
                r15_1 = *(r14 + 0x15b);
                r12_1 = *(r14 + 0x163);
                
                if (!temp4_1)
                    goto label_712f89;
                
                goto label_71275e;
            }
            
            r12_1 = 0;
            
            if (temp4_1)
            {
                label_71275e:
                zmm1 = *(r14 + 0x16b);
                
                if (!(r14[0xc0] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "valptrlendigestreasonrarbrcrdres…", 3);
                    goto label_713ade;
                }
            }
            else
            {
                label_712f89:
                zmm1 = {0};
                
                if (!(r14[0xc0] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "valptrlendigestreasonrarbrcrdres…", 3);
                    goto label_713ade;
                }
            }
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713ade;
            }
            
            arg7 = *(r14 + 0xc8);
            rax_2 = *(r14 + 0x48);
            rcx = *(r14 + 0x58);
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            rbp_1 = -0x7ffffffffffffffe;
            arg1 = 1;
            goto label_7134f5;
        }
        case 0x71278e:
        {
            r15_1 = 0;
            char temp5_1 = r14[0x15a] & 1;
            
            if (temp5_1)
            {
                r15_1 = *(r14 + 0x15b);
                r12_1 = *(r14 + 0x163);
                
                if (!temp5_1)
                    goto label_71300f;
                
                goto label_7127b3;
            }
            
            r12_1 = 0;
            
            if (temp5_1)
            {
                label_7127b3:
                zmm1 = *(r14 + 0x16b);
                
                if (!(r14[0x70] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rarbrcrdresultsenderrecipientnon…", 2);
                    goto label_713ade;
                }
            }
            else
            {
                label_71300f:
                zmm1 = {0};
                
                if (!(r14[0x70] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rarbrcrdresultsenderrecipientnon…", 2);
                    goto label_713ade;
                }
            }
            
            if (!(r14[0x80] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rbrcrdresultsenderrecipientnonce…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x90] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rcrdresultsenderrecipientnoncesu…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0xa0] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rdresultsenderrecipientnoncesub_…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713ade;
            }
            
            arg7 = *(r14 + 0x78);
            rcx = *(r14 + 0x88);
            rax_2 = *(r14 + 0x98);
            arg3 = *(r14 + 0xa8);
            var_198 = *(r14 + 0x48);
            var_188 = *(r14 + 0x58);
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            rbp_1 = -0x7ffffffffffffffa;
            arg1 = 1;
            arg2 = var_198;
            goto label_7134f5;
        }
        case 0x7127e0:
        {
            int64_t rdi_7;
            
            if (!(r14[0x15a] & 1))
            {
                rdi_7 = 0;
                arg7 = 0;
                rcx = nullptr;
                rax_2 = nullptr;
                
                if (!(r14[0x70] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rarbrcrdresultsenderrecipientnon…", 2);
                    goto label_713ade;
                }
            }
            else
            {
                rax_2 = *(r14 + 0x173);
                rcx = *(r14 + 0x16b);
                rdi_7 = *(r14 + 0x15b);
                arg7 = *(r14 + 0x163);
                
                if (!(r14[0x70] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rarbrcrdresultsenderrecipientnon…", 2);
                    goto label_713ade;
                }
            }
            
            if (!(r14[0x80] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "rbrcrdresultsenderrecipientnonce…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x60] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "ptrlendigestreasonrarbrcrdresult…", 3);
                goto label_713ade;
            }
            
            if (!(r14[0xd0] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "lendigestreasonrarbrcrdresultsen…", 3);
                goto label_713ade;
            }
            
            if (!(r14[0x139] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "digestreasonrarbrcrdresultsender…", 6);
                goto label_7139bb;
            }
            
            arg3 = *(r14 + 0x78);
            int64_t* rsi_13 = *(r14 + 0x88);
            var_198 = *(r14 + 0x68);
            var_178 = *(r14 + 0xd8);
            var_168 = *(r14 + 0x14a);
            int32_t var_125_1 = *(r14 + 0x13d);
            char var_119_1 = r14[0x149];
            r15_1 = *(r14 + 0x100);
            
            if (r15_1 == -0x8000000000000000)
                goto label_712bd6;
            
            var_180_1 = *(r14 + 0x152);
            r12_1 = *(r14 + 0x108);
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713c23;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713c23;
            }
            
            var_160 = *(r14 + 0x48);
            var_158 = *(r14 + 0x58);
            var_170 = (*(r14 + 0x13a));
            arg6 = *(r14 + 0x141);
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            zmm1 = _mm_unpacklo_epi64(*(r14 + 0x110), rdi_7);
            rbp_1 = -0x7ffffffffffffff9;
            arg1 = nullptr;
            var_188 = rsi_13;
            goto label_713c00;
        }
        case 0x71282e:
        {
            if (!(r14[0x1bd] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "senderrecipientnoncesub_ida form…", 6);
                goto label_7139bb;
            }
            
            arg7 = *(r14 + 0x1ce);
            rcx = *(r14 + 0x1d6);
            zmm1 = __pinsrw_xmmdq_memw_immb(*(r14 + 0x1be), *(r14 + 0x1c2), 2);
            zmm0 = *(r14 + 0x1c5);
            int48_t var_88_1 = zmm1;
            
            if (!(r14[0x1de] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "recipientnoncesub_ida formatting…", 9);
                goto label_7139bb;
            }
            
            uint32_t rax_6 = r14[0x1cd];
            int64_t* r12_2 = *(r14 + 0x1ef);
            int64_t r9_2 = *(r14 + 0x1e6);
            int32_t r10_2 = *(r14 + 0x1df);
            int32_t var_d5_1 = *(r14 + 0x1e2);
            char var_c9_1 = r14[0x1ee];
            
            if (!(r14[0x20] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "amountgasparam1param2pcisvalptrl…", 6);
                goto label_713ade;
            }
            
            if (!(r14[0x1ff] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "noncesub_ida formatting trait im…", 5);
                goto label_7139bb;
            }
            
            int64_t rsi_3 = *(r14 + 0x28);
            var_168 = *(r14 + 0x210);
            var_180_1 = *(r14 + 0x218);
            int64_t r10_3 = *(r14 + 0x207);
            int32_t r11_1 = *(r14 + 0x200);
            int32_t var_c5_1 = *(r14 + 0x203);
            char var_b9_1 = r14[0x20f];
            
            if (!(r14[0xd0] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "lendigestreasonrarbrcrdresultsen…", 3);
                goto label_713ade;
            }
            
            if (!(r14[0x139] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "digestreasonrarbrcrdresultsender…", 6);
                char rax_18 = var_1b8;
                var_78 = var_1b7;
                *(result + 0x24) = var_1a4;
                *(result + 0x21) = var_1a7;
                int128_t zmm0_6 = var_78;
                int128_t var_48_1 = zmm0_6;
                *(result + 0x11) = zmm0_6;
                result[1] = 0;
                result[2] = rax_18;
                *result = -0x7ffffffffffffff2;
                core::ptr::drop_in_place$LT$core..option..Option$LT$fuel_core_client..client..schema..primitives..HexString$GT$$GT$::h06f82e76d483a231(*(r14 + 0x100), *(r14 + 0x108));
            }
            else
            {
                var_198 = *(r14 + 0x1f7);
                var_158 = *(r14 + 0xd8);
                int64_t r10_4 = *(r14 + 0x141);
                int32_t r11_2 = *(r14 + 0x13a);
                int32_t var_b5_1 = *(r14 + 0x13d);
                char var_a9_1 = r14[0x149];
                rbp_1 = *(r14 + 0x100);
                
                if (rbp_1 != -0x8000000000000000)
                {
                    zmm1 = _mm_insert_epi16(
                        _mm_insert_epi16(var_88_1, *var_88_1[5] << 8 | *var_88_1[4], 2), 
                        r14[0x1c4], 3);
                    zmm0 =
                        (_mm_slli_si128(zmm0, 7) | (data_489030[0x10][0] & ~zmm1)) & *data_488fa0;
                    zmm1 = _mm_slli_si128(rax_6, 0xf) | zmm0;
                    r15_1 = *(r14 + 0x108);
                    var_178 = rsi_3;
                    var_188 = r12_2;
                    r12_1 = *(r14 + 0x110);
                    rax_2 = r10_2;
                    arg3 = r9_2;
                    var_170 = r11_1;
                    arg6 = r10_3;
                    var_160 = r11_2;
                    var_150 = r10_4;
                    var_58 = *(r14 + 0x14a);
                    r10_1 = r15_1 >> 0x20;
                    r9_1 = -0x10000000000 & r15_1;
                    arg1 = nullptr;
                    label_713c00:
                    arg2 = var_198;
                    arg5 = var_180_1;
                    goto label_7134f5;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "datawdams256RVRTECOPSHA1jneiswwq…", 4);
                int128_t zmm0_3 = var_1b8;
                result[1] = 0;
                *(result + 0x10) = zmm0_3;
                result[4] = *var_1b7[0xf];
                *result = -0x7ffffffffffffff2;
            }
            break;
        }
        case 0x712a1f:
        {
            r15_1 = 0;
            char temp6_1 = r14[0x15a] & 1;
            
            if (temp6_1)
            {
                r15_1 = *(r14 + 0x15b);
                r12_1 = *(r14 + 0x163);
                
                if (!temp6_1)
                    goto label_713233;
                
                goto label_712a44;
            }
            
            r12_1 = 0;
            
            if (temp6_1)
            {
                label_712a44:
                zmm1 = *(r14 + 0x16b);
                
                if (!(r14[0x19c] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "to_addressOutputDryRunTxStatusSc…", 0xa);
                    goto label_7139bb;
                }
            }
            else
            {
                label_713233:
                zmm1 = {0};
                
                if (!(r14[0x19c] & 1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "to_addressOutputDryRunTxStatusSc…", 0xa);
                    goto label_7139bb;
                }
            }
            
            rax_2 = *(r14 + 0x1ad);
            arg3 = *(r14 + 0x1b5);
            int32_t var_f5_1 = *(r14 + 0x1a0);
            char var_e9_1 = r14[0x1ac];
            
            if (!(r14[0x20] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "amountgasparam1param2pcisvalptrl…", 6);
                goto label_713ade;
            }
            
            if (!(r14[0x118] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "assetIdto_addressOutputDryRunTxS…", 7);
                goto label_7139bb;
            }
            
            arg6 = *(r14 + 0x28);
            int32_t var_e5_1 = *(r14 + 0x11c);
            char var_d9_1 = r14[0x128];
            
            if (!(r14[0x50] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "pcisvalptrlendigestreasonrarbrcr…", 2);
                goto label_713ade;
            }
            
            if (!(r14[0x40] & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6bd9d4397e2e1910(&var_1b8, "isvalptrlendigestreasonrarbrcrdr…", 2);
                goto label_713ade;
            }
            
            var_180_2 = *(r14 + 0x48);
            var_168 = *(r14 + 0x58);
            r10_1 = r15_1 >> 0x20;
            r9_1 = -0x10000000000 & r15_1;
            arg7 = (*(r14 + 0x19d));
            rcx = *(r14 + 0x1a4);
            var_178 = *(r14 + 0x129);
            var_188 = (*(r14 + 0x119));
            var_170 = *(r14 + 0x131);
            var_198 = *(r14 + 0x120);
            rbp_1 = -0x7ffffffffffffff7;
            goto label_713373;
        }
    }
    
    return result;
}
