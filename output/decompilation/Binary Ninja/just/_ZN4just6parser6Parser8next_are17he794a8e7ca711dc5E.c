
  int64_t just::parser::Parser::next_are::he794a8e7ca711dc5(void* arg1, char* arg2, int64_t arg3)

{
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5a58b559c63dc861(
        arg1 + 0x38, *arg2);
    int64_t rax;
    int64_t rdx;
    rax = just::parser::Parser::rest::h006cb6290a6cc038(arg1);
    int64_t var_80 = rax;
    int64_t var_78 = rdx;
    int64_t result = 0;
    int64_t result_1;
    char i;
    
    do
    {
        result_1 = result;
        
        if (arg3 == result)
            break;
        
        void var_70;
        core::iter::traits::iterator::Iterator::try_fold::hc0d12f79d33f0a11(&var_70, &var_80);
        
        if (i == 0x25)
            break;
        
        result = result_1 + 1;
    } while (i == arg2[result_1]);
    result = arg3 == result_1;
    return result;
}
