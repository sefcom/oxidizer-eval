fn uu_shred::FilenameIter::new(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v1: struct24;  // rax

    v1 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a0, a1) as u64;
    *((a0 + 24) as &i8) = 0;
    return v1;
}
