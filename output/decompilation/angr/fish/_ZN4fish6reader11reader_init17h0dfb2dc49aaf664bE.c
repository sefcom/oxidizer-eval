long long fish::reader::reader_init(char a0)
{
    char v0;  // [bp-0x79]
    termios v1;  // [bp-0x78]
    int v4;  // [bp-0x4c]
    unsigned long long v5;  // [bp-0x48]
    char v6;  // [bp-0x30]
    void* v9;  // rbx
    unsigned int v10;  // ecx
    int v11;  // xmm2
    void* v12;  // rax
    unsigned long v13;  // rcx
    unsigned long long v14;  // rsi
    unsigned int v15;  // edi
    int v16;  // xmm1
    int v17;  // xmm2
    char v18;  // dl
    unsigned long long v19;  // rax
    unsigned int v20;  // eax
    unsigned long long v21;  // rax

    v0 = a0;
    *((uint128_t *)&v4) = 0;
    *((uint128_t *)&v1.c_cc[0]) = 0;
    *((uint128_t *)&v1.c_cflag) = 0;
    *((uint128_t *)&v1.c_iflag) = 0;
    if (!tcgetattr(0, &v1))
        v1.get_or_try_init();
    if (once_cell::sync::OnceCell<T>::get())
        core::panicking::panic("assertion failed: AT_EXIT.get().is_none()assertion failed: state.search_field.is_some()Cursor is at; received left mouse click atassertion failed: !autosuggestion.is_empty()assertion failed: autosuggestion.len() >= line_range.len()assertion failed: string_", 41, &g_14dfc58); /* do not return */
    v0.get_or_try_init();
    v6.lock(_ZN4fish6reader27TTY_MODES_FOR_EXTERNAL_CMDS17h8801e9b0178ba92dE.get_or_try_init(&_ZN4fish6reader27TTY_MODES_FOR_EXTERNAL_CMDS17h8801e9b0178ba92dE));
    v9 = v6.unwrap(&g_14dfc70);
    v10 = (int)(&v4)[12];
    v11 = *((int128_t *)&v1.c_cc[0]);
    *((struct termios *)&v9[8]) = v1;
    *((unsigned int *)&v9[64]) = v10;
    *((unsigned long long *)&v9[56]) = v5;
    v9[40] = v11;
    *((uint128_t *)&v9[24]) = 0;
    *((char *)&v9[12]) = (char)v9[12] | 5;
    *((unsigned int *)&v9[20]) = (int)v9[20] | 32778;
    *((unsigned int *)&v9[8]) = 4294961855 & (int)v9[8] | 0x100;
    v12 = fish::common::shell_modes();
    v13 = v9 + 8;
    v14 = *((long long *)(v13 + 48));
    v15 = *((int *)(v13 + 56));
    v16 = *((int128_t *)(v13 + 16));
    v17 = *((int128_t *)(v13 + 32));
    *((int128_t *)&v12[8]) = *((int128_t *)v13);
    v12[24] = v16;
    *((unsigned int *)&v12[64]) = v15;
    *((unsigned long long *)&v12[56]) = v14;
    *((unsigned int *)&v12[8]) = (int)v12[8] & 4294966975;
    v12[40] = v17;
    *((unsigned int *)&v12[20]) = (int)v12[20] & 4294934517;
    *((char *)&v12[12]) = (char)v12[12] | 5;
    *((unsigned short *)&v12[30]) = 0x100;
    *((char *)&v12[35]) = 0;
    *((char *)&v12[26]) = 0;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v12, v18 & 1);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v9, v18 & 1);
    v19 = fish::proc::is_interactive_session();
    if (!(char)v19)
        return v19;
    v20 = fish::nix::getpgrp();
    v21 = tcgetpgrp(0);
    if (v20 != (unsigned int)v21)
        return v21;
    return fish::reader::term_donate(1);
}
