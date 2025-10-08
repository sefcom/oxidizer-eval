
  void bat::style::StyleComponentList::expand_into::hd87a566cad0ff565(void* arg1, int64_t* arg2, char arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r14 = *(arg1 + 0x10);
    
    if (r14)
    {
        char* r15_1 = *(arg1 + 8);
        int64_t r14_1 = r14 * 2;
        int64_t r12_1 = 0;
        
        while (true)
        {
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 =
                bat::style::StyleComponent::components::h6c8afe9a5a433675(r15_1[r12_1 + 1], arg3);
            
            if (r15_1[r12_1] < 2)
            {
                _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h03e28ec7a347abed(arg2, rax_1);
                r12_1 += 2;
                
                if (r14_1 == r12_1)
                    break;
            }
            else
            {
                hashbrown::set::HashSet$LT$T$C$S$C$A$GT$::retain::h7bbc9710847830e6(arg2, rax_1);
                r12_1 += 2;
                
                if (r14_1 == r12_1)
                    break;
            }
        }
    }
}
