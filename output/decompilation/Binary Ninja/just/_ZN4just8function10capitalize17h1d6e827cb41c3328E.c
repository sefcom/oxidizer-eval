
  int64_t* just::function::capitalize::h1d6e827cb41c3328(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_90 = 0;
    int64_t var_88 = 1;
    int64_t var_80 = 0;
    int64_t var_78 = arg3;
    int64_t var_70 = arg4 + arg3;
    int64_t var_68 = 0;
    uint64_t rax;
    int32_t i;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf0a80c91f197e22(&var_78);
    
    if (i != 0x110000)
    {
        do
        {
            void var_5c;
            void var_50;
            
            if (!rax)
            {
                core::unicode::unicode_data::conversions::to_upper::hd4e5a9ef8e8428c0(&var_5c, i);
                core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_50, &var_5c);
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h0c6cf7086eb16438(&var_90, &var_50);
            }
            else
            {
                core::unicode::unicode_data::conversions::to_lower::hc1521f967a2a0de4(&var_5c, i);
                core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_50, &var_5c);
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h0c6cf7086eb16438(&var_90, &var_50);
            }
            rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf0a80c91f197e22(&var_78);
        } while (i != 0x110000);
    }
    
    arg1[3] = var_80;
    *(arg1 + 8) = var_90;
    *arg1 = 0;
    return arg1;
}
