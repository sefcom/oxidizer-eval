
  int64_t uu_sort::KeySettings::set_dictionary_order::h4d79f3dcf023ab93(int64_t* arg1, void* arg2)

{
    int64_t var_30;
    int64_t result = uu_sort::KeySettings::check_compatibility::hd03ca512104bcd48(&var_30, 
        *(arg2 + 5), *(arg2 + 3), 1);
    
    if (var_30 != -0x8000000000000000)
    {
        int64_t result_1;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_30;
    }
    else
    {
        *(arg2 + 2) = 1;
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
