fn metal_crusher::fun::draw_creepy_shit() -> void {
    let v0: u64;  // [bp-0x40]
    let v1: u32;  // [bp-0x38]
    let v2: u32;  // [bp-0x34]
    let v4: u64;  // rbx
    let v5: u32;  // ebp
    let v6: u32;  // eax
    let v7: Result<struct64, struct16>;  // eax
    let v8: u32;  // eax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // r14
    let v12: u64;  // r15

    v4 = XOpenDisplay(0);
    v5 = XDefaultScreen(v4);
    v0 = rand::rngs::thread::rng();
    v6 = rand::rng::Rng::random_range(&v0, 10, 800, "src/fun.rs");
    v0 = rand::rngs::thread::rng();
    v7 = rand::rng::Rng::random_range(&v0, 10, 600, "src/fun.rs");
    v0 = rand::rngs::thread::rng();
    v1 = rand::rng::Rng::random_range(&v0, 50, 800, "src/fun.rs");
    v2 = v7;
    v0 = rand::rngs::thread::rng();
    v8 = rand::rng::Rng::random_range(&v0, 50, 600, "src/fun.rs");
    v9 = XRootWindow(v4, v5);
    v10 = XBlackPixel(v4, v5);
    v11 = XCreateSimpleWindow(v4, v9, v6, v2, v1, v8, 1, v10, XWhitePixel(v4, v5) as i64);
    XMapWindow(v4, v11);
    v12 = XCreateGC(v4, v11, 0, 0);
    XSetForeground(v4, v12, XBlackPixel(v4, v5));
    XDrawArc(v4, v11, v12, 100, 100, 200, 200, 0, 0x5a00);
    XDrawArc(v4, v11, v12, 150, 150, 50, 50, 0, 0x5a00);
    XDrawArc(v4, v11, v12, 250, 150, 50, 50, 0, 0x5a00);
    XDrawLine(v4, v11, v12, 200, 200, 200, 300);
    XFlush(v4);
    std::thread::sleep(5, 0);
    XCloseDisplay(v4);
    return;
}
