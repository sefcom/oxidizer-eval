unsigned __int64 __fastcall uu_ls::return_total(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r15
  unsigned int v9; // ebp
  _QWORD *metadata; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  _QWORD v16[6]; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v18; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-50h]
  _BYTE v20[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( a3 )
  {
    v6 = *(_QWORD *)(a4 + 216);
    v7 = 304 * a3;
    v8 = 0LL;
    v9 = *(unsigned __int8 *)(a4 + 249);
    do
    {
      metadata = (_QWORD *)uu_ls::PathData::get_metadata(a2, a5);
      v16[0] = metadata;
      if ( metadata )
        metadata = v16;
      v8 += core::option::Option<T>::map_or(metadata, v6, v9);
      a2 += 304LL;
      v7 -= 304LL;
    }
    while ( v7 );
    v11 = a4;
    if ( !*(_BYTE *)(a4 + 246) )
      goto LABEL_11;
  }
  else
  {
    v8 = 0LL;
    v11 = a4;
    if ( !*(_BYTE *)(a4 + 246) )
      goto LABEL_11;
  }
  v12 = uu_ls::dired::indent(a5);
  if ( v12 )
  {
    a1[1] = v12;
    a1[2] = v13;
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
LABEL_11:
  uu_ls::display_size(v20, v8, *(unsigned __int8 *)(v11 + 249));
  v17[0] = v20;
  v17[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v17[2] = v11 + 258;
  v17[3] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
  v16[0] = &off_286BF8;
  v16[1] = 2LL;
  v16[4] = 0LL;
  v16[2] = v17;
  v16[3] = 2LL;
  core::option::Option<T>::map_or_else(&v18, v16);
  core::ptr::drop_in_place<alloc::string::String>(v20);
  result = v19;
  a1[2] = v19;
  *(_OWORD *)a1 = v18;
  return result;
}