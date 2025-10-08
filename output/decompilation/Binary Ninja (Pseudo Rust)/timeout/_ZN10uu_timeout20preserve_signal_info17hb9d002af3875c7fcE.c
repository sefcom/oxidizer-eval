
  fn uu_timeout::preserve_signal_info::hb9d002af3875c7fc(arg1: i32) -> u64

{
    kill(getpid(), arg1);
    arg1
}
