
  int64_t uu_pinky::platform::unix::read_to_console::hc6a6cffdbcb4a9a1(int32_t arg1)

{
    void var_38;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h00e1d9f834816982(&var_38, 
        arg1);
    int64_t var_a8 = 0;
    int64_t var_a0 = 1;
    uint64_t var_98 = 0;
    uint64_t rax;
    int64_t rdx;
    rax = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_end::h05014a0e11dc2a76(&var_38, &var_a8);
    
    if (!rax)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h5ea1a6bc07b7fdfc(0, rdx);
        void var_50;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, var_a0, var_98);
        void* var_90 = &var_50;
        int64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3e04ddfa3244aadc;
        void* const var_80 = &data_419240;
        int64_t var_78_1 = 1;
        int64_t var_60_1 = 0;
        void** var_70_1 = &var_90;
        int64_t var_68_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_80);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h29ddd331d55ccf59(&var_50);
    }
    else
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h5ea1a6bc07b7fdfc(rax, rdx);
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h736d7624bde0aeed(var_a8, var_a0);
    return core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::h4d2d4d2b5655530e(&var_38);
}
