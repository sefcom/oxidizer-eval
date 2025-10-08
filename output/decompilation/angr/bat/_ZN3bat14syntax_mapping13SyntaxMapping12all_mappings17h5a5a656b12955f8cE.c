long long bat::syntax_mapping::SyntaxMapping::all_mappings(unsigned long long a0, unsigned long long a1[3])
{
    a0.chain(a1[1], a1[2] * 120 + a1[1]);
    return a0;
}
