long long uu_echo::execute::h4d664c878faca400(unsigned long long a0, unsigned long long a1, unsigned long long a2, uint128_t a3[4])
{
    unsigned int v0;  // [sp-0x8c]
    char v1;  // [bp-0x88]
    char v2;  // [bp-0x87]
    int v4;  // [sp-0x78]
    int v5;  // [sp-0x68]
    int v6;  // [sp-0x58]
    int v7;  // [sp-0x48]
    void* v8;  // [sp-0x38]
    unsigned long long v10;  // rax
    unsigned long long v11[3];  // rdx
    unsigned long long v12[3];  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rsi
    unsigned long long v19;  // rsi
    void* v20;  // rax

    v0 = a1;
    *((uint128_t *)&v7) = a3[3];
    *((uint128_t *)&v6) = a3[2];
    *((uint128_t *)&v5) = a3[1];
    *((uint128_t *)&v4) = a3[0];
    v8 = 0;
    v10 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h803403345ea85a76(&v4, a1, a2);
    if (!v11)
    {
LABEL_4a52dc:
        if (!((char)v0) || !((v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a0, "\n", 1), v15)))
            return 0;
    }
    else if (!(char)a2)
    {
        while (true)
        {
            if (!(!v10) && !((v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a0, " /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 1), !v15)) || !((v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a0, v12[1], v12[2]), !v15)))
                break;
            v10 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h803403345ea85a76(&v4, v19, v11);
            if (!v11)
                goto LABEL_4a52dc;
        }
    }
    else
    {
        while (true)
        {
            if (v10 && (v15 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a0, " /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 1), v15))
                break;
            uu_echo::print_escaped::h79942f686a5199b9(&v1, v12[1], v12[2], a0);
            if (v1)
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v15);
                return v20;
            }
            if (v2)
                return 0;
            v10 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h803403345ea85a76(&v4, v16, v11);
            if (!v11)
                goto LABEL_4a52dc;
        }
    }
    v20 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v15);
    return v20;
}
