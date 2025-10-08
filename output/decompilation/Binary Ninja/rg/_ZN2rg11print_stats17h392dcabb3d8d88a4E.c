
  int64_t rg::print_stats::h392dcabb3d8d88a4(char arg1, int64_t* arg2, int64_t arg3, int32_t arg4, int64_t* arg5)

{
    int64_t* var_40 = arg2;
    int64_t* var_f8 = arg5;
    void* rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    void* const var_1c0 = rax;
    int32_t var_1b8 = rdx;
    int64_t rax_1;
    int32_t rdx_1;
    rax_1 = std::time::Instant::duration_since::h569f2ab177f38507(&var_1c0, arg3);
    void* const* rsi_18;
    int64_t* rdi_37;
    uint64_t* var_1e8;
    void* var_140;
    int64_t var_110;
    int64_t var_f0;
    int64_t var_d8;
    int64_t var_b8;
    uint64_t var_98;
    int64_t var_78;
    int64_t var_58;
    
    if (arg1 != 5)
    {
        var_f0 = arg2[5];
        var_78 = arg2[4];
        var_d8 = arg2[1];
        var_58 = *arg2;
        var_110 = arg2[3];
        var_b8 = arg2[2];
        uint128_t zmm1 = 0x4530000043300000;
        uint128_t zmm0 = _mm_unpacklo_ps(arg2[6], zmm1);
        double zmm2_1[0x2] = data_461c30;
        zmm0 = _mm_sub_pd(zmm0, zmm2_1);
        uint128_t zmm3_1;
        zmm3_1 = _mm_unpackhi_pd(zmm0, zmm0) + zmm0;
        zmm0 = arg2[7];
        int64_t zmm4_1 = 0x41cdcd6500000000;
        zmm0 = zmm0 / zmm4_1;
        zmm0 = zmm0 + zmm3_1;
        var_1e8 = zmm0;
        zmm0 = _mm_sub_pd(_mm_unpacklo_epi32(rax_1, zmm1), zmm2_1);
        zmm1 = _mm_unpackhi_pd(zmm0, zmm0) + zmm0;
        zmm0 = rdx_1;
        zmm0 = zmm0 / zmm4_1;
        zmm0 = zmm0 + zmm1;
        var_98 = zmm0;
        var_1c0 = &var_f0;
        var_1b8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_1b0_2 = &var_78;
        uint64_t (* var_1a8_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_1a0_1 = &var_d8;
        uint64_t (* var_198_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_190_1 = &var_58;
        uint64_t (* var_188_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_180_1 = &var_110;
        uint64_t (* var_178_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_170_1 = &var_b8;
        uint64_t (* var_168_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        uint64_t** var_160_1 = &var_1e8;
        int64_t (* var_158_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        uint64_t* var_150_1 = &var_98;
        int64_t (* var_148_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        var_140 = &data_7eba90;
        int64_t var_138_1 = 9;
        char const* const var_120_1 = &data_488198;
        int64_t var_118_1 = 8;
        void* const* var_130_1 = &var_1c0;
        int64_t var_128_1 = 8;
        rsi_18 = &var_140;
        rdi_37 = arg5;
    }
    else
    {
        var_f0 = 0;
        int64_t var_e0_1 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "type    blueharemakeswigwikiq", 4);
        int64_t var_1b0;
        int64_t var_1d8_1 = var_1b0;
        var_1e8 = var_1c0;
        serde_json::value::to_value::h9b884c3313170568(&var_1c0);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_f0, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "dataTYPEsjiscudahaml.env>", 4);
        int64_t var_68_1 = var_1b0;
        var_78 = var_1c0;
        var_d8 = 0;
        int64_t var_c8_1 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "statsCountCountMatchesPathWithMa…", 5);
        int64_t var_1d8_2 = var_1b0;
        var_1e8 = var_1c0;
        serde_json::value::to_value::hd3cf780181016ac1(&var_1c0, &var_40);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_d8, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "elapsed_totalsummarys", 0xd);
        int64_t var_48_1 = var_1b0;
        var_58 = var_1c0;
        var_110 = 0;
        int64_t var_100_1 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "secsCrlfHelpcfml*.elFAILbi", 4);
        int64_t var_1d8_3 = var_1b0;
        var_1e8 = var_1c0;
        int64_t var_c0 = rax_1;
        serde_json::value::to_value::ha9b98d7eed1ac666(&var_1c0, &var_c0);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_110, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "nanoshuman,\nConvert/home/34r7hm…", 5);
        int64_t var_1d8_4 = var_1b0;
        var_1e8 = var_1c0;
        int32_t var_1c4 = rdx_1;
        serde_json::value::to_value::hc15361f9ea26f491(&var_1c0, &var_1c4);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_110, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        uint64_t rdx_6 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "human,\nConvert/home/34r7hm4n/de…", 5);
        int64_t var_a8_1 = var_1b0;
        var_b8 = var_1c0;
        uint128_t zmm0_7 =
            __subpd_xmmpd_mempd(__unpcklps_xmmps_memdq(var_c0, data_461e20[0x10][0]), data_461c30);
        uint128_t zmm1_1;
        zmm1_1 = _mm_unpackhi_pd(zmm0_7, zmm0_7) + zmm0_7;
        zmm0_7 = var_1c4;
        zmm0_7 = zmm0_7 / 1000000000.0;
        zmm0_7 = zmm0_7 + zmm1_1;
        uint64_t var_38 = zmm0_7;
        var_1e8 = &var_38;
        int64_t (* var_1e0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        var_1c0 = &data_7eba70;
        var_1b8 = 2;
        void* const var_1a0 = &data_488100;
        int64_t var_198 = 1;
        uint64_t** var_1b0_1 = &var_1e8;
        int64_t var_1a8 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_140, 0, rdx_6, &var_1c0);
        var_1e8 = var_140;
        int64_t var_130;
        int64_t var_1d8_5 = var_130;
        serde_json::value::to_value::h83523e29100ac411(&var_1c0, &var_1e8);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_110, &var_b8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
        var_1b8 = var_110;
        int64_t var_1a8_1 = var_100_1;
        var_1c0 = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_140, &var_d8, &var_58, &var_1c0);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_140);
        var_1b8 = var_d8;
        int64_t var_1a8_2 = var_c8_1;
        var_1c0 = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_140, &var_f0, &var_78, &var_1c0);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_140);
        int128_t var_90_1 = var_f0;
        int64_t var_80_1 = var_e0_1;
        var_98 = 5;
        int64_t* rax_14 = serde_json::ser::to_writer::hcb3e94a5d682d067(&var_f8, &var_98);
        
        if (rax_14)
        {
            int64_t result = serde_json::error::_$LT$impl$u20$core..convert..From$LT$serde_json..error..Error$GT$$u20$for$u20$std..io..error..Error$GT$::from::hd3d83d02bc2def03(rax_14);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h7fbac2ba78196538(&var_98);
            return result;
        }
        
        uint64_t zmm0_12[0x2] =
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h7fbac2ba78196538(&var_98);
        var_1c0 = &data_7ea358;
        var_1b8 = 1;
        int64_t var_1b0_3 = 8;
        var_1a8_2 = _mm_xor_pd(zmm0_12, zmm0_12);
        rdi_37 = var_f8;
        rsi_18 = &var_1c0;
    }
    return std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$W$GT$::write_fmt::ha2617aff0fbcfeb9(rdi_37, rsi_18);
}
