
  int64_t uu_tail::args::Settings::verify::hc5274fc1768a90af(int64_t* arg1)

{
    int64_t rax = arg1[4];
    int64_t rcx = arg1[5];
    int64_t var_18 = rax;
    int64_t var_10 = rcx * 0x30 + rax;
    char rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h6490742e89b15d1d(&var_18);
    char rax_2 = *(arg1 + 0x4c);
    
    if (!rax_1)
    {
        if (rax_2 != 2)
            return 0;
    }
    else if (rax_2 != 2)
        return rax_2 & 1;
    
    int64_t result = *arg1;
    
    if (result == 4)
        result = arg1[1];
    
    result = result == 3;
    result *= 2;
    return result;
}
