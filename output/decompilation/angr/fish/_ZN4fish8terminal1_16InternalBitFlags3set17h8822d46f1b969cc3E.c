long long fish::terminal::_::InternalBitFlags::set(char *a0, char a1, unsigned int a2)
{
    char v1;  // al

    v1 = *(a0);
    *((int *)&a0) = (a2 ? v1 | a1 : ~(a1) & v1);
    return v1 | a1;
}
