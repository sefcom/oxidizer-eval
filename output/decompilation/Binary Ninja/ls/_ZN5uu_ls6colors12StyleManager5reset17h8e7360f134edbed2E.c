
  int64_t* uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(int64_t* arg1, void* arg2, char arg3)

{
    if (*(arg2 + 8) != 2 || arg3)
    {
        *(arg2 + 0x1d) = 1;
        *(arg2 + 8) = 2;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(arg1);
        return arg1;
    }
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
    return arg1;
}
