long long fish::tty_handoff::maybe_set_kitty_keyboard_capability()
{
    return once_cell::sync::OnceCell<T>::get_or_try_init();
}
