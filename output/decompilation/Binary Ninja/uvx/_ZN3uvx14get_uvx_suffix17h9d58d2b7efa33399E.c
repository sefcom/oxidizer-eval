
  int64_t uvx::get_uvx_suffix::h9d58d2b7efa33399()

{
    char* rax;
    int64_t rdx;
    int64_t rsi;
    int64_t rdi;
    rax = std::path::Path::file_name::h6d40d88bf3fb287a(rdi, rsi);
    
    if (rax)
    {
        char var_18;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_18, rax, rdx);
        int64_t var_10;
        int64_t var_8;
        
        if (!(var_18 & 1))
            return _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(var_10, var_8);
    }
    
    return 0;
}
