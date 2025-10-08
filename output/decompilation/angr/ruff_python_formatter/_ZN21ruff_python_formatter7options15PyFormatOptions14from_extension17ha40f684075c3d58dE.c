long long ruff_python_formatter::options::PyFormatOptions::from_extension(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v1;  // al

    v1 = a1.try_from_path(a2);
    a0.from_source_type((v1 == 3 ? 0 : v1));
    return a0;
}
