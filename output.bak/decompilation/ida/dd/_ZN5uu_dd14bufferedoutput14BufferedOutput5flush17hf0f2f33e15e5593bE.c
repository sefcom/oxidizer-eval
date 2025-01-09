__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::flush(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  _QWORD v5[4]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v6; // [rsp+20h] [rbp-58h]
  __int128 v7; // [rsp+30h] [rbp-48h]

  uu_dd::Output::write_blocks(v5, a2 + 24, *(char ***)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( v5[0] )
  {
    *(_QWORD *)(a1 + 8) = v5[1];
    v2 = 1LL;
  }
  else
  {
    v3 = v5[2];
    v7 = v6;
    if ( v5[3] )
    {
      core::result::Result<T,E>::unwrap(1LL);
      JUMPOUT(0xEEC0ELL);
    }
    v2 = 0LL;
    core::result::Result<T,E>::unwrap(0LL);
    alloc::vec::Vec<T,A>::drain(v5, a2, 0LL, v3);
    core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = v3;
    *(_OWORD *)(a1 + 32) = v7;
  }
  *(_QWORD *)a1 = v2;
  return a1;
}
