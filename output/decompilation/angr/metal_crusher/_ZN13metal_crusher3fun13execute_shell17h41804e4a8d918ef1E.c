int metal_crusher::fun::execute_shell(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x124]
    char v1;  // [bp-0x108]
    char v2;  // [bp-0xe8]

    v2.new("sh-c/usr/bin/", 2);
    v1.spawn(v2.arg("-c/usr/bin/", 2).arg(a0, a1));
    v0.unwrap(&v1);
    core::ptr::drop_in_place<std::process::Child>(&v0);
    return ::0x7837c0::core::ptr::drop_in_place<std::process::Command>(&v2);
}
