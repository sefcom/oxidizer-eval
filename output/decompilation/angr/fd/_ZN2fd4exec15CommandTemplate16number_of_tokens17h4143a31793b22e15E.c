long long fd::exec::CommandTemplate::number_of_tokens(unsigned long long a0, unsigned long a1)
{
    return a0.fold(a1 * 32 + a0);
}
