
  fn uu_head::read_n_bytes::h336678ff3f92cdc9(arg1: i64) -> i64

{
    let mut var_18: i64 = arg1;
    let var_10: i64 = -1;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_20: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_28: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_20);
    let mut rax_1: *mut *mut [i8; 0xbc];
    let mut result: i64;
    rax_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h0465faff23cc4d71(&var_18, &var_28);
    
    if rax_1 == 0
    {
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_28);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_28);
    result
}
