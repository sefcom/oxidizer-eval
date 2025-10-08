
  fn uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(arg1: i64, arg2: u64, arg3: i64, arg4: *mut i64) -> ssize_t

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rdx_3: u64;
    let mut rsi_3: *const i8;
    
    if arg3 == 1
    {
        let rax_3: i64 = arg4[2];
        
        if *arg4 - rax_3 < 2
        {
            rsi_3 = " Found NoFormatLine when expecti…";
            rdx_3 = 1;
            'label_46288e:
            let result: ssize_t =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
                arg4, rsi_3, rdx_3);
            
            if result != 0
            {
                return result;
            }
        }
        else
        {
            arg4[1][rax_3] = 0x20;
            arg4[2] = rax_3 + 1;
        }
    }
    else if arg3 == 2
    {
        let rax_1: i64 = arg4[2];
        
        if *arg4 - rax_1 < 3
        {
            rsi_3 = "   Found NoFormatLine when expec…";
            rdx_3 = 2;
            goto 'label_46288e;
        }
        
        *(arg4[1] + rax_1) = 0x2020;
        arg4[2] = rax_1 + 2;
    }
    let r12_1: i64 = arg4[2];
    
    if arg2 >= *arg4 - r12_1
    {
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
            arg4, arg1, arg2);
    }
    
    memcpy(arg4[1] + r12_1, arg1, arg2);
    arg4[2] = r12_1 + arg2;
    0
}
