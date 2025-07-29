long long metal_crusher::fun::detect_terminal()
{
    unsigned long long v0;  // [bp-0x1a8]
    unsigned long long v1;  // [bp-0x1a0]
    int v2;  // [bp-0x198]
    unsigned long long v3;  // [bp-0x190]
    unsigned long long v4;  // [bp-0x188]
    char *v5;  // [bp-0x178]
    unsigned long long v6;  // [bp-0x170]
    unsigned long long v7;  // [bp-0x168]
    unsigned long long v8;  // [bp-0x160]
    unsigned long long v9;  // [bp-0x158]
    unsigned long long v10;  // [bp-0x150]
    unsigned long long v11;  // [bp-0x148]
    unsigned long long v12;  // [bp-0x140]
    unsigned long long v13;  // [bp-0x138]
    unsigned long long v14;  // [bp-0x130]
    unsigned long long v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x120]
    unsigned long long v17;  // [bp-0x118]
    unsigned long long v18;  // [bp-0x110]
    void* v19;  // [bp-0x108]
    unsigned long long v20;  // [bp-0x100]
    int v21;  // [bp-0xf8]
    unsigned long long v22;  // [bp-0xe8]
    unsigned long long v23;  // [bp-0xe0]
    unsigned long long v24;  // [bp-0xd8]
    char *v25;  // [bp-0xd0]
    unsigned long long v26;  // [bp-0xc8]
    void* v27;  // [bp-0xc0]
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rbx

    v7 = "kgxghosttykonsolealacrittygnome-terminalxtermpkill -n nautiluspkill -n nemopkill -n thunarkillall -9 plasmashellfailed to spawn thread/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/thread/mod.rs";
    v8 = 3;
    v9 = "ghosttykonsolealacrittygnome-terminalxtermpkill -n nautiluspkill -n nemopkill -n thunarkillall -9 plasmashellfailed to spawn thread/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/thread/mod.rs";
    v10 = 7;
    v11 = "konsolealacrittygnome-terminalxtermpkill -n nautiluspkill -n nemopkill -n thunarkillall -9 plasmashellfailed to spawn thread/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/thread/mod.rs";
    v12 = 7;
    v13 = "alacrittygnome-terminalxtermpkill -n nautiluspkill -n nemopkill -n thunarkillall -9 plasmashellfailed to spawn thread/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/thread/mod.rs";
    v14 = 9;
    v15 = "gnome-terminalxtermpkill -n nautiluspkill -n nemopkill -n thunarkillall -9 plasmashellfailed to spawn thread/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/thread/mod.rs";
    v16 = 14;
    v17 = "xtermpkill -n nautiluspkill -n nemopkill -n thunarkillall -9 plasmashellfailed to spawn thread/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/thread/mod.rs";
    v18 = 5;
    v19 = 0;
    v20 = 6;
    while (true)
    {
        v29 = v7.next();
        if (v29)
        {
            v0 = v29;
            v1 = v30;
            v5 = &v0;
            v6 = <&T as core::fmt::Display>::fmt;
            v23 = &g_9966c8;
            v24 = 1;
            v27 = 0;
            v25 = &v5;
            v26 = 1;
            v21.map_or_else(&v23);
            v2 = v21;
            v4 = v22;
            std::fs::metadata(&v23, v3, v22);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v23);
            if ((unsigned int)v23 == 2)
            {
                ::0x7837a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
            }
            else
            {
                v31 = v0;
                ::0x7837a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
                break;
            }
        }
        else
        {
            v31 = "sh-c/usr/bin/";
            break;
        }
    }
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,6_usize>>();
    return v31;
}
