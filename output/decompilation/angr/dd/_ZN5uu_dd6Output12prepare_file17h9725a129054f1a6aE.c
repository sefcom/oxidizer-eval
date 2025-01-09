long long uu_dd::Output::prepare_file::h9725a129054f1a6a(struct_0 *a0, unsigned int a1, struct_1 *a2)
{
    char v0;  // [sp-0x30]
    char v1;  // [sp-0x2f]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x18]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v1 = a2->field_90 ^ 1;
    v0 = 1;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc598a8c5dfdf2321(&v2, uu_dd::Dest::seek::hf206f28f02b500d6(&v0), v5);
    v6 = *((long long *)&v2);
    if (!v6)
    {
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
    }
    else
    {
        a2 = *((long long *)&v3);
        *((unsigned long long *)&a0->padding_1[7]) = v6;
        a0->field_0 = 4;
        v6 = ::0x4d5150::core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(*((int *)&v0), a1);
    }
    a0->field_10 = a2;
    return v6;
}
