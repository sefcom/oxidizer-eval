__int64 __fastcall uu_head::take::TakeAllBuffer::fill_buffer(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // al
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r15
  char v6; // al
  unsigned __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[0] = v2;
  alloc::vec::Vec<T,A>::resize(a1);
  a1[3] = 0LL;
  v3 = std::io::impls::<impl std::io::Read for &mut R>::read(a2, a1[1], a1[2]);
  v5 = v4;
  if ( (v3 & 1) != 0 )
  {
    while ( (unsigned __int8)std::io::error::Error::kind(v5) == 35 )
    {
      v9[0] = v5;
      core::ptr::drop_in_place<std::io::error::Error>(v9);
      v6 = std::io::impls::<impl std::io::Read for &mut R>::read(a2, a1[1], a1[2]);
      v5 = v7;
      if ( (v6 & 1) == 0 )
        goto LABEL_4;
    }
    return 1LL;
  }
  else
  {
LABEL_4:
    if ( a1[2] >= v5 )
      a1[2] = v5;
    return 0LL;
  }
}