
  int64_t uu_head::head_backwards_file::h4d798ee036af210c(int32_t* arg1, int64_t* arg2)

{
    int32_t var_d0;
    std::fs::File::metadata::h5e84e533705f8c98(&var_d0, arg1);
    
    if (var_d0 == 2)
        return 1;
    
    char rax_1 = uu_head::is_seekable::h3555132a0bfa349a(arg1);
    int64_t rcx_1 = 0x200;
    int64_t var_78;
    
    if (var_78 - 1 < 0x20000000)
        rcx_1 = var_78;
    
    int64_t var_80;
    
    if (rax_1 && var_80 > rcx_1)
        /* tailcall */
        return uu_head::head_backwards_on_seekable_file::h7e88d54791e3601d(arg1, arg2);
    
    /* tailcall */
    return uu_head::head_backwards_without_seek_file::hd1f6d04c3bb08f89(arg1, arg2);
}
