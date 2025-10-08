__int64 __fastcall uu_cp::file_mode_for_interactive_overwrite(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  __int128 v4; // xmm0
  int v5; // [rsp+Ch] [rbp-12Ch] BYREF
  __int128 v6; // [rsp+10h] [rbp-128h] BYREF
  __int128 *v7; // [rsp+20h] [rbp-118h]
  __int128 v8; // [rsp+30h] [rbp-108h] BYREF
  __int128 *v9; // [rsp+40h] [rbp-F8h]
  __int128 v10; // [rsp+48h] [rbp-F0h]
  __int64 v11; // [rsp+58h] [rbp-E0h]
  __int128 v12; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+70h] [rbp-C8h]
  _DWORD dest[14]; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp-88h]

  std::fs::metadata(dest);
  if ( dest[0] == 2 )
  {
    *a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, a2);
  }
  else
  {
    v3 = v15;
    if ( (v15 & 0x80u) != 0 )
    {
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v5 = v15 & 0xF7F;
      *(_QWORD *)&v6 = &v5;
      *((_QWORD *)&v6 + 1) = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
      *(_QWORD *)&v8 = &unk_20910;
      *((_QWORD *)&v8 + 1) = 1LL;
      *((_QWORD *)&v10 + 1) = &unk_24BF8;
      v11 = 1LL;
      v9 = &v6;
      *(_QWORD *)&v10 = 1LL;
      core::option::Option<T>::map_or_else(&v12, &v8);
      v6 = v12;
      v7 = (__int128 *)v13;
      uucore::features::fs::display_permissions_unix(&v12, v3, 0LL);
      v9 = v7;
      v4 = v6;
      v8 = v6;
      v10 = v12;
      v11 = v13;
      a1[4] = *((_QWORD *)&v12 + 1);
      a1[5] = v11;
      a1[2] = v9;
      result = v10;
      a1[3] = v10;
      *(_OWORD *)a1 = v4;
    }
  }
  return result;
}