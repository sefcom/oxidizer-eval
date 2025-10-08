
  int64_t bat::app::App::new::h327fd37a294c175c(char* arg1)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    char rax = std::sys::io::is_terminal::isatty::is_terminal::he9481b7f77764060();
    char result_1;
    bat::app::App::matches::hdbbfdfbdf2b6730c(&result_1, rax);
    char result = result_1;
    int128_t var_5f;
    int128_t var_4f;
    int128_t var_3f;
    
    if (result != 0xd)
    {
        int128_t var_20;
        *(arg1 + 0x40) = var_20;
        *(arg1 + 0x30) = var_3f;
        *(arg1 + 0x21) = var_3f;
        *(arg1 + 0x11) = var_4f;
        *(arg1 + 1) = var_5f;
    }
    else
    {
        int128_t var_79;
        int64_t var_28;
        *var_79[8] = var_28;
        int128_t var_88 = var_3f;
        int128_t var_98 = var_4f;
        int128_t var_a8 = var_5f;
        *(arg1 + 0x38) = var_28;
        *(arg1 + 0x28) = var_3f;
        *(arg1 + 0x18) = var_4f;
        *(arg1 + 8) = var_5f;
        arg1[0x40] = rax;
    }
    *arg1 = result;
    return result;
}
