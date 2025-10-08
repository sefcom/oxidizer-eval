void fuel_core_keygen::wait_for_keypress()
{
    char v0;  // [bp-0x9]
    unsigned long long v1;  // [bp-0x8]

    v0 = 0;
    crossterm::terminal::enable_raw_mode().expect("enable_raw_mode failedbin/keygen/src/main.rs", 22, &g_544328);
    v1 = std::io::stdio::stdin();
    v1.read_exact(&v0, 1).unwrap();
    crossterm::terminal::disable_raw_mode().expect("disable_raw_mode failed### Do not share or lose this private key! Press any key to complete. ###The following required argument was not provided: secretprettyThe following required argument was not provided: prettyThe following required argument was not pr", 23, &g_544358);
    return;
}
