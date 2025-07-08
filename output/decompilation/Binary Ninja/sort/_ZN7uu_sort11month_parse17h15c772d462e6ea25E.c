
  uint64_t uu_sort::month_parse::h15c772d462e6ea25(int64_t arg1)

{
    char* rax;
    int64_t rdx;
    int64_t rsi;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h13cb0d7168f45d26(arg1, rsi);
    char const (** const var_30)[0x97] = &data_5ffe20;
    void** const var_28 = &data_5fff40;
    int64_t* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&var_30);
    
    if (i_2)
    {
        int64_t* i_1 = i_2;
        int64_t* i;
        
        do
        {
            int64_t rcx_1 = i_1[1];
            int64_t rsi_1;
            char* rdi_1;
            
            if (!rcx_1)
            {
                rdi_1 = rax;
                rsi_1 = 0;
                rcx_1 = 0;
                label_5245b7:
                
                if (core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he7c08894b5496a04(rdi_1, rsi_1, *i_1, rcx_1))
                    return i_1[2];
            }
            else if (rcx_1 >= rdx)
            {
                if (rcx_1 == rdx)
                {
                    label_5245f2:
                    rdi_1 = rax;
                    rsi_1 = rcx_1;
                    goto label_5245b7;
                }
            }
            else if (rax[rcx_1] > 0xbf)
                goto label_5245f2;
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45e2651b910dc2d2(&var_30);
            i_1 = i;
        } while (i);
    }
    
    return 0;
}
