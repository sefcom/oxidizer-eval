long long uu_env::split_iterator::SplitIterator::get_current_char::h2af8d73cb3f5950a(unsigned int a0)
{
    char v0;  // [bp-0x10]
    char v1;  // [bp-0x8]

    uu_env::string_expander::StringExpander::peek::h69a0594595513f7d(&v0, a0);
    if (v1 == 2)
        return *((int *)&v0);
    return 0x110000;
}
