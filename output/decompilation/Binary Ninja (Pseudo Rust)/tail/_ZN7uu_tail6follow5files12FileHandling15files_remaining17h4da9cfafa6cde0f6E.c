
  fn uu_tail::follow::files::FileHandling::files_remaining::h4da9cfafa6cde0f6(arg1: *mut c_void) -> u64

{
    let mut var_48: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h2ecde493e204e080(&var_48, 
        arg1.byte_offset(0x18));
    let mut result: u64;
    let mut result_1: u64;
    
    do
    {
        result = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hddac6c5de2dafa38(&var_48);
        result_1 = result;
        
        if result == 0
        {
            break;
        }
        
        if _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::h8ddebe59fac1e02e(*(result_1 + 8), *(result_1 + 0x10)) != 0
        {
            break;
        }
        
        result = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h9c895f48d1ad1ebf(*(result_1 + 8), *(result_1 + 0x10));
    } while result == 0;
    
    result = result_1 != 0;
    result
}
