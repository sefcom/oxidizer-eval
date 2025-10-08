
  int64_t alacritty::cli::parse_hex_or_decimal::hd382c3b23da3886d(char* arg1, int64_t arg2)

{
    char* rax;
    int64_t rdx_1;
    uint32_t rsi;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        "0x0o0bempty YAML tag is not allo…", 2, arg1, arg2);
    int32_t rdi_3;
    
    if (!rax)
        rdi_3 = 0;
    else
    {
        int64_t rax_1 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(rax, rdx_1, 0x10);
        rsi = rax_1 >> 0x20;
        rdi_3 = ~rax_1 & 1;
    }
    
    /* tailcall */
    return core::option::Option$LT$T$GT$::or_else::h036f9822a4576c3b(rdi_3, rsi, arg1, arg2);
}
