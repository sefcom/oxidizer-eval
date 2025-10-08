long long bat::input::new_stdin_input(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xc0]

    v0.stdin();
    return bat::input::named(a0, &v0, a1, a2);
}
