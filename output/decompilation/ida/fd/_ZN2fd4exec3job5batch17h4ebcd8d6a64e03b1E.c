__int64 __fastcall fd::exec::job::batch(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r8
  _BYTE v8[80]; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v9[128]; // [rsp+58h] [rbp-80h] BYREF

  <I as core::iter::traits::collect::IntoIterator>::into_iter(v8, a1);
  core::iter::traits::iterator::Iterator::filter_map(v9, v8, a4);
  v6 = 0LL;
  if ( !__OFSUB__(0LL, a4[45]) )
    v6 = a4[46];
  return fd::exec::CommandSet::execute_batch(a2, a3, v9, a4[58], v6, a4[47]);
}