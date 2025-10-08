
  int64_t just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(uint64_t* arg1, int128_t* arg2, int128_t* arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    *arg1 = alloc::boxed::Box$LT$T$GT$::new::hba64d97b4764ff5d(arg3);
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    int128_t zmm3 = arg2[3];
    *(arg1 + 8) = *arg2;
    *(arg1 + 0x18) = zmm1;
    *(arg1 + 0x28) = zmm2;
    *(arg1 + 0x38) = zmm3;
    int64_t result = arg2[4];
    arg1[9] = result;
    return result;
}
