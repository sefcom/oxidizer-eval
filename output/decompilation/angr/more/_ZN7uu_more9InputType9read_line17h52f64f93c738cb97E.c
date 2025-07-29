long long uu_more::InputType::read_line(unsigned long long *a0, unsigned long long a1)
{
    if (!*(a0))
        return a0 + 1.read_line(a1);
    return std::io::append_to_string(a1, a0);
}
