void fish::screen::Line::append_line(unsigned long long a0, unsigned long long a1[3])
{
    a0.extend_trusted(a1[1], a1[1] + a1[2] * 24);
    return;
}
