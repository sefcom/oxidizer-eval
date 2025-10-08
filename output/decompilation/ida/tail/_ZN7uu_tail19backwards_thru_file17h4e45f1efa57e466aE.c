char __fastcall uu_tail::backwards_thru_file(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v12; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-E8h]
  __int64 v14; // [rsp+18h] [rbp-E0h]
  char v15; // [rsp+20h] [rbp-D8h] BYREF
  int v16; // [rsp+21h] [rbp-D7h]
  __int16 v17; // [rsp+25h] [rbp-D3h]
  char v18; // [rsp+27h] [rbp-D1h]
  __int64 v19; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-C8h] BYREF
  char v21; // [rsp+48h] [rbp-B0h] BYREF
  int v22; // [rsp+49h] [rbp-AFh]
  __int16 v23; // [rsp+4Dh] [rbp-ABh]
  char v24; // [rsp+4Fh] [rbp-A9h]
  __int64 v25; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v26; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-98h] BYREF
  __int64 v28; // [rsp+68h] [rbp-90h]
  __int64 v29; // [rsp+70h] [rbp-88h]
  _QWORD v30[4]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v31[12]; // [rsp+98h] [rbp-60h] BYREF

  v26 = a2;
  v19 = 0LL;
  v25 = a1;
  uu_tail::chunks::ReverseChunks::new(v30, a1);
  <uu_tail::chunks::ReverseChunks as core::iter::traits::iterator::Iterator>::next(&v27, v30);
  v3 = v27;
  v4 = -v27;
  if ( !__OFSUB__(-v27, 1LL) )
  {
    v5 = 0LL;
    LOBYTE(v4) = 0;
    while ( 2 )
    {
      v6 = v28;
      v12 = v28;
      v13 = v28;
      v14 = v28 + v29;
      v15 = a3;
      if ( !(v4 & 1 | (v29 == 0)) && *(_BYTE *)(v28 + v29 - 1) == a3 )
        memchr::arch::generic::memchr::Iter::next_back(&v12, &v15);
      v20[2] = v14;
      v21 = v15;
      v22 = v16;
      v23 = v17;
      v24 = v18;
      v20[0] = v12;
      v20[1] = v13;
      while ( (memchr::arch::generic::memchr::Iter::next_back(v20, &v21) & 1) != 0 )
      {
        v19 = ++v5;
        if ( v5 >= a2 )
        {
          if ( v5 != a2 )
          {
            v31[0] = 0LL;
            core::panicking::assert_failed(0LL, &v19, &v26, v31, &off_173B70);
          }
          v8 = <std::fs::File as std::io::Seek>::seek(v25, 2LL, v7 + 1);
          core::result::Result<T,E>::unwrap(v8, v9, &off_173B88);
          LOBYTE(v4) = core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v6);
          return v4;
        }
      }
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v6);
      <uu_tail::chunks::ReverseChunks as core::iter::traits::iterator::Iterator>::next(&v27, v30);
      v3 = v27;
      LOBYTE(v4) = 1;
      if ( v27 != 0x8000000000000000LL )
        continue;
      break;
    }
  }
  return v4;
}