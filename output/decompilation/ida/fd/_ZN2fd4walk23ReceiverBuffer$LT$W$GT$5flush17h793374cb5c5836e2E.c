__int64 __fastcall fd::walk::ReceiverBuffer<W>::flush(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v3 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1 + 16);
  LOBYTE(v1) = v3 == 0;
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v3);
  LOBYTE(v1) = (2 * v1) | 4;
  return v1;
}