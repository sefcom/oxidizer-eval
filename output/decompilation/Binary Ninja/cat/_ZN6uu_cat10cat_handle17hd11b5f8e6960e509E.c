
  int64_t uu_cat::cat_handle::hd11b5f8e6960e509(char const (*** arg1)[0x92], int32_t* arg2, int32_t* arg3)

{
    int64_t* rcx;
    
    if (*arg3)
        /* tailcall */
        return uu_cat::write_lines::hff42684e0ec60399(arg1, arg2, arg3, rcx);
    
    if (!arg3[1])
        /* tailcall */
        return uu_cat::write_fast::hd2141eaf4d9f5934(arg1, arg2);
    
    /* tailcall */
    return uu_cat::write_lines::hff42684e0ec60399(arg1, arg2, arg3, rcx);
}
