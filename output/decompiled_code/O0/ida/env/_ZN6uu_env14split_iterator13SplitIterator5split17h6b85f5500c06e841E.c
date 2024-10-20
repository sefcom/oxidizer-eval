__int64 __fastcall uu_env::split_iterator::SplitIterator::split(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+0h] [rbp-68h]
  __int128 v5; // [rsp+10h] [rbp-58h]
  int v6; // [rsp+20h] [rbp-48h]
  int v7; // [rsp+28h] [rbp-40h] BYREF
  __int128 v8; // [rsp+2Ch] [rbp-3Ch]
  __int128 v9; // [rsp+3Ch] [rbp-2Ch]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  do
    uu_env::split_iterator::SplitIterator::state_delimiter(&v7, (_QWORD *)a2);
  while ( v7 == 7 );
  if ( v7 == 6 || (v6 = v10, v5 = v9, v4 = v8, v7 == 8) )
  {
    v2 = *(_OWORD *)(a2 + 64);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 8) = v2;
    *(_DWORD *)a1 = 8;
    if ( *(_QWORD *)a2 )
      _rust_dealloc(*(_QWORD *)(a2 + 8));
  }
  else
  {
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 36) = v6;
    *(_OWORD *)(a1 + 20) = v5;
    *(_OWORD *)(a1 + 4) = v4;
    if ( *(_QWORD *)a2 )
      _rust_dealloc(*(_QWORD *)(a2 + 8));
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<u8>>>(a2 + 64);
  }
  return a1;
}
