__int64 __fastcall fd::dir_entry::DirEntry::into_path(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _OWORD v6[7]; // [rsp+0h] [rbp-78h] BYREF

  if ( *(_DWORD *)a2 == 3 )
  {
    result = *((_QWORD *)a2 + 3);
    *(_QWORD *)(a1 + 16) = result;
    *(_OWORD *)a1 = *(__int128 *)((char *)a2 + 8);
  }
  else
  {
    v6[6] = a2[6];
    v6[5] = a2[5];
    v6[4] = a2[4];
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    v6[3] = a2[3];
    v6[2] = v5;
    v6[1] = v4;
    v6[0] = v3;
    return ((__int64 (__fastcall *)(__int64, _OWORD *))ignore::walk::DirEntry::into_path)(a1, v6);
  }
  return result;
}