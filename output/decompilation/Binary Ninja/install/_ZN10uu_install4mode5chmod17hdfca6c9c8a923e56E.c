
  int64_t uu_install::mode::chmod::hdfca6c9c8a923e56(int64_t arg1, int64_t arg2)

{
    int32_t rdx;
    int64_t result = std::fs::set_permissions::h487174ed31211552(arg1, arg2, rdx);
    
    if (result)
        uu_install::mode::chmod::_$u7b$$u7b$closure$u7d$$u7d$::hc6b73c885d269683(arg1, arg2, 
            result);
    
    result = result;
    return result;
}
