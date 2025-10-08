
  int64_t alacritty::config::bindings::RawBinding::into_key_binding::h52d10dd46a680bbd(int64_t* arg1, int128_t* arg2)

{
    if (arg2[3] == 5)
    {
        uint64_t rax = alloc::boxed::Box$LT$T$GT$::new::he9b99f1ca761bae9(arg2);
        arg1[1] = rax;
        *arg1 = -0x7fffffffffffffcb;
        return rax;
    }
    
    int64_t rcx = arg2[5];
    int64_t var_18 = rcx;
    int128_t zmm0 = arg2[3];
    int128_t zmm1 = arg2[4];
    int128_t var_28 = zmm1;
    int128_t var_38 = zmm0;
    int32_t rax_2 = *(arg2 + 0x5c);
    int128_t zmm2 = *arg2;
    int128_t zmm3 = arg2[1];
    int128_t zmm4 = arg2[2];
    int128_t var_58 = zmm3;
    int128_t var_48 = zmm4;
    int128_t var_68 = zmm2;
    int16_t rdx = arg2[6];
    *arg1 = zmm2;
    *(arg1 + 0x10) = zmm3;
    *(arg1 + 0x20) = zmm4;
    *(arg1 + 0x30) = zmm0;
    *(arg1 + 0x40) = zmm1;
    arg1[0xa] = rcx;
    arg1[0xb] = rax_2;
    *(arg1 + 0x5c) = rdx;
    return rax_2;
}
