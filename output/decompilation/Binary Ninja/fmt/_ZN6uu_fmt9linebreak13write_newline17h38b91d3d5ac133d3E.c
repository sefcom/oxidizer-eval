
  ssize_t uu_fmt::linebreak::write_newline::h38b91d3d5ac133d3(int64_t arg1, uint64_t arg2, int64_t* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t r12 = arg3[2];
    int64_t r12_1;
    
    if (*arg3 - r12 <= 1)
    {
        ssize_t result =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
            arg3, "\n   Found NoFormatLine when exp…", 1);
        
        if (result)
            return result;
        
        r12_1 = arg3[2];
        
        if (arg2 < *arg3 - r12_1)
            goto label_462759;
    }
    else
    {
        arg3[1][r12] = 0xa;
        r12_1 = r12 + 1;
        arg3[2] = r12_1;
        
        if (arg2 < *arg3 - r12_1)
        {
            label_462759:
            memcpy(arg3[1] + r12_1, arg1, arg2);
            arg3[2] = r12_1 + arg2;
            return 0;
        }
    }
    /* tailcall */
    return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
        arg3, arg1, arg2);
}
