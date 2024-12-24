long long uu_paste::InputSource::read_until::hd9d395f8ff3c6f09(unsigned long long a0[2], unsigned long long a1[2], unsigned int a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    char v1;  // [sp-0x28]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    char v6;  // dl
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rdx

    if (!a1[0])
    {
        v4 = core::cell::RefCell$LT$T$GT$::try_borrow::h50e66ae019e1f8f7(a1[1] + 16);
        if (!v4)
        {
            a0[0] = uu_paste::InputSource::read_until::_$u7b$$u7b$closure$u7d$$u7d$::h14cf651045c5b9bc();
            a0[1] = &g_514540;
            return &g_514540;
        }
        v0 = std::io::stdio::Stdin::lock::h161a36d857331d7f(v4);
        v1 = v6 & 1;
        if (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&v0))
        {
            a0[0] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v7);
            a0[1] = v7;
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hde01eb5cac4530a1(v0, *((int *)&v1));
            v3 = core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::h99cf80a751034ff0(v7);
            return v3;
        }
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hde01eb5cac4530a1(v0, *((int *)&v1));
        v3 = core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::h99cf80a751034ff0(v7);
    }
    else
    {
        v3 = std::io::read_until::ha06f315ceff12245(a1, a2, a3);
        if (v3)
        {
            v3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v5);
            a0[0] = v3;
            a0[1] = v5;
            return v3;
        }
    }
    a0[1] = v9;
    a0[0] = 0;
    return v3;
}
