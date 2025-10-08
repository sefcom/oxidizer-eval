
  fn alacritty::cli::parse_hex_or_decimal::hd382c3b23da3886d(arg1: *mut i8, arg2: i64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    let mut rsi: u32;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        "0x0o0bempty YAML tag is not allo…", 2, arg1, arg2);
    let mut rdi_3: i32;
    
    if rax == 0
    {
        rdi_3 = 0;
    }
    else
    {
        let rax_1: i64 =
            core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(rax, rdx_1, 0x10);
        rsi = rax_1 >> 0x20;
        rdi_3 = !rax_1 & 1;
    }
    
    /* tailcall */
    core::option::Option$LT$T$GT$::or_else::h036f9822a4576c3b(rdi_3, rsi, arg1, arg2)
}
