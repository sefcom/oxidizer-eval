
  void* uu_nohup::find_stdout::hadffd7477f170ba3(int128_t** arg1)

{
    char var_f8;
    std::env::var::h9bd4fb999c9dbe8d(&var_f8, "POSIXLY_CORRECTsrc/uu/nohup/src/…");
    char r15 = var_f8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he0e3335e5b80ba06(&var_f8);
    int64_t var_78 = 0x1b600000000;
    int16_t var_6c = 0;
    int32_t var_70 = 0;
    var_6c = 1;
    *var_70[2] = 1;
    int32_t var_58;
    std::fs::OpenOptions::open::h9017e185fad19e88(&var_58, &var_78, 
        "nohup.out(uutils coreutils) 0.0.…");
    int64_t* var_c8;
    int64_t var_b0;
    
    if (var_58 != 1)
    {
        int64_t rax_2;
        int64_t rdx_2;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_b0 = rax_2;
        int64_t var_a8_1 = rdx_2;
        var_c8 = &var_b0;
        int64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2ca060958355d931;
        var_f8 = &data_4dec18;
        int64_t var_f0_2 = 2;
        int64_t var_d8_1 = 0;
        int64_t** var_e8_1 = &var_c8;
        int64_t var_e0_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
        var_b0 = 0;
        char const* const var_a8_2 = "nohup.out(uutils coreutils) 0.0.…";
        int64_t var_a0_1 = 9;
        char var_98_1 = 1;
        var_c8 = &var_b0;
        int64_t (* var_c0_2)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_f8 = &data_4dec38;
        int64_t var_f0_3 = 2;
        int64_t var_d8_2 = 0;
        int64_t** var_e8_2 = &var_c8;
        int64_t var_e0_2 = 1;
        void* result = std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
        int32_t var_54;
        arg1[1] = var_54;
        *arg1 = nullptr;
        return result;
    }
    
    int64_t* var_50;
    int64_t* var_80 = var_50;
    std::env::var::h9bd4fb999c9dbe8d(&var_b0, &data_417224[0xc]);
    int32_t r14_1 = ((r15 ^ 1) << 1) + 0x7d;
    uint64_t var_e8;
    
    if (var_b0 == 1)
    {
        var_e8 = r14_1;
        int64_t* var_f0_1 = var_50;
        var_f8 = -0x7ffffffffffffffe;
        *arg1 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_f8);
        arg1[1] = &data_4debb0;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::he0e3335e5b80ba06(&var_b0);
    }
    
    int64_t var_a8;
    var_c8 = var_a8;
    std::path::PathBuf::push::h7e011101ff3a8e62(&var_c8);
    char* var_c0;
    char var_98;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_f8, var_c0, var_98);
    
    if (var_f8 & 1)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t var_68 = 0x1b600000000;
    int16_t var_5c_1 = 0;
    int32_t var_60_1 = 0;
    var_5c_1 = 1;
    *var_60_1[2] = 1;
    int32_t var_48;
    std::fs::OpenOptions::open::hc8219ae85e6b165d(&var_48, &var_68, &var_c8);
    int64_t var_f0;
    int64_t* var_90;
    
    if (var_48 == 1)
    {
        int64_t var_40;
        int64_t var_38_1 = var_40;
        var_90 = var_50;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd404e6f6c4fd17c6(&var_b0, var_f0, var_e8);
        int64_t var_a0;
        int64_t var_e8_3 = var_a0;
        var_f8 = var_b0;
        int32_t var_d0_1 = r14_1;
        int64_t* var_e0_3 = var_50;
        int64_t var_d8_3 = var_40;
        *arg1 = alloc::boxed::Box$LT$T$GT$::new::hea0f551513cd90e2(&var_f8);
        arg1[1] = &data_4debb0;
        return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he63e5d41399ae48f(var_c8, 
            var_c0);
    }
    
    int64_t rax_6;
    int64_t rdx_6;
    rax_6 = uucore::util_name::h074417a1e6395129();
    var_b0 = rax_6;
    int64_t var_a8_3 = rdx_6;
    var_90 = &var_b0;
    int64_t (* var_88_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2ca060958355d931;
    var_f8 = &data_4dec18;
    int64_t var_f0_4 = 2;
    int64_t var_d8_4 = 0;
    int64_t** var_e8_4 = &var_90;
    int64_t var_e0_4 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
    var_b0 = 0;
    int64_t var_a8_4 = var_f0;
    uint64_t var_a0_2 = var_e8;
    char var_98_2 = 1;
    var_90 = &var_b0;
    int64_t (* var_88_2)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_f8 = &data_4dec38;
    int64_t var_f0_5 = 2;
    int64_t var_d8_5 = 0;
    int64_t** var_e8_5 = &var_90;
    int64_t var_e0_5 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_f8);
    int32_t var_44;
    arg1[1] = var_44;
    *arg1 = nullptr;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he63e5d41399ae48f(var_c8, var_c0);
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb34077f862f5102e(&var_80);
}
