
  fn uu_head::read_n_bytes::h6fceecc1df8e2d16(arg1: i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::io::Read::take::h5ffd87fcf87038c8(arg1);
    let mut var_18: i64 = rax;
    let var_10: i64 = rdx;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_20: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_28: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_20);
    let mut rax_2: *mut *mut [i8; 0xbc];
    let mut result: i64;
    rax_2 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h5bd4b7aa700d4712(&var_18, &var_28);
    
    if rax_2 == 0
    {
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_28);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_28);
    result
}
