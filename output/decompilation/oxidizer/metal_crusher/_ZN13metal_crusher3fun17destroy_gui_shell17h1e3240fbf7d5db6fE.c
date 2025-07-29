fn metal_crusher::fun::destroy_gui_shell() -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    metal_crusher::fun::execute_shell("killall -9 plasmashell");
    return std::thread::sleep(None, 0x23c34600);
}
