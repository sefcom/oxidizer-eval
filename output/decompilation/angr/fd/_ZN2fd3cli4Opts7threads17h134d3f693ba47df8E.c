long long fd::cli::Opts::threads(unsigned long a0)
{
    if (!a0)
        return fd::cli::default_num_threads();
    return a0;
}
