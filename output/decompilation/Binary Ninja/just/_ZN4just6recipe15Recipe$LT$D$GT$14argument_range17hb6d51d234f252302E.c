
  int64_t just::recipe::Recipe$LT$D$GT$::argument_range::hb6d51d234f252302(int64_t* arg1, int32_t* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hca6170881fec0ef2(arg2, arg3 * 0xd0 + arg2);
    int64_t result = just::recipe::Recipe$LT$D$GT$::max_arguments::h4d291109c050f382(arg2, arg3);
    *arg1 = rax_1;
    arg1[1] = result;
    arg1[2] = 0;
    return result;
}
