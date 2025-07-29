fn server::handle_client(a0: u32) -> int {
    let v0: struct32;  // [bp-0x11c]
    let v2: struct208;  // [bp-0xe0]
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: core::result::Result<std::process::ExitStatus, std::io::error::Error>;  // rax:rdx

    v2 = std::process::Command::new("/bin/bash");
    v4 = std::process::Command::arg(&v2, "-i");
    v5 = std::process::Command::stdin(v4, 3, <std::sys::pal::unix::fd::FileDesc as std::os::fd::raw::FromRawFd>::from_raw_fd(a0) as u64);
    v6 = std::process::Command::stdout(v5, 3, <std::sys::pal::unix::fd::FileDesc as std::os::fd::raw::FromRawFd>::from_raw_fd(a0) as u64);
    v7 = std::process::Command::stderr(v6, 3, <std::sys::pal::unix::fd::FileDesc as std::os::fd::raw::FromRawFd>::from_raw_fd(a0) as u64);
    v0 as u320 = std::process::Command::spawn(v7);
    v0 = core::result::Result<T,E>::unwrap(&v0 as u320);
    v8 = std::process::Child::wait(&v0 as u320);
    core::result::Result<T,E>::unwrap(&v0 as u320);
    return;
}
