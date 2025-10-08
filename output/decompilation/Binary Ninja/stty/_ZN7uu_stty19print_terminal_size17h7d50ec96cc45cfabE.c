
  uint64_t uu_stty::print_terminal_size::h7d50ec96cc45cfab(int128_t* arg1, void* arg2)

{
    int32_t rax = nix::sys::termios::cfgetospeed::h665fdba23cdf575b(arg1);
    char const (** const var_80)[0x86] = &data_4e2ad0;
    char const (** const var_78)[0xad];
    char var_60;
    char const (** const* var_30)[0x86];
    
    if (!rax)
    {
        label_458ab8:
        var_30 = &var_80;
        int64_t (* var_28_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h73b50bfbd05958df;
        var_78 = &data_4e2a50;
        int64_t var_70_1 = 2;
        int64_t var_58_1 = 0;
        char const (** const** var_68_1)[0x86] = &var_30;
        var_60 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    }
    else
    {
        var_80 = &data_4e2ae8;
        
        if (rax == 1)
            goto label_458ab8;
        
        var_80 = &data_4e2b00;
        
        if (rax == 2)
            goto label_458ab8;
        
        var_80 = &data_4e2b18;
        
        if (rax == 3)
            goto label_458ab8;
        
        var_80 = &data_4e2b30;
        
        if (rax == 4)
            goto label_458ab8;
        
        var_80 = &data_4e2b48;
        
        if (rax == 5)
            goto label_458ab8;
        
        var_80 = &data_4e2b60;
        
        if (rax == 6)
            goto label_458ab8;
        
        var_80 = &data_4e2b78;
        
        if (rax == 7)
            goto label_458ab8;
        
        var_80 = &data_4e2b90;
        
        if (rax == 8)
            goto label_458ab8;
        
        var_80 = &data_4e2ba8;
        
        if (rax == 9)
            goto label_458ab8;
        
        var_80 = &data_4e2bc0;
        
        if (rax == 0xa)
            goto label_458ab8;
        
        var_80 = &data_4e2bd8;
        
        if (rax == 0xb)
            goto label_458ab8;
        
        var_80 = &data_4e2bf0;
        
        if (rax == 0xd)
            goto label_458ab8;
        
        var_80 = &data_4e2c08;
        
        if (rax == 0xe)
            goto label_458ab8;
        
        var_80 = &data_4e2c20;
        
        if (rax == 0xf)
            goto label_458ab8;
        
        var_80 = &data_4e2c38;
        
        if (rax == 0x1001)
            goto label_458ab8;
        
        var_80 = &data_4e2c50;
        
        if (rax == 0x1002)
            goto label_458ab8;
        
        var_80 = &data_4e2c68;
        
        if (rax == 0x1003)
            goto label_458ab8;
        
        var_80 = &data_4e2c80;
        
        if (rax == 0x1005)
            goto label_458ab8;
        
        var_80 = &data_4e2c98;
        
        if (rax == 0x1006)
            goto label_458ab8;
        
        var_80 = &data_4e2cb0;
        
        if (rax == 0x1007)
            goto label_458ab8;
        
        var_80 = &data_4e2cc8;
        
        if (rax == 0x1008)
            goto label_458ab8;
        
        var_80 = &data_4e2ce0;
        
        if (rax == 0x1009)
            goto label_458ab8;
        
        var_80 = &data_4e2cf8;
        
        if (rax == 0x100a)
            goto label_458ab8;
        
        var_80 = &data_4e2d10;
        
        if (rax == 0x100b)
            goto label_458ab8;
        
        var_80 = &data_4e2d28;
        
        if (rax == 0x100c)
            goto label_458ab8;
        
        var_80 = &data_4e2d40;
        
        if (rax == 0x100d)
            goto label_458ab8;
        
        var_80 = &data_4e2d58;
        
        if (rax == 0x100e)
            goto label_458ab8;
        
        var_80 = &data_4e2d70;
        
        if (rax == 0x100f)
            goto label_458ab8;
    }
    
    if (*(arg2 + 0x28))
    {
        var_80 = nullptr;
        uint64_t rdi_1 = 1;
        
        if (!*(arg2 + 0x18))
            rdi_1 = *(arg2 + 0x1c);
        
        char rax_1;
        int32_t rdx_1;
        rax_1 = uu_stty::tiocgwinsz::hc5ed27eca5acd6af(rdi_1, &var_80);
        
        if (rax_1 & 1)
            return rdx_1;
        
        var_30 = &var_80;
        uint64_t (* var_28_2)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
        void* var_20_1 = &*var_80[2];
        uint64_t (* var_18_1)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::h76cd049dd60d778d;
        var_78 = &data_4e2a70;
        int64_t var_70_2 = 3;
        int64_t var_58_2 = 0;
        char const (** const** var_68_2)[0x86] = &var_30;
        var_60 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    }
    
    _$LT$core..cell..RefCell$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4405abb245824463(
        &var_78, &arg1[2]);
    var_80 = var_60;
    var_30 = &var_80;
    uint64_t (* var_28_3)(char* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
    var_78 = &data_4e2aa0;
    int64_t var_70_3 = 2;
    int64_t var_58_3 = 0;
    char const (** const** var_68_3)[0x86] = &var_30;
    int64_t var_60_1 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    var_78 = &data_4e2ac0;
    int64_t var_70_4 = 1;
    int64_t var_68_4 = 8;
    var_60_1 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    return 0x86;
}
