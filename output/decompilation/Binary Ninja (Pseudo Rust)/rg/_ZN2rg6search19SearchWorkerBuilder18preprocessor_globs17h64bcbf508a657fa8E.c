
  fn rg::search::SearchWorkerBuilder::preprocessor_globs::h64bcbf508a657fa8(arg1: *mut i64, arg2: *mut i128) -> *mut i128

{
    let rax: i64;
    let var_18: i64 = rax;
    let result: *mut i128 = arg1;
    core::ptr::drop_in_place$LT$ignore..overrides..Override$GT$::hae0bd07e5bff913c(arg1);
    result[6] = arg2[6];
    result[5] = arg2[5];
    result[4] = arg2[4];
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    result[3] = arg2[3];
    result[2] = zmm2;
    result[1] = zmm1;
    *result = zmm0;
    result
}
