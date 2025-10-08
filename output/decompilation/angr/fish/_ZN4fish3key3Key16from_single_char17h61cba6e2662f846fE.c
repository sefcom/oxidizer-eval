long long fish::key::Key::from_single_char(unsigned int a0)
{
    if (a0 <= 255)
        return a0.from_single_byte();
    return a0;
}
