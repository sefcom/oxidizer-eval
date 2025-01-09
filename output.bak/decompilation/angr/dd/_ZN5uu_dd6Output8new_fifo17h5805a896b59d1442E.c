long long uu_dd::Output::new_fifo::h5805a896b59d1442(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned int v1;  // [sp-0x44], Other Possible Types: unsigned long long
    char v2;  // [sp-0x3e]
    char v3;  // [sp-0x3c]
    char v4;  // [sp-0x3b]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x34]
    char v7;  // [bp-0x30]
    unsigned long long v9;  // rdx
    unsigned int v12;  // eax
    unsigned int v14;  // eax
    unsigned long v15;  // rdx

    if (a3->field_88)
    {
        std::fs::File::open::h7106e998c3d1654b(&v5, a1, a2);
        if (*((int *)&v5))
        {
            a0->field_8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(*((long long *)&v7));
            a0->field_10 = v15;
            a0->field_0 = 4;
            return a0;
        }
        v1 = *((int *)&v6);
        v0 = 2;
        if (uu_dd::Dest::seek::hf206f28f02b500d6(&v0))
        {
            a0->field_8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v9);
            a0->field_10 = v9;
            a0->field_0 = 4;
            ::0x4d5150::core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(*((int *)&v0), v1);
            return a0;
        }
        ::0x4d5150::core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(*((int *)&v0), v1);
    }
    if (a3->field_0 && (unsigned int)a3->field_0 != 1 || a3->field_8)
    {
        v1 = 1099511628214;
        v3 = a3->field_92 ^ 1;
        v4 = a3->field_91;
        v2 = a3->field_96;
        v0 = v12;
        std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&v5, &v0, a1, a2);
        if (*((int *)&v5))
        {
            a0->field_8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(*((long long *)&v7));
            a0->field_10 = v15;
            a0->field_0 = 4;
            return a0;
        }
        v14 = *((int *)&v6);
        a0->field_0 = 2;
        a0->field_4 = v14;
    }
    else
    {
        a0->field_0 = 3;
    }
    a0->field_10 = a3;
    return a0;
}
