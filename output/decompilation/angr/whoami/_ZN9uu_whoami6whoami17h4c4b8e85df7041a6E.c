long long uu_whoami::whoami::h4c4b8e85df7041a6(unsigned long long a0)
{
    unsigned long long v0[2];  // [bp-0x28]

    uu_whoami::platform::unix::get_username::hecd22d348e0efc05(v0);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h89c723c8abd9cdd9(a0, v0);
    return a0;
}
