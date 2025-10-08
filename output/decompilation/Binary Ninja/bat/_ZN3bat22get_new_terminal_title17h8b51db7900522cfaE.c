
  int64_t bat::get_new_terminal_title::h8b51db7900522cfa(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int128_t var_60;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_60, "bat: LC_ALLPAGERXDG_CACHE_HOMEXD…", 5);
    int64_t var_48 = arg2;
    int64_t var_40 = arg3 * 0xa0 + arg2;
    int64_t var_38 = 0;
    int64_t rax_3;
    void* i;
    rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcd5efa96571fd292(&var_48);
    
    if (i)
    {
        int64_t rbx_1 = rax_3;
        
        do
        {
            void* rax_5 = i + 0x40;
            
            if (0 + -(*(i + 0x40)))
                rax_5 = i + 0x28;
            
            int64_t rsi = *(rax_5 + 8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_60, rsi, *(rax_5 + 0x10) + rsi);
            
            if (rbx_1 < arg3 - 1)
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_60, ", ,: ", ",: ");
            
            int64_t rax_4;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcd5efa96571fd292(&var_48);
            rbx_1 = rax_4;
        } while (i);
    }
    
    int64_t result;
    arg1[1] = result;
    *arg1 = var_60;
    return result;
}
