
  int64_t fd::walk::WorkerState::new::h2df247c74afad7a8(void* arg1, int128_t* arg2, int64_t arg3)

{
    int64_t var_40 = 1;
    int64_t var_38 = 1;
    char var_30 = 0;
    uint64_t rax = alloc::boxed::Box$LT$T$GT$::new::h22579eb5831378dc(&var_40);
    uint64_t var_48 = rax;
    uint64_t rax_1 = alloc::boxed::Box$LT$T$GT$::new::h22579eb5831378dc(&var_40);
    memcpy(arg1, arg3, 0x1f8);
    *(arg1 + 0x1f8) = *arg2;
    int64_t result = arg2[1];
    *(arg1 + 0x208) = result;
    *(arg1 + 0x210) = rax;
    *(arg1 + 0x218) = rax_1;
    return result;
}
