__int64 __fastcall rg::flags::hiargs::HiArgs::sort(__int64 a1, void *a2)
{
  char v2; // al
  __int64 result; // rax
  _BYTE v4[8]; // [rsp+8h] [rbp-190h] BYREF
  __int64 v5; // [rsp+10h] [rbp-188h]
  __int64 v6; // [rsp+18h] [rbp-180h]
  _BYTE v7[8]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v8; // [rsp+28h] [rbp-170h]
  __int64 v9; // [rsp+30h] [rbp-168h]
  _BYTE v10[352]; // [rsp+38h] [rbp-160h] BYREF

  v2 = *(_BYTE *)(a1 + 800);
  if ( v2 == 2 )
    return alloc::boxed::Box<T>::new(a2);
  switch ( *(_BYTE *)(a1 + 801) )
  {
    case 0:
      if ( (v2 & 1) == 0 )
        return alloc::boxed::Box<T>::new(a2);
      core::iter::traits::iterator::Iterator::collect(v7);
      alloc::slice::<impl [T]>::sort_by(v8, v9);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v10, v7);
      return alloc::boxed::Box<T>::new(v10);
    case 1:
      core::iter::traits::iterator::Iterator::map(v10);
      core::iter::traits::iterator::Iterator::collect(v4, v10);
      goto LABEL_9;
    case 2:
      core::iter::traits::iterator::Iterator::map(v10);
      core::iter::traits::iterator::Iterator::collect(v4, v10);
      goto LABEL_9;
    case 3:
      core::iter::traits::iterator::Iterator::map(v10);
      core::iter::traits::iterator::Iterator::collect(v4, v10);
LABEL_9:
      alloc::slice::<impl [T]>::sort_by(v5, v6, a1 + 800);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v10, v4);
      result = alloc::boxed::Box<T>::new(v10);
      break;
  }
  return result;
}