long long uu_env::apply_ignore_signal::h50dc2527ab008a21(unsigned long long a0[15])
{
    unsigned long v0;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x18]
    unsigned int *v3;  // rax
    unsigned int v4;  // edx
    void* v5;  // rax
    unsigned long v6;  // rdx

    v0 = a0[13];
    v1 = v0 + a0[14] * 8;
    while (true)
    {
        v3 = ::0x4cbed0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h009f5b357177ad4e(&v0);
        if (!v3)
        {
            return 0;
        }
        else if (!(int)_$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h02b141bd98cda8e5(*(v3)))
        {
            v5 = uu_env::ignore_signal::hb651b27965f7f812(v4);
            if (v5)
                return v5;
        }
        else
        {
            v5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v6 * 0x100000000 | 2);
            return v5;
        }
    }
}
