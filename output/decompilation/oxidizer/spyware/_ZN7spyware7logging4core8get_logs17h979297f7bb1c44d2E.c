fn spyware::logging::core::get_logs() -> : struct9 {
    let a0: u64;  // rdi
    let v1: u64;  // rax

    v1 = spyware::logging::core::MemoryLogger::global();
    if !v1 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: 0
        };
    }
    spyware::logging::core::MemoryLogger::get_logs(a0, v1);
    return;
}
