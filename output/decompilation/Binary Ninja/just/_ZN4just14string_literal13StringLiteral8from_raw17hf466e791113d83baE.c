
  int64_t just::string_literal::StringLiteral::from_raw::hf466e791113d83ba(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(arg1, arg2, arg3);
    *(arg1 + 0x2a) = 0;
    arg1[5] = 0x200;
    arg1[3] = arg2;
    arg1[4] = arg3;
    return result;
}
