
  fn uu_fmt::linebreak::write_newline::h38b91d3d5ac133d3(arg1: i64, arg2: u64, arg3: *mut i64) -> ssize_t

{
    let rax: i64;
    let var_28: i64 = rax;
    let r12: i64 = arg3[2];
    let mut r12_1: i64;
    
    if *arg3 - r12 <= 1
    {
        let result: ssize_t =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
            arg3, "\n   Found NoFormatLine when exp…", 1);
        
        if result != 0
        {
            return result;
        }
        
        r12_1 = arg3[2];
        
        if arg2 < *arg3 - r12_1
        {
            goto 'label_462759;
        }
    }
    else
    {
        arg3[1][r12] = 0xa;
        r12_1 = r12 + 1;
        arg3[2] = r12_1;
        
        if arg2 < *arg3 - r12_1
        {
            'label_462759:
            memcpy(arg3[1] + r12_1, arg1, arg2);
            arg3[2] = r12_1 + arg2;
            return 0;
        }
    }
    /* tailcall */
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(arg3, arg1, 
        arg2)
}
