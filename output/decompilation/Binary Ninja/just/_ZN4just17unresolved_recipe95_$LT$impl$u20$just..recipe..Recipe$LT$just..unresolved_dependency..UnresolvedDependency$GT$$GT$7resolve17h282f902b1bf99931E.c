
  int64_t just::unresolved_recipe::_$LT$impl$u20$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::resolve::h282f902b1bf99931(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, int64_t* arg5)

{
    int64_t r8 = arg2[5];
    int64_t var_190 = r8;
    int64_t rax_1 = arg5[2];
    int64_t var_188 = rax_1;
    uint64_t var_1f8;
    void** const var_158;
    int64_t var_68;
    
    if (r8 != rax_1)
    {
        int64_t var_180 = r8;
        var_68 = rax_1;
        var_1f8 = &var_180;
        uint64_t (* var_1f0)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_1e8_2 = &var_68;
        uint64_t (* var_1e0)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_158 = &data_831928;
        int64_t var_150_1 = 2;
        uint64_t* var_148_2 = &var_1f8;
        int64_t var_140_2 = 2;
        int64_t var_138_2 = 0;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_190, &var_188, &var_158);
        /* no return */
    }
    
    int64_t rsi = arg2[4];
    core::iter::traits::iterator::Iterator::zip::hdb4c70db203b6305(&var_68, rsi, r8 * 0x30 + rsi, 
        arg5[1], r8);
    void* i_2;
    int64_t* rdx_3;
    i_2 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h23faae95849f4f62(&var_68);
    int64_t var_148;
    
    if (i_2)
    {
        void* i_1 = i_2;
        int64_t* r13_1 = rdx_3;
        void* i;
        
        do
        {
            void* rax_3;
            uint64_t rdx_4;
            rax_3 = just::token::Token::lexeme::h66587cdf67f63270(
                just::namepath::Namepath::last::hd204dfab89d26ff3(*(i_1 + 0x20), *(i_1 + 0x28)));
            void* var_178 = rax_3;
            uint64_t var_170_1 = rdx_4;
            void* rax_4;
            int64_t rdx_5;
            rax_4 = just::token::Token::lexeme::h66587cdf67f63270(*r13_1 + 0xa0);
            void* var_168 = rax_4;
            int64_t var_160_1 = rdx_5;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_3, rdx_4, rax_4, rdx_5))
            {
                var_158 = nullptr;
                core::panicking::assert_failed::hd806a79f1961bff5(0, &var_178, &var_168, &var_158);
                /* no return */
            }
            
            void* rax_6 = *r13_1;
            just::recipe::Recipe$LT$D$GT$::argument_range::hb6d51d234f252302(&var_158, 
                *(rax_6 + 0x60), *(rax_6 + 0x68));
            
            if (!
                core::ops::range::RangeBounds::contains::hb1bc8a8e40d7f57e(&var_158, *(i_1 + 0x10)))
            {
                int128_t* rax_19 =
                    just::namepath::Namepath::last::hd204dfab89d26ff3(*(i_1 + 0x20), *(i_1 + 0x28));
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha18ac3b8a47dca8f(&var_158, *(i_1 + 0x20), *(i_1 + 0x28));
                var_1f8 = var_158;
                int64_t rbp_1 = *(i_1 + 0x10);
                void* rax_21 = *r13_1;
                int32_t* rbx_3 = *(rax_21 + 0x60);
                int64_t r14_3 = *(rax_21 + 0x68);
                int64_t rax_22 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hca6170881fec0ef2(rbx_3, r14_3 * 0xd0 + rbx_3);
                int64_t rax_23 =
                    just::recipe::Recipe$LT$D$GT$::max_arguments::h4d291109c050f382(rbx_3, r14_3);
                int64_t var_150;
                var_150 = var_1f8;
                int64_t var_140_1 = var_148;
                int64_t var_138_1 = rbp_1;
                int64_t var_130_1 = rax_22;
                int128_t var_128;
                var_128 = rax_23;
                var_158 = -0x8000000000000019;
                just::token::Token::error::h986494da066a4455(&var_1f8, rax_19, &var_158);
                int128_t var_1b8;
                *(arg1 + 0x48) = var_1b8;
                int128_t zmm0_3 = var_1f8;
                int128_t var_1c8;
                *(arg1 + 0x38) = var_1c8;
                int128_t var_1d8;
                *(arg1 + 0x28) = var_1d8;
                *(arg1 + 0x18) = var_148;
                *(arg1 + 8) = zmm0_3;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$$GT$::h1d087e065d0c4e7c(arg5);
                return core::ptr::drop_in_place$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::ha19f91e5b971396e(arg2);
            }
            
            int64_t* rdx_8;
            i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h23faae95849f4f62(&var_68);
            i_1 = i;
            r13_1 = rdx_8;
        } while (i);
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ac5e7818b1c5b68(&var_1f8, &arg2[3]);
    core::iter::traits::iterator::Iterator::zip::ha813e2278cf83b22(&var_158, &var_1f8, arg5);
    core::iter::traits::iterator::Iterator::collect::hc7286269246af594(&var_68, &var_158);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_158, arg3, arg4);
    var_1f8 = var_158;
    
    if (var_148)
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_1f8, ":: [private]\nexport no entry fo…", " [private]\nexport no entry foun…");
    
    void* rax_9;
    void* rdx_11;
    rax_9 = just::token::Token::lexeme::h66587cdf67f63270(&arg2[0x12]);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_1f8, rax_9, rdx_11 + rax_9);
    int64_t var_70_1 = arg2[0x1d];
    int128_t var_80_1 = *(arg2 + 0xd8);
    int64_t var_58;
    int64_t var_130 = var_58;
    int64_t var_140;
    var_140 = var_68;
    int128_t var_f8_1 = *(arg2 + 0x60);
    int64_t var_e8_1 = arg2[0xe];
    int32_t rbx_2 = arg2[0x1f];
    int64_t var_118_1 = arg2[8];
    int128_t var_128_1 = *(arg2 + 0x30);
    int128_t var_c8_1 = *(arg2 + 0x90);
    int128_t var_b8_1 = *(arg2 + 0xa0);
    int128_t var_a8_1 = *(arg2 + 0xb0);
    int128_t var_98_1 = *(arg2 + 0xc0);
    int64_t var_88_1 = arg2[0x1a];
    int128_t var_e0_1 = var_1f8;
    int64_t var_d0_1 = var_148;
    int128_t var_110_1 = *(arg2 + 0x48);
    int64_t var_100_1 = arg2[0xb];
    int64_t r14_2 = arg2[0x1e];
    int16_t rbp = *(arg2 + 0xfc);
    char r15_2 = *(arg2 + 0xfe);
    var_158 = *arg2;
    int64_t var_148_1 = arg2[2];
    memcpy(arg1, &var_158, 0xf0);
    arg1[0x1e] = r14_2;
    arg1[0x1f] = rbx_2;
    *(arg1 + 0xfc) = rbp;
    *(arg1 + 0xfe) = r15_2;
    return core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&arg2[0xf]);
}
