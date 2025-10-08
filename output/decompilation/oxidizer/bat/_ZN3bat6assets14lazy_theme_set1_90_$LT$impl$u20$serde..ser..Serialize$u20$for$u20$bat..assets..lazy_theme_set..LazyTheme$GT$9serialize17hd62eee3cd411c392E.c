fn bat::assets::lazy_theme_set::_::<impl serde::ser::Serialize for bat::assets::lazy_theme_set::LazyTheme>::serialize(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    return <bincode::ser::Compound<W,O> as serde::ser::SerializeStruct>::serialize_field(<&mut bincode::ser::Serializer<W,O> as serde::ser::Serializer>::serialize_tuple(a2), a0, a1);
}
