
  fn uu_tail::chunks::LinesChunk::print_bytes::h75a21001e86c00f1(arg1: *mut c_void, arg2: *mut i64, arg3: i64) -> u64

{
    let mut rax: i64;
    let mut rdx: u64;
    rax = uu_tail::chunks::LinesChunk::get_buffer_with::h54ef59cabf575ca6(arg1, arg3);
    
    if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h7989dfaf5a9a1bc8(arg2, rax, rdx) == 0
    {
        return 0;
    }
    
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2()
}
