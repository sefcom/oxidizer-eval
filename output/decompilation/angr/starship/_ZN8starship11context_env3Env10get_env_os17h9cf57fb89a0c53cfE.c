long long starship::context_env::Env::get_env_os(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v1;  // rdx

    return std::env::var_os(a0, a1.as_ref(), v1);
}
