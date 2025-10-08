char uu_stty::apply_baud_rate_flag(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    struct_0 *v1;  // rax

    if ((char)"0507511013415020030060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(1, a1, a2))
    {
        v1 = &g_4e2ad0.padding_0[0];
    }
    else if ((char)"507511013415020030060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(2, a1, a2))
    {
        v1 = &g_4e2ae8.padding_0[0];
    }
    else if ((char)"7511013415020030060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(2, a1, a2))
    {
        v1 = &g_4e2b00.padding_0[0];
    }
    else if ((char)"11013415020030060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(3, a1, a2))
    {
        v1 = &g_4e2b18.padding_0[0];
    }
    else if ((char)"13415020030060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(3, a1, a2))
    {
        v1 = &g_4e2b30.padding_0[0];
    }
    else if ((char)"15020030060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(3, a1, a2))
    {
        v1 = &g_4e2b48.padding_0[0];
    }
    else if ((char)"20030060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(3, a1, a2))
    {
        v1 = &g_4e2b60.padding_0[0];
    }
    else if ((char)"30060019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(3, a1, a2))
    {
        v1 = &g_4e2b78.padding_0[0];
    }
    else if ((char)"60019200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(3, a1, a2))
    {
        v1 = &g_4e2b90.padding_0[0];
    }
    else if ((char)"1200save".equal(4, a1, a2))
    {
        v1 = &g_4e2ba8.padding_0[0];
    }
    else if ((char)"1800Ansi -- ".equal(4, a1, a2))
    {
        v1 = &g_4e2bc0.padding_0[0];
    }
    else if ((char)"2400tab2 -> ".equal(4, a1, a2))
    {
        v1 = &g_4e2bd8.padding_0[0];
    }
    else if ((char)"9600intr".equal(4, a1, a2))
    {
        v1 = &g_4e2bf0.padding_0[0];
    }
    else if ((char)"19200384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(5, a1, a2))
    {
        v1 = &g_4e2c08.padding_0[0];
    }
    else if ((char)"384005760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(5, a1, a2))
    {
        v1 = &g_4e2c20.padding_0[0];
    }
    else if ((char)"5760011520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(5, a1, a2))
    {
        v1 = &g_4e2c38.padding_0[0];
    }
    else if ((char)"11520023040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(6, a1, a2))
    {
        v1 = &g_4e2c50.padding_0[0];
    }
    else if ((char)"23040050000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(6, a1, a2))
    {
        v1 = &g_4e2c68.padding_0[0];
    }
    else if ((char)"50000057600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(6, a1, a2))
    {
        v1 = &g_4e2c80.padding_0[0];
    }
    else if ((char)"57600092160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(6, a1, a2))
    {
        v1 = &g_4e2c98.padding_0[0];
    }
    else if ((char)"92160010000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(6, a1, a2))
    {
        v1 = &g_4e2cb0.padding_0[0];
    }
    else if ((char)"10000001152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2cc8.padding_0[0];
    }
    else if ((char)"1152000150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2ce0.padding_0[0];
    }
    else if ((char)"150000020000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2cf8.padding_0[0];
    }
    else if ((char)"20000002500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2d10.padding_0[0];
    }
    else if ((char)"2500000300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2d28.padding_0[0];
    }
    else if ((char)"300000035000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2d40.padding_0[0];
    }
    else if ((char)"35000004000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2d58.padding_0[0];
    }
    else if ((char)"4000000/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/nix-0.29.0/src/sys/termios.rs".equal(7, a1, a2))
    {
        v1 = &g_4e2d70.padding_0[0];
    }
    else
    {
        return 2;
    }
    (unsigned int)nix::sys::termios::cfsetospeed(a0, v1->field_10).expect("Failed to set baud rate(uutils coreutils) 0.0.30{} [-F DEVICE | --file=DEVICE] [SETTING]...\n{} [-F DEVICE | --file=DEVICE] [-a|--all]\n{} [-F DEVICE | --file=DEVICE] [-g|--save]Print or change terminal characteristics.print all current settings in human-rea", 23, &g_4e3868);
    return 1;
}
