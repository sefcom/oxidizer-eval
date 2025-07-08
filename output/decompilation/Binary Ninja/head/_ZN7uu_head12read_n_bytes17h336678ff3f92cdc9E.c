
  int64_t uu_head::read_n_bytes::h336678ff3f92cdc9(int64_t arg1)

{
    int64_t var_18 = arg1;
    int64_t var_10 = -1;
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_20 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_28 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_20);
    char const (** rax_1)[0xbc];
    int64_t result;
    rax_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h0465faff23cc4d71(&var_18, &var_28);
    
    if (!rax_1)
    {
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_28);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_28);
    return result;
}
