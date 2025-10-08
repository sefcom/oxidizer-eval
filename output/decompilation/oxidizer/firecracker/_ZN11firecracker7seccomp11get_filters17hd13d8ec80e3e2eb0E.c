fn firecracker::seccomp::get_filters(a0: u64, a1: u32, a2: u32) -> long long {
    if !a1 {
        return vmm::seccomp::get_empty_filters(a0);
    } else if a1 == 1 {
        return firecracker::seccomp::get_default_filters(a0) as u64;
    } else {
        return firecracker::seccomp::get_custom_filters(a0, a2) as u64;
    }
}
