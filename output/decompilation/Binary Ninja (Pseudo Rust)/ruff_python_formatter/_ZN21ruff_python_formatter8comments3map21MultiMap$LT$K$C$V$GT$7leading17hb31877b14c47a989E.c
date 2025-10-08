
  fn ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let rax: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
        arg1.byte_offset(0x30), arg2);
    
    if rax == 0
    {
        return 4;
    }
    
    let rdi_1: i32 = *rax.byte_offset(0x10);
    
    if rdi_1 != 0
    {
        return _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_1 - 1, *rax.byte_offset(0x14) - 1, *arg1.byte_offset(8), 
            *arg1.byte_offset(0x10));
    }
    
    let rdi_3: i64 = *rax.byte_offset(0x18);
    let rsi_2: i64 = *arg1.byte_offset(0x28);
    
    if rdi_3 >= rsi_2
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_3, rsi_2);
        /* no return */
    }
    
    let rcx_1: i64 = *arg1.byte_offset(0x20);
    let rdx_2: i64 = rdi_3 * 3;
    *(rcx_1 + (rdx_2 << 3) + 0x10);
    *(rcx_1 + (rdx_2 << 3) + 8)
}
