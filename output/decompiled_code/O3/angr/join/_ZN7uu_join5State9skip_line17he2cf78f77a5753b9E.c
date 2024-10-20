long long uu_join::State::skip_line::he2cf78f77a5753b9(struct_0 *a0, void* a1, char a2[2], void* a3)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    int v1;  // [sp-0x90], Other Possible Types: unsigned long long
    int v2;  // [sp-0x88]
    int v3;  // [sp-0x78]
    int v4;  // [sp-0x68]
    int v5;  // [sp-0x58]
    char v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    void* v12;  // rax

    if (*((char *)&a0->field_58 + 1))
    {
        if (!*((long long *)(a0 + &g_10)))
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v11 = uu_join::State::print_line::h43ee202ef50c9509(*((long long *)&a0->field_40), a0->field_58, a1, *((long long *)(a0 + &g_0)), a3);
        if (v11)
        {
            v12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v11);
            return v12;
        }
    }
    uu_join::State::next_line::h4d0834fe1ff7b894(&v6, a0, a2);
    *((int128_t *)&v4) = *((int128_t *)&v8);
    if (v0 != 9223372036854775809)
    {
        *((int128_t *)&v3) = *((int128_t *)&v9);
        v0 = *((long long *)&v6);
        v1 = *((long long *)&v7);
        v2 = v4;
        uu_join::State::reset::ha78a7acf49b2e745(a0, &v0);
        return &g_0;
    }
    v5 = v4;
    if (v1 == 9223372036854775809)
        return &g_0;
    v1 = v5;
    v0 = v1;
    v12 = __rust_alloc(24, 8);
    if (v12)
    {
        *((long long *)(v12 + &g_10)) = (long long)(&v1)[8];
        *((int128_t *)v12) = *((int128_t *)&v0);
        return v12;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
