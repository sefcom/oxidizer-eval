fn uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct17;  // [sp-0x20]

    v0 = std::sync::mutex::Mutex<T>::lock(*((a0 + 48) as &i64) + 16, a2);
}
