
  fn uu_head::read_but_last_n_bytes::hc9aa98861e356a8a(arg1: *mut i32, arg2: i64) -> i64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_18: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_20: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_18);
    let mut rax_1: i8;
    let mut rdx_1: ssize_t;
    rax_1 = uu_head::take::copy_all_but_n_bytes::h91484b8a539ab948(arg1, &var_20, arg2);
    let mut result: i64;
    
    if (rax_1 & 1) == 0
    {
        let rax_2: ssize_t =
            _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(
            &var_20);
        
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
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hecf63a5426e74aa1(var_20);
    result
}
