__int64 __fastcall uu_wc::WcError::files_disabled(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+8h] [rbp-40h] BYREF
  __int64 v3; // [rsp+18h] [rbp-30h]
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  std::sys::os_str::bytes::Slice::to_string_lossy(&v2);
  if ( (_QWORD)v2 == 0x8000000000000000LL )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v4, *((_QWORD *)&v2 + 1), v3);
  }
  else
  {
    v5 = v3;
    v4 = v2;
  }
  result = v5;
  *(_QWORD *)(a1 + 24) = v5;
  *(_OWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return result;
}
