
  int64_t backdoorautomater::sanitizer::sanitize_ip::hca067074337469f3(int128_t* arg1, int128_t* arg2, bool arg3, uint64_t arg4)

{
    int64_t rax;
    int64_t var_18 = rax;
    core::result::Result$LT$T$C$E$GT$::expect::h9adbf5d20ccffacf(core::net::parser::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$core..net..ip_addr..Ipv4Addr$GT$::from_str::h8ed009dc83fa8eec(*(arg2 + 8), arg2[1], arg3, arg4));
    int64_t result = arg2[1];
    arg1[1] = result;
    *arg1 = *arg2;
    return result;
}
