__int64 __fastcall uu_head::take::TakeAllBut<I>::new(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v16; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+10h] [rbp-98h]
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int64 v19; // [rsp+20h] [rbp-88h]
  __int64 v20; // [rsp+28h] [rbp-80h]
  unsigned __int64 v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  __int64 v23; // [rsp+40h] [rbp-68h]
  __int128 v24; // [rsp+48h] [rbp-60h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  _QWORD v26[9]; // [rsp+60h] [rbp-48h] BYREF

  v19 = a2;
  v20 = a1;
  v22 = 0LL;
  v23 = 8LL;
  v24 = 0LL;
  v25 = a4;
  if ( a4 )
  {
    v6 = a4;
    v21 = 0x8000000000000000LL;
    do
    {
      v16 = 0LL;
      v17 = 1LL;
      v18 = 0LL;
      v7 = std::io::read_until(v19, a3, &v16);
      v9 = v8;
      v10 = v21;
      if ( v7 || (v10 = 0x8000000000000001LL, v9 = v4, !v8) )
      {
        if ( v16 )
          _rust_dealloc(v17, v16, 1LL);
        v4 = v9;
      }
      else
      {
        v10 = v16;
        v4 = v17;
        v5 = v18;
      }
      if ( v10 == 0x8000000000000001LL )
        break;
      v26[0] = v10;
      v26[1] = v4;
      v26[2] = v5;
      uucore::features::ringbuffer::RingBuffer<T>::push_back(&v16, &v22, v26);
      core::ptr::drop_in_place<core::option::Option<core::result::Result<alloc::vec::Vec<u8>,std::io::error::Error>>>(&v16);
      --v6;
    }
    while ( v6 );
  }
  v11 = v20;
  *(_QWORD *)(v20 + 32) = v25;
  v12 = v22;
  v13 = v23;
  *(_OWORD *)(v11 + 16) = v24;
  *(_QWORD *)v11 = v12;
  *(_QWORD *)(v11 + 8) = v13;
  *(_QWORD *)(v11 + 40) = v19;
  *(_BYTE *)(v11 + 48) = a3;
  return v11;
}
