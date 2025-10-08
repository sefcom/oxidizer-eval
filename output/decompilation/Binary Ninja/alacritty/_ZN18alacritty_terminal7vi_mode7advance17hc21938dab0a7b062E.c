
  int64_t alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(void* arg1, int64_t arg2, int32_t arg3, int32_t arg4)

{
    if (!arg4)
        /* tailcall */
        return alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(arg2, arg3, arg1, 1);
    
    /* tailcall */
    return alacritty_terminal::index::Point::add::h870632f29f948f48(arg2, arg3, arg1, 1, 1);
}
