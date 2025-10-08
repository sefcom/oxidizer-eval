fn uu_pinky::platform::unix::get_long_usage(a0: i64) -> u64 {
    format!("A lightweight 'finger' program;  print user information.\nThe utmp file will be {}.", "/var/run/utmp");
    return a0;
}
