
  fn uu_head::read_but_last_n_lines::hca44822cc706d375(arg1: *mut i32, arg2: i64, arg3: i8) -> *mut *mut c_void

{
    let mut var_28: *mut i32 = arg1;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_20: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_30: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_20);
    let mut result: *mut *mut [i8; 0x157];
    let mut rbx_1: ssize_t;
    
    if arg2 == 0
    {
        let mut result_1: *mut *mut [i8; 0x157];
        let mut rdx_2: ssize_t;
        result_1 = _$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::hb3883f8d729b9349(&var_28, &var_30);
        result = result_1;
        rbx_1 = rdx_2;
        
        if (result & 1) != 0
        {
            'label_4674d3:
            uu_head::wrap_in_stdout_error::hab33c9ac82738cea(rbx_1);
            result = 1;
        }
    }
    else
    {
        let mut rax_1: i8;
        let mut rdx_1: ssize_t;
        rax_1 = uu_head::take::copy_all_but_n_lines::h428c48894653b2ed(arg1, &var_30, arg2, arg3);
        rbx_1 = rdx_1;
        
        if (rax_1 & 1) != 0
        {
            goto 'label_4674d3;
        }
        
        let rax_2: ssize_t =
            _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(
            &var_30);
        
        if rax_2 != 0
        {
            uu_head::wrap_in_stdout_error::hab33c9ac82738cea(rax_2);
            result = 1;
        }
        else
        {
            result = nullptr;
        }
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hecf63a5426e74aa1(var_30);
    result
}
