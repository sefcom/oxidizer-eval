
  fn bat::style::StyleComponentList::expand_into::hd87a566cad0ff565(arg1: *mut c_void, arg2: *mut i64, arg3: i8)

{
    let rax: i64;
    let var_38: i64 = rax;
    let r14: i64 = *arg1.byte_offset(0x10);
    
    if r14 != 0
    {
        let r15_1: *mut i8 = *arg1.byte_offset(8);
        let r14_1: i64 = r14 * 2;
        let mut r12_1: i64 = 0;
        
        loop
        {
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 =
                bat::style::StyleComponent::components::h6c8afe9a5a433675(r15_1[r12_1 + 1], arg3);
            
            if r15_1[r12_1] < 2
            {
                _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h03e28ec7a347abed(arg2, rax_1);
                r12_1 += 2;
                
                if r14_1 == r12_1
                {
                    break;
                }
            }
            else
            {
                hashbrown::set::HashSet$LT$T$C$S$C$A$GT$::retain::h7bbc9710847830e6(arg2, rax_1);
                r12_1 += 2;
                
                if r14_1 == r12_1
                {
                    break;
                }
            }
        }
    }
}
