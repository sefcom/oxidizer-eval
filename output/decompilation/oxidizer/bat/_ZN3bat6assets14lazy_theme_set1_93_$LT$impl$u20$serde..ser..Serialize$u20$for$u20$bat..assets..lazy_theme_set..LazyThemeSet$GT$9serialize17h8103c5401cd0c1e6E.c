fn bat::assets::lazy_theme_set::_::<impl serde::ser::Serialize for bat::assets::lazy_theme_set::LazyThemeSet>::serialize(a0: u64, a1: u64) -> long long {
    return <bincode::ser::Compound<W,O> as serde::ser::SerializeStruct>::serialize_field(<&mut bincode::ser::Serializer<W,O> as serde::ser::Serializer>::serialize_tuple(a1), a0);
}
