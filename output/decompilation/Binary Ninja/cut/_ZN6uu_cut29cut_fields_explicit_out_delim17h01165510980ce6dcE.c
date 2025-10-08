
  uint64_t uu_cut::cut_fields_explicit_out_delim::h01165510980ce6dc(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char arg6, int128_t arg7)

{
    int64_t var_78 = arg4;
    int64_t var_70 = arg5;
    char var_c1 = arg6;
    char rbp = arg_8;
    int64_t var_50;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h435dadcf49ddd50a(&var_50, 
        arg1);
    int64_t var_b8 = arg3;
    char* var_b0 = &var_c1;
    int64_t var_a8 = arg2;
    int32_t* var_a0 = &arg_8;
    int64_t* var_98 = &var_78;
    int128_t var_90 = arg7;
    int64_t rax;
    int64_t rdx_1;
    rax = bstr::io::BufReadExt::for_byte_record_with_terminator::haba5d3f45b2c030e(&var_50, rbp, 
        &var_b8);
    uint64_t result;
    
    if (!rax)
    {
        result = 0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hde8bb4ba94dd46be(0);
    }
    else
    {
        int64_t var_c0 = rax;
        int128_t var_68;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0d308ee95f9441af(
            &var_68, &var_c0, rdx_1);
        var_a0 = 1;
        var_b8 = var_68;
        int64_t var_58;
        int64_t var_a8_1 = var_58;
        result = alloc::boxed::Box$LT$T$GT$::new::h8c28acd2624e9f9f(&var_b8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h78ae2c01de2ad3a3(var_c0);
    }
    
    int64_t var_48;
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hecaa96515aaaaccf(var_50, var_48);
    return result;
}
