__int64 __fastcall uu_head::take::TakeAllBut<I>::new(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v11; // [rsp+0h] [rbp-98h] BYREF
  char v12; // [rsp+8h] [rbp-90h]
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  __int64 v14; // [rsp+18h] [rbp-80h]
  __int128 v15; // [rsp+20h] [rbp-78h]
  unsigned __int64 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v11 = a2;
  v12 = a3;
  v13 = 0LL;
  v14 = 8LL;
  v15 = 0LL;
  v16 = a4;
  if ( a4 )
  {
    v5 = 0LL;
    do
    {
      v5 = <usize as core::iter::range::Step>::forward_unchecked(v5);
      <uucore::features::lines::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v17, &v11);
      if ( (_QWORD)v17 == 0x8000000000000001LL )
        break;
      v20 = v18;
      v19 = v17;
      uucore::features::ringbuffer::RingBuffer<T>::push_back(&v17, &v13, &v19);
      core::ptr::drop_in_place<core::option::Option<core::result::Result<alloc::vec::Vec<u8>,std::io::error::Error>>>(&v17);
    }
    while ( v5 < a4 );
  }
  v6 = v11;
  v7 = v12;
  *(_QWORD *)(a1 + 32) = v16;
  v8 = v13;
  v9 = v14;
  *(_OWORD *)(a1 + 16) = v15;
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 40) = v6;
  *(_BYTE *)(a1 + 48) = v7;
  return a1;
}
