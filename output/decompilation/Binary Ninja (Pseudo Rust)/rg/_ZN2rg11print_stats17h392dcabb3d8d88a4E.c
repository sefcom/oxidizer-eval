
  fn rg::print_stats::h392dcabb3d8d88a4(arg1: i8, arg2: *mut i64, arg3: i64, arg4: i32, arg5: *mut i64) -> i64

{
    let mut var_40: *mut i64 = arg2;
    let mut var_f8: *mut i64 = arg5;
    let mut rax: *mut c_void;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    let mut var_1c0: *mut c_void = rax;
    let mut var_1b8: i32 = rdx;
    let mut rax_1: i64;
    let mut rdx_1: i32;
    rax_1 = std::time::Instant::duration_since::h569f2ab177f38507(&var_1c0, arg3);
    let mut rsi_18: *const *mut c_void;
    let mut rdi_37: *mut i64;
    let mut var_1e8: *mut u64;
    let mut var_140: *mut c_void;
    let mut var_110: i64;
    let mut var_f0: i64;
    let mut var_d8: i64;
    let mut var_b8: i64;
    let mut var_98: u64;
    let mut var_78: i64;
    let mut var_58: i64;
    
    if arg1 != 5
    {
        var_f0 = arg2[5];
        var_78 = arg2[4];
        var_d8 = arg2[1];
        var_58 = *arg2;
        var_110 = arg2[3];
        var_b8 = arg2[2];
        let mut zmm1: u128 = 0x4530000043300000;
        let mut zmm0: u128 = _mm_unpacklo_ps(arg2[6], zmm1);
        let zmm2_1: [f64; 0x2] = data_461c30;
        zmm0 = _mm_sub_pd(zmm0, zmm2_1);
        let mut zmm3_1: u128;
        zmm3_1 = _mm_unpackhi_pd(zmm0, zmm0) + zmm0;
        zmm0 = arg2[7];
        let zmm4_1: i64 = 0x41cdcd6500000000;
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
        let var_1b0_2: *mut i64 = &var_78;
        let var_1a8_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_1a0_1: *mut i64 = &var_d8;
        let var_198_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_190_1: *mut i64 = &var_58;
        let var_188_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_180_1: *mut i64 = &var_110;
        let var_178_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_170_1: *mut i64 = &var_b8;
        let var_168_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_160_1: *mut *mut u64 = &var_1e8;
        let var_158_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        let var_150_1: *mut u64 = &var_98;
        let var_148_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        var_140 = &data_7eba90;
        let var_138_1: i64 = 9;
        let var_120_1: *const i8 = &data_488198;
        let var_118_1: i64 = 8;
        let var_130_1: *const *mut c_void = &var_1c0;
        let var_128_1: i64 = 8;
        rsi_18 = &var_140;
        rdi_37 = arg5;
    }
    else
    {
        var_f0 = 0;
        let var_e0_1: i64 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "type    blueharemakeswigwikiq", 4);
        let var_1b0: i64;
        let var_1d8_1: i64 = var_1b0;
        var_1e8 = var_1c0;
        serde_json::value::to_value::h9b884c3313170568(&var_1c0);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_f0, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "dataTYPEsjiscudahaml.env>", 4);
        let var_68_1: i64 = var_1b0;
        var_78 = var_1c0;
        var_d8 = 0;
        let var_c8_1: i64 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "statsCountCountMatchesPathWithMa…", 5);
        let var_1d8_2: i64 = var_1b0;
        var_1e8 = var_1c0;
        serde_json::value::to_value::hd3cf780181016ac1(&var_1c0, &var_40);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_d8, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "elapsed_totalsummarys", 0xd);
        let var_48_1: i64 = var_1b0;
        var_58 = var_1c0;
        var_110 = 0;
        let var_100_1: i64 = 0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "secsCrlfHelpcfml*.elFAILbi", 4);
        let var_1d8_3: i64 = var_1b0;
        var_1e8 = var_1c0;
        let mut var_c0: i64 = rax_1;
        serde_json::value::to_value::ha9b98d7eed1ac666(&var_1c0, &var_c0);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_110, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "nanoshuman,\nConvert/home/34r7hm…", 5);
        let var_1d8_4: i64 = var_1b0;
        var_1e8 = var_1c0;
        let mut var_1c4: i32 = rdx_1;
        serde_json::value::to_value::hc15361f9ea26f491(&var_1c0, &var_1c4);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_110, &var_1e8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        let rdx_6: u64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1c0, "human,\nConvert/home/34r7hm4n/de…", 5);
        let var_a8_1: i64 = var_1b0;
        var_b8 = var_1c0;
        let mut zmm0_7: u128 =
            __subpd_xmmpd_mempd(__unpcklps_xmmps_memdq(var_c0, data_461e20[0x10][0]), data_461c30);
        let mut zmm1_1: u128;
        zmm1_1 = _mm_unpackhi_pd(zmm0_7, zmm0_7) + zmm0_7;
        zmm0_7 = var_1c4;
        zmm0_7 = zmm0_7 / 1000000000.0;
        zmm0_7 = zmm0_7 + zmm1_1;
        let mut var_38: u64 = zmm0_7;
        var_1e8 = &var_38;
        let var_1e0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        var_1c0 = &data_7eba70;
        var_1b8 = 2;
        let var_1a0: *mut c_void = &data_488100;
        let var_198: i64 = 1;
        let var_1b0_1: *mut *mut u64 = &var_1e8;
        let var_1a8: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_140, 0, rdx_6, &var_1c0);
        var_1e8 = var_140;
        let var_130: i64;
        let var_1d8_5: i64 = var_130;
        serde_json::value::to_value::h83523e29100ac411(&var_1c0, &var_1e8);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha4f783251da9b1dd(&var_140, &var_1c0);
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_1c0, &var_110, &var_b8, &var_140);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_1c0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
        var_1b8 = var_110;
        let var_1a8_1: i64 = var_100_1;
        var_1c0 = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_140, &var_d8, &var_58, &var_1c0);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_140);
        var_1b8 = var_d8;
        let mut var_1a8_2: i64 = var_c8_1;
        var_1c0 = 5;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hd74ee3e33cd8720b(
            &var_140, &var_f0, &var_78, &var_1c0);
        core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::hd89f41efcd768063(&var_140);
        let var_90_1: i128 = var_f0;
        let var_80_1: i64 = var_e0_1;
        var_98 = 5;
        let rax_14: *mut i64 = serde_json::ser::to_writer::hcb3e94a5d682d067(&var_f8, &var_98);
        
        if rax_14 != 0
        {
            let result: i64 = serde_json::error::_$LT$impl$u20$core..convert..From$LT$serde_json..error..Error$GT$$u20$for$u20$std..io..error..Error$GT$::from::hd3d83d02bc2def03(rax_14);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h7fbac2ba78196538(&var_98);
            return result;
        }
        
        let zmm0_12: [u64; 0x2] =
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h7fbac2ba78196538(&var_98);
        var_1c0 = &data_7ea358;
        var_1b8 = 1;
        let var_1b0_3: i64 = 8;
        var_1a8_2 = _mm_xor_pd(zmm0_12, zmm0_12);
        rdi_37 = var_f8;
        rsi_18 = &var_1c0;
    }
    std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$W$GT$::write_fmt::ha2617aff0fbcfeb9(rdi_37, rsi_18)
}
