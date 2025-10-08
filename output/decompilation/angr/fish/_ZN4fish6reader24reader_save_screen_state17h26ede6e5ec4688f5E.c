long long fish::reader::reader_save_screen_state()
{
    unsigned long v1;  // rax
    unsigned long v2;  // rax

    v1 = fish::reader::current_data();
    if (!v1)
        return v2;
    return v1.save_screen_state();
}
