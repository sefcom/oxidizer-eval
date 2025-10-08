
  int64_t uu_tee::open::hfa8369b04a0621e7(int64_t* arg1, int64_t arg2, uint64_t arg3, int32_t arg4, char* arg5)

{
    void* const var_c0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hbc1a098f16dd279e(&var_c0, arg2, arg3);
    void* const rax = var_c0;
    int64_t var_d0 = 0x1b600000000;
    int32_t var_c8 = 0;
    int16_t var_c4 = 0;
    
    if (!arg4)
        *var_c8[3] = 1;
    else
        *var_c8[2] = 1;
    
    *var_c8[1] = 1;
    var_c4 = 1;
    int64_t var_b8;
    int32_t var_80;
    std::fs::OpenOptions::open::h2690ee4aec4a6280(&var_80, &var_d0, var_b8);
    
    if (var_80 != 1)
    {
        int32_t var_7c;
        uint64_t rax_4 = alloc::boxed::Box$LT$T$GT$::new::h74aa50a9b650d9d3(var_7c);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hbc1a098f16dd279e(&var_c0, arg2, arg3);
        int64_t var_b0;
        arg1[2] = var_b0;
        *arg1 = var_c0;
        arg1[3] = rax_4;
        arg1[4] = &data_4ea540;
    }
    else
    {
        int64_t var_78;
        int64_t var_d8 = var_78;
        int64_t rax_2;
        int64_t rdx_1;
        rax_2 = uucore::util_name::h074417a1e6395129();
        int64_t var_50 = rax_2;
        int64_t var_48_1 = rdx_1;
        int64_t* var_70 = &var_50;
        int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c0a48ca77de87af;
        var_c0 = &data_4ea4f0;
        int64_t var_b8_1 = 2;
        int64_t var_a0_1 = 0;
        int64_t** var_b0_1 = &var_70;
        int64_t var_a8_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        var_50 = 0;
        int64_t var_48_2 = arg2;
        uint64_t var_40_1 = arg3;
        char var_38_1 = 0;
        var_70 = &var_50;
        int64_t (* var_68_2)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        int64_t* var_60_1 = &var_d8;
        int64_t (* var_58_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_c0 = &data_4ea510;
        int64_t var_b8_2 = 3;
        int64_t var_a0_2 = 0;
        int64_t** var_b0_2 = &var_70;
        int64_t var_a8_2 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_c0);
        
        if (!arg5 || *arg5 <= 1)
        {
            *arg1 = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(var_d8);
        }
        else
        {
            int64_t rax_6 = var_d8;
            *arg1 = -0x8000000000000000;
            arg1[1] = rax_6;
        }
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ef7ab37ae5a30d7(rax, var_b8);
}
