
  int64_t just::justfile::Justfile::modules::h159af459e28c9d16(int128_t* arg1, void* arg2, char arg3)

{
    int64_t rax = *(arg2 + 0x2a0);
    int64_t rcx = *(arg2 + 0x2a8);
    int64_t rdi = rax;
    int64_t rdx;
    rdx = rax;
    
    if (rax)
        rdi = *(arg2 + 0x2b0);
    
    int64_t var_60 = rdx;
    int64_t var_58 = 0;
    int64_t var_50 = rax;
    int64_t var_48 = rcx;
    int64_t var_40 = rdx;
    int64_t var_38 = 0;
    int64_t var_30 = rax;
    int64_t var_28 = rcx;
    int64_t var_20 = rdi;
    int128_t var_78;
    core::iter::traits::iterator::Iterator::collect::h7184a08076d67673(&var_78, &var_60);
    int64_t result;
    
    if (arg3 & 1)
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::h0e916841b04bbcbb(*var_78[8], 
            result);
    
    arg1[1] = result;
    *arg1 = var_78;
    return result;
}
