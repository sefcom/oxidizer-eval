
  uint64_t change_log::domain::changelog::capitalize::h54fed00d31b497f2(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_60 = arg2;
    char rax;
    int32_t rdx_1;
    rax = core::str::validations::next_code_point::h1501e091589260ce(&var_60, arg1);
    
    if (!(rax & 1))
    {
        *arg1 = 0;
        *(arg1 + 8) = 1;
        *(arg1 + 0x10) = 0;
    }
    else
    {
        void var_50;
        core::unicode::unicode_data::conversions::to_upper::hd4e5a9ef8e8428c0(&var_50, rdx_1);
        void var_38;
        core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_38, &var_50);
        core::iter::traits::iterator::Iterator::collect::hf4b3160f6bdc6fc3(&var_50, &var_38);
        int64_t rdx_2 = var_60;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(arg1, &var_50, rdx_2, arg3 + arg2 - rdx_2);
    }
    
    return arg1;
}
