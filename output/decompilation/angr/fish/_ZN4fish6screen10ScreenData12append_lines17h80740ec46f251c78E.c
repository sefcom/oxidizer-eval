void fish::screen::ScreenData::append_lines(unsigned long a0, unsigned long long a1[5])
{
    a0 + 16.extend_trusted(a1[3], a1[3] + a1[4] * 40);
    return;
}
