__int64 __fastcall just::function::module_file(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  core::str::converts::from_utf8(&v6, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88));
  if ( (_DWORD)v6 == 1 )
  {
    just::function::module_file::{{closure}}(a1 + 8, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88));
    v3 = 1LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, v7);
    v4 = v6;
    *(_OWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 8) = v4;
    v3 = 0LL;
  }
  *(_QWORD *)a1 = v3;
  return a1;
}