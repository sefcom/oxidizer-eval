
  fn alacritty_terminal::tty::unix::new::h458246f558c81da7(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_20: i16 = arg3;
    let rdx: u16 = arg3 >> 0x10;
    let var_1e: u16 = rdx;
    let var_1c: i16 = (arg3 >> 0x20) * rdx;
    let var_1a: i16 = (arg3 >> 0x30) * arg3;
    let rax_3: u64 = rustix_openpty::openpty::h61b8c6016be8c22d(nullptr, &var_20);
    let r8_1: u32 = rax_3 >> 0x20;
    
    if rax_3 == 0xffffffff
    {
        *arg1 = -(r8_1) << 0x20 | 2;
        arg1[4] = 2;
    }
    else
    {
        alacritty_terminal::tty::unix::from_fd::h7c2d58da34abf93d(arg1, arg2, arg4, rax_3, r8_1);
    }
    
    arg1
}
