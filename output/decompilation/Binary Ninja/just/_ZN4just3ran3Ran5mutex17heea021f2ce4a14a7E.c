
  int64_t just::ran::Ran::mutex::heea021f2ce4a14a7(int32_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int128_t var_60;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h8c63bddf4155ebcf(&var_60, arg1);
    int32_t* rax;
    char rdx;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::h0311aa5668c6c0bb(&var_60);
    int64_t rax_1;
    uint64_t rdx_1;
    rax_1 = just::recipe::Recipe::namepath::haa1c710e3a0b6f26(arg2);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_60, rax_1, rdx_1);
    int64_t var_50;
    int64_t var_68 = var_50;
    int128_t var_78 = var_60;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h932a11fd9d9692f1(&var_60, 
        &rax[2], &var_78);
    int64_t* rax_3 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h2fa49c30783bbe11(&var_60);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h43b71247e42c11ac(&var_78, arg3, arg4);
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h730f5e9d01a6b5c1(&var_60, 
        rax_3, &var_78);
    int64_t* rax_4 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::hfc090e0ca736ac5a(&var_60);
    int64_t* rcx = *rax_4;
    int64_t temp0 = *rcx;
    *rcx += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    int64_t result = *rax_4;
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax, rdx & 1);
    return result;
}
