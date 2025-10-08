fn uu_split::LineChunkWriter::start_new_chunk(a1: i64, a2: &struct72) -> Result<struct41, struct16> {
    let a0: u64;  // rdi
    let v0: void*;  // [bp-0x90], Other Possible Types: Option<struct24>
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: Result<struct65, struct24>;  // [bp-0x78]
    let v5: struct24;  // [bp-0x60]

    v0 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(a2);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("output file suffixes exhausted");
        return struct16 {
            field_0: 0x8000000000000000
            field_8: std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v5) as u64, &g_50ad88)
        };
    }
    if *((a1 + 160) as &i8) {
        v0 = 0;
        v4 = 1;
        println!("creating file {}", &v0);
    }
    uu_split::Settings::instantiate_current_writer(a0, a1, v2, v3, 1);
    return;
}
