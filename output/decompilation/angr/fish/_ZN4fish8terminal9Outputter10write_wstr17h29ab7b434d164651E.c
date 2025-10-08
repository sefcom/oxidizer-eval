void fish::terminal::Outputter::write_wstr(void* a0, unsigned long long a1, unsigned long long a2)
{
    fish::common::wcs2string_appending(a0, a1, a2);
    a0.maybe_flush();
    return;
}
