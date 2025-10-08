__int64 __fastcall just::source::Source::import(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-B8h]
  __int128 v10; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+30h] [rbp-98h]
  __int128 v12; // [rsp+48h] [rbp-80h] BYREF
  __int64 v13; // [rsp+58h] [rbp-70h]
  __int128 v14; // [rsp+80h] [rbp-48h] BYREF
  __int64 v15; // [rsp+90h] [rbp-38h]

  v6 = *(_DWORD *)(a2 + 120);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v12, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10, &v12);
  <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
    &v12,
    *(_QWORD *)(a3 + 8),
    *(_QWORD *)(a3 + 16));
  v9 = v13;
  v8 = v12;
  core::iter::traits::iterator::Iterator::chain(&v12, &v10, &v8);
  core::iter::traits::iterator::Iterator::collect(&v14, &v12);
  core::iter::traits::iterator::Iterator::chain(
    &v12,
    *(_QWORD *)(a2 + 32),
    *(_QWORD *)(a2 + 32) + 8LL * *(_QWORD *)(a2 + 40),
    a4);
  core::iter::traits::iterator::Iterator::collect(&v8, &v12);
  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 96)) )
  {
    *(_QWORD *)&v10 = 0x8000000000000000LL;
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v12, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 112));
    v11 = v13;
    v10 = v12;
  }
  <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
    &v12,
    *(_QWORD *)(a2 + 80),
    *(_QWORD *)(a2 + 88));
  *(_QWORD *)(a1 + 88) = v13;
  *(_OWORD *)(a1 + 72) = v12;
  *(_DWORD *)(a1 + 120) = v6 + 1;
  *(_QWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = v14;
  *(_QWORD *)(a1 + 40) = v9;
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 96) = v10;
  *(_QWORD *)(a1 + 112) = v11;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a3;
  result = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}