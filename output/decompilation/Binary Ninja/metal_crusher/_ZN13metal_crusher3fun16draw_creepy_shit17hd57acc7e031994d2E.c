
  int64_t metal_crusher::fun::draw_creepy_shit::hd57acc7e031994d2()

{
    int64_t rax = XOpenDisplay(0);
    int32_t rax_1 = XDefaultScreen(rax);
    int64_t* var_40 = rand::rngs::thread::rng::hf0f1cc4222ade925();
    int32_t rax_3 = rand::rng::Rng::random_range::h320b76a0c50e0e21(&var_40, 0xa, 0x320);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h85086739cd9d0457(&var_40);
    var_40 = rand::rngs::thread::rng::hf0f1cc4222ade925();
    int32_t rax_5 = rand::rng::Rng::random_range::h320b76a0c50e0e21(&var_40, 0xa, 0x258);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h85086739cd9d0457(&var_40);
    var_40 = rand::rngs::thread::rng::hf0f1cc4222ade925();
    int32_t rax_7 = rand::rng::Rng::random_range::h314d1556f613f069(&var_40, 0x32, 0x320);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h85086739cd9d0457(&var_40);
    var_40 = rand::rngs::thread::rng::hf0f1cc4222ade925();
    int32_t rax_9 = rand::rng::Rng::random_range::h314d1556f613f069(&var_40, 0x32, 0x258);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h85086739cd9d0457(&var_40);
    int64_t rax_13 = XCreateSimpleWindow(rax, XRootWindow(rax, rax_1), rax_3, rax_5, rax_7, rax_9, 
        1, XBlackPixel(rax, rax_1), XWhitePixel(rax, rax_1));
    XMapWindow(rax, rax_13);
    int64_t rax_14 = XCreateGC(rax, rax_13, 0, 0);
    XSetForeground(rax, rax_14, XBlackPixel(rax, rax_1));
    XDrawArc(rax, rax_13, rax_14, 0x64, 0x64, 0xc8, 0xc8, 0, 0x5a00);
    XDrawArc(rax, rax_13, rax_14, 0x96, 0x96, 0x32, 0x32, 0, 0x5a00);
    XDrawArc(rax, rax_13, rax_14, 0xfa, 0x96, 0x32, 0x32, 0, 0x5a00);
    XDrawLine(rax, rax_13, rax_14, 0xc8, 0xc8, 0xc8, 0x12c);
    XFlush(rax);
    std::thread::sleep::h8814a255f2a81ecc(5, 0);
    return XCloseDisplay(rax);
}
