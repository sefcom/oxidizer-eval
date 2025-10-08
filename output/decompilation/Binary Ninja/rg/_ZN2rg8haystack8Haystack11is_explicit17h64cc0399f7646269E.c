
  int64_t rg::haystack::Haystack::is_explicit::h64cc0399f7646269(int64_t* arg1)

{
    int64_t result;
    
    if (!*arg1)
    {
        result = 1;
        return result;
    }
    
    if (arg1[4])
        return 0;
    
    int64_t result_1 = result;
    return rg::haystack::Haystack::is_dir::hd6f752fd2c8f0e5c(arg1) ^ 1;
}
