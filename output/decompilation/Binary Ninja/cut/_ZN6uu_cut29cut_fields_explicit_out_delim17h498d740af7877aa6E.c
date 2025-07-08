
  int128_t* uu_cut::cut_fields_explicit_out_delim::h498d740af7877aa6(int32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5, char arg6, int64_t arg7, int64_t arg8)

{
    int64_t var_68 = arg3;
    int64_t var_60 = arg4;
    char var_c2 = arg5;
    char var_c1 = arg6;
    void var_40;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4b66837b380ddfc6(&var_40, 
        0x2000, arg1);
    int128_t* rax_1;
    int64_t* rdx_1;
    rax_1 = uu_cut::stdout_writer::h8d13c8405537874a();
    int128_t* var_c0 = rax_1;
    int64_t var_a8 = arg2;
    char* var_a0 = &var_c2;
    int128_t** var_98 = &var_c0;
    char* var_90 = &var_c1;
    int64_t* var_88 = &var_68;
    int64_t var_80 = arg7;
    int64_t var_78 = arg8;
    void* rax_2;
    int64_t rdx_3;
    rax_2 = bstr::io::BufReadExt::for_byte_record_with_terminator::h4eee02f92128781a(&var_40, arg6, 
        &var_a8);
    
    if (!rax_2)
    {
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_c0, rdx_1);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&var_40);
        return nullptr;
    }
    
    void* var_b0 = rax_2;
    int128_t var_58;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h1fe03c512653459d(&var_58, &var_b0, 
        rdx_3);
    var_90 = 1;
    var_a8 = var_58;
    int64_t var_48;
    int64_t var_98_1 = var_48;
    int128_t* result = alloc::boxed::Box$LT$T$GT$::new::hac334f3a9663fcff(&var_a8);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd987992319436672(var_b0);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$::h87d33fdcef97e0f4(var_c0, rdx_1);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h847359979c596e00(&var_40);
    return result;
}
