__int64 __fastcall alacritty::config::serde_utils::merge(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rcx
  char v9; // al
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm0
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // al
  __int128 v23; // xmm0
  __int128 *v24; // rdi
  __int128 v25; // xmm0
  __int64 result; // rax
  __int128 v27; // xmm0
  char v28; // cl
  __int128 v29; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+10h] [rbp-B8h]
  __int128 v31; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+30h] [rbp-98h]
  __int128 v33; // [rsp+40h] [rbp-88h] BYREF
  __int64 v34; // [rsp+50h] [rbp-78h]
  __int128 v35; // [rsp+60h] [rbp-68h] BYREF
  __int128 v36; // [rsp+70h] [rbp-58h]
  _OWORD v37[4]; // [rsp+80h] [rbp-48h] BYREF

  v6 = *a2;
  v30 = a2[1];
  v29 = v6;
  v7 = a3[1];
  v31 = *a3;
  v32 = v7;
  v8 = (unsigned __int8)(BYTE10(v30) - 2);
  v9 = 6;
  if ( (unsigned __int8)v8 < 6u )
    v9 = BYTE10(v30) - 2;
  if ( v9 == 5 )
  {
    if ( BYTE10(v32) != 7 )
    {
      v27 = *a3;
      *(_OWORD *)(a1 + 16) = a3[1];
      *(_OWORD *)a1 = v27;
      return ((__int64 (__fastcall *)(__int128 *))core::ptr::drop_in_place<alloc::vec::Vec<toml::value::Value>>)(&v29);
    }
    v34 = *((_QWORD *)a2 + 2);
    v33 = *a2;
    v35 = *a3;
    *(_QWORD *)&v36 = *((_QWORD *)a3 + 2);
    v17 = *((_QWORD *)&v35 + 1);
    alloc::vec::Vec<T,A>::append_elements(
      &v33,
      *((_QWORD *)&v35 + 1),
      v36,
      v8,
      a5,
      a6,
      v29,
      *((_QWORD *)&v29 + 1),
      v30,
      *((_QWORD *)&v30 + 1),
      v31,
      *((_QWORD *)&v31 + 1),
      v32,
      *((_QWORD *)&v32 + 1));
    *(_QWORD *)&v36 = 0LL;
    *(_QWORD *)(a1 + 16) = v34;
    *(_OWORD *)a1 = v33;
    *(_BYTE *)(a1 + 26) = 7;
    core::ptr::drop_in_place<alloc::vec::Vec<toml::value::Value>>(
      &v35,
      v17,
      v18,
      v19,
      v20,
      v21,
      v29,
      *((_QWORD *)&v29 + 1),
      v30,
      *((_QWORD *)&v30 + 1),
      v31,
      *((_QWORD *)&v31 + 1),
      v32,
      *((_QWORD *)&v32 + 1));
    v22 = 6;
    if ( (unsigned __int8)(BYTE10(v30) - 2) < 6u )
      v22 = BYTE10(v30) - 2;
    if ( v22 != 5 )
    {
      if ( v22 == 6 )
      {
        core::ptr::drop_in_place<toml::map::Map<alloc::string::String,toml::value::Value>>(&v29);
        goto LABEL_21;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( v9 != 6 )
    {
      v23 = *a3;
      *(_OWORD *)(a1 + 16) = a3[1];
      *(_OWORD *)a1 = v23;
      v24 = &v29;
      return core::ptr::drop_in_place<toml::value::Value>(v24);
    }
    if ( (BYTE10(v32) | 0xF8u) >= 0xFA )
    {
      v25 = *a3;
      *(_OWORD *)(a1 + 16) = a3[1];
      *(_OWORD *)a1 = v25;
      return core::ptr::drop_in_place<toml::map::Map<alloc::string::String,toml::value::Value>>(&v29);
    }
    v10 = *a2;
    v37[1] = a2[1];
    v37[0] = v10;
    alacritty::config::serde_utils::merge_tables(
      &v35,
      v37,
      a3,
      v8,
      a5,
      a6,
      v29,
      *((_QWORD *)&v29 + 1),
      v30,
      *((_QWORD *)&v30 + 1),
      v31,
      *((_QWORD *)&v31 + 1),
      v32,
      *((_QWORD *)&v32 + 1));
    v14 = v35;
    *(_OWORD *)(a1 + 16) = v36;
    *(_OWORD *)a1 = v14;
    v15 = (unsigned __int8)(BYTE10(v30) - 2);
    v16 = 6;
    if ( (unsigned __int8)v15 < 6u )
      v16 = BYTE10(v30) - 2;
    if ( v16 != 6 )
    {
      if ( v16 == 5 )
      {
        ((void (__fastcall *)(__int128 *, _OWORD *, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<alloc::vec::Vec<toml::value::Value>>)(
          &v29,
          v37,
          v11,
          v15,
          v12,
          v13);
        goto LABEL_21;
      }
LABEL_20:
      core::ptr::drop_in_place<toml::value::Value>(&v29);
    }
  }
LABEL_21:
  result = (unsigned __int8)(BYTE10(v32) - 2);
  v28 = 6;
  if ( (unsigned __int8)result < 6u )
    v28 = BYTE10(v32) - 2;
  if ( (unsigned __int8)(v28 - 5) >= 2u )
  {
    v24 = &v31;
    return core::ptr::drop_in_place<toml::value::Value>(v24);
  }
  return result;
}