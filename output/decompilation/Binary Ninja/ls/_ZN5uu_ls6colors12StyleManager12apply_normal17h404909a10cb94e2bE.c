
  int128_t* uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(int128_t* arg1, int64_t* arg2)

{
    int128_t* rax = uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(arg2);
    
    if (!rax)
    {
        *arg1 = 0;
        *(arg1 + 8) = 1;
        arg1[1] = 0;
    }
    else
    {
        int64_t var_1b_1 = *(rax + 0xd);
        int128_t var_28 = *rax;
        uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(arg1, arg2, &var_28);
    }
    
    return arg1;
}
