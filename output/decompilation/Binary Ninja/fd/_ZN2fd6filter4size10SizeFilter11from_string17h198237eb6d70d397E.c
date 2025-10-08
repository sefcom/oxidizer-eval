
  int64_t fd::filter::size::SizeFilter::from_string::h198237eb6d70d397(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_20 = arg2;
    uint64_t var_18 = arg3;
    int64_t result;
    uint64_t rdx;
    result = fd::filter::size::SizeFilter::parse_opt::h90fd64b2c85beca5(arg2, arg3);
    
    if (result == 3)
        rdx = fd::filter::size::SizeFilter::from_string::_$u7b$$u7b$closure$u7d$$u7d$::hd1a80c410c70d5eb(&var_20);
    
    arg1[1] = rdx;
    *arg1 = result;
    return result;
}
