void starship::logger::init()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    (unsigned int)log::set_boxed_logger(<alloc::boxed::Box<T> as core::default::Default>::default(), &g_11f3af0).unwrap();
    core::sync::atomic::atomic_store(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 5, 0);
    return;
}
