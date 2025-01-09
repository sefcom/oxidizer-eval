unsigned __int64 __fastcall uu_ls::return_total(_QWORD *a1, char **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char **v12; // r13
  __int64 v13; // r12
  unsigned int v14; // ebp
  _DWORD *metadata; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD v23[4]; // [rsp+18h] [rbp-B0h] BYREF
  char **v24; // [rsp+38h] [rbp-90h] BYREF
  char **v25; // [rsp+40h] [rbp-88h]
  _QWORD *v26; // [rsp+48h] [rbp-80h]
  __int64 v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+58h] [rbp-70h]
  __int128 v29; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-50h]
  _BYTE v31[72]; // [rsp+80h] [rbp-48h] BYREF

  v24 = a2;
  v25 = &a2[38 * a3];
  v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v24);
  if ( v7 )
  {
    v12 = *(char ***)(a4 + 216);
    v13 = 0LL;
    v14 = *(unsigned __int8 *)(a4 + 241);
    do
    {
      metadata = uu_ls::PathData::get_metadata(v7, a5);
      v23[0] = metadata;
      if ( metadata )
        metadata = v23;
      a2 = v12;
      v13 += core::option::Option<T>::map_or(metadata, v12, v14);
      v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v24);
    }
    while ( v7 );
  }
  if ( *(_BYTE *)(a4 + 238) && (v16 = uu_ls::dired::indent(a5, (__int64)a2, v8, v9, v10, v11)) != 0 )
  {
    a1[1] = v16;
    a1[2] = v17;
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    uu_ls::display_size();
    v23[0] = v31;
    v23[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v23[2] = a4 + 250;
    v23[3] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v24 = &off_2125C8;
    v25 = (char **)(&dword_0 + 2);
    v28 = 0LL;
    v26 = v23;
    v27 = 2LL;
    core::option::Option<T>::map_or_else(&v29, &v24, v19, v20, v21, v22);
    core::ptr::drop_in_place<alloc::string::String>(v31);
    result = v30;
    a1[2] = v30;
    *(_OWORD *)a1 = v29;
  }
  return result;
}
