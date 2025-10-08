long long fish::reader::commandline_state_snapshot()
{
    char v0;  // [bp-0x20]

    v0.lock();
    return v0.unwrap();
}
