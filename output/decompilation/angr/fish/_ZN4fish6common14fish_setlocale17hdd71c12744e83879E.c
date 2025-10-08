void fish::common::fish_setlocale()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    char v3;  // al
    unsigned long long v4;  // rsi

    v0 = v2;
    v3 = fish::common::can_be_encoded(8230);
    core::sync::atomic::atomic_store(&_ZN4fish6common13ELLIPSIS_CHAR17h536c2ad6c41759f4E, (v3 ? 8230 : 36));
    core::sync::atomic::atomic_store(&_ZN4fish6common15ELLIPSIS_STRING17h51285a71cda3f8b9E, (v3 ? &g_14c0e98 : &g_14c0e88));
    if ((char)fish::common::is_windows_subsystem_for_linux(0))
    {
        v4 = &g_14c0ec8;
        goto LABEL_12e6d39;
    }
    else if ((char)fish::common::is_console_session())
    {
        v4 = &g_14c0ea8;
LABEL_12e6d39:
        core::sync::atomic::atomic_store(&_ZN4fish6common19OMITTED_NEWLINE_STR17h460952e2cf288db7E, v4);
    }
    else
    {
        core::sync::atomic::atomic_store(&_ZN4fish6common19OMITTED_NEWLINE_STR17h460952e2cf288db7E, (fish::common::can_be_encoded(9166) ? &g_14c0eb8 : &g_14c0ea8));
    }
LABEL_12e6d8a:
    goto LABEL_12e6d8a;
}
