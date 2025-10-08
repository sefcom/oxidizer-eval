void starship::generate_shell()
{
    unsigned long long v0;  // [bp-0x2e0]
    unsigned long long v1;  // [bp-0x2d8]
    char v2;  // [bp-0x2d0]

    v2.command();
    v1 = std::io::stdio::stdout();
    v0 = v1.lock();
    clap_complete::aot::generator::generate(&v2, &v0);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(&v0);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v2);
    return;
}
