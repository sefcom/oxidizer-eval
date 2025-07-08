
  int64_t uu_fmt::linebreak::break_simple::h99fb810256b9c0af(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_28 = arg1;
    int64_t var_20 = arg2;
    int64_t result;
    core::iter::traits::iterator::Iterator::try_fold::h73fbe5cd754a894b(&result, &var_28, arg3[4], 
        arg3);
    char var_10;
    
    if (var_10 == 2)
        return result;
    
    int64_t* rdi_1 = arg3[3];
    int64_t rax_1 = rdi_1[2];
    
    if (*rdi_1 - rax_1 <= 1)
        /* tailcall */
        return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
            rdi_1, "\n   /home/34r7hm4n/.cargo/regis…", 1);
    
    rdi_1[1][rax_1] = 0xa;
    rdi_1[2] = rax_1 + 1;
    return 0;
}
