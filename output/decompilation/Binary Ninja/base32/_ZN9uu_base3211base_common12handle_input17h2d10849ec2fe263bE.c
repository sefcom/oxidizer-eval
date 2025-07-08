
  int128_t* uu_base32::base_common::handle_input::h2d10849ec2fe263b(int64_t* arg1, char arg2, int64_t* arg3)

{
    uint64_t rax;
    int64_t* rdx;
    rax = uu_base32::base_common::get_supports_fast_decode_and_encode::h61396d0f590470b1(arg2);
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_30 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_38 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_30);
    int128_t* result;
    int64_t rdx_2;
    
    if (!arg3[5])
        result = uu_base32::base_common::fast_encode::fast_encode::he2f2c369f4c434ff(arg1, &var_38, 
            rax, rdx, *arg3, arg3[1]);
    else
        result = uu_base32::base_common::fast_decode::fast_decode::h894b8dd38a833827(arg1, &var_38, 
            rax, rdx, *(arg3 + 0x29));
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h8ed0d40b089bb0da(var_38);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..features..encoding..SupportsFastDecodeAndEncode$GT$$GT$::h805b1188f3ea2a33(rax, rdx);
    core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::hac45288a00438e90(arg3);
    return result;
}
