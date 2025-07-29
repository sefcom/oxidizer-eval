int metal_crusher::fun::draw_creepy_shit()
{
  Display *v0; // rbx
  int v1; // ebp
  int v2; // r12d
  int v3; // r14d
  unsigned int v4; // r13d
  Window v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  Window v8; // r14
  struct _XGC *v9; // r15
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+10h] [rbp-38h]
  int v14; // [rsp+14h] [rbp-34h]

  v0 = XOpenDisplay(0LL);
  v1 = XDefaultScreen(v0);
  v12 = rand::rngs::thread::rng();
  v2 = rand::rng::Rng::random_range(&v12, 10LL, 800LL, &off_5965C8);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v12);
  v12 = rand::rngs::thread::rng();
  v3 = rand::rng::Rng::random_range(&v12, 10LL, 600LL, &off_5965E0);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v12);
  v12 = rand::rngs::thread::rng();
  v13 = rand::rng::Rng::random_range(&v12, 50LL, 800LL, &off_5965F8);
  v14 = v3;
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v12);
  v12 = rand::rngs::thread::rng();
  v4 = rand::rng::Rng::random_range(&v12, 50LL, 600LL, &off_596610);
  core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v12);
  v5 = XRootWindow(v0, v1);
  v6 = XBlackPixel(v0, v1);
  v7 = XWhitePixel(v0, v1);
  v8 = XCreateSimpleWindow(v0, v5, v2, v14, v13, v4, 1u, v6, v7);
  XMapWindow(v0, v8);
  v9 = XCreateGC(v0, v8, 0LL, 0LL);
  v10 = XBlackPixel(v0, v1);
  XSetForeground(v0, v9, v10);
  XDrawArc(v0, v8, v9, 100, 100, 0xC8u, 0xC8u, 0, 23040);
  XDrawArc(v0, v8, v9, 150, 150, 0x32u, 0x32u, 0, 23040);
  XDrawArc(v0, v8, v9, 250, 150, 0x32u, 0x32u, 0, 23040);
  XDrawLine(v0, v8, v9, 200, 200, 200, 300);
  XFlush(v0);
  std::thread::sleep(5LL, 0LL);
  return XCloseDisplay(v0);
}