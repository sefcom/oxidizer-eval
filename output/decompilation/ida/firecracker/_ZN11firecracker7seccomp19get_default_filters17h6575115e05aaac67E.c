__int64 __fastcall firecracker::seccomp::get_default_filters(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-A8h]
  __int64 v3; // [rsp+20h] [rbp-88h] BYREF
  __int128 v4; // [rsp+28h] [rbp-80h]
  __int128 v5; // [rsp+38h] [rbp-70h]
  __int64 v6; // [rsp+48h] [rbp-60h]
  __int64 v7; // [rsp+50h] [rbp-58h] BYREF
  __int128 v8; // [rsp+58h] [rbp-50h]
  __int128 v9; // [rsp+68h] [rbp-40h]
  __int64 v10; // [rsp+78h] [rbp-30h]

  vmm::seccomp::deserialize_binary(&v3);
  result = v3;
  v2 = v4;
  if ( v3 )
  {
    v7 = v3;
    v8 = v4;
    v9 = v5;
    v10 = v6;
    return firecracker::seccomp::filter_thread_categories(a1, &v7);
  }
  else
  {
    *(_OWORD *)(a1 + 24) = v5;
    *(_OWORD *)(a1 + 8) = v2;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}