
  void* uu_ls::PathData::get_metadata::h14c40f15e3077b4f(void* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h71e0e2e9f3cc89de(arg1 + 0x48, arg1, 
        arg2);
    
    if (*(arg1 + 0x48) != 2)
        return arg1 + 0x48;
    
    return nullptr;
}
