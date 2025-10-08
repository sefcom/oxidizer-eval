void fish::key::escape_nonprintables(unsigned int a0, unsigned int a1, unsigned int a2)
{
    fish::common::escape_string(a0, a1, a2, 0);
    return;
}
