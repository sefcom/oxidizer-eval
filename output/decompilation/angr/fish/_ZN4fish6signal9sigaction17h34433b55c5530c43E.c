int fish::signal::sigaction(unsigned int a0, sigaction *a1)
{
    return sigaction(a0, a1, NULL);
}
