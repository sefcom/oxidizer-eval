
  int64_t uu_du::get_time_secs::h49debf4b9f55f9aa(int64_t* arg1, char arg2, void* arg3)

{
    if (!arg2)
    {
        int64_t rax_2 = *(arg3 + 0x70);
        arg1[1] = rax_2;
        *arg1 = 5;
        return rax_2;
    }
    
    if (arg2 == 1)
    {
        int64_t rax_1 = *(arg3 + 0x78);
        arg1[1] = rax_1;
        *arg1 = 5;
        return rax_1;
    }
    
    int64_t rax_3 = *(arg3 + 0x38);
    bool cond:0 = !(*(arg3 + 0x30) & 1);
    int64_t var_20 = 3;
    
    if (!cond:0)
    {
        arg1[1] = rax_3;
        *arg1 = 5;
        return core::ptr::drop_in_place$LT$uu_du..DuError$GT$::h2285cec56b29122c(&var_20);
    }
    
    int64_t rax_5 = var_20;
    int128_t var_10;
    *(arg1 + 0x10) = var_10;
    *arg1 = rax_5;
    int64_t var_18;
    arg1[1] = var_18;
    return rax_5;
}
