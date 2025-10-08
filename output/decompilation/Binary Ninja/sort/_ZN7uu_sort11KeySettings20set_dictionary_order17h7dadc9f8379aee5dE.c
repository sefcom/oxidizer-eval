
  int64_t uu_sort::KeySettings::set_dictionary_order::h7dadc9f8379aee5d(int64_t* arg1, void* arg2)

{
    int64_t var_28;
    int64_t rax = uu_sort::KeySettings::check_compatibility::hffc9b72d1f0610fb(&var_28, 
        *(arg2 + 5), *(arg2 + 3), 1);
    
    if (0 + -(var_28))
    {
        *(arg2 + 2) = 1;
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    int64_t var_18;
    arg1[2] = var_18;
    *arg1 = var_28;
    return var_18;
}
