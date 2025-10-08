
  FTSENT* uu_chcon::fts::FTS::read_next_entry::h61830a73507cb09a(int32_t* arg1, int64_t* arg2)

{
    FTSENT* rax = fts_read(*arg2);
    arg2[1] = rax;
    
    if (rax)
    {
        arg1[1] = 1;
        *arg1 = 0x12;
        return rax;
    }
    
    int64_t r14_3 = *__errno_location() << 0x20 | 2;
    int64_t var_28 = r14_3;
    char var_20;
    void* rax_2 = std::io::error::repr_bitpacked::decode_repr::h77be729a8c24f411(&var_20, r14_3);
    int32_t var_1c;
    
    if (!var_20 && !var_1c)
    {
        arg1[1] = 0;
        *arg1 = 0x12;
        return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2038812c87ccc8f0(&var_28);
    }
    
    *arg1 = 0x10;
    *(arg1 + 8) = "fts_read()FTS::set()fts_set()ver…";
    *(arg1 + 0x10) = 0xa;
    *(arg1 + 0x18) = r14_3;
    return rax_2;
}
