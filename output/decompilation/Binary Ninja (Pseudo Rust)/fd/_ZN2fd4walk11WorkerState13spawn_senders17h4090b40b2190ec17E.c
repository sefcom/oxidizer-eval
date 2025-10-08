
  fn fd::walk::WorkerState::spawn_senders::h4090b40b2190ec17(arg1: i64, arg2: *mut c_void, arg3: i64) -> i64

{
    let mut var_18: i64 = arg3;
    let rcx: i64;
    let var_10: i64 = rcx;
    ignore::walk::WalkParallel::run::hcc819a1378359aeb(arg2, arg1);
    core::ptr::drop_in_place$LT$crossbeam_channel..channel..Sender$LT$fd..walk..Batch$GT$$GT$::heb5d03ae888b17da(&var_18)
}
