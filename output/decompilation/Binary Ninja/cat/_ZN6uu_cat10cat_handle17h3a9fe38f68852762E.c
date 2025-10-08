
  int64_t uu_cat::cat_handle::h3a9fe38f68852762(int64_t* arg1, int32_t* arg2, char* arg3)

{
    char* rcx;
    
    if (arg3[1])
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    
    if (arg3[3])
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    
    if (arg3[2])
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    
    if (*arg3)
        /* tailcall */
        return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
    
    if (!arg3[4])
        /* tailcall */
        return uu_cat::write_fast::h8d1d87ec93285f91(arg1, arg2);
    
    /* tailcall */
    return uu_cat::write_lines::h59950f7c6160fd92(arg1, arg2, arg3, rcx);
}
