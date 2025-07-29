fn server::main(a0: i64, a1: i64, a2: i64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: u64;  // [bp-0xc4]
    let v1: std::net::tcp::TcpStream;  // [bp-0xc0]
    let v2: u32;  // [bp-0xbc]
    let v3: i64;  // [bp-0xb8]
    let v4: struct24;  // [bp-0xb0], Other Possible Types: core::result::Result<core::net::socket_addr::SocketAddr, std::io::error::Error>
    let v7: u128;  // [bp-0x60]
    let v8: struct32;  // [bp-0x50]

    v4 = std::net::tcp::TcpListener::bind("192.168.0.9:8080", a3, a4, a5);
    v0 = core::result::Result<T,E>::expect(&v4);
    println!("Listening on port 8080...");
    v2 = 0;
    v3 = &v0;
    loop {
        <std::net::tcp::Incoming as core::iter::traits::iterator::Iterator>::next(&v3);
        if v7 as i32 == 2 {
            break;
        }
        v1 = core::result::Result<T,E>::expect(&v7);
        v4 = std::net::tcp::TcpStream::peer_addr(&v1);
        v8 = core::result::Result<T,E>::unwrap(&v4);
        println!("New connection from {}; Current connections: {}", &v8, &v2);
        v4 = std::thread::spawn(v1 as u64);
    }
    return;
}
