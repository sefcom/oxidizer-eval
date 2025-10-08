
  int64_t uu_head::read_n_bytes::haa0958494279c1b2(int64_t arg1, int64_t arg2)

{
    void var_28;
    std::io::Read::take::h95e91396132b409c(&var_28, arg1, arg2);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_30 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_38 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_30);
    char rax_1;
    ssize_t rdx_1;
    rax_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h179d046fa51992bf(&var_28, &var_38);
    int64_t result;
    
    if (!(rax_1 & 1))
    {
        ssize_t rax_2 =
            _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(
            &var_38);
        
        if (!rax_2)
            result = 0;
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
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hecf63a5426e74aa1(var_38);
    return result;
}
