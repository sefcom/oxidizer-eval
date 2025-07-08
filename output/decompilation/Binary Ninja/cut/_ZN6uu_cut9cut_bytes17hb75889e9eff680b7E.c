
  int128_t* uu_cut::cut_bytes::hb75889e9eff680b7(int32_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t var_68 = arg2;
    int64_t var_60 = arg3;
    char rbp = arg4[5];
    char var_b1 = rbp;
    void var_40;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4b66837b380ddfc6(&var_40, 
        0x2000, arg1);
    int128_t* rax_1;
    int64_t* rdx_1;
    rax_1 = uu_cut::stdout_writer::h8d13c8405537874a();
    int128_t* var_b0 = rax_1;
    char* rax_2 = *arg4;
    int64_t rcx = 1;
    
    if (rax_2)
        rcx = arg4[1];
    
    char const* const rdx_2 = "\t-: \n: Is a directory\ndelimit…";
    
    if (rax_2)
        rdx_2 = rax_2;
    
    int64_t* var_98 = &var_68;
    int128_t** var_90 = &var_b0;
    char const* const var_88 = rdx_2;
    int64_t var_80 = rcx;
    int64_t* var_78 = arg4;
    char* var_70 = &var_b1;
    int64_t rax_3;
    int64_t rdx_4;
    rax_3 = bstr::io::BufReadExt::for_byte_record::hb9b9251e70f5cc08(&var_40, rbp, &var_98);
    
    if (!rax_3)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_b0, rdx_1);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&var_40);
        return nullptr;
    }
    
    int64_t var_a0 = rax_3;
    int128_t var_58;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&var_58, &var_a0, 
        rdx_4);
    var_80 = 1;
    var_98 = var_58;
    int64_t var_48;
    int64_t var_88_1 = var_48;
    int128_t* result = alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&var_98);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(var_a0);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_b0, rdx_1);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&var_40);
    return result;
}
