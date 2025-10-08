char bat::input::Input::is_stdin(unsigned long long a0)
{
    return ((0 ^ a0) & (0 ^ -(a0))) >> 63;
}
