
  int64_t fd::fmt::input::basename::ha1dafb3b189e8a1e(int64_t arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t result = std::path::Path::file_name::h6d40d88bf3fb287a(arg1, arg2);
    
    if (!result)
        result = arg1;
    
    return result;
}
