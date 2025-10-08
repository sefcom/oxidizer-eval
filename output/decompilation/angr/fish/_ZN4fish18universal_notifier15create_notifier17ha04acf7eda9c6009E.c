long long fish::universal_notifier::create_notifier()
{
    char v0;  // [bp-0x28]

    v0.new();
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
        return v0.new();
    core::ptr::drop_in_place<core::option::Option<fish::universal_notifier::inotify::InotifyNotifier>>(&v0);
    return alloc::boxed::Box<T>::new();
}
