
  int64_t* alacritty_terminal::tty::unix::new::h458246f558c81da7(int64_t* arg1, void* arg2, int64_t arg3, uint64_t arg4)

{
    int16_t var_20 = arg3;
    uint16_t rdx = arg3 >> 0x10;
    uint16_t var_1e = rdx;
    int16_t var_1c = (arg3 >> 0x20) * rdx;
    int16_t var_1a = (arg3 >> 0x30) * arg3;
    uint64_t rax_3 = rustix_openpty::openpty::h61b8c6016be8c22d(nullptr, &var_20);
    uint32_t r8_1 = rax_3 >> 0x20;
    
    if (rax_3 == 0xffffffff)
    {
        *arg1 = -(r8_1) << 0x20 | 2;
        arg1[4] = 2;
    }
    else
        alacritty_terminal::tty::unix::from_fd::h7c2d58da34abf93d(arg1, arg2, arg4, rax_3, r8_1);
    
    return arg1;
}
