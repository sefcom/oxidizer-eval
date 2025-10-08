fn starship::modules::username::is_ssh_session() -> u8 {
    let v0: i64;  // [bp-0x40]
    let v1: &str;  // [bp-0x30]
    let v2: &str;  // [bp-0x20]
    let v3: &str;  // [bp-0x10]

    v1 = "SSH_CONNECTION";
    v2 = "SSH_CLIENT";
    v3 = "SSH_TTY";
    v0 = &v1 as u64;
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
}
