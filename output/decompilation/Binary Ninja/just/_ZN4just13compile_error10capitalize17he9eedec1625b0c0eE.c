
  int64_t just::compile_error::capitalize::he9eedec1625b0c0e(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_60 = arg2;
    char result;
    int32_t rdx_1;
    result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_60, arg1);
    
    if (!(result & 1))
    {
        *arg1 = 0;
        *(arg1 + 8) = 1;
        *(arg1 + 0x10) = 0;
        return result;
    }
    
    void var_50;
    core::unicode::unicode_data::conversions::to_upper::hd4e5a9ef8e8428c0(&var_50, rdx_1);
    void var_38;
    core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_38, &var_50);
    core::iter::traits::iterator::Iterator::collect::h59af5a3110a87165(&var_50, &var_38);
    int64_t rdx_2 = var_60;
    return _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(arg1, &var_50, rdx_2, arg3 + arg2 - rdx_2);
}
