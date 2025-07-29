long long metal_crusher::fun::notify(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x358]
    unsigned long long v1;  // [bp-0x348]
    unsigned long long v2;  // [bp-0x340]
    unsigned long long v3;  // [bp-0x338]
    unsigned long long v4;  // [bp-0x330]
    unsigned long long v5;  // [bp-0x328]
    unsigned long long v6;  // [bp-0x320]
    unsigned long long v7;  // [bp-0x318]
    unsigned long long v8;  // [bp-0x310]
    unsigned long long v9;  // [bp-0x308]
    int v10;  // [bp-0x300]
    int v11;  // [bp-0x2f0]
    unsigned long long v12;  // [bp-0x2e0]
    unsigned long long v13;  // [bp-0x2d8]
    unsigned int v14;  // [bp-0x2d0]
    unsigned int v15;  // [bp-0x2cc]
    char v16;  // [bp-0x2c0]
    unsigned long long v17;  // [bp-0x280]
    unsigned long long v18;  // [bp-0x278]
    unsigned long long v19;  // [bp-0x270]
    unsigned long long v20;  // [bp-0x268]
    unsigned long long v21;  // [bp-0x260]
    char *v22;  // [bp-0x258]
    unsigned long long v23;  // [bp-0x250]
    unsigned long long v24;  // [bp-0x248]
    unsigned long long v25;  // [bp-0x240]
    unsigned long long v26;  // [bp-0x238]
    char v27;  // [bp-0x230]
    unsigned int v29;  // eax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx

    v17 = rand::rngs::thread::rng();
    v29 = v17.random_range(0, 4294967295, &g_996540);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v17);
    std::sync::poison::once::Once::call_once();
    v17.from_elem(1, 0, 0, &g_996570);
    v30 = g_996588.with();
    v2 = "Metal Crusherdialog-informationdbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:truedbus-send --session --dest=org.gnome.Shell --";
    v3 = 13;
    v14 = v29;
    v4 = "dialog-informationdbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:truedbus-send --session --dest=org.gnome.Shell --type=method_c";
    v5 = 18;
    v6 = a0;
    v7 = a1;
    v8 = a2;
    v9 = a3;
    memcpy(&v0, &v17, 16);
    v1 = v19;
    *((uint128_t *)&v10) = g_996590;
    *((uint128_t *)&v11) = g_9965a0;
    v12 = v30;
    v13 = v31;
    v15 = 3000;
    v17 = &_ZN13metal_crusher3fun12FUN_INSTANCE17hc5e563d48c906004E;
    v23 = "org.freedesktop.NotificationsMetal Crusherdialog-informationdbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:truedbus-send --sess";
    v24 = 29;
    v18 = "/org/freedesktop/NotificationsNotify/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/sync/lazy_lock.rs";
    v19 = 30;
    v25 = "org.freedesktop.NotificationsMetal Crusherdialog-informationdbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:truedbus-send --sess";
    v26 = 29;
    v20 = "Notify/rustc/1799887bb281d1ab49287750f1950b8c738c6b77/library/std/src/sync/lazy_lock.rs";
    v21 = 6;
    v22 = &v0;
    v27 = 0;
    async_io::driver::block_on(&v16, &v17);
    core::ptr::drop_in_place<(&str,u32,&str,&str,&str,alloc::vec::Vec<&str>,std::collections::hash::map::HashMap<&str,&zvariant::value::Value>,i32)>(&v0);
    return ::0x7844b0::core::ptr::drop_in_place<core::result::Result<zbus::message::Message,zbus::error::Error>>(&v16);
}
