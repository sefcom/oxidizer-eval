long long uu_timeout::preserve_signal_info(unsigned int a0)
{
    kill(getpid(), a0);
    return a0;
}
