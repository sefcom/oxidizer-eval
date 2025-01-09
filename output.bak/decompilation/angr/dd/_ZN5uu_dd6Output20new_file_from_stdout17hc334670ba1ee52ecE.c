long long uu_dd::Output::new_file_from_stdout::hc334670ba1ee52ec(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned int
    unsigned int v1;  // [sp-0x24]
    char v2;  // [bp-0x20]
    unsigned int v4;  // ebp
    unsigned long v5;  // rdx
    unsigned int v6;  // edx
    unsigned long v7;  // rdx

    std::io::stdio::stdout::h077da66234850927();
    uucore::mods::io::OwnedFileDescriptorOrHandle::from::h0d5d1d40c82f1b03(&v0);
    if (v0)
    {
        a0->field_8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(*((long long *)&v2));
        a0->field_10 = v5;
        a0->field_0 = 4;
        return a0;
    }
    v4 = v1;
    if ((int)uu_dd::make_linux_oflags::hc5c67f9cb15d8524(a1 + 150) == 1)
    {
        v1 = v6;
        v0 = 5;
        if ((int)nix::fcntl::fcntl::h80fd9880c7bb583b(v4, &v0))
        {
            a0->field_8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$nix..errno..consts..Errno$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7e1e2edf10393c3c(v6);
            a0->field_10 = v7;
            a0->field_0 = 4;
            core::ptr::drop_in_place$LT$uucore..mods..io..OwnedFileDescriptorOrHandle$GT$::ha6ff79398227ae27();
            return a0;
        }
    }
    uu_dd::Output::prepare_file::h9725a129054f1a6a(a0, v4, a1);
    return a0;
}
