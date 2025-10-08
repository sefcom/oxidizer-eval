
  int128_t* rg::search::SearchWorkerBuilder::preprocessor_globs::h64bcbf508a657fa8(int64_t* arg1, int128_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int128_t* result = arg1;
    core::ptr::drop_in_place$LT$ignore..overrides..Override$GT$::hae0bd07e5bff913c(arg1);
    result[6] = arg2[6];
    result[5] = arg2[5];
    result[4] = arg2[4];
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    result[3] = arg2[3];
    result[2] = zmm2;
    result[1] = zmm1;
    *result = zmm0;
    return result;
}
