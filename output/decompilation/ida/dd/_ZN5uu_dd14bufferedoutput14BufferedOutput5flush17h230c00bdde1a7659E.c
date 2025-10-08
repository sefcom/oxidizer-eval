__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::flush(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // r15
  int v5; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+8h] [rbp-70h]
  __int64 v7; // [rsp+10h] [rbp-68h]
  __int64 v8; // [rsp+18h] [rbp-60h]
  __int128 v9; // [rsp+20h] [rbp-58h]
  __int128 v10; // [rsp+30h] [rbp-48h]

  uu_dd::Output::write_blocks(&v5, a2 + 24, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( v5 == 1 )
  {
    result = v6;
    *(_QWORD *)(a1 + 8) = v6;
    v3 = 1LL;
  }
  else
  {
    v4 = v7;
    v10 = v9;
    if ( v8 )
    {
      core::result::Result<T,E>::unwrap(1LL);
      BUG();
    }
    v3 = 0LL;
    core::result::Result<T,E>::unwrap(0LL);
    alloc::vec::Vec<T,A>::drain(&v5, a2, 0LL, v4);
    result = core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(&v5);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = v4;
    *(_OWORD *)(a1 + 32) = v10;
  }
  *(_QWORD *)a1 = v3;
  return result;
}