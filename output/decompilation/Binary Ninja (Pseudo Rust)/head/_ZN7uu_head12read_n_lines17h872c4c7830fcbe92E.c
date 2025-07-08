
  fn uu_head::read_n_lines::h872c4c7830fcbe92(arg1: i64) -> i64

{
    let mut var_48: i64 = arg1;
    let rsi: i64;
    let var_40: i64 = rsi;
    let rdx: i8;
    let var_38: i8 = rdx;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_50: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_30: ();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h11330ad61641d6f2(&var_30, 
        0x4000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_50));
    let mut rax_1: i64;
    let mut result: i64;
    rax_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hb1ea8e60d677492a(&var_48, &var_30);
    
    if rax_1 == 0
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9de5d1b0f1603542(&var_30);
        return 0;
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9de5d1b0f1603542(&var_30);
    result
}
