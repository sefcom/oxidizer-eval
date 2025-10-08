__int64 __fastcall uu_env::split_iterator::SplitIterator::split(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  _OWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+20h] [rbp-18h]

  uu_env::split_iterator::SplitIterator::state_root((__int64)v4, a2);
  if ( LODWORD(v4[0]) == 12 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 64);
    *(_DWORD *)a1 = 12;
    core::ptr::drop_in_place<std::sys::os_str::bytes::Buf>(*(_QWORD *)a2, *(_QWORD *)(a2 + 8));
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v5;
    v2 = v4[0];
    *(_OWORD *)(a1 + 16) = v4[1];
    *(_OWORD *)a1 = v2;
    core::ptr::drop_in_place<uu_env::split_iterator::SplitIterator>(a2);
  }
  return a1;
}