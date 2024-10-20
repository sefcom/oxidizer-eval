fn uu_echo::execute(a0: u32, a1: u8, a2: void*, a3: u32) -> u64 {
    let v23: void*;  // rax
    let v48: &struct_0;  // rdi

    std::sys::sync::mutex::futex::Mutex::wake(&v48->field_8 as &struct_0);
    return v23;
}
