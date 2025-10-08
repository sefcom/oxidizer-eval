fn uu_timeout::preserve_signal_info(a0: u32) -> long long {
    kill(getpid(), a0);
    return a0;
}
