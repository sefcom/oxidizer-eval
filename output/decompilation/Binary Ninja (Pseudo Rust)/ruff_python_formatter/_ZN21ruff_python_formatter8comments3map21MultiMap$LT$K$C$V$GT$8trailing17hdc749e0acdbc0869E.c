
  fn ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let rax: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
        arg1.byte_offset(0x30), arg2);
    
    if rax == 0
    {
        return 4;
    }
    
    if *rax.byte_offset(0x10) != 0
    {
        let mut rax_2: u64;
        let mut rdx: i64;
        rax_2 =
            ruff_python_formatter::comments::map::InOrderEntry::trailing_range::h32d34cc5d8d5c983(
            rax.byte_offset(0x10));
        return _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rax_2, rdx, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
    }
    
    let rdi_4: i64 = *rax.byte_offset(0x18) + 2;
    let rsi_1: i64 = *arg1.byte_offset(0x28);
    
    if rdi_4 >= rsi_1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_4, rsi_1);
        /* no return */
    }
    
    let rcx_1: i64 = *arg1.byte_offset(0x20);
    let rdx_3: i64 = rdi_4 * 3;
    *(rcx_1 + (rdx_3 << 3) + 0x10);
    *(rcx_1 + (rdx_3 << 3) + 8)
}
