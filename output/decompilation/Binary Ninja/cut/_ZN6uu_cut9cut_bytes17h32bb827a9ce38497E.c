
  uint64_t uu_cut::cut_bytes::h32bb827a9ce38497(int32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    int64_t var_78 = arg3;
    int64_t var_70 = arg4;
    char rbp = arg5[5];
    char var_b1 = rbp;
    void var_50;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h098d102270798e48(&var_50, 
        arg1);
    char* rax = *arg5;
    int64_t rcx = 1;
    
    if (rax)
        rcx = arg5[1];
    
    char const* const rdx = "\t-: \n: Is a directory\ninvalid…";
    
    if (rax)
        rdx = rax;
    
    int64_t* var_a8 = &var_78;
    int64_t var_a0 = arg2;
    char const* const var_98 = rdx;
    int64_t var_90 = rcx;
    int64_t* var_88 = arg5;
    char* var_80 = &var_b1;
    int64_t rax_1;
    int64_t rdx_2;
    rax_1 = bstr::io::BufReadExt::for_byte_record::h7faf1fdbaf93c297(&var_50, rbp, &var_a8);
    uint64_t result;
    
    if (!rax_1)
    {
        result = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hde8bb4ba94dd46be(0);
    }
    else
    {
        int64_t var_b0 = rax_1;
        int128_t var_68;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0d308ee95f9441af(
            &var_68, &var_b0, rdx_2);
        var_90 = 1;
        var_a8 = var_68;
        int64_t var_58;
        int64_t var_98_1 = var_58;
        result = alloc::boxed::Box$LT$T$GT$::new::h8c28acd2624e9f9f(&var_a8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h78ae2c01de2ad3a3(var_b0);
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hbec81c69bfd4ba75(&var_50);
    return result;
}
