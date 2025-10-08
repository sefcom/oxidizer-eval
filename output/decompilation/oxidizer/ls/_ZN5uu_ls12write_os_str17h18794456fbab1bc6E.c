fn uu_ls::write_os_str(a0: i64, a1: &[u8]) -> int {
    let v1: u32;  // esi

    std::io::impls::<impl std::io::Write for alloc::vec::Vec<u8,A>>::write_all(a0, v1);
    return;
}
