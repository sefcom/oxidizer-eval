__int64 __fastcall zoxide::util::resolve_path(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  char v4; // bp
  __int64 result; // rax
  char v6; // r13
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  bool v11; // zf
  unsigned int *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-208h] BYREF
  __int64 v15; // [rsp+8h] [rbp-200h]
  __int64 v16; // [rsp+10h] [rbp-1F8h]
  __int128 v17; // [rsp+18h] [rbp-1F0h]
  _QWORD *v18; // [rsp+28h] [rbp-1E0h]
  _BYTE v19[64]; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 v20; // [rsp+70h] [rbp-198h]
  __int128 v21; // [rsp+80h] [rbp-188h]
  __int128 v22; // [rsp+90h] [rbp-178h]
  __int64 v23; // [rsp+A0h] [rbp-168h]
  _BYTE v24[120]; // [rsp+B0h] [rbp-158h] BYREF
  char v25; // [rsp+128h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+129h] [rbp-DFh]
  __int128 v27; // [rsp+139h] [rbp-CFh]
  _BYTE v28[23]; // [rsp+149h] [rbp-BFh]
  unsigned __int8 v29; // [rsp+160h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+161h] [rbp-A7h]
  __int128 v31; // [rsp+171h] [rbp-97h]
  _BYTE v32[23]; // [rsp+181h] [rbp-87h]
  _BYTE v33[112]; // [rsp+198h] [rbp-70h] BYREF

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  std::path::Path::components(v19, v2);
  *(_OWORD *)&v24[104] = *(_OWORD *)&v19[48];
  *(_OWORD *)&v24[88] = *(_OWORD *)&v19[32];
  *(_OWORD *)&v24[72] = *(_OWORD *)&v19[16];
  *(_OWORD *)&v24[56] = *(_OWORD *)v19;
  v24[0] = 11;
  v14 = 0LL;
  v15 = 8LL;
  v16 = 0LL;
  core::option::Option<T>::get_or_insert_with(v24, &v24[56]);
  v3 = v24[0];
  if ( v24[0] == 10 || !(unsigned __int8)<std::path::Component as core::cmp::PartialEq>::eq(v24[0]) )
  {
    zoxide::util::current_dir((__int64)v19);
    if ( __OFSUB__(-*(_QWORD *)v19, 1LL) )
    {
      a1[1] = *(_QWORD *)&v19[8];
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<std::path::Component>>(v14, v15);
    }
    v17 = *(_OWORD *)v19;
    std::path::Path::components(v33, *(_QWORD *)&v19[8]);
    v4 = 1;
    alloc::vec::Vec<T,A>::extend_desugared(&v14, v33);
  }
  else
  {
    *(_QWORD *)&v28[15] = *(_QWORD *)&v24[48];
    *(_OWORD *)v28 = *(_OWORD *)&v24[33];
    v27 = *(_OWORD *)&v24[17];
    v26 = *(_OWORD *)&v24[1];
    v24[0] = 11;
    v25 = v3;
    v4 = 0;
    alloc::vec::Vec<T,A>::push(&v14, &v25, &off_134C68);
  }
  v18 = a1;
  v23 = *(_QWORD *)&v24[112];
  v22 = *(_OWORD *)&v24[96];
  v21 = *(_OWORD *)&v24[80];
  v20 = *(_OWORD *)&v24[64];
  *(_OWORD *)&v19[48] = *(_OWORD *)&v24[48];
  *(_OWORD *)&v19[32] = *(_OWORD *)&v24[32];
  *(_OWORD *)&v19[16] = *(_OWORD *)&v24[16];
  *(_OWORD *)v19 = *(_OWORD *)v24;
  v6 = v4;
  v7 = v24[0];
  v19[0] = 11;
  if ( v24[0] == 11 )
  {
    while ( 2 )
    {
      <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v29, &v19[56]);
      v4 = v6;
      if ( v29 == 10 )
        goto LABEL_21;
LABEL_13:
      v8 = v29 - 5LL;
      if ( (unsigned __int8)(v29 - 6) >= 4u )
        v8 = 0LL;
      switch ( v8 )
      {
        case 0LL:
        case 1LL:
          core::panicking::panic(aInternalErrorE, 40LL, &off_134C80);
        case 2LL:
          goto LABEL_11;
        case 3LL:
          v9 = v16;
          v10 = v15 + 56 * v16;
          v11 = v10 == 56;
          v12 = (unsigned int *)(v10 - 56);
          if ( v16 == 0 || v11 )
          {
            if ( !v16 )
              goto LABEL_11;
          }
          else if ( (unsigned __int8)<std::path::Component as core::cmp::PartialEq>::eq(*v12) )
          {
            goto LABEL_11;
          }
          v16 = v9 - 1;
LABEL_11:
          v4 = v6;
          v7 = v19[0];
          v19[0] = 11;
          if ( v7 == 11 )
            continue;
          goto LABEL_8;
        case 4LL:
          alloc::vec::Vec<T,A>::push(&v14, &v29, &off_134C98);
          goto LABEL_11;
      }
    }
  }
LABEL_8:
  *(_QWORD *)&v32[15] = *(_QWORD *)&v19[48];
  *(_OWORD *)v32 = *(_OWORD *)&v19[33];
  v31 = *(_OWORD *)&v19[17];
  v30 = *(_OWORD *)&v19[1];
  v29 = v7;
  if ( v7 != 10 )
    goto LABEL_13;
LABEL_21:
  core::iter::traits::iterator::Iterator::collect(v19, v15, v15 + 56 * v16);
  v13 = v18;
  v18[2] = *(_QWORD *)&v19[16];
  *v13 = *(_OWORD *)v19;
  result = core::ptr::drop_in_place<alloc::vec::Vec<std::path::Component>>(v14, v15);
  if ( v4 )
    return core::mem::drop(v17, *((_QWORD *)&v17 + 1));
  return result;
}