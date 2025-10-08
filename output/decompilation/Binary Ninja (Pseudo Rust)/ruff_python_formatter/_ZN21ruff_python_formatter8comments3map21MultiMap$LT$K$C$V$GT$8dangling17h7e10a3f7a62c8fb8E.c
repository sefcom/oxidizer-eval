
  fn ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::dangling::h7e10a3f7a62c8fb8(arg1: *mut c_void, arg2: *mut c_void) -> i64

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
        let rsi: i32 = *rax.byte_offset(0x18);
        let rdi_2: u64 = *rax.byte_offset(0x14) - 1;
        let mut rsi_1: u64 = rsi - 1;
        
        if rsi < 1
        {
            rsi_1 = rdi_2;
        }
        
        return _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_2, rsi_1, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
    }
    
    let rdi_4: i64 = *rax.byte_offset(0x18) + 1;
    let rsi_2: i64 = *arg1.byte_offset(0x28);
    
    if rdi_4 >= rsi_2
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_4, rsi_2);
        /* no return */
    }
    
    let rcx_1: i64 = *arg1.byte_offset(0x20);
    let rdx_2: i64 = rdi_4 * 3;
    *(rcx_1 + (rdx_2 << 3) + 0x10);
    *(rcx_1 + (rdx_2 << 3) + 8)
}
