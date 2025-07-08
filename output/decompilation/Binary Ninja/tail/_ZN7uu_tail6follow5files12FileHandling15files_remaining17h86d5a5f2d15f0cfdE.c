
  uint64_t uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(void* arg1)

{
    void var_58;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hd64d950704f7a77f(&var_58, arg1 + 0x18);
    uint64_t result;
    uint64_t result_1;
    
    do
    {
        result = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2eaa0b924946ce33(&var_58);
        result_1 = result;
        
        if (!result)
            break;
        
        char* r15_1 = *(result_1 + 8);
        uint64_t r12_1 = *(result_1 + 0x10);
        
        if (_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::hfd31d73cfedfa97d(r15_1, r12_1))
            break;
        
        result = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h7b78c224abf6fd98(r15_1, r12_1);
    } while (!result);
    
    result = result_1;
    return result;
}
