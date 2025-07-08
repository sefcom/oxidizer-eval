
  int32_t* uu_ls::PathData::get_metadata::hc7a96a0547653f90(void* arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    int32_t* result =
        core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h8d812ad43436eba7(arg1 + 0x48);
    
    if (*result == 2)
        return nullptr;
    
    return result;
}
