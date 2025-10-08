fn uvx::exec_spawn(a0: u64) -> long long {
    return <std::process::Command as std::os::unix::process::CommandExt>::exec(a0);
}
