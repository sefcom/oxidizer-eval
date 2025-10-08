void fish::env_dispatch::handle_fish_history_change(unsigned long long a0)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    fish::history::history_session_id(&v0, a0, &g_14c7518);
    fish::reader::reader_change_history(v1, *((long long *)&v2));
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
