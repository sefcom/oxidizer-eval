
  int64_t alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::channel::hc20d0440863ece0f(int64_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t result;
    int64_t rdx;
    result = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h054a57b759326448(*(arg2 + 0x50), *(arg2 + 0x58));
    int64_t* rcx = *(arg2 + 0x60);
    int64_t temp0 = *rcx;
    *rcx += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    *arg1 = result;
    arg1[1] = rdx;
    arg1[2] = rcx;
    return result;
}
