__int64 __fastcall uu_tsort::remove(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+10h] [rbp-18h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v3 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16);
  v8[0] = *(_QWORD *)(a1 + 8);
  v8[1] = v3;
  v4 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position)(
         v8,
         v7);
  return core::option::Option<T>::inspect(v4, v5, a1);
}