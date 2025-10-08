long long bat::line_range::LineRange::from(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    a0.parse_range(a1, a2);
    return a0;
}
