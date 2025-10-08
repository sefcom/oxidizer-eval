
  fn uu_head::read_n_lines::h2e2947bf1f7213dc(arg1: i64) -> i64

{
    let mut var_50: i64 = arg1;
    let rsi: i64;
    let var_48: i64 = rsi;
    let rdx: i8;
    let var_40: i8 = rdx;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_58: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_38: ();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h13859eb057f4970a(&var_38, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_58));
    let mut rax_1: i8;
    let mut rdx_1: *mut *mut c_void;
    rax_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h5f0a084e30ba61b4(&var_50, &var_38);
    let mut result: i64;
    
    if (rax_1 & 1) == 0
    {
        let rax_2: *mut *mut c_void = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h941209f5da736020(&var_38);
        
        if rax_2 == 0
        {
            result = 0;
        }
        else
        {
            uu_head::wrap_in_stdout_error::hab33c9ac82738cea(rax_2);
            result = 1;
        }
    }
    else
    {
        uu_head::wrap_in_stdout_error::hab33c9ac82738cea(rdx_1);
        result = 1;
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he01ca7daab2526ca(&var_38);
    result
}
