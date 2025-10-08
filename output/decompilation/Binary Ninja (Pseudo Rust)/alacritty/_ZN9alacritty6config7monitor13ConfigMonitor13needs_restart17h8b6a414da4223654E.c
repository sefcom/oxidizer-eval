
  fn alacritty::config::monitor::ConfigMonitor::needs_restart::h8b6a414da4223654(arg1: i8, arg2: i64, arg3: i64, arg4: i64) -> bool

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rax_1: bool;
    let mut rdx: i64;
    rax_1 = alacritty::config::monitor::ConfigMonitor::hash_paths::hbd080233d0377b89(arg3, arg4);
    
    if (rax_1 & 1) == 0
    {
        return true;
    }
    
    rdx == arg2 & arg1
}
