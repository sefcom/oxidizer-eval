long long uu_join::State::skip_line::h523cb714b181cd38(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    unsigned long long v0[3];  // [bp-0x40]
    char v1;  // [bp-0x30]
    int v2;  // [sp-0x28]
    unsigned long long v3;  // [sp-0x18]
    unsigned long long v5;  // rax

    if (a0->field_59)
    {
        v5 = uu_join::State::print_first_line::hbf0bc693ab226b45(a0, a1, a3);
        if (v5)
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v5);
    }
    uu_join::State::reset_next_line::h88e4f5e73c4cb700(v0, a0, a2);
    if (v0[0] != 9223372036854775809)
    {
        v3 = *((long long *)&v1);
        *((int128_t *)&v2) = *((int128_t *)&v0[0]);
        return alloc::boxed::Box$LT$T$GT$::new::h479aa71056b554a0(&v2);
    }
    return 0;
}
