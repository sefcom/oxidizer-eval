long long fish::builtins::fish_indent::PrettyPrinterState::substr(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    v1 = a2.start();
    v2 = a2.end(a3);
    if (v2 >= v1 && v2 <= a1)
        return a0 + v1 * 4;
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c9480); /* do not return */
}
