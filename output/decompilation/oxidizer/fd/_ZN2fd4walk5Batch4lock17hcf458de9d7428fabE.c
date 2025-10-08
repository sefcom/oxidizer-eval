fn fd::walk::Batch::lock(a0: u64) -> long long {
    let v0: struct17;  // [bp-0x20]

    v0 = std::sync::poison::mutex::Mutex<T>::lock(a0 + 16);
    return core::result::Result<T,E>::unwrap(&v0);
}
