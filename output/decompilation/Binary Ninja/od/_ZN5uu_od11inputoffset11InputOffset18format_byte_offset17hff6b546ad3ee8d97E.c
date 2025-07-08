
  int128_t* uu_od::inputoffset::InputOffset::format_byte_offset::hff6b546ad3ee8d97(int128_t* arg1, int64_t* arg2)

{
    int64_t rcx = *arg2;
    int64_t rax = arg2[1];
    void* const var_d0;
    int64_t var_a0;
    void* var_98;
    int64_t var_78;
    uint64_t (* rax_1)(int64_t* arg1, int64_t* arg2);
    uint64_t (* rax_2)(int64_t* arg1, int64_t* arg2);
    
    switch (arg2[3])
    {
        case 0:
        {
            if (!rcx)
            {
                var_98 = &arg2[2];
                rax_2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                label_4cf502:
                uint64_t (* var_90_4)(int64_t* arg1, int64_t* arg2) = rax_2;
                var_78 = 2;
                int64_t var_68_4 = 0;
                int64_t var_60_4 = 7;
                goto label_4cf554;
            }
            
            var_a0 = rax;
            var_98 = &arg2[2];
            rax_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            label_4cf2d4:
            uint64_t (* var_90_1)(int64_t* arg1, int64_t* arg2) = rax_1;
            int64_t* var_88_1 = &var_a0;
            uint64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) = rax_1;
            var_78 = 2;
            int64_t var_68_1 = 0;
            int64_t var_60_1 = 7;
            int64_t var_58_1 = 0;
            int64_t var_50_1 = 0x800000020;
            char var_48_1 = 3;
            int64_t var_40_1 = 2;
            int64_t var_30_1 = 0;
            int64_t var_28;
            __builtin_memcpy(&var_28, 
                "\x07\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x08\x00\x00\x00", 0x18);
            goto label_4cf47c;
        }
        case 1:
        {
            if (!rcx)
            {
                var_98 = &arg2[2];
                uint64_t (* var_90_5)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::h6330a933029ad3d6;
                var_78 = 2;
                int64_t var_68_5 = 0;
                int64_t var_60_5 = 6;
                label_4cf554:
                int64_t var_58_4 = 0;
                int64_t var_50_4 = 0x800000020;
                char var_48_4 = 3;
                var_d0 = &data_40dad0;
                int64_t var_c8_3 = 1;
                goto label_4cf594;
            }
            
            var_a0 = rax;
            var_98 = &arg2[2];
            uint64_t (* var_90_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::h6330a933029ad3d6;
            int64_t* var_88_2 = &var_a0;
            uint64_t (* var_80_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::h6330a933029ad3d6;
            var_78 = 2;
            int64_t var_68_3 = 0;
            int64_t var_60_3 = 6;
            int64_t var_58_3 = 0;
            int64_t var_50_3 = 0x800000020;
            char var_48_3 = 3;
            int64_t var_40_2 = 2;
            int64_t var_30_2 = 0;
            int64_t var_28_1;
            __builtin_memcpy(&var_28_1, 
                "\x06\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x08\x00\x00\x00", 0x18);
            label_4cf47c:
            char var_10_1 = 3;
            var_d0 = &data_541a30;
            int64_t var_c8_2 = 3;
            int64_t* var_b0_1 = &var_78;
            int64_t var_a8_1 = 2;
            void** var_c0_1 = &var_98;
            int64_t var_b8_1 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_d0);
            break;
        }
        case 2:
        {
            if (!rcx)
            {
                var_98 = &arg2[2];
                rax_2 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::hbfb7d5c20b1afefa;
                goto label_4cf502;
            }
            
            var_a0 = rax;
            var_98 = &arg2[2];
            rax_1 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::hbfb7d5c20b1afefa;
            goto label_4cf2d4;
        }
        case 3:
        {
            if (!rcx)
            {
                *arg1 = 0;
                *(arg1 + 8) = 1;
                arg1[1] = 0;
            }
            else
            {
                var_a0 = rax;
                var_98 = &var_a0;
                uint64_t (* var_90_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::hbfb7d5c20b1afefa;
                var_78 = 2;
                int64_t var_68_2 = 0;
                int64_t var_60_2 = 7;
                int64_t var_58_2 = 0;
                int64_t var_50_2 = 0x800000020;
                char var_48_2 = 3;
                var_d0 = &data_541a60;
                int64_t var_c8_1 = 2;
                label_4cf594:
                int64_t* var_b0_2 = &var_78;
                int64_t var_a8_2 = 1;
                void** var_c0_2 = &var_98;
                int64_t var_b8_2 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_d0);
            }
            break;
        }
    }
    
    return arg1;
}
