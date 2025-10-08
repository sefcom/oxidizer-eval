long long fish::tty_handoff::get_scroll_content_up_capability()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    char *v3;  // rax

    v0 = v2;
    v3 = _ZN4fish11tty_handoff27SCROLL_CONTENT_UP_SUPPORTED17h0d919a979ffbc2fbE.get();
    if (!v3)
        return 2;
    return *(v3);
}
