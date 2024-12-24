long long uu_env::apply_ignore_signal::he31db2d66f139fba(unsigned long long a0[15], unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x18]
    unsigned int *v3;  // rax
    unsigned int v4;  // edx
    void* v5;  // rax
    unsigned long long v6;  // rdx

    v0 = a0[13];
    v1 = v0 + a0[14] * 8;
    while (true)
    {
        v3 = ::0x4cc060::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf5f28db170fcb64f(&v0);
        if (!v3)
        {
            return 0;
        }
        else if ((int)_$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h5a9c8c122c9f1eb5(*(v3)))
        {
            v5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v6 * 0x100000000 | 2);
            return v5;
        }
        else
        {
            v5 = uu_env::ignore_signal::h1c2b1631f97aeab0(v4);
            if (v5)
                return v5;
        }
    }
}
