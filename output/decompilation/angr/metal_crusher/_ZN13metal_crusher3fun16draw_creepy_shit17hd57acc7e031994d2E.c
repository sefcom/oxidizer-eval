void metal_crusher::fun::draw_creepy_shit()
{
    unsigned long long v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    unsigned long long v4;  // rbx
    unsigned int v5;  // ebp
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // r14
    unsigned long long v12;  // r15

    v4 = XOpenDisplay(0);
    v5 = XDefaultScreen(v4);
    v0 = rand::rngs::thread::rng();
    v6 = v0.random_range(10, 800, &g_9965c8);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v0);
    v0 = rand::rngs::thread::rng();
    v7 = v0.random_range(10, 600, &g_9965e0);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v0);
    v0 = rand::rngs::thread::rng();
    v1 = v0.random_range(50, 800, &g_9965f8);
    v2 = v7;
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v0);
    v0 = rand::rngs::thread::rng();
    v8 = v0.random_range(50, 600, &g_996610);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v0);
    v9 = XRootWindow(v4, v5);
    v10 = XBlackPixel(v4, v5);
    v11 = XCreateSimpleWindow(v4, v9, v6, v2, v1, v8, 1, v10, XWhitePixel(v4, v5));
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
