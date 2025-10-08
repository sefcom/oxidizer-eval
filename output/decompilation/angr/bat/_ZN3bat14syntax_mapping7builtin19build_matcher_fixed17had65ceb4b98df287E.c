long long bat::syntax_mapping::builtin::build_matcher_fixed(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x70]

    bat::syntax_mapping::make_glob_matcher(&v0, a1, a2);
    a0.expect(&v0);
    return a0;
}
