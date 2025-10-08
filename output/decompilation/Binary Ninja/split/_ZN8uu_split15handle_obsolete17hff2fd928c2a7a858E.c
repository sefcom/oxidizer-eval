
  int64_t uu_split::handle_obsolete::hff2fd928c2a7a858(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_80 = -0x8000000000000000;
    char var_82 = 0;
    char var_81 = 0;
    int64_t* var_68 = &var_80;
    char* var_60 = &var_82;
    char* var_58 = &var_81;
    void var_38;
    core::iter::traits::iterator::Iterator::filter_map::hd1e9e24c004b15d2(&var_38, arg2, arg3, 
        &var_68);
    int128_t var_50;
    core::iter::traits::iterator::Iterator::collect::hf97293c3bdb54d6b(&var_50, &var_38);
    int64_t var_70;
    *(arg1 + 0x28) = var_70;
    *(arg1 + 0x18) = var_80;
    *arg1 = var_50;
    int64_t result;
    arg1[1] = result;
    return result;
}
