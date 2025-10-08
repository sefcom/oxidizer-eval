
  int128_t* uu_ls::colors::StyleManager::apply_normal::h69c01341e2d260d1(int128_t* arg1, int64_t* arg2)

{
    int128_t* result = uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(*arg2);
    
    if (result)
    {
        int64_t var_1b = *(result + 0xd);
        int128_t var_28 = *result;
        return uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(arg1, arg2, &var_28);
    }
    
    *arg1 = 0;
    *(arg1 + 8) = 1;
    arg1[1] = 0;
    return result;
}
