
  int64_t uu_head::read_n_lines::h872c4c7830fcbe92(int64_t arg1)

{
    int64_t var_48 = arg1;
    int64_t rsi;
    int64_t var_40 = rsi;
    char rdx;
    char var_38 = rdx;
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_50 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    void var_30;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h11330ad61641d6f2(&var_30, 
        0x4000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_50));
    int64_t rax_1;
    int64_t result;
    rax_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hb1ea8e60d677492a(&var_48, &var_30);
    
    if (!rax_1)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9de5d1b0f1603542(&var_30);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9de5d1b0f1603542(&var_30);
    return result;
}
