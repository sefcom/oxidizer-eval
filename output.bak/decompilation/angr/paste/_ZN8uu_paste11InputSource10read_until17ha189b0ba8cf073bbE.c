long long uu_paste::InputSource::read_until::ha189b0ba8cf073bb(unsigned long long a0[2], unsigned long long a1[2], unsigned int a2, unsigned long long a3)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    char v1;  // [sp-0x28]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    char v6;  // dl
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdx

    if (!a1[0])
    {
        v4 = core::cell::RefCell$LT$T$GT$::try_borrow::h959d5806e7d4e445(a1[1] + 16);
        if (!v4)
        {
            a0[0] = uu_paste::InputSource::read_until::_$u7b$$u7b$closure$u7d$$u7d$::h1211fc4f0eb61bc6();
            a0[1] = &g_5135a0;
            return &g_5135a0;
        }
        v0 = std::io::stdio::Stdin::lock::h161a36d857331d7f(v4);
        v1 = v6 & 1;
        if (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&v0, a2, a3))
        {
            a0[0] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v7);
            a0[1] = v7;
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h4cb87d9107df2b81();
            v3 = core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::h971a788c5bfdd900();
            return v3;
        }
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h4cb87d9107df2b81();
        v3 = core::ptr::drop_in_place$LT$core..cell..Ref$LT$std..io..stdio..Stdin$GT$$GT$::h971a788c5bfdd900();
    }
    else
    {
        v3 = std::io::read_until::h3aa91410a41ab69d(a1, a2, a3);
        if (v3)
        {
            v3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v5);
            a0[0] = v3;
            a0[1] = v5;
            return v3;
        }
    }
    a0[1] = v8;
    a0[0] = 0;
    return v3;
}
