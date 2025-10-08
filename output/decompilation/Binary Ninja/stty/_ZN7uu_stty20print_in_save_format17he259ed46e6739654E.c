
  void* uu_stty::print_in_save_format::he259ed46e6739654(int128_t* arg1)

{
    int32_t var_b8 = *(arg1 + 0x68);
    int32_t var_b4 = *(arg1 + 0x6c);
    int32_t var_bc = arg1[7];
    int32_t var_40 = *(arg1 + 0x74);
    int32_t* var_b0 = &var_b8;
    uint64_t (* var_a8)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    int32_t* var_a0 = &var_b4;
    uint64_t (* var_98)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    int32_t* var_90 = &var_bc;
    uint64_t (* var_88)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    int32_t* var_80 = &var_40;
    uint64_t (* var_78)(int32_t* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    void* const var_70 = &data_4e2f68;
    int64_t var_68 = 4;
    int64_t var_50 = 0;
    int32_t** var_60 = &var_b0;
    int64_t var_58 = 4;
    std::io::stdio::_print::h5e446ff973c02de6(&var_70);
    var_50 = arg1[1];
    var_60 = *arg1;
    var_70 = nullptr;
    int64_t var_68_1 = 0x20;
    char rax_4;
    char rdx;
    rax_4 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hc81e3e552d30d6ce(&var_70);
    
    if (rax_4 & 1)
    {
        char rax_5;
        
        do
        {
            var_bc = rdx;
            var_40 = &var_bc;
            uint64_t (* var_38_1)(char* arg1, int64_t* arg2) = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i8$GT$::fmt::hb8ba8748e41ecb7b;
            var_b0 = &data_4e2fa8;
            int64_t var_a8_1 = 1;
            int64_t var_90_1 = 0;
            int32_t* var_a0_1 = &var_40;
            var_98 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_b0);
            rax_5 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hc81e3e552d30d6ce(&var_70);
        } while (rax_5 & 1);
    }
    
    var_b0 = &data_4e2ac0;
    int64_t var_a8_2 = 1;
    int64_t var_a0_2 = 8;
    var_98 = {0};
    return std::io::stdio::_print::h5e446ff973c02de6(&var_b0);
}
