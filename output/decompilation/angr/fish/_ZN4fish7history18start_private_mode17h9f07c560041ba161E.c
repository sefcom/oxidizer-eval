long long fish::history::start_private_mode(void* a0)
{
    char v0;  // [bp-0x30]

    v0.to_vec(4, 0);
    a0.set_one("f", 12, 4, &v0);
    v0.to_vec("1", 1);
    return a0.set_one("f", 17, 4, &v0);
}
