
  uint64_t alacritty::config::bindings::RawBinding::into_mouse_binding::h7a8cfac036ae1ccd(int64_t* arg1, int128_t* arg2)

{
    int16_t rax = *(arg2 + 0x58);
    
    if (rax == 6)
    {
        int64_t var_18 = arg2[6];
        int128_t var_28 = arg2[5];
        int128_t var_38 = arg2[4];
        int128_t var_48 = arg2[3];
        int128_t var_58 = arg2[2];
        int128_t var_68 = arg2[1];
        int128_t var_78 = *arg2;
        uint64_t result = alloc::boxed::Box$LT$T$GT$::new::he9b99f1ca761bae9(&var_78);
        arg1[1] = result;
        *arg1 = -0x7fffffffffffffcb;
        return result;
    }
    
    int16_t rcx = *(arg2 + 0x5a);
    int32_t rdx = *(arg2 + 0x5c);
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    *(arg1 + 0x20) = arg2[2];
    *(arg1 + 0x10) = zmm1;
    *arg1 = zmm0;
    int16_t rdi_1 = arg2[6];
    arg1[6] = rax;
    *(arg1 + 0x32) = rcx;
    *(arg1 + 0x34) = rdx;
    arg1[7] = rdi_1;
    /* tailcall */
    return core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..bindings..BindingKey$GT$$GT$::h4838dee35b4ef80c(&arg2[3]);
}
