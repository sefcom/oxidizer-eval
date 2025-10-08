
  uint64_t fd::walk::ReceiverBuffer$LT$W$GT$::flush::h793374cb5c5836e2(void* arg1)

{
    void** rax = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hc70b0dccf2b498f6(arg1 + 0x10);
    void** var_10 = rax;
    int64_t rbx;
    rbx = !rax;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf603403cb1b5404d(&var_10);
    rbx *= 2;
    rbx |= 4;
    return rbx;
}
