
  fn uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(arg1: *mut c_void) -> u64

{
    let mut var_58: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hd64d950704f7a77f(&var_58, 
        arg1.byte_offset(0x18));
    let mut result: u64;
    let mut result_1: u64;
    
    do
    {
        result = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2eaa0b924946ce33(&var_58);
        result_1 = result;
        
        if result == 0
        {
            break;
        }
        
        let r15_1: *mut i8 = *(result_1 + 8);
        let r12_1: u64 = *(result_1 + 0x10);
        
        if _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::hfd31d73cfedfa97d(r15_1, r12_1) != 0
        {
            break;
        }
        
        result = _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h7b78c224abf6fd98(r15_1, r12_1);
    } while result == 0;
    
    result = result_1 != 0;
    result
}
