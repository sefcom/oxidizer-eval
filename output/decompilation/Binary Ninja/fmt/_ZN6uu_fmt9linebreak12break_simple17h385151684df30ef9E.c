
  int64_t uu_fmt::linebreak::break_simple::h385151684df30ef9(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_28 = arg1;
    int64_t var_20 = arg2;
    int64_t result;
    core::iter::traits::iterator::Iterator::try_fold::hbff019c93347460d(&result, &var_28, arg3[4], 
        arg3);
    char var_10;
    
    if (var_10 == 2)
        return result;
    
    int64_t* rdi_1 = arg3[3];
    int64_t rax_1 = rdi_1[2];
    
    if (*rdi_1 - rax_1 <= 1)
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
            rdi_1, "\n   Found NoFormatLine when exp…", 1);
    
    rdi_1[1][rax_1] = 0xa;
    rdi_1[2] = rax_1 + 1;
    return 0;
}
