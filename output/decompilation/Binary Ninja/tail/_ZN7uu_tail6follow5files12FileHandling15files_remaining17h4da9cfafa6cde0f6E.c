
  uint64_t uu_tail::follow::files::FileHandling::files_remaining::h4da9cfafa6cde0f6(void* arg1)

{
    void var_48;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h2ecde493e204e080(&var_48, arg1 + 0x18);
    uint64_t result;
    uint64_t result_1;
    
    do
    {
        result = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hddac6c5de2dafa38(&var_48);
        result_1 = result;
        
        if (!result)
            break;
        
        if (_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::h8ddebe59fac1e02e(*(result_1 + 8), *(result_1 + 0x10)))
            break;
        
        result = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h9c895f48d1ad1ebf(*(result_1 + 8), *(result_1 + 0x10));
    } while (!result);
    
    result = result_1;
    return result;
}
