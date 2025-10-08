
  void** uu_head::read_but_last_n_lines::hca44822cc706d375(int32_t* arg1, int64_t arg2, char arg3)

{
    int32_t* var_28 = arg1;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_20 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_30 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_20);
    char const (** result)[0x157];
    ssize_t rbx_1;
    
    if (!arg2)
    {
        char const (** result_1)[0x157];
        ssize_t rdx_2;
        result_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hb3883f8d729b9349(&var_28, &var_30);
        result = result_1;
        rbx_1 = rdx_2;
        
        if (result & 1)
        {
            label_4674d3:
            uu_head::wrap_in_stdout_error::hab33c9ac82738cea(rbx_1);
            result = 1;
        }
    }
    else
    {
        char rax_1;
        ssize_t rdx_1;
        rax_1 = uu_head::take::copy_all_but_n_lines::h428c48894653b2ed(arg1, &var_30, arg2, arg3);
        rbx_1 = rdx_1;
        
        if (rax_1 & 1)
            goto label_4674d3;
        
        ssize_t rax_2 =
            _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(
            &var_30);
        
        if (rax_2)
        {
            uu_head::wrap_in_stdout_error::hab33c9ac82738cea(rax_2);
            result = 1;
        }
        else
            result = nullptr;
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hecf63a5426e74aa1(var_30);
    return result;
}
