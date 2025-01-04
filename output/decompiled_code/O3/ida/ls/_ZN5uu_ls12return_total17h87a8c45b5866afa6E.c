unsigned __int64 __fastcall uu_ls::return_total(_QWORD *a1, char **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // ebp
  _DWORD *metadata; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v19[4]; // [rsp+18h] [rbp-B0h] BYREF
  char **v20; // [rsp+38h] [rbp-90h] BYREF
  __int64 v21; // [rsp+40h] [rbp-88h]
  _QWORD *v22; // [rsp+48h] [rbp-80h]
  __int64 v23; // [rsp+50h] [rbp-78h]
  __int64 v24; // [rsp+58h] [rbp-70h]
  __int128 v25; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-50h]
  _BYTE v27[72]; // [rsp+80h] [rbp-48h] BYREF

  v20 = a2;
  v21 = (__int64)&a2[38 * a3];
  v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a4 + 216);
    v9 = 0LL;
    v10 = *(unsigned __int8 *)(a4 + 241);
    do
    {
      metadata = uu_ls::PathData::get_metadata(v7, a5);
      v19[0] = metadata;
      if ( metadata )
        metadata = v19;
      v9 += core::option::Option<T>::map_or(metadata, v8, v10);
      v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20);
    }
    while ( v7 );
  }
  else
  {
    v9 = 0LL;
  }
  if ( *(_BYTE *)(a4 + 238) && (v12 = uu_ls::dired::indent(a5)) != 0 )
  {
    a1[1] = v12;
    a1[2] = v13;
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    uu_ls::display_size(v27, v9, *(unsigned __int8 *)(a4 + 241));
    v19[0] = v27;
    v19[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v19[2] = a4 + 250;
    v19[3] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v20 = &off_2125C8;
    v21 = 2LL;
    v24 = 0LL;
    v22 = v19;
    v23 = 2LL;
    core::option::Option<T>::map_or_else(&v25, &v20, v15, v16, v17, v18);
    core::ptr::drop_in_place<alloc::string::String>(v27);
    result = v26;
    a1[2] = v26;
    *(_OWORD *)a1 = v25;
  }
  return result;
}
