fn starship::logger::init() -> int {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    core::result::Result<T,E>::unwrap(log::set_boxed_logger(<alloc::boxed::Box<T> as core::default::Default>::default(), &g_11f3af0));
    core::sync::atomic::atomic_store(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 5, 0);
    return;
}
