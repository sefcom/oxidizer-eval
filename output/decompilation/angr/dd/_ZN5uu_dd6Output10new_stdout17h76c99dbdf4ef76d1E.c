long long uu_dd::Output::new_stdout::h76c99dbdf4ef76d1(struct_0 *a0, unsigned long a1)
{
    char v0;  // [sp-0x30]
    char v1;  // [bp-0x2c]
    unsigned long long v2;  // [sp-0x28]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x18]
    unsigned long long v6;  // r14
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax

    v6 = a1;
    v2 = std::io::stdio::stdout::h077da66234850927();
    v0 = 0;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc7b2fb4fd73e14a5(&v3, uu_dd::Dest::seek::hf206f28f02b500d6(&v0), v7);
    v8 = *((long long *)&v3);
    if (!v8)
    {
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
    }
    else
    {
        v6 = *((long long *)&v4);
        *((unsigned long long *)&a0->padding_1[7]) = v8;
        a0->field_0 = 4;
        ::0x4d5150::core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(*((int *)&v0), *((int *)&v1));
    }
    a0->field_10 = v6;
    return a0;
}
