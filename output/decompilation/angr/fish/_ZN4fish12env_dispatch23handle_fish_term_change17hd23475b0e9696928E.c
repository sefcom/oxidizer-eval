long long fish::env_dispatch::handle_fish_term_change(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    fish::env_dispatch::update_fish_color_support(a0);
    return fish::reader::reader_schedule_prompt_repaint();
}
