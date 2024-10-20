fn uu_sort::tmp_dir::TmpDirWrapper::next_file(a0: void*, a1: void*) -> u64 {
    let v60: i64;  // rdi

    std::sys::sync::mutex::futex::Mutex::wake(v60);
    return a0;
}
