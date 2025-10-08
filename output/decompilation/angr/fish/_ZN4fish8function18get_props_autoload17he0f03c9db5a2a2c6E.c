long long fish::function::get_props_autoload(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    if (!(char)fish::parser_keywords::parser_keywords_is_reserved(a0, a1))
    {
        fish::function::load(a0, a1, a2);
        return fish::function::get_props(a0, a1);
    }
    return 0;
}
