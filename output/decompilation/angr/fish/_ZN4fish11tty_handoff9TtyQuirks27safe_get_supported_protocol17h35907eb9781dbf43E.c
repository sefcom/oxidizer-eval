long long fish::tty_handoff::TtyQuirks::safe_get_supported_protocol(char a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    char *v3;  // rax
    unsigned long v4;  // rax

    if (a0 == 1)
        return v4 & 0xffffffffffffff00 | 1;
    v0 = v2;
    v3 = _ZN4fish11tty_handoff24KITTY_KEYBOARD_SUPPORTED17h8be372eaeced2fd2E.get();
    return (!v3 ? 3 : (!*(v3) ? v3 & 0xffffffffffffff00 | (a0 == 3) + 1 : 0));
}
