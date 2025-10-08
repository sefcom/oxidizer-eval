__int64 __fastcall uu_id::id_print(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+0h] [rbp-1D8h] BYREF
  int **v9; // [rsp+10h] [rbp-1C8h]
  __int128 v10; // [rsp+20h] [rbp-1B8h] BYREF
  int **v11; // [rsp+30h] [rbp-1A8h]
  __int64 v12; // [rsp+38h] [rbp-1A0h]
  __int64 v13; // [rsp+40h] [rbp-198h]
  unsigned int v14; // [rsp+54h] [rbp-184h] BYREF
  int v15; // [rsp+58h] [rbp-180h] BYREF
  int v16; // [rsp+5Ch] [rbp-17Ch]
  unsigned int v17; // [rsp+60h] [rbp-178h] BYREF
  int v18; // [rsp+64h] [rbp-174h] BYREF
  int *v19; // [rsp+68h] [rbp-170h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+70h] [rbp-168h]
  __int128 *v21; // [rsp+78h] [rbp-160h]
  __int64 (__fastcall *v22)(); // [rsp+80h] [rbp-158h]
  __int64 v23; // [rsp+88h] [rbp-150h]
  __int64 v24; // [rsp+90h] [rbp-148h]
  _QWORD v25[2]; // [rsp+98h] [rbp-140h] BYREF
  _QWORD v26[16]; // [rsp+A8h] [rbp-130h] BYREF
  _QWORD v27[22]; // [rsp+128h] [rbp-B0h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    core::option::unwrap_failed(&off_E8F98);
  v23 = a2;
  v14 = *(_DWORD *)(a1 + 4);
  v15 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  v17 = v4;
  v16 = *(_DWORD *)(a1 + 16);
  v18 = v16;
  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v26, v14);
  v24 = a3;
  if ( __OFSUB__(0LL, v26[0]) )
  {
    v5 = v26[1];
LABEL_5:
    uu_id::id_print::{{closure}}(&v8, &v14, v5);
    goto LABEL_7;
  }
  uucore::features::entries::uid2usr::{{closure}}(&v10, v26);
  v5 = *((_QWORD *)&v10 + 1);
  if ( (_QWORD)v10 == 0x8000000000000000LL )
    goto LABEL_5;
  v8 = v10;
  v9 = v11;
LABEL_7:
  v19 = (int *)&v14;
  v20 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
  v21 = &v8;
  v22 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &off_E8EC8;
  *((_QWORD *)&v10 + 1) = 3LL;
  v13 = 0LL;
  v11 = &v19;
  v12 = 2LL;
  std::io::stdio::_print(&v10);
  core::ptr::drop_in_place<alloc::string::String>(v8, *((_QWORD *)&v8 + 1));
  <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(&v10);
  if ( (_QWORD)v10 == 0x8000000000000000LL )
  {
    uu_id::id_print::{{closure}}(&v8, &v15, *((_QWORD *)&v10 + 1));
  }
  else
  {
    v8 = v10;
    v9 = v11;
  }
  v19 = &v15;
  v20 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
  v21 = &v8;
  v22 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &off_E8EF8;
  *((_QWORD *)&v10 + 1) = 3LL;
  v13 = 0LL;
  v11 = &v19;
  v12 = 2LL;
  std::io::stdio::_print(&v10);
  core::ptr::drop_in_place<alloc::string::String>(v8, *((_QWORD *)&v8 + 1));
  if ( *(_BYTE *)(a1 + 28) )
    goto LABEL_23;
  if ( v4 != v14 )
  {
    <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v27, v4);
    if ( v27[0] == 0x8000000000000000LL )
    {
      v6 = v27[1];
    }
    else
    {
      uucore::features::entries::uid2usr::{{closure}}(&v10, v27);
      v6 = *((_QWORD *)&v10 + 1);
      if ( (_QWORD)v10 != 0x8000000000000000LL )
      {
        v8 = v10;
        v9 = v11;
        goto LABEL_17;
      }
    }
    uu_id::id_print::{{closure}}(&v8, &v17, v6);
LABEL_17:
    v19 = (int *)&v17;
    v20 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v21 = &v8;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &off_E8F28;
    *((_QWORD *)&v10 + 1) = 3LL;
    v13 = 0LL;
    v11 = &v19;
    v12 = 2LL;
    std::io::stdio::_print(&v10);
    core::ptr::drop_in_place<alloc::string::String>(v8, *((_QWORD *)&v8 + 1));
  }
  if ( v16 != v15 )
  {
    <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(&v10);
    if ( (_QWORD)v10 == 0x8000000000000000LL )
    {
      uu_id::id_print::{{closure}}(&v8, &v18, *((_QWORD *)&v10 + 1));
    }
    else
    {
      v8 = v10;
      v9 = v11;
    }
    v19 = &v18;
    v20 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v21 = &v8;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &off_E8F58;
    *((_QWORD *)&v10 + 1) = 3LL;
    v13 = 0LL;
    v11 = &v19;
    v12 = 2LL;
    std::io::stdio::_print(&v10);
    core::ptr::drop_in_place<alloc::string::String>(v8, *((_QWORD *)&v8 + 1));
  }
LABEL_23:
  core::iter::traits::iterator::Iterator::collect(&v19, v23, v23 + 4 * v24);
  alloc::str::join_generic_copy(&v10, v20, v21, &unk_19F18);
  v9 = v11;
  v8 = v10;
  v25[0] = &v8;
  v25[1] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v10 = &off_E8F88;
  *((_QWORD *)&v10 + 1) = 1LL;
  v13 = 0LL;
  v11 = (int **)v25;
  v12 = 1LL;
  std::io::stdio::_print(&v10);
  core::ptr::drop_in_place<alloc::string::String>(v8, *((_QWORD *)&v8 + 1));
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
}