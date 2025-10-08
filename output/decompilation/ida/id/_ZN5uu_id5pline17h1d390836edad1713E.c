__int64 __fastcall uu_id::pline(char a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v7; // [rsp+8h] [rbp-1A0h]
  __int64 v8; // [rsp+18h] [rbp-190h] BYREF
  __int128 v9; // [rsp+20h] [rbp-188h]
  __int64 v10; // [rsp+30h] [rbp-178h] BYREF
  __int128 v11; // [rsp+38h] [rbp-170h]
  __int64 v12; // [rsp+48h] [rbp-160h] BYREF
  __int128 v13; // [rsp+50h] [rbp-158h]
  _QWORD v14[6]; // [rsp+60h] [rbp-148h] BYREF
  _QWORD v15[3]; // [rsp+90h] [rbp-118h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-100h]
  __int128 v17; // [rsp+B0h] [rbp-F8h]
  __int64 v18; // [rsp+C0h] [rbp-E8h]
  __int128 v19; // [rsp+C8h] [rbp-E0h]
  __int64 v20; // [rsp+D8h] [rbp-D0h]
  __int128 v21; // [rsp+E0h] [rbp-C8h]
  __int64 v22; // [rsp+F0h] [rbp-B8h]
  __int128 v23; // [rsp+F8h] [rbp-B0h]
  char v24; // [rsp+108h] [rbp-A0h] BYREF
  char v25; // [rsp+10Ch] [rbp-9Ch] BYREF
  _QWORD v26[19]; // [rsp+110h] [rbp-98h] BYREF

  if ( (a1 & 1) == 0 )
    a2 = uucore::features::process::getuid();
  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v26, a2);
  core::result::Result<T,E>::unwrap(v15, v26);
  if ( __OFSUB__(-v22, 1LL) )
  {
    v7 = 1uLL;
    v6 = 0LL;
    v2 = v16;
    if ( v16 != 0x8000000000000000LL )
      goto LABEL_5;
LABEL_8:
    v9 = 1uLL;
    v8 = 0LL;
    v3 = v20;
    if ( v20 != 0x8000000000000000LL )
      goto LABEL_6;
    goto LABEL_9;
  }
  v7 = v23;
  v6 = v22;
  v2 = v16;
  if ( v16 == 0x8000000000000000LL )
    goto LABEL_8;
LABEL_5:
  v9 = v17;
  v8 = v2;
  v3 = v20;
  if ( v20 != 0x8000000000000000LL )
  {
LABEL_6:
    v11 = v21;
    goto LABEL_10;
  }
LABEL_9:
  v11 = 1uLL;
  v3 = 0LL;
LABEL_10:
  v10 = v3;
  v4 = v18;
  if ( v18 == 0x8000000000000000LL )
  {
    v13 = 1uLL;
    v4 = 0LL;
  }
  else
  {
    v13 = v19;
  }
  v12 = v4;
  v26[0] = v15;
  v26[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v26[2] = &v6;
  v26[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v26[4] = &v24;
  v26[5] = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
  v26[6] = &v25;
  v26[7] = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
  v26[8] = &v8;
  v26[9] = <alloc::string::String as core::fmt::Display>::fmt;
  v26[10] = &v10;
  v26[11] = <alloc::string::String as core::fmt::Display>::fmt;
  v26[12] = &v12;
  v26[13] = <alloc::string::String as core::fmt::Display>::fmt;
  v14[0] = &unk_E8E30;
  v14[1] = 8LL;
  v14[4] = 0LL;
  v14[2] = v26;
  v14[3] = 7LL;
  std::io::stdio::_print(v14);
  core::ptr::drop_in_place<alloc::string::String>(v12, v13);
  core::ptr::drop_in_place<alloc::string::String>(v10, v11);
  core::ptr::drop_in_place<alloc::string::String>(v8, v9);
  core::ptr::drop_in_place<alloc::string::String>(v6, v7);
  return core::ptr::drop_in_place<alloc::string::String>(v15[0], v15[1]);
}