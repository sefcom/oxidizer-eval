
  int64_t just::assignment_resolver::AssignmentResolver::resolve_assignments::h326a32445f9866d5(int128_t* arg1, int64_t* arg2)

{
    int64_t* var_d8 = arg2;
    int64_t var_d0 = 0;
    int64_t var_c0 = 0;
    int64_t var_f0 = 0;
    int64_t var_e8 = 8;
    int64_t var_e0 = 0;
    int64_t rax = *arg2;
    int64_t rcx = arg2[1];
    int64_t rdi = rax;
    
    if (rax)
        rdi = arg2[2];
    
    int64_t rdx;
    rdx = rax;
    int64_t var_b8 = rdx;
    int64_t var_b0 = 0;
    int64_t var_a8 = rax;
    int64_t var_a0 = rcx;
    int64_t var_98 = rdx;
    int64_t var_90 = 0;
    int64_t var_88 = rax;
    int64_t var_80 = rcx;
    int64_t var_78 = rdi;
    
    while (true)
    {
        int64_t* rax_1 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6442f8fd74f44bbc(&var_b8);
        
        if (!rax_1)
        {
            *(arg1 + 0x48) = 0x25;
            break;
        }
        
        int128_t var_70;
        just::assignment_resolver::AssignmentResolver::resolve_assignment::hc41d0fa4a847f48d(
            &var_70, &var_f0, *rax_1, rax_1[1]);
        char var_28;
        
        if (var_28 != 0x25)
        {
            int128_t var_30;
            arg1[4] = var_30;
            int128_t zmm0_1 = var_70;
            int128_t var_40;
            arg1[3] = var_40;
            int128_t var_50;
            arg1[2] = var_50;
            int128_t var_60;
            arg1[1] = var_60;
            *arg1 = zmm0_1;
            break;
        }
    }
    
    return core::ptr::drop_in_place$LT$just..assignment_resolver..AssignmentResolver$GT$::h0fc26a71e15d6efc(&var_f0);
}
