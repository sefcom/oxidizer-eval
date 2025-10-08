char bat::style::StyleComponents::plain(unsigned long long a0)
{
    char v0;  // [bp-0x30]

    v0.iter(a0);
    return v0.try_fold().eq(0);
}
