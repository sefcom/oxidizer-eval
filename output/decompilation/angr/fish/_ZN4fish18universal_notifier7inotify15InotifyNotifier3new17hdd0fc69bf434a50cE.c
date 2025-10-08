void fish::universal_notifier::inotify::InotifyNotifier::new(unsigned long long a0)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    fish::env_universal_common::default_vars_path(&v0);
    a0.new_at(v1, *((long long *)&v2));
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
