long long uu_whoami::whoami::hd55f3de3062777f8(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v0[2];  // [bp-0x28]

    uu_whoami::platform::unix::get_username::hba2ff2792651c4a0(v0, a1, a2);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf0ae29424716530e(a0, v0);
    return a0;
}
