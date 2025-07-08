
  int64_t uu_cat::cat_handle::h2310985edbce98d4(char const (*** arg1)[0x92], int64_t* arg2, int32_t* arg3)

{
    int64_t* rcx;
    
    if (*arg3)
        /* tailcall */
        return uu_cat::write_lines::hd655140a51395418(arg1, arg2, arg3, rcx);
    
    if (!arg3[1])
        /* tailcall */
        return uu_cat::write_fast::ha32986047449ad77(arg1, arg2);
    
    /* tailcall */
    return uu_cat::write_lines::hd655140a51395418(arg1, arg2, arg3, rcx);
}
