
  fn backdoorautomater::sanitizer::sanitize_ip::hca067074337469f3(arg1: *mut i128, arg2: *mut i128, arg3: bool, arg4: u64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    core::result::Result$LT$T$C$E$GT$::expect::h9adbf5d20ccffacf(core::net::parser::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$core..net..ip_addr..Ipv4Addr$GT$::from_str::h8ed009dc83fa8eec(*arg2.byte_offset(8), arg2[1], 
        arg3, arg4));
    let result: i64 = arg2[1];
    arg1[1] = result;
    *arg1 = *arg2;
    result
}
