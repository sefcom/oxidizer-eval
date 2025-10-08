fn zoxide::db::dir::_::<impl serde::ser::Serialize for zoxide::db::dir::Dir>::serialize(a0: u64, a1: u32) -> void {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x18]
    let v2: i64;  // rax
    let v3: u64;  // r14

    v0 = v2;
    v3 = <&mut bincode::ser::SizeChecker<O> as serde::ser::Serializer>::serialize_struct(a1);
    <bincode::ser::SizeCompound<O> as serde::ser::SerializeStruct>::serialize_field(v3, a0);
    <bincode::ser::SizeCompound<O> as serde::ser::SerializeStruct>::serialize_field(v3);
    <bincode::ser::SizeCompound<O> as serde::ser::SerializeStruct>::serialize_field(v3);
    return;
}
