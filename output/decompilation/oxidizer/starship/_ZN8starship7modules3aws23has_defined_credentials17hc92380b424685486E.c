fn starship::modules::aws::has_defined_credentials(a0: u64, a1: u64, a2: void*) -> char {
    let v0: struct64;  // [bp-0x58]
    let v1: i8;  // [bp-0x48]
    let v2: i8;  // [bp-0x18]
    let v4: u64;  // rax
    let v5: core::fmt::Arguments;  // rax

    v0 = struct64 {
        field_0: &v1 as u64
        field_8: &v2
        field_16: "AWS_ACCESS_KEY_ID"
        field_32: "AWS_SECRET_ACCESS_KEY"
        field_48: "AWS_SESSION_TOKEN"
    };
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0) {
        return 1;
    }
    v4 = starship::modules::aws::get_creds(a0, a2);
    if !v4 {
        return 2;
    }
    v5 = starship::modules::aws::get_profile_creds(v4, a1);
    if !v5 {
        return 2;
    }
    ini::Properties::contains_key(v5, "aws_access_key_id");
    return 2;
}
