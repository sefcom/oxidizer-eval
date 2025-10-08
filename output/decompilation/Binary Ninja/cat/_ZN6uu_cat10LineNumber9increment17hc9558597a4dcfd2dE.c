
  int64_t uu_cat::LineNumber::increment::hc9558597a4dcfd2d(char* arg1)

{
    uucore::features::fast_inc::fast_inc_one::h07ba73c2abdee31e(arg1, &arg1[0x28], *(arg1 + 0x30));
    int64_t result = core::cmp::Ord::min::h0279cc79185d3622(*(arg1 + 0x20), *(arg1 + 0x28));
    *(arg1 + 0x20) = result;
    return result;
}
