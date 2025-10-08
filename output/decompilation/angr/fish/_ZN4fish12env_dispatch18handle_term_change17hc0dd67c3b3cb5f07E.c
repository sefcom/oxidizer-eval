long long fish::env_dispatch::handle_term_change(unsigned long long a0)
{
    fish::env_dispatch::guess_emoji_width(a0);
    fish::env_dispatch::init_terminal(a0);
    fish::env_dispatch::read_terminfo_database(a0);
    return fish::reader::reader_schedule_prompt_repaint();
}
