fn uu_timeout::send_signal(a0: u64, a1: u32, a2: u32) -> int {
    let v1: u32;  // rdx

    if a2 {
        <std::process::Child as uucore::features::process::ChildExt>::send_signal(a0, a1);
    } else {
        <std::process::Child as uucore::features::process::ChildExt>::send_signal_group(a0, a1);
        if !(uucore::features::signals::signal_by_name_or_value("KILL") & 1) {
            core::option::unwrap_failed(); /* do not return */
        } else if !(uucore::features::signals::signal_by_name_or_value("CONT") & 1) {
            core::option::unwrap_failed(); /* do not return */
        } else if (a1 != v1 & a1 != v1) {
            <std::process::Child as uucore::features::process::ChildExt>::send_signal_group(a0, v1);
        } else {
            return;
        }
    }
    return;
}
