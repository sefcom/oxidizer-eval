
  int128_t* uu_env::parse_program_opt::h5dc288b3b7b61775(void* arg1, int64_t arg2, int64_t arg3)

{
    if (*(arg1 + 0x99))
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h98294152d1093a7c(arg1 + 0x48, arg2, arg3);
        return nullptr;
    }
    
    void var_28;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&var_28, 
        "cannot specify --null (-0) with …", 0x27);
    int32_t var_10_1 = 0x7d;
    return alloc::boxed::Box$LT$T$GT$::new::ha5ed2421d13baa8b(&var_28);
}
