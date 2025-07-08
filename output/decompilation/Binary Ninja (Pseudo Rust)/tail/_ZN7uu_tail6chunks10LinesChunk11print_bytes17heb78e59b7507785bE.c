
  fn uu_tail::chunks::LinesChunk::print_bytes::heb78e59b7507785b(arg1: *mut c_void, arg2: *mut i64) -> *mut i128

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = uu_tail::chunks::LinesChunk::get_buffer_with::h9b4a89d9b9a529ff(arg1, 0);
    
    if std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$W$GT$::write_all::h889fb69209bd29d4(arg2, rax_1, rdx) == 0
    {
        return nullptr;
    }
    
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa()
}
