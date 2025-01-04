long long uu_more::paging_add_back_message::hbb2e4f2ab157e08e(unsigned short a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdx

    if (!a0)
        return 0;
    v0 = v2;
    v3 = crossterm::command::write_command_ansi::h02c6c5b7e95a9c8a(a1, 1);
    if (v3)
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v3);
    }
    v3 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a1, v4, v5);
    if (!v3)
    {
        v3 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a1, "\n\r...back 1 page\n..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs", 17);
        if (!v3)
            return 0;
    }
}
