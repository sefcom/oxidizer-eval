fn metal_crusher::fun::establish_dbus_connection() -> u64 {
    let v0: Result<struct248, struct72>;  // [bp-0x200]
    let v1: struct248;  // [bp-0x108]

    v0 = zbus::blocking::connection::builder::Builder::session();
    v1 = core::result::Result<T,E>::unwrap(&v0);
    v0 = zbus::blocking::connection::builder::Builder::build(&v1);
    return core::result::Result<T,E>::unwrap(&v0);
}
