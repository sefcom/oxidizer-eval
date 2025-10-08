
  void** uu_mv::rename_with_fallback::h3652858bdc29b866(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_50 = arg5;
    void** rax = std::fs::rename::hd8b2464d64e6b77a(arg1, arg2, arg3);
    int64_t var_48 = arg1;
    int64_t var_40 = arg2;
    int64_t var_38 = arg3;
    int64_t var_30 = arg4;
    int64_t* var_28 = &var_50;
    
    if (!rax)
        return nullptr;
    
    return uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h22f84ef8b347243a(&var_48, 
        rax);
}
