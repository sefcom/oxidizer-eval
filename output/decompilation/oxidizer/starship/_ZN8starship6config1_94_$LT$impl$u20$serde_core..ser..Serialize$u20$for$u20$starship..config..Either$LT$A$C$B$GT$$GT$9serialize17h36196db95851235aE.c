fn starship::config::_::<impl serde_core::ser::Serialize for starship::config::Either<A,B>>::serialize(a0: u64, a1: void*) -> long long {
    if *(a1 as &i64) {
        return serde_core::ser::impls::<impl serde_core::ser::Serialize for &T>::serialize(a0, *(a1 as &i64), a1[8] as i64);
    }
    return serde_core::ser::impls::<impl serde_core::ser::Serialize for bool>::serialize(a0, a1[8] as i32);
}
