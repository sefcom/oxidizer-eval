fn uu_shred::FilenameIter::new(a0: i64, a1: u64) -> long long {
    let v1: u64;  // rax

    v1 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a0, a1);
    *((a0 + 24) as &i8) = 0;
    return v1;
}
