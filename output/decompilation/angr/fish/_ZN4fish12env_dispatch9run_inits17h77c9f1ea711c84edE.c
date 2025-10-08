void fish::env_dispatch::run_inits(unsigned long long a0)
{
    fish::env_dispatch::init_locale(a0);
    fish::env_dispatch::init_terminal(a0);
    fish::env_dispatch::guess_emoji_width(a0);
    fish::input_common::update_wait_on_escape_ms(a0);
    fish::input_common::update_wait_on_sequence_key_ms(a0);
    fish::env_dispatch::handle_read_limit_change(a0);
    fish::env_dispatch::handle_fish_use_posix_spawn_change(a0);
    fish::env_dispatch::handle_fish_trace(a0);
    return;
}
