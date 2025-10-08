fn uu_who::platform::unix::get_long_usage(a0: i64) -> u64 {
    format!("If FILE is not specified, use {}.  /var/log/wtmp as FILE is common.\nIf ARG1 ARG2 given, -m presumed: 'am i' or 'mom likes' are usual.", "/var/run/utmp");
    return a0;
}
