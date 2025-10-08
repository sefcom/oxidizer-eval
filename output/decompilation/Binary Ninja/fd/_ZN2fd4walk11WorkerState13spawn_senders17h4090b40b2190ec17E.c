
  int64_t fd::walk::WorkerState::spawn_senders::h4090b40b2190ec17(int64_t arg1, void* arg2, int64_t arg3)

{
    int64_t var_18 = arg3;
    int64_t rcx;
    int64_t var_10 = rcx;
    ignore::walk::WalkParallel::run::hcc819a1378359aeb(arg2, arg1);
    return core::ptr::drop_in_place$LT$crossbeam_channel..channel..Sender$LT$fd..walk..Batch$GT$$GT$::heb5d03ae888b17da(&var_18);
}
