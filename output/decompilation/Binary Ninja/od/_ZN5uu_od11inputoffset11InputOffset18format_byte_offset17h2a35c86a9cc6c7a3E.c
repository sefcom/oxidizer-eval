
  int128_t* uu_od::inputoffset::InputOffset::format_byte_offset::h2a35c86a9cc6c7a3(int128_t* arg1, char* arg2)

{
    char rcx = *arg2;
    int64_t rax = *(arg2 + 8);
    void* const var_60;
    int64_t var_30;
    void* var_28;
    uint64_t (* rax_1)(int64_t* arg1, int64_t* arg2);
    void* const rax_2;
    uint64_t (* rax_3)(int64_t* arg1, int64_t* arg2);
    void* const rax_5;
    
    switch (arg2[0x18])
    {
        case 0:
        {
            if (!(rcx & 1))
            {
                var_28 = &arg2[0x10];
                rax_3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                label_468b8a:
                uint64_t (* var_20_3)(int64_t* arg1, int64_t* arg2) = rax_3;
                var_60 = &data_41a940;
                int64_t var_58_3 = 1;
                label_468ba4:
                rax_5 = &data_41cc50;
                goto label_468bde;
            }
            
            var_30 = rax;
            var_28 = &arg2[0x10];
            rax_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            label_468a61:
            uint64_t (* var_20)(int64_t* arg1, int64_t* arg2) = rax_1;
            int64_t* var_18_1 = &var_30;
            uint64_t (* var_10_1)(int64_t* arg1, int64_t* arg2) = rax_1;
            var_60 = &data_5023c8;
            int64_t var_58 = 3;
            rax_2 = &data_41cc88;
            goto label_468b22;
        }
        case 1:
        {
            if (!(rcx & 1))
            {
                var_28 = &arg2[0x10];
                uint64_t (* var_20_4)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::he7646be51d1ce660;
                var_60 = &data_41a940;
                int64_t var_58_4 = 1;
                rax_5 = &data_41cce8;
                label_468bde:
                void* const var_40_1 = rax_5;
                int64_t var_38_1 = 1;
                void** var_50_1 = &var_28;
                int64_t var_48_1 = 1;
            }
            else
            {
                var_30 = rax;
                var_28 = &arg2[0x10];
                uint64_t (* var_20_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::he7646be51d1ce660;
                int64_t* var_18_2 = &var_30;
                uint64_t (* var_10_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::he7646be51d1ce660;
                var_60 = &data_5023c8;
                int64_t var_58_2 = 3;
                rax_2 = &data_41cd18;
                label_468b22:
                void* const var_40 = rax_2;
                int64_t var_38 = 2;
                void** var_50 = &var_28;
                int64_t var_48 = 2;
            }
            break;
        }
        case 2:
        {
            if (!(rcx & 1))
            {
                var_28 = &arg2[0x10];
                rax_3 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::h042f6d21a8c17b59;
                goto label_468b8a;
            }
            
            var_30 = rax;
            var_28 = &arg2[0x10];
            rax_1 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::h042f6d21a8c17b59;
            goto label_468a61;
        }
        case 3:
        {
            if (!(rcx & 1))
            {
                *arg1 = 0;
                *(arg1 + 8) = 1;
                arg1[1] = 0;
                return arg1;
            }
            
            var_30 = rax;
            var_28 = &var_30;
            uint64_t (* var_20_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::h042f6d21a8c17b59;
            var_60 = &data_5023f8;
            int64_t var_58_1 = 2;
            goto label_468ba4;
        }
    }
    
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_60);
    return arg1;
}
