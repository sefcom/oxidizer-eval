char fish::common::valid_var_name_char(unsigned int a0)
{
    return (char)fish::wutil::fish_iswalnum(a0) | a0 == 95;
}
