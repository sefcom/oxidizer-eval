__int64 __fastcall uu_cp::file_mode_for_interactive_overwrite(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  __int128 v3; // xmm0
  int v4; // [rsp+Ch] [rbp-16Ch] BYREF
  __int128 v5; // [rsp+10h] [rbp-168h] BYREF
  __int64 v6; // [rsp+20h] [rbp-158h]
  __int128 v7; // [rsp+30h] [rbp-148h] BYREF
  __int64 v8; // [rsp+40h] [rbp-138h]
  __int128 v9; // [rsp+48h] [rbp-130h]
  __int64 v10; // [rsp+58h] [rbp-120h]
  char v11; // [rsp+60h] [rbp-118h]
  __int128 v12; // [rsp+70h] [rbp-108h] BYREF
  __int128 *v13; // [rsp+80h] [rbp-F8h]
  __int64 v14; // [rsp+88h] [rbp-F0h]
  __int128 *v15; // [rsp+90h] [rbp-E8h]
  __int64 v16; // [rsp+98h] [rbp-E0h]
  __int128 v17; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-C8h]
  _DWORD v19[14]; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+F0h] [rbp-88h]

  std::fs::metadata(v19);
  if ( v19[0] == 2 )
  {
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v19);
  }
  else
  {
    v2 = v20;
    if ( (v20 & 0x80u) != 0 )
    {
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v4 = v20 & 0xF7F;
      *(_QWORD *)&v5 = &v4;
      *((_QWORD *)&v5 + 1) = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
      *(_QWORD *)&v7 = 2LL;
      v8 = 0LL;
      v9 = 4uLL;
      v10 = 0x800000020LL;
      v11 = 3;
      *(_QWORD *)&v12 = &unk_1E7F0;
      *((_QWORD *)&v12 + 1) = 1LL;
      v15 = &v7;
      v16 = 1LL;
      v13 = &v5;
      v14 = 1LL;
      core::option::Option<T>::map_or_else(&v17, &v12);
      v5 = v17;
      v6 = v18;
      uucore::features::fs::display_permissions_unix(&v12, v2, 0LL);
      v8 = v6;
      v3 = v5;
      v7 = v5;
      v9 = v12;
      v10 = (__int64)v13;
      a1[4] = *((_QWORD *)&v12 + 1);
      a1[5] = v10;
      a1[2] = v8;
      result = v9;
      a1[3] = v9;
      *(_OWORD *)a1 = v3;
    }
  }
  return result;
}
