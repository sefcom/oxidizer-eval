
  int64_t uu_cat::cat_handle::h13bdbf50278acfc8(char const (*** arg1)[0x92], int32_t* arg2, int32_t* arg3)

{
    int64_t* rcx;
    
    if (*arg3)
        /* tailcall */
        return uu_cat::write_lines::h3b8d3a5992cb0b4e(arg1, arg2, arg3, rcx);
    
    if (!arg3[1])
        /* tailcall */
        return uu_cat::write_fast::he3f5331bc66ac0a4(arg1, arg2);
    
    /* tailcall */
    return uu_cat::write_lines::h3b8d3a5992cb0b4e(arg1, arg2, arg3, rcx);
}
