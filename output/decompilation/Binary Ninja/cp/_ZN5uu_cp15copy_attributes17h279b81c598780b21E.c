
  int64_t uu_cp::copy_attributes::h279b81c598780b21(void** arg1, int64_t** arg2, int64_t arg3, int64_t* arg4, int64_t arg5, char* arg6)

{
    int64_t* var_200 = arg4;
    int64_t var_1f8 = arg5;
    int64_t** var_220 = 1;
    int64_t** var_218 = arg2;
    int64_t var_210 = arg3;
    char var_208 = 1;
    int64_t* var_e0 = 1;
    int64_t* var_d8 = arg4;
    int64_t var_d0 = arg5;
    char var_c8 = 1;
    int64_t* var_1f0 = &var_220;
    int64_t (* var_1e8)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    int64_t* var_1e0 = &var_e0;
    int64_t (* var_1d8)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    void* const var_1c0 = &data_55eb98;
    int64_t var_1b8 = 2;
    int64_t var_1a0 = 0;
    int64_t** var_1b0 = &var_1f0;
    int64_t var_1a8 = 2;
    void var_110;
    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_110, &var_1c0);
    int64_t* var_108;
    var_1f0 = var_108;
    int64_t var_100;
    int64_t var_1e8_1 = var_100;
    std::fs::symlink_metadata::h814bc3976f7d40c5(&var_1c0, arg2);
    void* const r15_1 = var_1c0;
    
    if (r15_1 != 2)
    {
        void var_c0;
        memcpy(&var_c0, &var_1a0, 0x90);
        var_e0 = r15_1;
        int64_t var_d8_2 = var_1b8;
        var_d0 = var_1b0;
        var_220 = &var_e0;
        int64_t** var_218_1 = &var_200;
        int64_t** var_210_1 = &var_1f0;
        uu_cp::handle_preserve::h7e8f09b2424e003f(&var_1c0, *arg6, arg6[1], &var_220);
        
        if (var_1c0 != -0x7ffffffffffffff4)
            goto label_4a2062;
        
        var_220 = &var_200;
        int64_t** var_218_2 = &var_e0;
        int64_t** var_210_2 = &var_1f0;
        uu_cp::handle_preserve::h1718f5dcce087862(&var_1c0, arg6[2], arg6[3], &var_220);
        
        if (var_1c0 != -0x7ffffffffffffff4)
            goto label_4a2062;
        
        uu_cp::handle_preserve::h6d79f9ad03cfc15e(&var_1c0, arg6[4], arg6[5], &var_e0, &var_200);
        void* const rax = var_1c0;
        
        if (rax != -0x7ffffffffffffff4)
        {
            label_4a20b7:
            int128_t var_198;
            *(arg1 + 0x28) = var_198;
            *(arg1 + 0x18) = var_1a8;
            *(arg1 + 8) = var_1b8;
            *arg1 = rax;
        }
        else
        {
            var_220 = arg2;
            int64_t var_218_3 = arg3;
            var_210_2 = var_200;
            uu_cp::handle_preserve::hc7f5bea15cd6c8bb(&var_1c0, arg6[0xa], arg6[0xb], &var_220);
            rax = var_1c0;
            
            if (rax != -0x7ffffffffffffff4)
                goto label_4a20b7;
            
            *arg1 = -0x800000000000000c;
        }
    }
    else
    {
        var_e0 = var_108;
        int64_t var_d8_1 = var_100;
        int64_t var_d0_1 = var_1b8;
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hda2d8848c156368b(&var_1c0, &var_e0);
        label_4a2062:
        int64_t var_190;
        arg1[6] = var_190;
        int128_t zmm0_2 = var_1c0;
        *(arg1 + 0x20) = var_1a0;
        *(arg1 + 0x10) = var_1b0;
        *arg1 = zmm0_2;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_110);
}
