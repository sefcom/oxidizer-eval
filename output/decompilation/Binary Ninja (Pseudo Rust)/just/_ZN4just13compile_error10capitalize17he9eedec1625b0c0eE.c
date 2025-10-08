
  fn just::compile_error::capitalize::he9eedec1625b0c0e(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut var_60: i64 = arg2;
    let mut result: i8;
    let mut rdx_1: i32;
    result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_60, arg1);
    
    if (result & 1) == 0
    {
        *arg1 = 0;
        *(arg1 + 8) = 1;
        *(arg1 + 0x10) = 0;
        return result;
    }
    
    let mut var_50: ();
    core::unicode::unicode_data::conversions::to_upper::hd4e5a9ef8e8428c0(&var_50, rdx_1);
    let mut var_38: ();
    core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_38, &var_50);
    core::iter::traits::iterator::Iterator::collect::h59af5a3110a87165(&var_50, &var_38);
    let rdx_2: i64 = var_60;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(arg1, &var_50, rdx_2, arg3 + arg2 - rdx_2)
}
