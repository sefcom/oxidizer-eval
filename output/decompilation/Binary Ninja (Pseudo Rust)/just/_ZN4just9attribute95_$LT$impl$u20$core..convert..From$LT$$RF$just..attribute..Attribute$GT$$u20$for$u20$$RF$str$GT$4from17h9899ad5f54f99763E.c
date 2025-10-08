
  fn just::attribute::_$LT$impl$u20$core..convert..From$LT$$RF$just..attribute..Attribute$GT$$u20$for$u20$$RF$str$GT$::from::h9899ad5f54f99763(arg1: i64) -> *mut c_void

{
    let mut rcx: i64 = 0x10;
    
    if 0x7fffffffffffffff + arg1 < 0x14
    {
        rcx = 0x7fffffffffffffff + arg1;
    }
    
    *(&data_49fc98).byte_offset(rcx << 3);
    *(&data_49fd38).byte_offset(rcx << 2) + &data_49fd38
}
