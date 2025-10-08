
  int64_t fd::filesystem::strip_current_dir::hccbc9a783f2543e7(int64_t arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t result = std::path::Path::strip_prefix::hf2675ccd78c74225(arg1, arg2);
    
    if (!result)
        result = arg1;
    
    return result;
}
