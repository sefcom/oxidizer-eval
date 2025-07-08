
  void* uu_ls::PathData::file_type::h128ed7d98b354477(void* arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    int32_t* rax_1 =
        core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::he9c14013ab1ff432(arg1 + 0xf8, arg1);
    
    if (*rax_1)
        return &rax_1[1];
    
    return nullptr;
}
