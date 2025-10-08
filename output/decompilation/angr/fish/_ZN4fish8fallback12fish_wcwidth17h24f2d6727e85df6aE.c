long long fish::fallback::fish_wcwidth(unsigned int a0)
{
    if ((char)fish::common::is_console_session())
        return fish::fallback::wcwidth();
    if (a0 == 65038)
        return 0;
    if (a0 == 65039)
    {
        return 1;
    }
    else if (!(char)g_a17c78.contains(a0))
    {
        goto (long long)(g_9f3de0[(int)once_cell::sync::OnceCell<T>::get_or_try_init().classify(a0)] + (char *)&g_9f3de0[0]);
    }
    return 0;
}
