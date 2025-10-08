long long fish::env_dispatch::handle_locale_change(unsigned long long a0)
{
    fish::env_dispatch::init_locale(a0);
    return fish::env_dispatch::guess_emoji_width(a0);
}
