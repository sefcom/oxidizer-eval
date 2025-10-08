
  int64_t uu_sort::KeySettings::set_ignore_non_printing::hb18c264c9cade1ef(int64_t* arg1, void* arg2)

{
    int64_t var_28;
    int64_t rax = uu_sort::KeySettings::check_compatibility::hffc9b72d1f0610fb(&var_28, 
        *(arg2 + 5), 1, *(arg2 + 2));
    
    if (0 + -(var_28))
    {
        *(arg2 + 3) = 1;
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    int64_t var_18;
    arg1[2] = var_18;
    *arg1 = var_28;
    return var_18;
}
