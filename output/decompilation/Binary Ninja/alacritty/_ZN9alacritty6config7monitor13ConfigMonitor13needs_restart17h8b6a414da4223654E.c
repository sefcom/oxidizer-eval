
  bool alacritty::config::monitor::ConfigMonitor::needs_restart::h8b6a414da4223654(char arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_18 = rax;
    bool rax_1;
    int64_t rdx;
    rax_1 = alacritty::config::monitor::ConfigMonitor::hash_paths::hbd080233d0377b89(arg3, arg4);
    
    if (!(rax_1 & 1))
        return true;
    
    return rdx == arg2 & arg1;
}
