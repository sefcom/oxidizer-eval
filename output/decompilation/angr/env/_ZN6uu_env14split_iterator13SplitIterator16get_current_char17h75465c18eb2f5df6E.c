long long uu_env::split_iterator::SplitIterator::get_current_char(unsigned long long a0)
{
    char v0;  // [bp-0x10]
    char v1;  // [bp-0x8]

    v0.peek(a0);
    if (v1 != 2)
        return 0x110000;
    return *((int *)&v0);
}
