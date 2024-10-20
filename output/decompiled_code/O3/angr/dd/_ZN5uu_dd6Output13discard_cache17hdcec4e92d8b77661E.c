long long uu_dd::Output::discard_cache::hdcec4e92d8b77661(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    struct struct_0 **v0;  // [sp-0x88]
    unsigned long long v12;  // rdi
    unsigned int v13;  // eax
    struct struct_0 **v14;  // rax
    unsigned long long v15;  // rsi
    struct_1 *v16;  // rdx

    v12 = 29;
    if (a0->field_0 == 1)
    {
        v13 = posix_fadvise(a0->field_4, a1, a2, 4);
        v12 = (!v13 ? (unsigned int)nix::errno::consts::from_i32::hb3bc9b2c0830196d(v13) : 134);
    }
    v14 = _$LT$core..result..Result$LT$T$C$nix..errno..consts..Errno$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4a1a4b5aac6da0cb(v12);
    if (!v14)
        return v14;
    v0 = v14;
LABEL_49a746:
    _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = v16->field_60(v14, v15);
    if (CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108))
        goto LABEL_49a746;
    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 == 2)
        goto LABEL_0x49a768;
}
