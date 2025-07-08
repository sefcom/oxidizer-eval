
  void** uu_cp::copy_attributes::h0ca124c6c7245f78(void** arg1, int64_t arg2, int64_t arg3, void* arg4, int64_t arg5, char* arg6)

{
    int64_t var_138 = arg2;
    int64_t var_130 = arg3;
    void* var_210 = arg4;
    int64_t var_208 = arg5;
    void* const* var_230 = 1;
    int64_t var_228 = arg2;
    int64_t var_220 = arg3;
    char var_218 = 1;
    void* const var_e0 = 1;
    void* var_d8 = arg4;
    int64_t var_d0 = arg5;
    char var_c8 = 1;
    int64_t* var_118 = &var_230;
    int64_t (* var_110)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    int64_t* var_108 = &var_e0;
    int64_t (* var_100)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    void* const var_1e8 = &data_5b5e68;
    int64_t var_1e0 = 2;
    int64_t var_1c8 = 0;
    int64_t** var_1d8 = &var_118;
    int64_t var_1d0 = 2;
    void var_200;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_200, &var_1e8);
    void** var_1f8;
    void** var_128 = var_1f8;
    int64_t var_1f0;
    int64_t var_120 = var_1f0;
    std::fs::symlink_metadata::h8589e79b0a107dee(&var_1e8, arg2);
    void* const r12_1 = var_1e8;
    int128_t var_1b8;
    
    if (r12_1 != 2)
    {
        void var_c0;
        memcpy(&var_c0, &var_1c8, 0x90);
        var_e0 = r12_1;
        int64_t var_d8_1 = var_1e0;
        var_d0 = var_1d8;
        var_230 = &var_e0;
        void** var_228_2 = &var_210;
        void*** var_220_2 = &var_128;
        uu_cp::handle_preserve::h88839891003e3dd9(&var_1e8, *arg6, arg6[1], &var_230);
        
        if (var_1e8 != 0xd)
            goto label_505203;
        
        var_230 = &var_210;
        void* const* var_228_3 = &var_e0;
        void*** var_220_3 = &var_128;
        uu_cp::handle_preserve::h61971e46c5a3aa58(&var_1e8, arg6[2], arg6[3], &var_230);
        void* const rax_1 = var_1e8;
        
        if (rax_1 != 0xd)
        {
            label_505233:
            arg1[7] = *var_1b8[8];
            int128_t var_1c0;
            *(arg1 + 0x28) = var_1c0;
            *(arg1 + 0x18) = var_1d0;
            *(arg1 + 8) = var_1e0;
            *arg1 = rax_1;
        }
        else
        {
            uu_cp::handle_preserve::hdf8d6c66ba5c03ed(&var_1e8, arg6[4], arg6[5], &var_e0, 
                &var_210);
            rax_1 = var_1e8;
            
            if (rax_1 != 0xd)
                goto label_505233;
            
            uu_cp::handle_preserve::h1b7507cebf9b4fa2(&var_1e8, arg6[0xa], arg6[0xb], &var_138, 
                &var_210);
            rax_1 = var_1e8;
            
            if (rax_1 != 0xd)
                goto label_505233;
            
            *arg1 = 0xd;
        }
    }
    else
    {
        var_230 = var_1f8;
        int64_t var_228_1 = var_1f0;
        int64_t var_220_1 = var_1e0;
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(&var_1e8, &var_230);
        label_505203:
        int128_t zmm0_2 = var_1e8;
        int128_t zmm2_1 = var_1c8;
        *(arg1 + 0x30) = var_1b8;
        *(arg1 + 0x20) = zmm2_1;
        *(arg1 + 0x10) = var_1d8;
        *arg1 = zmm0_2;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_200);
    return arg1;
}
