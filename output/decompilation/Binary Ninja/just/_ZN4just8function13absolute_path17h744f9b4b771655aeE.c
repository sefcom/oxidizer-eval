
  int64_t* just::function::absolute_path::h744f9b4b771655ae(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    void* r13 = *arg2;
    int32_t var_b0;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_b0, 
        *(r13 + 0x10), *(r13 + 0x18));
    int64_t var_a8;
    uint64_t var_a0;
    int128_t var_80;
    std::path::Path::join::h1eac0ae5e7efa361(&var_80, var_a8, var_a0, arg3);
    int64_t var_78;
    uint64_t var_70;
    void var_58;
    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(
        &var_58, var_78, var_70);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_80);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_b0);
    char* var_50;
    int64_t var_48;
    uint64_t rdx_4 = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_b0, var_50, var_48);
    int64_t rax_2;
    
    if (var_b0 != 1)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_b0, var_a8, var_a0);
        arg1[3] = var_a0;
        *(arg1 + 8) = var_b0;
        rax_2 = 0;
    }
    else
    {
        var_80 = *(*(r13 + 0x18) + 0x20);
        int128_t* var_68 = &var_80;
        uint64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_b0 = &data_82fd60;
        int64_t var_a8_1 = 1;
        int64_t var_90_1 = 0;
        int128_t** var_a0_1 = &var_68;
        int64_t var_98_1 = 1;
        int128_t var_40;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_40, 0, rdx_4, &var_b0);
        int64_t var_30;
        arg1[3] = var_30;
        *(arg1 + 8) = var_40;
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_58);
    return arg1;
}
