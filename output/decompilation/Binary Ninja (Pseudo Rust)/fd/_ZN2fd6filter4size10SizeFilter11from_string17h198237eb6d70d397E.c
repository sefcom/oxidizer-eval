
  fn fd::filter::size::SizeFilter::from_string::h198237eb6d70d397(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut var_20: i64 = arg2;
    let var_18: u64 = arg3;
    let mut result: i64;
    let mut rdx: u64;
    result = fd::filter::size::SizeFilter::parse_opt::h90fd64b2c85beca5(arg2, arg3);
    
    if result == 3
    {
        rdx = fd::filter::size::SizeFilter::from_string::_$u7b$$u7b$closure$u7d$$u7d$::hd1a80c410c70d5eb(&var_20);
    }
    
    arg1[1] = rdx;
    *arg1 = result;
    result
}
