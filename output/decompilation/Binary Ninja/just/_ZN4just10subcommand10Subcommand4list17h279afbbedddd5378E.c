
  int64_t just::subcommand::Subcommand::list::h279afbbedddd5378(char* arg1, void* arg2, void* arg3, void* arg4)

{
    void* rax = arg3;
    int64_t rcx = *(arg4 + 0x10);
    int64_t result;
    
    if (!rcx)
    {
        label_68e993:
        result = just::subcommand::Subcommand::list_module::h05aa7b8b99df3073(arg2, rax, 0);
        *arg1 = 0x38;
    }
    else
    {
        int64_t r12_1 = *(arg4 + 8);
        int64_t rbp_1 = 0;
        
        while (true)
        {
            rax = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *(rax + 0x2a0), *(rax + 0x2a8), *(r12_1 + rbp_1 + 8), *(r12_1 + rbp_1 + 0x10));
            
            if (!rax)
            {
                int64_t result_1;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbfd22dd80b4b7c3f(&result_1, arg4);
                result = result_1;
                int128_t var_40;
                *(arg1 + 0x10) = var_40;
                *arg1 = 0x35;
                *(arg1 + 8) = result;
                break;
            }
            
            rbp_1 += 0x18;
            
            if (rcx * 0x18 == rbp_1)
                goto label_68e993;
        }
    }
    
    return result;
}
