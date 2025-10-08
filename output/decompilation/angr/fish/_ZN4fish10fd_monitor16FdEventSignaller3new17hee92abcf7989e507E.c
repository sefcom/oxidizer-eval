int fish::fd_monitor::FdEventSignaller::new()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax

    v0 = v2;
    v3 = eventfd(0, 0x80800);
    if (v3 < 0)
    {
        fish::wutil::perror("eventfdassertion failed: fd.is_valid()Thread startingItem ID not foundThread should be running because we're that thread", 7);
        fish::common::exit_without_destructors(1); /* do not return */
    }
    return v3;
}
