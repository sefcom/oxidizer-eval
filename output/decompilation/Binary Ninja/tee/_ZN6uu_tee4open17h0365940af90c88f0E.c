
  int64_t* uu_tee::open::h0365940af90c88f0(int64_t* arg1, int64_t arg2, uint64_t arg3, int32_t arg4, char* arg5)

{
    void var_98;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_98, arg2, arg3);
    int64_t var_d8 = 0x1b600000000;
    int32_t var_d0 = 0;
    int16_t var_cc = 0;
    
    if (!arg4)
        *var_d0[3] = 1;
    else
        *var_d0[2] = 1;
    
    *var_d0[1] = 1;
    var_cc = 1;
    int64_t var_90;
    int32_t var_80;
    std::fs::OpenOptions::open::h097a071329397a72(&var_80, &var_d8, var_90);
    int128_t var_c8;
    
    if (!var_80)
    {
        int32_t var_7c;
        int32_t* rax_2 = alloc::boxed::Box$LT$T$GT$::new::h8dc79dc8461f5b4a(var_7c);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h02ba9e8c78156205(&var_c8, 
            arg2, arg3);
        int64_t var_b8;
        arg1[2] = var_b8;
        *arg1 = var_c8;
        arg1[3] = rax_2;
        arg1[4] = &data_51f9f8;
    }
    else
    {
        int64_t var_78;
        int64_t var_e0 = var_78;
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        int64_t var_50 = rax_1;
        int64_t var_48_1 = rdx_1;
        int64_t* var_70 = &var_50;
        int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h845947ade0b20afc;
        var_c8 = &data_51f9a8;
        *var_c8[8] = 2;
        int64_t var_a8_1 = 0;
        int64_t** var_b8_1 = &var_70;
        int64_t var_b0_1 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
        var_50 = 0;
        int64_t var_48_2 = arg2;
        uint64_t var_40_1 = arg3;
        char var_38_1 = 0;
        var_70 = &var_50;
        int64_t (* var_68_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        int64_t* var_60_1 = &var_e0;
        int64_t (* var_58_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        var_c8 = &data_51f9c8;
        *var_c8[8] = 3;
        int64_t var_a8_2 = 0;
        int64_t** var_b8_2 = &var_70;
        int64_t var_b0_2 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
        
        if (!arg5 || *arg5 <= 1)
        {
            *arg1 = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(var_e0);
        }
        else
        {
            int64_t rax_4 = var_e0;
            *arg1 = -0x8000000000000000;
            arg1[1] = rax_4;
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc65b4027f210db7e(&var_98);
    return arg1;
}
