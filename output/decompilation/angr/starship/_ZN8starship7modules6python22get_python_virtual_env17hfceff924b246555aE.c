long long starship::modules::python::get_python_virtual_env(unsigned long long *a0)
{
    char v0;  // [bp-0x20]

    v0.get_env("VIRTUAL_ENVpyenv via [${symbol}${pyenv_prefix}(${version} )(\\($virtualenv\\) )]($style)", 11);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
        return (unsigned long long)starship::modules::python::get_python_virtual_env::{{closure}}(a0, &v0);
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
